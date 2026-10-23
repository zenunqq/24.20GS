#include "pch.h"
#include "../../Public/Athena/FortPlayerControllerAthena.h"
#include "Engine/Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/AbilitySystemComponent.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortInventory.h"
#include "Config.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Athena/FortLategame.h"
#include "Engine/Source/Runtime/Engine/Classes/Misc/Misc.h"

void FortPlayerControllerAthena::ServerAcknowledgePossession(UObject* Context, FFrame& Stack)
{
	APawn* Pawn;
	Stack.StepCompiledIn(&Pawn);
	Stack.IncrementCode();

	auto InternalServerAcknowledgePossession = (void (*)(UObject*, APawn*)) (Sarah::Offsets::ImageBase + 0x80B4C98);
	InternalServerAcknowledgePossession(Context, Pawn);
}

void FortPlayerControllerAthena::GetPlayerViewPointInternal(APlayerController* PlayerController, FVector& Loc, FRotator& Rot)
{
	static auto SFName = FName(L"Spectating");

	if (PlayerController->StateName == SFName)
	{
		Loc = PlayerController->LastSpectatorSyncLocation;
		Rot = PlayerController->LastSpectatorSyncRotation;
	}

	else if (PlayerController->GetViewTarget())
	{
		Loc = PlayerController->GetViewTarget()->K2_GetActorLocation();
		Rot = PlayerController->GetViewTarget()->K2_GetActorRotation();
	}
	else return PlayerController->GetActorEyesViewPoint(&Loc, &Rot);
}

void FortPlayerControllerAthena::GetPlayerViewPoint(UObject* Context, FFrame& Stack)
{
	auto& Loc = Stack.StepCompiledInRef<FVector>();
	auto& Rot = Stack.StepCompiledInRef<FRotator>();
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;

	GetPlayerViewPointInternal(PlayerController, Loc, Rot);
}

void FortPlayerControllerAthena::ServerExecuteInventoryItem(UObject* Context, FFrame& Stack)
{
	FGuid ItemGuid;
	Stack.StepCompiledIn(&ItemGuid);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController) return;
	auto entry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
		return entry.ItemGuid == ItemGuid;
		});

	if (!entry || !PlayerController->MyFortPawn) return;
	UFortWeaponItemDefinition* ItemDefinition = entry->ItemDefinition->IsA<UFortGadgetItemDefinition>() ? ((UFortGadgetItemDefinition*)entry->ItemDefinition)->GetWeaponItemDefinition() : (UFortWeaponItemDefinition*)entry->ItemDefinition;
	PlayerController->MyFortPawn->EquipWeaponDefinition(ItemDefinition, ItemGuid, entry->TrackerGuid, false);

}

void FortPlayerControllerAthena::ServerReturnToMainMenu(UObject* Context, FFrame& Stack)
{
	Stack.IncrementCode();
	return ((AFortPlayerController*)Context)->ClientReturnToMainMenu(L"");
}

void FortPlayerControllerAthena::ServerAttemptAircraftJump(UObject* Context, FFrame& Stack)
{
	FRotator Rotation;
	Stack.StepCompiledIn(&Rotation);
	Stack.IncrementCode();

	auto Component = (UFortControllerComponent_Aircraft*)Context;
	auto PlayerController = (AFortPlayerController*)Component->GetOwner();
	auto PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;

	GameMode->RestartPlayer(PlayerController);

	if (bLateGame)
	{
		FVector Loc = GameState->Aircrafts[0]->K2_GetActorLocation();

		double Angle = UKismetMathLibrary::RandomFloatInRange(0.0f, 6.2831853f);

		Loc.X += cos(Angle) * (double)(rand() % 250);
		Loc.Y += sin(Angle) * (double)(rand() % 250);

		PlayerController->MyFortPawn->K2_TeleportTo(Loc, Rotation);
	}
	PlayerController->ControlRotation = Rotation;

	if (PlayerController->MyFortPawn)
	{
		PlayerController->MyFortPawn->BeginSkydiving(true);
		PlayerController->MyFortPawn->SetHealth(100);
		if (bLateGame)
			PlayerController->MyFortPawn->SetShield(100);
	}
}

