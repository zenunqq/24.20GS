#include "pch.h"
#include "../../Public/AI/FortAthenaAIBotController.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortInventory.h"
#include "Config.h"
#include "Engine/Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/AbilitySystemComponent.h"
#include <random>

void FortAthenaAIBotController::SpawnAI(const wchar_t* NPCName, const wchar_t* Season)
{
	return;
	auto SpawnerNameThing = wcscmp(NPCName, L"JonesyTheFirst") ? L"BP_AIBotSpawnerData_NPC_" : L"BP_AIBotSpawnerData_";
	auto Path = UEAllocatedWString(L"/NPCLibrary") + Season + L"/NPCs/" + NPCName + L"/" + SpawnerNameThing + NPCName + L"_" + Season + L"." + SpawnerNameThing + Season + L"_" + NPCName + L"_C";
	auto Class = Utils::FindObject<UClass>(Path);
	auto SpawnerData = (UFortAthenaAIBotSpawnerData*)Class->DefaultObject;

	if (wcscmp(NPCName, L"CRZ8") == 0)
		NPCName = L"CRZ-8";

	TArray<AFortAthenaPatrolPath*> PossibleSpawnPaths;
	for (auto& Path : Utils::GetAll<AFortAthenaPatrolPathPointProvider>())
	{
		if (Path->FiltersTags.GameplayTags.Num() == 0)
			continue;
		auto PathName = Path->FiltersTags.GameplayTags[0].TagName.ToWString();
		if (PathName.substr(PathName.rfind(L'.') + 1) == NPCName)
			PossibleSpawnPaths.Add(Path->AssociatedPatrolPath);
	}
	for (auto& PatrolPath : Utils::GetAll<AFortAthenaPatrolPath>())
	{
		if (PatrolPath->GameplayTags.GameplayTags.Num() == 0)
			continue;
		auto PathName = PatrolPath->GameplayTags.GameplayTags[0].TagName.ToWString();

		if (PathName.substr(PathName.rfind(L'.') + 1) == NPCName)
			PossibleSpawnPaths.Add(PatrolPath);
	}

	if (PossibleSpawnPaths.Num() > 0)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<std::size_t> dist(0, PossibleSpawnPaths.Num() - 1);

		auto PatrolPath = PossibleSpawnPaths[int32(dist(gen))];
		auto ComponentList = UFortAthenaAISpawnerData::CreateComponentListFromClass(Class, UWorld::GetWorld());

		auto Transform = PatrolPath->PatrolPoints[0]->GetTransform();
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(ComponentList, Transform, false);
		Log(L"Spawning %s at %lf %lf %lf", NPCName, Transform.Translation.X, Transform.Translation.Y, Transform.Translation.Z);
	}
	else
	{
		Log(L"todo: %s has no paths", NPCName);
	}
}

FFortItemEntry& FortAthenaAIBotController::GiveItem(AFortAthenaAIBotController* Controller, FItemAndCount ItemAndCount)
{
	UFortWorldItem* Item = (UFortWorldItem*)ItemAndCount.Item->CreateTemporaryItemInstanceBP(ItemAndCount.Count, -1);
	Item->OwnerInventoryWeak = Controller->Inventory;
	if (auto Weapon = ItemAndCount.Item->Cast<UFortWeaponItemDefinition>())
	{
		Item->ItemEntry.LoadedAmmo = FortInventory::GetStats(Weapon)->ClipSize;
	}

	auto& ItemEntry = Controller->Inventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
	auto ItemInstance = Controller->Inventory->Inventory.ItemInstances.Add(Item);

	Controller->Inventory->bRequiresLocalUpdate = true;
	Controller->Inventory->HandleInventoryLocalUpdate();
	Controller->Inventory->Inventory.MarkItemDirty(Item->ItemEntry);
	if (auto WeaponDef = ItemAndCount.Item->Cast<UFortWeaponRangedItemDefinition>())
	{

		Controller->PendingEquipWeapon = Item;
		Controller->PlayerBotPawn->EquipWeaponDefinition(WeaponDef, ItemEntry.ItemGuid, ItemEntry.TrackerGuid, false);
	}
	return ItemEntry;
}

