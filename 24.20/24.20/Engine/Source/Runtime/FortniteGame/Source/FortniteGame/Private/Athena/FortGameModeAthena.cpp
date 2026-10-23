#include "pch.h"
#include "../../Public/Athena/FortGameModeAthena.h"
#include "Engine/Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/AbilitySystemComponent.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortInventory.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortLootPackage.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Vehicles/FortAthenaVehicle.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/AI/FortAthenaAIBotController.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Athena/FortLategame.h"
#include "Engine/Source/Runtime/Engine/Classes/Misc/Misc.h"
#include "Engine/Source/Runtime/Engine/Classes/Engine/Replication.h"
#include "Config.h"

namespace
{
	template <typename TLevels>
	void StreamLevels(AFortGameStateAthena* GameState, TLevels& Levels, bool bServerOnly)
	{
		for (auto& Level : Levels)
		{
			bool bLoaded = false;
			std::cout << "Level: " << Level.Get()->Name.ToString() << std::endl;
			ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), Level, FVector(), FRotator(), &bLoaded, FString(), nullptr, false);

			FAdditionalLevelStreamed Streamed{};
			Streamed.bIsServerOnly = bServerOnly;
			Streamed.LevelName = Level.ObjectID.AssetPath.AssetName;
			if (bLoaded)
				GameState->AdditionalPlaylistLevelsStreamed.Add(Streamed);
		}
	}

	template <typename TRow>
	void CollectRows(UDataTable* Table, UEAllocatedVector<TRow*>& Out)
	{
		if (!Table)
			return;

		Table->AddToRoot();

		if (auto Composite = Table->Cast<UCompositeDataTable>())
		{
			for (auto& Parent : Composite->ParentTables)
				for (auto& [Key, Value] : (TMap<FName, TRow*>)Parent->RowMap)
					Out.push_back(Value);
		}

		for (auto& [Key, Value] : (TMap<FName, TRow*>)Table->RowMap)
			Out.push_back(Value);
	}

	template <typename TRow, typename TTable, typename TSink>
	void ForEachProviderRow(TTable* Table, FName& Provider, TSink Sink)
	{
		if (!Table)
			return;

		for (const auto& [RowName, RowPtr] : Table->RowMap)
		{
			TRow* Row = (TRow*)RowPtr;
			if (!RowName.IsValid() || !Row)
				continue;

			if (Row->NPC.TagName == FName(L"None") || Row->NPC.TagName == Provider)
				Sink(Row);
		}
	}

	int32 ClipSizeOr(UFortItemDefinition* Item, int32 Fallback)
	{
		if (!Item->IsA<UFortWeaponItemDefinition>())
			return Fallback;

		FFortRangedWeaponStats* Stats = FortInventory::GetStats((UFortWeaponItemDefinition*)Item);
		return Stats ? Stats->ClipSize : Fallback;
	}
}

void FortGameModeAthena::ApplyPlaylist(AFortGameModeAthena* GameMode, UFortPlaylistAthena* Playlist)
{
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
	GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
	GameState->CurrentPlaylistInfo.BasePlaylist->GarbageCollectionFrequency = 9999999999999999.f;
	GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
	GameState->CurrentPlaylistInfo.MarkArrayDirty();

	GameState->CurrentPlaylistId = GameMode->CurrentPlaylistId = Playlist->PlaylistId;
	GameMode->CurrentPlaylistName = Playlist->PlaylistName;
	GameState->OnRep_CurrentPlaylistInfo();
	GameState->OnRep_CurrentPlaylistId();

	GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;

	GameState->AirCraftBehavior = Playlist->AirCraftBehavior;
	GameState->WorldLevel = Playlist->LootLevel;
	GameState->CachedSafeZoneStartUp = Playlist->SafeZoneStartUp;

	const bool bSquads = Playlist->MaxSquadSize > 1;
	GameMode->bAlwaysDBNO = bSquads;
	GameMode->bDBNOEnabled = bSquads;
}

void FortGameModeAthena::BeginPlaylistSetup(AFortGameModeAthena* GameMode, AFortGameStateAthena* GameState, UFortPlaylistAthena* Playlist)
{
	GameMode->WarmupRequiredPlayerCount = 1;
	Misc::Listen();
	ApplyPlaylist(GameMode, Playlist);

	GameState->bIsUsingDownloadOnDemand = false;
	StreamLevels(GameState, Playlist->AdditionalLevels, false);
	StreamLevels(GameState, Playlist->AdditionalLevelsServerOnly, true);
	GameState->OnRep_AdditionalPlaylistLevelsStreamed();

	GameMode->AIDirector = Utils::SpawnActor<AAthenaAIDirector>({});
	GameMode->AIDirector->Activate();

	GameMode->AIGoalManager = Utils::SpawnActor<AFortAIGoalManager>({});
}