void FortPlayerControllerAthena::ServerPlayEmoteItem(UObject* Context, FFrame& Stack)
{
	UFortMontageItemDefinitionBase* Asset;
	float RandomNumber;
	Stack.StepCompiledIn(&Asset);
	Stack.StepCompiledIn(&RandomNumber);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Asset) return;

	auto* AbilitySystemComponent = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent;
	FGameplayAbilitySpec NewSpec = {};
	UClass* AbilityToUse = nullptr;

	if (Asset->IsA<UAthenaSprayItemDefinition>())
	{
		static auto SprayAbilityClass = Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C");
		AbilityToUse = SprayAbilityClass;
	}

	else if (auto DanceAsset = Asset->Cast<UAthenaDanceItemDefinition>())
	{
		PlayerController->MyFortPawn->bMovingEmote = DanceAsset->bMovingEmote;
		PlayerController->MyFortPawn->bMovingEmoteForwardOnly = DanceAsset->bMoveForwardOnly;
		PlayerController->MyFortPawn->bMovingEmoteFollowingOnly = DanceAsset->bMoveFollowingOnly;
		PlayerController->MyFortPawn->EmoteWalkSpeed = DanceAsset->WalkForwardSpeed;
		static auto EmoteAbilityClass = Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");
		AbilityToUse = DanceAsset->CustomDanceAbility ? DanceAsset->CustomDanceAbility : EmoteAbilityClass;
	}

	if (AbilityToUse)
	{
		((void (*)(FGameplayAbilitySpec*, UObject*, int, int, UObject*))(Sarah::Offsets::ImageBase + 0x8577A3C))(&NewSpec, AbilityToUse->DefaultObject, 1, -1, Asset);
		FGameplayAbilitySpecHandle handle;
		((void (*)(UFortAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec*, void*))(Sarah::Offsets::ImageBase + 0x858A62C))(AbilitySystemComponent, &handle, &NewSpec, nullptr);
	}
}

void FortPlayerControllerAthena::ServerSendZiplineState(UObject* Context, FFrame& Stack)
{
	FZiplinePawnState State;

	Stack.StepCompiledIn(&State);
	Stack.IncrementCode();

	auto Pawn = (AFortPlayerPawn*)Context;

	if (!Pawn)
		return;

	auto Zipline = Pawn->GetActiveZipline();

	Pawn->ZiplineState = State;

	((void (*)(AFortPlayerPawn*))(Sarah::Offsets::ImageBase + 0xa615abc))(Pawn);

	if (State.bJumped)
	{
		auto Velocity = Pawn->CharacterMovement->Velocity;
		auto VelocityX = Velocity.X * -0.5;
		auto VelocityY = Velocity.Y * -0.5;
		Pawn->LaunchCharacterJump({ VelocityX >= -750 ? min(VelocityX, 750) : -750, VelocityY >= -750 ? min(VelocityY, 750) : -750, 1200 }, false, false, true, true);
	}

	static auto ZipLineClass = Utils::FindObject<UClass>(L"/Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C");
	if (auto Ascender = Zipline->Cast<AFortAscenderZipline>(ZipLineClass))
	{
		Ascender->PawnUsingHandle = nullptr;
		Ascender->PreviousPawnUsingHandle = Pawn;
		Ascender->OnRep_PawnUsingHandle();
	}
}

void FortPlayerControllerAthena::ServerHandlePickupInfo(UObject* Context, FFrame& Stack)
{
	AFortPickup* Pickup;
	FFortPickupRequestInfo Params;
	Stack.StepCompiledIn(&Pickup);
	Stack.StepCompiledIn(&Params);
	Stack.IncrementCode();
	auto Pawn = (AFortPlayerPawn*)Context;

	if (!Pawn || !Pickup || Pickup->bPickedUp)
		return;

	if ((Params.bTrySwapWithWeapon || Params.bUseRequestedSwap) && Pawn->CurrentWeapon && FortInventory::GetQuickbar(Pawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary && FortInventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Primary)
	{
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		auto SwapEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
			{ return entry.ItemGuid == Params.SwapWithItem; });
		PC->SwappingItemDefinition = (UFortWorldItemDefinition*)SwapEntry;
	}

	Pawn->IncomingPickups.Add(Pickup);

	Pickup->PickupLocationData.bPlayPickupSound = Params.bPlayPickupSound;
	Pickup->PickupLocationData.FlyTime = 0.4f;
	Pickup->PickupLocationData.ItemOwner = Pawn;
	Pickup->PickupLocationData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
	Pickup->PickupLocationData.PickupTarget = Pawn;

	Pickup->OnRep_PickupLocationData();

	Pickup->bPickedUp = true;
	Pickup->OnRep_bPickedUp();
}