void FortAthenaAIBotController::InventoryOnSpawned(UFortAthenaAISpawnerDataComponent_InventoryBase* InventoryBase, AFortPlayerPawn* Pawn)
{
	auto Controller = (AFortAthenaAIBotController*)Pawn->Controller;

	if (!Controller->Inventory)
	{
		if (Controller->Inventory = Utils::SpawnActor<AFortInventory>(FVector{}, {}))
		{
			Controller->Inventory->Owner = Controller;
			Controller->Inventory->OnRep_Owner();
		}
	}

	for (auto& Item : ((UFortAthenaAISpawnerDataComponent_AIBotInventory*)InventoryBase)->Items)
	{
		GiveItem(Controller, Item);
	}
}

void FortAthenaAIBotController::AIBotConversationOnSpawned(UFortAthenaAISpawnerDataComponent_AIBotConversation* AIBotConversation, AFortPlayerPawn* Pawn)
{
	UFortNPCConversationParticipantComponent* NPCConversationParticipantComponent = (UFortNPCConversationParticipantComponent*)Pawn->GetComponentByClass(AIBotConversation->ConversationComponentClass);

	if (!NPCConversationParticipantComponent)
	{

		NPCConversationParticipantComponent = (UFortNPCConversationParticipantComponent*)Pawn->AddComponentByClass(AIBotConversation->ConversationComponentClass, false, FTransform(), false);
	}

	NPCConversationParticipantComponent->PlayerPawnOwner = (AFortPlayerPawn*)Pawn;
	NPCConversationParticipantComponent->BotControllerOwner = (AFortAthenaAIBotController*)Pawn->Controller;

	NPCConversationParticipantComponent->ConversationEntryTag = AIBotConversation->ConversationEntryTag;
	NPCConversationParticipantComponent->InteractorParticipantTag = AIBotConversation->InteractorParticipantTag;
	NPCConversationParticipantComponent->SelfParticipantTag = AIBotConversation->SelfParticipantTag;

	NPCConversationParticipantComponent->CharacterData = AIBotConversation->CharacterData;

	NPCConversationParticipantComponent->ConversationInteractionCollisionProfile = AIBotConversation->ConversationInteractionCollisionProfile;
	NPCConversationParticipantComponent->ConversationInteractionBoxExtent = AIBotConversation->ConversationInteractionBoxExtent;
	NPCConversationParticipantComponent->ConversationInteractionBoxOffset = AIBotConversation->ConversationInteractionBoxOffset;
	NPCConversationParticipantComponent->ServiceProviderIDTag.TagName = NPCConversationParticipantComponent->ConversationEntryTag.TagName;

	if (NPCConversationParticipantComponent->SalesInventory)
	{
		for (const auto& [RowName, RowPtr] : NPCConversationParticipantComponent->SalesInventory->RowMap)
		{
			FNPCSaleInventoryRow* Row = (FNPCSaleInventoryRow*)RowPtr;

			if (!RowName.IsValid() || !Row)
				continue;

			if (Row->NPC.TagName == NPCConversationParticipantComponent->CharacterData->GameplayTag.TagName)
			{
				NPCConversationParticipantComponent->SupportedSales.Add(*Row);
			}
		}
	}

	if (NPCConversationParticipantComponent->Services)
	{
		for (const auto& [RowName, RowPtr] : NPCConversationParticipantComponent->Services->RowMap)
		{
			FNPCDynamicServiceRow* Row = (FNPCDynamicServiceRow*)RowPtr;

			if (!RowName.IsValid() || !Row)
				continue;

			if (Row->NPC.TagName == NPCConversationParticipantComponent->CharacterData->GameplayTag.TagName)
			{
				NPCConversationParticipantComponent->SupportedServices.GameplayTags.Add(Row->ServiceTag);
			}
		}
	}

	NPCConversationParticipantComponent->bCanStartConversation = true;
	NPCConversationParticipantComponent->OnRep_CanStartConversation();

	UFortAthenaNPCLoopStateComponent* NPCLoopStateComponent = (UFortAthenaNPCLoopStateComponent*)Pawn->AddComponentByClass(AIBotConversation->NPCLoopStateComponentClass, false, FTransform(), false);

	NPCLoopStateComponent->bSpawnOutsideTheLoop = (bool)Utils::EvaluateScalableFloat(AIBotConversation->SpawnOutOfTheLoop);

	AIBotConversation->UseSpecialActorComponent.Value = 1.f;
	AIBotConversation->BlockSpecialActorUntilOutsideTheLoop.Value = 0.f;

	bool bUseSpecialActorComponent = (bool)Utils::EvaluateScalableFloat(AIBotConversation->UseSpecialActorComponent);
	bool bBlockSpecialActorUntilOutsideTheLoop = (bool)Utils::EvaluateScalableFloat(AIBotConversation->BlockSpecialActorUntilOutsideTheLoop);

	if (bUseSpecialActorComponent && !bBlockSpecialActorUntilOutsideTheLoop)
	{
		UAthenaSpecialActorComponent* SpecialActorComponent = (UAthenaSpecialActorComponent*)Pawn->AddComponentByClass(AIBotConversation->SpecialActorComponentClass, false, FTransform(), false);
	}
}