void FortGameModeAthena::RegisterLootTables(UFortPlaylistAthena* Playlist)
{
	UEAllocatedVector<FFortLootTierData*> TierRows;
	UDataTable* TierTable = Playlist->LootTierData.Get();
	if (!TierTable)
		TierTable = Utils::FindObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
	CollectRows(TierTable, TierRows);
	for (auto& Row : TierRows)
		FortLootPackage::TierDataAllGroups.Add(Row);

	UEAllocatedVector<FFortLootPackageData*> PackageRows;
	UDataTable* PackageTable = Playlist->LootPackages.Get();
	if (!PackageTable)
		PackageTable = Utils::FindObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
	CollectRows(PackageTable, PackageRows);
	for (auto& Row : PackageRows)
		FortLootPackage::LPGroupsAll.Add(Row);

	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		auto Object = UObject::GObjects->GetByIndex(i);
		if (!Object || !Object->Class || Object->IsDefaultObject())
			continue;

		auto FeatureData = Object->Cast<UFortGameFeatureData>();
		if (!FeatureData)
			continue;

		auto LootData = FeatureData->DefaultLootTableData;
		auto FeatureTierTable = LootData.LootTierData.Get();
		auto FeaturePackageTable = LootData.LootPackageData.Get();
		auto AbilitySet = FeatureData->PlayerAbilitySet.Get();

		if (AbilitySet)
		{
			AbilitySet->AddToRoot();
			AbilitySets.Add(AbilitySet);
		}

		if (FeatureTierTable)
		{
			UEAllocatedVector<FFortLootTierData*> Rows;
			CollectRows(FeatureTierTable, Rows);

			for (auto& Tag : Playlist->GameplayTagContainer.GameplayTags)
				for (auto& Override : FeatureData->PlaylistOverrideLootTableData)
					if (Tag.TagName == Override.First.TagName)
						CollectRows(Override.Second.LootTierData.Get(), Rows);

			for (auto& Row : Rows)
				FortLootPackage::TierDataAllGroups.Add(Row);
		}

		if (FeaturePackageTable)
		{
			UEAllocatedVector<FFortLootPackageData*> Rows;
			CollectRows(FeaturePackageTable, Rows);

			for (auto& Tag : Playlist->GameplayTagContainer.GameplayTags)
				for (auto& Override : FeatureData->PlaylistOverrideLootTableData)
					if (Tag.TagName == Override.First.TagName)
						CollectRows(Override.Second.LootPackageData.Get(), Rows);

			for (auto& Row : Rows)
				FortLootPackage::LPGroupsAll.Add(Row);
		}
	}
}

void FortGameModeAthena::FlattenSafeZoneDamage(AFortGameStateAthena* GameState)
{
	UCurveTable* GameData = GameState->AthenaGameDataTable;
	if (!GameData)
		return;

	static FName SafeZoneDamageRow = FName(L"Default.SafeZone.Damage");

	for (const auto& [RowName, RowPtr] : ((UDataTable*)GameData)->RowMap)
	{
		if (RowName != SafeZoneDamageRow)
			continue;

		FSimpleCurve* Curve = (FSimpleCurve*)RowPtr;
		if (!Curve)
			continue;

		for (auto& Key : Curve->Keys)
		{
			if (Key.Time == 0.f)
				Key.Value = 0.f;
		}

		Curve->Keys.Add(FSimpleCurveKey(1.f, 0.01f), 1);
	}
}