void FortPlayerControllerAthena::MovingEmoteStopped(UObject* Context, FFrame& Stack)
{
	Stack.IncrementCode();

	AFortPawn* Pawn = (AFortPawn*)Context;
	Pawn->bMovingEmote = false;
	Pawn->bMovingEmoteForwardOnly = false;
	Pawn->bMovingEmoteFollowingOnly = false;
}

void FortPlayerControllerAthena::InternalPickup(AFortPlayerControllerAthena* PlayerController, FFortItemEntry PickupEntry)
{
	auto MaxStack = (int32)Utils::EvaluateScalableFloat(PickupEntry.ItemDefinition->MaxStackSize);
	int ItemCount = 0;

	for (auto& Item : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (FortInventory::GetQuickbar(Item.ItemDefinition) == EFortQuickBars::Primary && Item.ItemDefinition->bInventorySizeLimited)
			ItemCount += ((UFortWorldItemDefinition*)Item.ItemDefinition)->NumberOfSlotsToTake;
	}

	auto GiveOrSwap = [&]() {
		if (ItemCount == 5 && FortInventory::GetQuickbar(PickupEntry.ItemDefinition) == EFortQuickBars::Primary)
		{
			if (FortInventory::GetQuickbar(PlayerController->MyFortPawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary)
			{
				auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([PlayerController](FFortItemEntry& entry) {
					return entry.ItemGuid == PlayerController->MyFortPawn->CurrentWeapon->ItemEntryGuid;
					});

				if (!itemEntry)
					return;
				FortInventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
				FortInventory::Remove(PlayerController, PlayerController->MyFortPawn->CurrentWeapon->ItemEntryGuid);
				FortInventory::GiveItem(PlayerController, PickupEntry, PickupEntry.Count, true);
			}
			else {
				FortInventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
			}
		}
		else
			FortInventory::GiveItem(PlayerController, PickupEntry, PickupEntry.Count, true);
		};

	auto GiveOrSwapStack = [&](int32 OriginalCount) {
		if (PickupEntry.ItemDefinition->bAllowMultipleStacks && ItemCount < 5)
			FortInventory::GiveItem(PlayerController, PickupEntry, OriginalCount - MaxStack, true);
		else
			FortInventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn, OriginalCount - MaxStack);
		};

	if (PickupEntry.ItemDefinition->IsStackable()) {
		auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([PickupEntry, MaxStack](FFortItemEntry& entry)
			{ return entry.ItemDefinition == PickupEntry.ItemDefinition && entry.Count <= MaxStack; });

		if (itemEntry) {
			auto State = itemEntry->StateValues.Search([](FFortItemEntryStateValue& Value)
				{ return Value.StateType == EFortItemEntryState::ShouldShowItemToast; });

			if (!State) {
				FFortItemEntryStateValue Value{};
				Value.StateType = EFortItemEntryState::ShouldShowItemToast;
				Value.IntValue = true;
				itemEntry->StateValues.Add(Value);
			}
			else State->IntValue = true;

			if ((itemEntry->Count += PickupEntry.Count) > MaxStack) {
				auto OriginalCount = itemEntry->Count;
				itemEntry->Count = MaxStack;

				GiveOrSwapStack(OriginalCount);
			}

			FortInventory::ReplaceEntry(PlayerController, *itemEntry);
		}
		else {
			if (PickupEntry.Count > MaxStack) {
				auto OriginalCount = PickupEntry.Count;
				PickupEntry.Count = MaxStack;

				GiveOrSwapStack(OriginalCount);
			}

			GiveOrSwap();
		}
	}
	else {
		GiveOrSwap();
	}
}

bool FortPlayerControllerAthena::CompletePickupAnimation(AFortPickup* Pickup) {
	auto Pawn = (AFortPlayerPawnAthena*)Pickup->PickupLocationData.PickupTarget.Get();
	if (!Pawn)
		return CompletePickupAnimationOG(Pickup);

	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController)
		return CompletePickupAnimationOG(Pickup);

	if (auto entry = (FFortItemEntry*)PlayerController->SwappingItemDefinition)
	{
		FortInventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), *entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);

		FortInventory::Remove(PlayerController, entry->ItemGuid);
		FortInventory::GiveItem(PlayerController, Pickup->PrimaryPickupItemEntry);
		PlayerController->SwappingItemDefinition = nullptr;
	}
	else
	{
		InternalPickup(PlayerController, Pickup->PrimaryPickupItemEntry);
	}
	return CompletePickupAnimationOG(Pickup);
}