void FortAthenaAIBotController::AIBotBehaviorOnSpawned(UFortAthenaAISpawnerDataComponent_AIBotBehavior* AIBotBehavior, AFortPlayerPawn* Pawn)
{
	auto Controller = (AFortAthenaAIBotController*)Pawn->Controller;

	*(bool*)(__int64(Controller->CachedAIServicePlayerBots) + 0x7b8) = true;
	if (!Controller->BrainComponent || !Controller->BrainComponent->IsA<UBehaviorTreeComponent>())
	{
		Controller->BrainComponent = (UBrainComponent*)Controller->AddComponentByClass(UBehaviorTreeComponent::StaticClass(), true, FTransform(), false);
	}

	return AIBotBehaviorOnSpawnedOG(AIBotBehavior, Pawn);
}

void FortAthenaAIBotController::AIBotGameplayAbilityBaseOnSpawned(UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase* AIBotGameplayAbilityBase, AFortPlayerPawn* Pawn)
{

	auto Controller = (AFortAthenaAIBotController*)Pawn->Controller;

	if (!Controller)
		return;

	auto PlayerState = (AFortPlayerState*)Controller->PlayerState;

	if (!PlayerState)
		return;

	auto AbilityComp = PlayerState->AbilitySystemComponent;

	if (!AbilityComp)
		return;

	for (const auto& InitialGameplayAbilitiesSet : AIBotGameplayAbilityBase->InitialGameplayAbilitiesSet)
	{
		AbilitySystemComponent::GiveAbilitySet(AbilityComp, InitialGameplayAbilitiesSet);
	}

	for (const auto& InitialGameplayEffect : AIBotGameplayAbilityBase->InitialGameplayEffect)
	{
		FGameplayEffectContextHandle EffectContext = AbilityComp->MakeEffectContext();

		AbilityComp->BP_ApplyGameplayEffectToSelf(InitialGameplayEffect.GameplayEffect, InitialGameplayEffect.Level, EffectContext);
	}
}