bool FortGameModeAthena::PrepareWorld(AFortGameModeAthena* GameMode, AFortGameStateAthena* GameState, UFortPlaylistAthena* Playlist)
{
	auto Starts = Utils::GetAll<AFortPlayerStartWarmup>();
	auto StartCount = Starts.Num();
	Starts.Free();
	if (StartCount == 0 || !GameState->MapInfo)
		return false;

	void (*LoadBuiltInGameFeaturePlugins)(UFortGameFeaturePluginManager*, bool) = decltype(LoadBuiltInGameFeaturePlugins)(Sarah::Offsets::ImageBase + 0x1E8982C);
	UFortGameFeaturePluginManager* PluginManager = nullptr;
	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		auto Object = UObject::GObjects->GetByIndex(i);
		if (Object && !Object->IsDefaultObject() && Object->Class == UFortGameFeaturePluginManager::StaticClass())
		{
			PluginManager = (UFortGameFeaturePluginManager*)Object;
			break;
		}
	}

	LoadBuiltInGameFeaturePlugins(PluginManager, true);

	GameMode->bDisableGCOnServerDuringMatch = true;
	GameMode->bPlaylistHotfixChangedGCDisabling = true;
	GameMode->DefaultPawnClass = Utils::FindObject<UClass>(L"/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

	GameState->DefaultParachuteDeployTraceForGroundDistance = 10000;

	AbilitySets.Add(Utils::FindObject<UFortAbilitySet>(L"/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer"));

	RegisterLootTables(Playlist);

	FortLootPackage::SpawnFloorLootForContainer(Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C"));
	FortLootPackage::SpawnFloorLootForContainer(Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C"));

	FortAthenaVehicle::SpawnVehicles();

	FlattenSafeZoneDamage(GameState);

	SetConsoleTitleA("Sarah 24.20: Ready");
	GameMode->bWorldIsReady = true;
	return true;
}

bool FortGameModeAthena::ReadyToStartMatch(UObject* Context, FFrame& Stack, bool* Result)
{
	static auto Playlist = Utils::FindObject<UFortPlaylistAthena>(L"/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
	Stack.IncrementCode();

	auto GameMode = Context->Cast<AFortGameModeAthena>();
	if (!GameMode)
		return *Result = callOGWithRet(((AGameMode*)Context), L"/Script/Engine.GameMode", ReadyToStartMatch);

	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	if (GameMode->CurrentPlaylistId == -1)
	{
		BeginPlaylistSetup(GameMode, GameState, Playlist);
		return *Result = false;
	}

	if (!GameMode->bWorldIsReady)
	{
		PrepareWorld(GameMode, GameState, Playlist);
		return *Result = false;
	}

	auto VolumeManager = GameState->VolumeManager;
	auto& PlaylistLevels = *(TArray<FPlaylistStreamedLevelData>*)(__int64(GameState) + 0x410);

	bool bLevelsStreamed = true;
	for (auto& LevelData : PlaylistLevels)
	{
		if (!LevelData.bIsFinishedStreaming)
		{
			bLevelsStreamed = false;
			break;
		}
	}

	bool (*AreAllAdditionalPlaylistLevelsVisible)(AFortGameStateAthena*) = decltype(AreAllAdditionalPlaylistLevelsVisible)(Sarah::Offsets::ImageBase + 0xA085EFC);
	int32(*CountReadyPlayers)(AFortGameModeAthena*, bool) = decltype(CountReadyPlayers)(Sarah::Offsets::ImageBase + 0x990F3F4);

	return *Result = GameMode->bWorldIsReady
		&& GameState->bPlaylistDataIsLoaded
		&& GameMode->MatchState == FName(L"WaitingToStart")
		&& bLevelsStreamed
		&& (!VolumeManager || !VolumeManager->bInSpawningStartup)
		&& AreAllAdditionalPlaylistLevelsVisible(GameState)
		&& CountReadyPlayers(GameMode, false) >= GameMode->WarmupRequiredPlayerCount;
}

void FortGameModeAthena::SetupConversationProps()
{
	for (ABuildingProp_ConversationCompatible* Prop : Utils::GetAll<ABuildingProp_ConversationCompatible>())
	{
		if (!Prop)
			continue;

		auto Participant = (UFortNonPlayerConversationParticipantComponent*)Prop->GetComponentByClass(UFortNonPlayerConversationParticipantComponent::StaticClass());
		if (!Participant)
			continue;

		if (Participant->ServiceProviderIDTag.TagName == FName(0))
			Participant->ServiceProviderIDTag.TagName = Participant->ConversationEntryTag.TagName;

		FName& Provider = Participant->ServiceProviderIDTag.TagName;

		ForEachProviderRow<FNPCGiftItemInventoryRow>(Participant->GiftItemInventory, Provider, [&](FNPCGiftItemInventoryRow* Row) {
			Participant->SupportedGiftItems.Add(*Row);
			});

		ForEachProviderRow<FNPCConversationGiftRow>(Participant->Gifts, Provider, [&](FNPCConversationGiftRow* Row) {
			Participant->SupportedGiftTypes.Add(*Row);
			});

		ForEachProviderRow<FNPCSaleInventoryRow>(Participant->SalesInventory, Provider, [&](FNPCSaleInventoryRow* Row) {
			Participant->SupportedSales.Add(*Row);
			});

		ForEachProviderRow<FNPCDynamicServiceRow>(Participant->Services, Provider, [&](FNPCDynamicServiceRow* Row) {
			Participant->SupportedServices.GameplayTags.Add(Row->ServiceTag);
			});
	}
}

void FortGameModeAthena::GiveLateGameLoadout(AFortPlayerController* PlayerController)
{
	auto Shotgun = FortLategame::GetShotguns();
	auto AssaultRifle = FortLategame::GetAssaultRifles();
	auto Utility = FortLategame::GetUtilities();
	auto HealPrimary = FortLategame::GetHeals();
	auto HealSecondary = FortLategame::GetHeals();

	int ShotgunClip = ClipSizeOr(Shotgun.Item, 0);
	int AssaultRifleClip = ClipSizeOr(AssaultRifle.Item, 0);
	int UtilityClip = ClipSizeOr(Utility.Item, 3);
	int HealPrimaryClip = ClipSizeOr(HealPrimary.Item, 3);
	int HealSecondaryClip = ClipSizeOr(HealSecondary.Item, 3);

	FortInventory::GiveItem(PlayerController, FortLategame::GetResource(EFortResourceType::Wood), 500);
	FortInventory::GiveItem(PlayerController, FortLategame::GetResource(EFortResourceType::Stone), 500);
	FortInventory::GiveItem(PlayerController, FortLategame::GetResource(EFortResourceType::Metal), 500);

	FortInventory::GiveItem(PlayerController, FortLategame::GetAmmo(EAmmoType::Assault), 250);
	FortInventory::GiveItem(PlayerController, FortLategame::GetAmmo(EAmmoType::Shotgun), 50);
	FortInventory::GiveItem(PlayerController, FortLategame::GetAmmo(EAmmoType::Submachine), 400);
	FortInventory::GiveItem(PlayerController, FortLategame::GetAmmo(EAmmoType::Rocket), 6);
	FortInventory::GiveItem(PlayerController, FortLategame::GetAmmo(EAmmoType::Sniper), 20);

	FortInventory::GiveItem(PlayerController, AssaultRifle.Item, 1, AssaultRifleClip, true);
	FortInventory::GiveItem(PlayerController, Shotgun.Item, 1, ShotgunClip, true);
	FortInventory::GiveItem(PlayerController, Utility.Item, Utility.Count, UtilityClip, true);
	FortInventory::GiveItem(PlayerController, HealPrimary.Item, 3, HealPrimaryClip, true);
	FortInventory::GiveItem(PlayerController, HealSecondary.Item, 3, HealSecondaryClip, true);
}

void FortGameModeAthena::InitializeNewPlayer(AFortPlayerController* PlayerController, APawn* Pawn)
{
	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

	for (auto& AbilitySet : AbilitySets)
		AbilitySystemComponent::GiveAbilitySet(PlayerState->AbilitySystemComponent, AbilitySet);

	((void (*)(APlayerState*, APawn*)) Sarah::Offsets::ApplyCharacterCustomization)(PlayerController->PlayerState, Pawn);

	auto AthenaController = (AFortPlayerControllerAthena*)PlayerController;
	PlayerState->SeasonLevelUIDisplay = AthenaController->XPComponent->CurrentLevel;
	PlayerState->OnRep_SeasonLevelUIDisplay();
	AthenaController->XPComponent->bRegisteredWithQuestManager = true;
	AthenaController->XPComponent->OnRep_bRegisteredWithQuestManager();

	AthenaController->GetQuestManager(ESubGame::Athena)->InitializeQuestAbilities(Pawn);
}

APawn* FortGameModeAthena::SpawnDefaultPawnFor(UObject* Context, FFrame& Stack, APawn** Result)
{
	AController* NewPlayer;
	AActor* StartSpot;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.StepCompiledIn(&StartSpot);
	Stack.IncrementCode();

	auto GameMode = (AFortGameModeAthena*)Context;
	auto SpawnTransform = StartSpot->GetTransform();
	auto Pawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, SpawnTransform);

	static bool bFirstPlayerHandled = false;
	if (!bFirstPlayerHandled)
	{
		SetupConversationProps();

		if (GameMode->AISettings)
			FortAthenaAIBotController::SpawnAIs();

		bFirstPlayerHandled = true;
	}

	auto PlayerController = NewPlayer->Cast<AFortPlayerController>();
	if (!PlayerController)
		return *Result = Pawn;

	auto& Entries = PlayerController->WorldInventory->Inventory;
	const auto PreviousEntryCount = Entries.ReplicatedEntries.Num();
	if (PreviousEntryCount != 0)
	{
		Entries.ReplicatedEntries.ResetNum();
		Entries.ItemInstances.ResetNum();
		FortInventory::TriggerInventoryUpdate(PlayerController, nullptr);
	}

	FortInventory::GiveItem(PlayerController, PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition);
	for (auto& StartingItem : GameMode->StartingItems)
	{
		if (StartingItem.Count && !StartingItem.Item->IsA<UFortSmartBuildingItemDefinition>())
			FortInventory::GiveItem(PlayerController, StartingItem.Item, StartingItem.Count);
	}

	if (PreviousEntryCount == 0)
		InitializeNewPlayer(PlayerController, Pawn);
	else if (bLateGame)
		GiveLateGameLoadout(PlayerController);

	return *Result = Pawn;
}

EFortTeam FortGameModeAthena::PickTeam(AFortGameModeAthena* GameMode, uint8_t PreferredTeam, AFortPlayerControllerAthena* Controller)
{
	uint8_t AssignedTeam = CurrentTeam;

	if (++PlayersOnCurTeam >= ((AFortGameStateAthena*)GameMode->GameState)->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize)
	{
		CurrentTeam++;
		PlayersOnCurTeam = 0;
	}

	return EFortTeam(AssignedTeam);
}

void FortGameModeAthena::HandleStartingNewPlayer(UObject* Context, FFrame& Stack)
{
	AFortPlayerControllerAthena* NewPlayer;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.IncrementCode();

	auto GameMode = (AFortGameModeAthena*)Context;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;
	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	PlayerState->SquadId = PlayerState->TeamIndex - 3;
	PlayerState->OnRep_SquadId();

	FGameMemberInfo Member;
	Member.MostRecentArrayReplicationKey = -1;
	Member.ReplicationID = -1;
	Member.ReplicationKey = -1;
	Member.TeamIndex = PlayerState->TeamIndex;
	Member.SquadId = PlayerState->SquadId;
	Member.MemberUniqueId = PlayerState->UniqueId;

	GameState->GameMemberInfoArray.Members.Add(Member);
	GameState->GameMemberInfoArray.MarkItemDirty(Member);

	if (!NewPlayer->MatchReport)
		NewPlayer->MatchReport = reinterpret_cast<UAthenaPlayerMatchReport*>(UGameplayStatics::SpawnObject(UAthenaPlayerMatchReport::StaticClass(), NewPlayer));

	return callOG(GameMode, L"/Script/Engine.GameModeBase", HandleStartingNewPlayer, NewPlayer);
}

void FortGameModeAthena::OnAircraftExitedDropZone(UObject* Context, FFrame& Stack)
{
	AFortAthenaAircraft* Aircraft;
	Stack.StepCompiledIn(&Aircraft);
	Stack.IncrementCode();

	auto GameMode = (AFortGameModeAthena*)Context;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	for (auto& Player : GameMode->AlivePlayers)
	{
		if (Player->IsInAircraft())
			Player->GetAircraftComponent()->ServerAttemptAircraftJump({});
	}

	if (bLateGame)
	{
		GameState->GamePhase = EAthenaGamePhase::SafeZones;
		GameState->GamePhaseStep = EAthenaGamePhaseStep::StormHolding;
		GameState->OnRep_GamePhase(EAthenaGamePhase::Aircraft);
	}

	callOG(GameMode, L"/Script/FortniteGame.FortGameModeAthena", OnAircraftExitedDropZone, Aircraft);
}

void FortGameModeAthena::Hook()
{
	Utils::ExecHook(L"/Script/Engine.GameMode.ReadyToStartMatch", ReadyToStartMatch, ReadyToStartMatchOG);
	Utils::ExecHook(L"/Script/Engine.GameModeBase.SpawnDefaultPawnFor", SpawnDefaultPawnFor);
	Utils::ExecHook(L"/Script/Engine.GameModeBase.HandleStartingNewPlayer", HandleStartingNewPlayer, HandleStartingNewPlayerOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", OnAircraftExitedDropZone, OnAircraftExitedDropZoneOG);
}