void FortPlayerControllerAthena::NetMulticast_Athena_BatchedDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData)
{
	if (!Pawn || !Pawn->Controller || !Pawn->CurrentWeapon) return;

	if (Pawn->CurrentWeapon && !Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo && FortInventory::GetStats(Pawn->CurrentWeapon->WeaponData) && FortInventory::GetStats(Pawn->CurrentWeapon->WeaponData)->ClipSize > 0)
	{
		auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry) {
			return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid;
			});

		if (ent)
		{
			ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
			FortInventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
		}
	}
	else if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo)
	{
		auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry) {
			return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid;
			});

		if (ent)
		{
			ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
			FortInventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
		}
	}

	return NetMulticast_Athena_BatchedDamageCuesOG(Pawn, SharedData, NonSharedData);
}

void FortPlayerControllerAthena::ReloadWeapon(AFortWeapon* Weapon, int AmmoToRemove)
{
	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)((AFortPlayerPawnAthena*)Weapon->Owner)->Controller;
	AFortInventory* Inventory;
	if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
	{
		Inventory = Bot->Inventory;
	}
	else
	{
		Inventory = PC->WorldInventory;
	}

	if (!PC || !Inventory || !Weapon)
		return;

	if (Weapon->WeaponData->bUsesPhantomReserveAmmo)
	{
		Weapon->PhantomReserveAmmo -= AmmoToRemove;
		Weapon->OnRep_PhantomReserveAmmo();
		return;
	}

	auto Ammo = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();
	auto ent = Inventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return Weapon->WeaponData == Ammo ? entry.ItemGuid == Weapon->ItemEntryGuid : entry.ItemDefinition == Ammo; });
	auto WeaponEnt = Inventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == Weapon->ItemEntryGuid; });
	if (!WeaponEnt)
		return;

	if (ent)
	{
		ent->Count -= AmmoToRemove;
		if (ent->Count <= 0)
			FortInventory::Remove(PC, ent->ItemGuid);
		else
			FortInventory::ReplaceEntry(PC, *ent);
	}
	WeaponEnt->LoadedAmmo += AmmoToRemove;
	FortInventory::ReplaceEntry(PC, *WeaponEnt);
}