void FortAthenaAIBotController::AIBotSkillsetOnSpawned(UFortAthenaAISpawnerDataComponent_AIBotSkillset* AIBotSkillset, AFortPlayerPawn* Pawn)
{
	Log(L"UFortAthenaAISpawnerDataComponent_AIBotSkillset::OnSpawned");

	auto AIBotController = (AFortAthenaAIBotController*)Pawn->Controller;

	if (AIBotController && AIBotController->BotSkillSetClasses.Num() == 0)
	{
		if (AIBotSkillset->AimingSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->AimingSkillSet);

		if (AIBotSkillset->AttackingSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->AttackingSkillSet);

		if (AIBotSkillset->BuildingSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->BuildingSkillSet);

		if (AIBotSkillset->DBNOSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->DBNOSkillSet);

		if (AIBotSkillset->EmoteSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->EmoteSkillSet);

		if (AIBotSkillset->EvasiveManeuversSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->EvasiveManeuversSkillSet);

		if (AIBotSkillset->HarvestSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->HarvestSkillSet);

		if (AIBotSkillset->HealingSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->HealingSkillSet);

		if (AIBotSkillset->InventorySkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->InventorySkillSet);

		if (AIBotSkillset->LootingSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->LootingSkillSet);

		if (AIBotSkillset->MovementSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->MovementSkillSet);

		if (AIBotSkillset->PerceptionSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->PerceptionSkillSet);

		if (AIBotSkillset->PlayStyleSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->PlayStyleSkillSet);

		if (AIBotSkillset->PropagateAwarenessSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->PropagateAwarenessSkillSet);

		if (AIBotSkillset->RangeAttackSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->RangeAttackSkillSet);

		if (AIBotSkillset->ReviveSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->ReviveSkillSet);

		if (AIBotSkillset->UnstuckSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->UnstuckSkillSet);

		if (AIBotSkillset->VehicleSkillSet)
			AIBotController->BotSkillSetClasses.Add(AIBotSkillset->VehicleSkillSet);

		if (auto PlayerBotSkillset = AIBotSkillset->Cast<UFortAthenaAISpawnerDataComponent_PlayerBotSkillset>())
			if (PlayerBotSkillset->WarmUpSkillSet)
				AIBotController->BotSkillSetClasses.Add(PlayerBotSkillset->WarmUpSkillSet);
	}
}

void FortAthenaAIBotController::OnPawnAISpawned(__int64 ControllerIFaceThing, AFortPlayerPawn* Pawn)
{
	OnPawnAISpawnedOG(ControllerIFaceThing, Pawn);
}

void FortAthenaAIBotController::CreateAndConfigureNavigationSystem(UAthenaNavSystemConfig* ModuleConfig, UWorld* World)
{
	ModuleConfig->bPrioritizeNavigationAroundSpawners = true;
	ModuleConfig->bAutoSpawnMissingNavData = true;
	ModuleConfig->bLazyOctree = true;
	return CreateAndConfigureNavigationSystemOG(ModuleConfig, World);
}

FDigestedWeaponAccuracy* FortAthenaAIBotController::GetWeaponAccuracy(UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet, UFortWeaponItemDefinition* WeaponDefinition)
{

}

void FortAthenaAIBotController::SpawnAIs()
{
	SpawnAI(L"CRZ8", L"Ch4");
	SpawnAI(L"BaoBros", L"19");
	SpawnAI(L"Brainiac", L"19");
	SpawnAI(L"BuffLlama", L"19");
	SpawnAI(L"BunkerJonesy", L"19");
	SpawnAI(L"Cuddlepool", L"19");
	SpawnAI(L"CuddleTeamLeader", L"19");
	SpawnAI(L"ExoSuit", L"19");
	SpawnAI(L"Galactico", L"19");
	SpawnAI(L"Guaco", L"19");
	SpawnAI(L"IslandNomad", L"19");
	SpawnAI(L"JonesyTheFirst", L"19");
	SpawnAI(L"LilWhip", L"19");
	SpawnAI(L"LoneWolf", L"19");
	SpawnAI(L"Ludwig", L"19");
	SpawnAI(L"Mancake", L"19");
	SpawnAI(L"MetalTeamLeader", L"19");
	SpawnAI(L"MulletMarauder", L"19");
	SpawnAI(L"Quackling", L"19");
	SpawnAI(L"Ragsy", L"19");
	SpawnAI(L"TheScientist", L"19");
	SpawnAI(L"TheVisitor", L"19");
	SpawnAI(L"TomatoHead", L"19");

	SpawnAI(L"Binary", L"20");
	SpawnAI(L"Columbus", L"20");
	SpawnAI(L"Mystic", L"20");
	SpawnAI(L"Peely", L"20");
	SpawnAI(L"TheOrigin", L"20");

	SpawnAI(L"Cryptic", L"21");
	SpawnAI(L"Fishstick", L"21");
	SpawnAI(L"Kyle", L"21");
	SpawnAI(L"MoonHawk", L"21");
	SpawnAI(L"Rustler", L"21");
	SpawnAI(L"Stashd", L"21");
	SpawnAI(L"Sunbird", L"21");
	SpawnAI(L"TheParadigm", L"21");
}