void FortPlayerControllerAthena::ClientOnPawnDied(AFortPlayerControllerAthena* PlayerController, FFortPlayerDeathReport& DeathReport)
{
	if (!PlayerController)
		return ClientOnPawnDiedOG(PlayerController, DeathReport);
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;
	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

	if (!GameState->IsRespawningAllowed(PlayerState) && PlayerController->WorldInventory && PlayerController->MyFortPawn)
	{
		bool bHasMats = false;
		for (auto& entry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
		{
			if (!entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>() && (entry.ItemDefinition->IsA<UFortResourceItemDefinition>() || entry.ItemDefinition->IsA<UFortWeaponRangedItemDefinition>() || entry.ItemDefinition->IsA<UFortConsumableItemDefinition>() || entry.ItemDefinition->IsA<UFortAmmoItemDefinition>()))
			{
				FortInventory::SpawnPickup(PlayerController->MyFortPawn->K2_GetActorLocation(), entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PlayerController->MyFortPawn);
			}
		}

		AFortAthenaMutator_ItemDropOnDeath* Mutator = (AFortAthenaMutator_ItemDropOnDeath*)GameState->GetMutatorByClass(GameMode, AFortAthenaMutator_ItemDropOnDeath::StaticClass());

		if (Mutator)
		{
			for (FItemsToDropOnDeath& Items : Mutator->ItemsToDrop)
			{
				FortInventory::SpawnPickup(PlayerState->DeathInfo.DeathLocation, Items.ItemToDrop, (int)Utils::EvaluateScalableFloat(Items.NumberToDrop), 0, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PlayerController->MyFortPawn);
			}
		}
	}

	auto KillerPlayerState = (AFortPlayerStateAthena*)DeathReport.KillerPlayerState;
	auto KillerPawn = (AFortPlayerPawnAthena*)DeathReport.KillerPawn.Get();

	PlayerState->PawnDeathLocation = PlayerController->MyFortPawn ? PlayerController->MyFortPawn->K2_GetActorLocation() : FVector();
	PlayerState->DeathInfo.bDBNO = PlayerController->MyFortPawn ? PlayerController->MyFortPawn->IsDBNO() : false;
	PlayerState->DeathInfo.DeathLocation = PlayerState->PawnDeathLocation;
	PlayerState->DeathInfo.DeathTags = PlayerController->MyFortPawn ? *(FGameplayTagContainer*)(__int64(PlayerController->MyFortPawn) + 0x2318) : DeathReport.Tags;
	PlayerState->DeathInfo.DeathCause = AFortPlayerStateAthena::ToDeathCause(PlayerState->DeathInfo.DeathTags, PlayerState->DeathInfo.bDBNO);
	if (PlayerState->DeathInfo.bDBNO)
		PlayerState->DeathInfo.Downer = KillerPlayerState;
	PlayerState->DeathInfo.FinisherOrDowner = KillerPlayerState;
	PlayerState->DeathInfo.Distance = PlayerController->MyFortPawn ? (PlayerState->DeathInfo.DeathCause != EDeathCause::FallDamage ? (KillerPawn && KillerPawn->Class->FindFunction("GetDistanceTo") ? KillerPawn->GetDistanceTo(PlayerController->MyFortPawn) : 0) : PlayerController->MyFortPawn->Cast<AFortPlayerPawnAthena>()->LastFallDistance) : 0;
	PlayerState->DeathInfo.bInitialized = true;
	PlayerState->OnRep_DeathInfo();

	if (KillerPlayerState && KillerPawn && KillerPawn->Controller && KillerPawn->Controller->IsA<AFortPlayerControllerAthena>() && KillerPawn->Controller != PlayerController)
	{
		KillerPlayerState->KillScore++;
		KillerPlayerState->OnRep_Kills();
		KillerPlayerState->TeamKillScore++;
		KillerPlayerState->OnRep_TeamKillScore();

		KillerPlayerState->ClientReportKill(PlayerState);
		KillerPlayerState->ClientReportTeamKill(KillerPlayerState->TeamKillScore);

		auto KillerPC = (AFortPlayerControllerAthena*)KillerPlayerState->Owner;

		Log(L"Player %s killed %s", KillerPlayerState->GetPlayerName().ToWString().c_str(), PlayerController->PlayerState->GetPlayerName().ToWString().c_str());
	}

	if (!GameState->IsRespawningAllowed(PlayerState) && (PlayerController->MyFortPawn ? !PlayerController->MyFortPawn->IsDBNO() : true))
	{
		PlayerState->Place = GameState->PlayersLeft;
		PlayerState->OnRep_Place();
		FAthenaMatchStats& Stats = PlayerController->MatchReport->MatchStats;
		FAthenaMatchTeamStats& TeamStats = PlayerController->MatchReport->TeamStats;

		Stats.Stats[3] = PlayerState->KillScore;
		Stats.Stats[8] = PlayerState->SquadId;
		PlayerController->ClientSendMatchStatsForPlayer(Stats);

		TeamStats.Place = PlayerState->Place;
		TeamStats.TotalPlayers = GameState->TotalPlayers;
		PlayerController->ClientSendTeamStatsForPlayer(TeamStats);

		AFortWeapon* DamageCauser = nullptr;
		if (auto Projectile = DeathReport.DamageCauser.Get() ? DeathReport.DamageCauser->Cast<AFortProjectileBase>() : nullptr)
			DamageCauser = Projectile->GetOwnerWeapon();
		else if (auto Weapon = DeathReport.DamageCauser.Get() ? DeathReport.DamageCauser->Cast<AFortWeapon>() : nullptr)
			DamageCauser = Weapon;

		((void (*)(AFortGameModeAthena*, AFortPlayerController*, APlayerState*, AFortPawn*, UFortWeaponItemDefinition*, EDeathCause, char))(Sarah::Offsets::ImageBase + 0x99228A4))(GameMode, PlayerController, KillerPlayerState == PlayerState ? nullptr : KillerPlayerState, KillerPawn, DamageCauser ? DamageCauser->WeaponData : nullptr, PlayerState->DeathInfo.DeathCause, 0);

		PlayerController->ClientSendEndBattleRoyaleMatchForPlayer(true, PlayerController->MatchReport->EndOfMatchResults);

		PlayerController->StateName = FName(L"Spectating");

		if (PlayerController->MyFortPawn && KillerPlayerState && KillerPawn && KillerPawn->Controller != PlayerController)
		{
			auto Handle = KillerPlayerState->AbilitySystemComponent->MakeEffectContext();
			FGameplayTag Tag;
			static auto Cue = FName(L"GameplayCue.Shield.PotionConsumed");
			Tag.TagName = Cue;
			KillerPlayerState->AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(Tag, FPredictionKey(), Handle);
			KillerPlayerState->AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(Tag, FPredictionKey(), Handle);

			auto Health = KillerPawn->GetHealth();
			auto Shield = KillerPawn->GetShield();

			if (Health == 100)
			{
				Shield += Shield + 50;
			}
			else if (Health + 50 > 100)
			{
				Health = 100;
				Shield += (Health + 50) - 100;
			}
			else if (Health + 50 <= 100)
			{
				Health += 50;
			}

			KillerPawn->SetHealth(Health);
			KillerPawn->SetShield(Shield);

		}
		if (PlayerController->MyFortPawn && ((KillerPlayerState && KillerPlayerState->Place == 1) || PlayerState->Place == 1))
		{
			if (PlayerState->Place == 1)
			{
				KillerPlayerState = PlayerState;
				KillerPawn = (AFortPlayerPawnAthena*)PlayerController->MyFortPawn;
			}
			auto KillerPlayerController = (AFortPlayerControllerAthena*)KillerPlayerState->Owner;
			auto KillerWeapon = DamageCauser ? DamageCauser->WeaponData : nullptr;

			KillerPlayerController->PlayWinEffects(KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause, false, ERoundVictoryAnimation::Default);
			KillerPlayerController->ClientNotifyWon(KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause);
			KillerPlayerController->ClientNotifyTeamWon(KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause);

			if (KillerPlayerState != PlayerState)
			{
				KillerPlayerController->ClientSendEndBattleRoyaleMatchForPlayer(true, KillerPlayerController->MatchReport->EndOfMatchResults);

				FAthenaMatchStats& KillerStats = KillerPlayerController->MatchReport->MatchStats;
				FAthenaMatchTeamStats& KillerTeamStats = KillerPlayerController->MatchReport->TeamStats;

				KillerStats.Stats[3] = KillerPlayerState->KillScore;
				KillerStats.Stats[8] = KillerPlayerState->SquadId;
				KillerPlayerController->ClientSendMatchStatsForPlayer(KillerStats);

				KillerTeamStats.Place = KillerPlayerState->Place;
				KillerTeamStats.TotalPlayers = GameState->TotalPlayers;
				KillerPlayerController->ClientSendTeamStatsForPlayer(KillerTeamStats);
			}

			GameState->WinningTeam = KillerPlayerState->TeamIndex;
			GameState->OnRep_WinningTeam();
			GameState->WinningPlayerState = KillerPlayerState;
			GameState->OnRep_WinningPlayerState();
		}
	}

	return ClientOnPawnDiedOG(PlayerController, DeathReport);
}

void FortPlayerControllerAthena::ServerAttemptInventoryDrop(UObject* Context, FFrame& Stack)
{
	FGuid Guid;
	int32 Count;
	bool bTrash;
	Stack.StepCompiledIn(&Guid);
	Stack.StepCompiledIn(&Count);
	Stack.StepCompiledIn(&bTrash);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerControllerAthena*)Context;

	if (!PlayerController || !PlayerController->Pawn)
		return;

	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == Guid; });
	if (!ItemEntry || (ItemEntry->Count - Count) < 0)
		return;

	ItemEntry->Count -= Count;
	FortInventory::SpawnPickup(PlayerController->Pawn->K2_GetActorLocation() + PlayerController->Pawn->GetActorForwardVector() * 70.f + FVector(0, 0, 50), *ItemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn, Count);
	if (ItemEntry->Count == 0)
		FortInventory::Remove(PlayerController, Guid);
	else
		FortInventory::ReplaceEntry(PlayerController, *ItemEntry);
}

void FortPlayerControllerAthena::OnCapsuleBeginOverlap(UObject* Context, FFrame& Stack)
{
	UPrimitiveComponent* OverlappedComp;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
	bool bFromSweep;
	FHitResult SweepResult;
	Stack.StepCompiledIn(&OverlappedComp);
	Stack.StepCompiledIn(&OtherActor);
	Stack.StepCompiledIn(&OtherComp);
	Stack.StepCompiledIn(&OtherBodyIndex);
	Stack.StepCompiledIn(&bFromSweep);
	Stack.StepCompiledIn(&SweepResult);
	Stack.IncrementCode();

	auto Pawn = (AFortPlayerPawn*)Context;
	if (!Pawn || !Pawn->Controller || Pawn->Controller->IsA<AFortAthenaAIBotController>())
		return callOG(Pawn, L"/Script/FortniteGame.FortPlayerPawn", OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	auto Pickup = OtherActor->Cast<AFortPickup>();
	if (!Pickup || !Pickup->PrimaryPickupItemEntry.ItemDefinition)
		return callOG(Pawn, L"/Script/FortniteGame.FortPlayerPawn", OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	if (Pickup && Pickup->PawnWhoDroppedPickup != Pawn)
	{
		auto MaxStack = (int32)Utils::EvaluateScalableFloat(Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize);
		auto itemEntry = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
			{ return entry.ItemDefinition == Pickup->PrimaryPickupItemEntry.ItemDefinition && entry.Count <= MaxStack; });

		if ((!itemEntry && FortInventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Secondary) || (itemEntry && itemEntry->Count < MaxStack) || Pickup->PrimaryPickupItemEntry.ItemDefinition->bForceAutoPickup)
			Pawn->ServerHandlePickup(Pickup, 0.4f, FVector(), true);
	}
	return callOG(Pawn, L"/Script/FortniteGame.FortPlayerPawn", OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void FortPlayerControllerAthena::ServerAttemptInteract(UFortControllerComponent_Interaction* InteractionComp, class AFortPawn* InteractingPawn, float InInteractDistance, class AActor* ReceivingActor, class UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, class UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted)
{

	return ServerAttemptInteractOG(InteractionComp, InteractingPawn, InInteractDistance, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted);
}

void FortPlayerControllerAthena::OnPlayImpactFX(AFortWeapon* Weapon, FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC)
{
	printf("%s\n", Weapon->WeaponData->GetName().c_str());
	auto Pawn = (AFortPlayerPawnAthena*)Weapon->GetOwner();
	auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
	auto ent = Controller->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
		return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid;
		});

	if (ent)
	{
		ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
		FortInventory::ReplaceEntry(Controller, *ent);
	}
	return OnPlayImpactFXOG(Weapon, HitResult, ImpactPhysicalSurface, SpawnedPSC);
}

void FortPlayerControllerAthena::TeleportPlayerToLinkedVolume(AFortAthenaCreativePortal* Portal, FFrame& Frame)
{
	AFortPlayerPawn* PlayerPawn;
	bool bUseSpawnTags;

	Frame.StepCompiledIn(&PlayerPawn);
	Frame.StepCompiledIn(&bUseSpawnTags);
	Frame.IncrementCode();

	if (!PlayerPawn)
		return;

	auto Volume = Portal->LinkedVolume;
	auto Location = Volume->K2_GetActorLocation();
	Location.Z = 10000;

	PlayerPawn->K2_TeleportTo(Location, FRotator());
	PlayerPawn->BeginSkydiving(false);
}

void FortPlayerControllerAthena::TeleportPlayerForPlotLoadComplete(UObject* Portal, FFrame& Frame)
{
	AFortPlayerPawn* PlayerPawn;
	Frame.StepCompiledIn(&PlayerPawn);
	Frame.IncrementCode();

	if (!PlayerPawn)
		return;

	auto Portal2 = (AFortAthenaCreativePortal*)Portal;

	PlayerPawn->K2_TeleportTo(Portal2->GetLinkedVolume()->K2_GetActorLocation(), Portal2->GetLinkedVolume()->K2_GetActorRotation());
}

void FortPlayerControllerAthena::TeleportPlayer(UObject* Portal, FFrame& Frame)
{
	AFortPlayerPawn* PlayerPawn;
	FRotator TeleportRotation;
	Frame.StepCompiledIn(&PlayerPawn);
	Frame.StepCompiledIn(&TeleportRotation);
	Frame.IncrementCode();

	if (!PlayerPawn)
		return;

	PlayerPawn->K2_TeleportTo(Portal->Cast<AFortAthenaCreativePortal>()->TeleportLocation, TeleportRotation);
}

void FortPlayerControllerAthena::ServerTeleportToPlaygroundLobbyIsland(AFortPlayerControllerAthena* Controller, FFrame& Frame)
{
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	Log(L"Skunked");
	if (Controller->WarmupPlayerStart)
		Controller->GetPlayerPawn()->K2_TeleportTo(Controller->WarmupPlayerStart->K2_GetActorLocation(), Controller->GetPlayerPawn()->K2_GetActorRotation());
	else
	{
		AActor* Actor = GameMode->ChoosePlayerStart(Controller);
		Controller->GetPlayerPawn()->K2_TeleportTo(Actor->K2_GetActorLocation(), Actor->K2_GetActorRotation());
	}
	Controller->MyFortPawn->ForceKill(FGameplayTag(), Controller, nullptr);
}

void FortPlayerControllerAthena::ServerRestartPlayer(APlayerController* PlayerController)
{
	static auto ServerRestartPlayerZone = (void(*)(APlayerController*)) AFortPlayerControllerZone::GetDefaultObj()->VTable[0x11e];
	return ServerRestartPlayerZone(PlayerController);
}

void FortPlayerControllerAthena::ServerCheat(AFortPlayerControllerAthena* Controller, FString& Message) {
	std::cout << "dssasdasdad" << std::endl;
	std::cout << Message.ToString().c_str() << std::endl;
	auto Command = Message.ToString();
	if (Command == "cheat fly") {
		std::cout << "cheat fly" << std::endl;
		Controller->bCheatFly = true;
	}

	if (Command== "spawn vehicle") {
		std::cout << "spawn vehicle" << std::endl;
		auto Location = Controller->K2_GetActorLocation();
		auto Rotation = Controller->K2_GetActorRotation();
		auto Vehicle = Utils::SpawnActor<AActor>(Utils::FindObject<UClass>(L"/Dirtbike/Vehicle/Motorcycle_DirtBike_Vehicle.Motorcycle_DirtBike_Vehicle_C"), Location, Rotation, Controller->GetOwner());
		if (!Vehicle) return;
	}
}

void TeleportPlayerPawn(UObject *Context, FFrame& Stack, bool *Ret)
{
	UObject* WorldContextObject;
	AFortPlayerPawn* PlayerPawn;
	FVector DestLocation;
	FRotator DestRotation;
	bool bIgnoreCollision;
	bool bIgnoreSupplementalKillVolumeSweep;

	Stack.StepCompiledIn(&WorldContextObject);
	Stack.StepCompiledIn(&PlayerPawn);
	Stack.StepCompiledIn(&DestLocation);
	Stack.StepCompiledIn(&DestRotation);
	Stack.StepCompiledIn(&bIgnoreCollision);
	Stack.StepCompiledIn(&bIgnoreSupplementalKillVolumeSweep);
	Stack.IncrementCode();

	PlayerPawn->K2_TeleportTo(DestLocation, DestRotation);
	*Ret = true;
}

void FortPlayerControllerAthena::Hook()
{

	Utils::ExecHook(L"/Script/Engine.PlayerController.ServerAcknowledgePossession", ServerAcknowledgePossession);
	Utils::ExecHook(L"/Script/Engine.Controller.GetPlayerViewPoint", GetPlayerViewPoint);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem", ServerPlayEmoteItem);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem", ServerExecuteInventoryItem);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerReturnToMainMenu", ServerReturnToMainMenu);
	Utils::ExecHook(L"/Script/FortniteGame.FortPawn.MovingEmoteStopped", MovingEmoteStopped);
	Utils::ExecHook(L"/Script/FortniteGame.FortControllerComponent_Aircraft.ServerAttemptAircraftJump", ServerAttemptAircraftJump, ServerAttemptAircraftJumpOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState", ServerSendZiplineState);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.ServerHandlePickupInfo", ServerHandlePickupInfo);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerCheat", ServerCheat);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x1AB1FE4, CompletePickupAnimation, CompletePickupAnimationOG);
	Utils::Hook<AFortPlayerPawnAthena>(uint32(0x136), NetMulticast_Athena_BatchedDamageCues, NetMulticast_Athena_BatchedDamageCuesOG);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x16E6C2C, OnPlayImpactFX, OnPlayImpactFXOG);

	Utils::Hook(Sarah::Offsets::ImageBase + 0xAA47620, ReloadWeapon);
	Utils::Hook(Sarah::Offsets::ImageBase + 0xA6DCF98, ClientOnPawnDied, ClientOnPawnDiedOG);

	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerAttemptInventoryDrop", ServerAttemptInventoryDrop);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.OnCapsuleBeginOverlap", OnCapsuleBeginOverlap, OnCapsuleBeginOverlapOG);

	Utils::ExecHook(L"/Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerToLinkedVolume", TeleportPlayerToLinkedVolume);
	Utils::ExecHook(L"/Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayer", TeleportPlayer);
	Utils::ExecHook(L"/Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerForPlotLoadComplete", TeleportPlayerForPlotLoadComplete);
	Utils::ExecHook(L"/Script/FortniteGame.FortMissionLibrary.TeleportPlayerPawn", TeleportPlayerPawn);

}