__int64 FortAthenaAIBotController::WaitForGamePhaseToSpawn(UAthenaAIServicePlayerBots* AIServicePlayerBots, __int64* a2, __int64 a3)
{

	AIServicePlayerBots->GamePhaseToStartSpawning = EAthenaGamePhase::Warmup;

	return WaitForGamePhaseToSpawnOG(AIServicePlayerBots, a2, a3);
}

void FortAthenaAIBotController::InitializeMMRInfos()
{

}

void FortAthenaAIBotController::SpawnAIHook(UAthenaAIServicePlayerBots* AIServicePlayerBots, FFrame& Stack, APawn** Ret)
{
	FVector InSpawnLocation;
	FRotator InSpawnRotation;
	UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList;

	Stack.StepCompiledIn(&InSpawnLocation);
	Stack.StepCompiledIn(&InSpawnRotation);
	Stack.StepCompiledIn(&AISpawnerComponentList);

	Stack.IncrementCode();

	FTransform SpawnTransform;
	SpawnTransform.Translation = InSpawnLocation;
	SpawnTransform.Rotation = InSpawnRotation;
	SpawnTransform.Scale3D = FVector(1, 1, 1);

	int32 RequestId = ((UFortAISystem*)AIServicePlayerBots->AIServiceManager->AISystem)->AISpawner->RequestSpawn(AISpawnerComponentList, SpawnTransform, false);

	*Ret = nullptr;
}

UFortAthenaAIBotAimingDigestedSkillSet* FortAthenaAIBotController::GetOrCreateDigestedAimingSkillSet(AFortAthenaAIBotController* AIBotController)
{
	Log(L"GetOrCreateDigestedAimingSkillSet RetAddr: 0x%p", LPVOID(Sarah::Offsets::ImageBase - __int64(_ReturnAddress())));

	if (AIBotController)
	{
		TSubclassOf<UFortAthenaAIBotSkillSet>* ClassToGet = AIBotController->BotSkillSetClasses.Search([&](TSubclassOf<UFortAthenaAIBotSkillSet> SkillSetClass) { return SkillSetClass->IsSubclassOf(UFortAthenaAIBotAimingSkillSet::StaticClass()); });

		if (ClassToGet)
		{
			UClass* Class = *ClassToGet;

			static UFortAthenaAIBotDigestedSkillSet* (*GetOrCreateDigestedSkillSetByClass)(AFortAthenaAIBotController * AIBotController, UClass * InClass, bool a3, wchar_t** OutError);

			return GetOrCreateDigestedSkillSetByClass(AIBotController, Class, false, nullptr)->Cast<UFortAthenaAIBotAimingDigestedSkillSet>();
		}
	}

	return UFortAthenaAIBotAimingDigestedSkillSet::GetDefaultObj();
}

void FortAthenaAIBotController::GetLoadout(UFortAthenaAISpawnerDataComponent_CosmeticLibrary* CosmeticLibrary, FFortAthenaLoadout* OutCosmeticLoadout)
{

}

void FortAthenaAIBotController::GetDances(UFortAthenaAISpawnerDataComponent_CosmeticLibrary* CosmeticLibrary, TArray<UAthenaDanceItemDefinition*>* OutDances, AFortAthenaAIBotController* BotController)
{

}

void FortAthenaAIBotController::Hook()
{

	Utils::Hook(Sarah::Offsets::ImageBase + 0x2145F48, CreateAndConfigureNavigationSystem, CreateAndConfigureNavigationSystemOG);

	UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"log LogAthenaAIServiceBots VeryVerbose", nullptr);
	UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"log LogAthenaBots VeryVerbose", nullptr);
	UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"log LogAISpawnerData VeryVerbose", nullptr);

}
