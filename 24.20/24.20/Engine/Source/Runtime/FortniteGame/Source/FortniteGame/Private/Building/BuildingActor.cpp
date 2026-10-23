#include "pch.h"
#include "../../Public/Building/BuildingActor.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortInventory.h"

namespace
{
	constexpr int32 BuildCost = 10;

	auto TeamOf(AFortPlayerController* Controller)
	{
		return ((AFortPlayerStateAthena*)Controller->PlayerState)->TeamIndex;
	}

	void AssignTeam(ABuildingActor* Building, AFortPlayerController* Controller)
	{
		Building->TeamIndex = TeamOf(Controller);
		Building->Team = EFortTeam(Building->TeamIndex);
	}

	void ClaimBuilding(ABuildingSMActor* Building, AFortPlayerController* Controller)
	{
		Building->bPlayerPlaced = true;
		Building->InitializeKismetSpawnedBuildingActor(Building, Controller, true, nullptr);
		AssignTeam(Building, Controller);
	}

	FFortItemEntry* FindResourceEntry(AFortPlayerController* Controller, EFortResourceType ResourceType)
	{
		return FortInventory::FindEntry(Controller, UFortKismetLibrary::K2_GetResourceItemDefinition(ResourceType));
	}

	bool CannotBuildAt(UClass* BuildClass, FVector Location, FRotator Rotation, bool bMirrored, TArray<ABuildingSMActor*>& Overlapping)
	{
		static auto CantBuild = (__int64(*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*>*, char*))(Sarah::Offsets::ImageBase + 0xA0D0A24);

		char Unused;
		return CantBuild(UWorld::GetWorld(), BuildClass, Location, Rotation, bMirrored, &Overlapping, &Unused) != 0;
	}

	void DestroyAll(TArray<ABuildingSMActor*>& Buildings)
	{
		for (auto& Building : Buildings)
			Building->K2_DestroyActor();

		Buildings.Free();
	}

	ABuildingSMActor* SpawnBuilding(UClass* BuildClass, FVector Location, FRotator Rotation, AFortPlayerController* Owner)
	{
		auto Deferred = Utils::SpawnActorUnfinished<ABuildingSMActor>(BuildClass, Location, Rotation, Owner);
		return Utils::FinishSpawnActor<ABuildingSMActor>(Deferred, Location, Rotation);
	}

	void RememberEditor(TWeakObjectPtr<AController>& Slot, AFortPlayerController* Controller)
	{
		Slot.ObjectIndex = Controller->Index;
		Slot.ObjectSerialNumber = UObject::GObjects->GetItemByIndex(Controller->Index)->SerialNumber;
	}

	void SetEditingPlayer(ABuildingSMActor* Building, AFortPlayerStateZone* NewEditor)
	{
		if (Building->Role != ENetRole::ROLE_Authority)
			return;

		if (Building->EditingPlayer && NewEditor)
			return;

		auto& LastEditor = *(TWeakObjectPtr<AController>*)(__int64(Building) + offsetof(ABuildingSMActor, EditingPlayer) + sizeof(void*));

		Building->SetNetDormancy(ENetDormancy(2 - (NewEditor != nullptr)));
		Building->ForceNetUpdate();

		AFortPlayerStateZone* CurrentEditor = Building->EditingPlayer;
		if (CurrentEditor)
		{
			AActor* EditorOwner = CurrentEditor->Owner;
			AFortPlayerController* EditorController = EditorOwner ? EditorOwner->Cast<AFortPlayerController>() : nullptr;
			if (EditorController)
			{
				RememberEditor(LastEditor, EditorController);
				Building->EditingPlayer = NewEditor;
			}
			return;
		}

		if (!NewEditor)
		{
			Building->EditingPlayer = NewEditor;
			return;
		}

		AFortPlayerController* NewController = NewEditor->Owner->Cast<AFortPlayerController>();
		if (NewController)
		{
			RememberEditor(LastEditor, NewController);
			Building->EditingPlayer = NewEditor;
		}
	}

	void EquipEditTool(AFortPlayerController* Controller, ABuildingSMActor* Target)
	{
		FFortItemEntry* ToolEntry = FortInventory::FindEntryIf(Controller, [](FFortItemEntry& Entry) {
			return Entry.ItemDefinition->IsA<UFortEditToolItemDefinition>();
			});
		if (!ToolEntry)
			return;

		AFortPlayerPawn* Pawn = Controller->MyFortPawn;
		Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ToolEntry->ItemDefinition, ToolEntry->ItemGuid, ToolEntry->TrackerGuid, false);

		if (!Pawn->CurrentWeapon)
			return;

		if (auto EditTool = Pawn->CurrentWeapon->Cast<AFortWeap_EditingTool>())
		{
			EditTool->EditActor = Target;
			EditTool->OnRep_EditActor();
		}
	}

	UFortDecoItemDefinition* ResolveDecoDefinition(AFortDecoTool* Tool, EBuildingAttachmentType AttachmentType)
	{
		auto Definition = (UFortDecoItemDefinition*)Tool->ItemDefinition;

		auto ContextTool = Tool->Cast<AFortDecoTool_ContextTrap>();
		if (!ContextTool)
			return Definition;

		switch ((int)AttachmentType)
		{
		case 0:
		case 6:
			Definition = ContextTool->ContextTrapItemDefinition->FloorTrap;
			break;
		case 7:
		case 2:
			Definition = ContextTool->ContextTrapItemDefinition->CeilingTrap;
			break;
		case 1:
			Definition = ContextTool->ContextTrapItemDefinition->WallTrap;
			break;
		case 8:
			Definition = ContextTool->ContextTrapItemDefinition->StairTrap;
			break;
		}

		return Definition;
	}

	EFortBuildingType BuildingTypeForAttachment(EBuildingAttachmentType AttachmentType)
	{
		if (uint8(AttachmentType) <= 7)
		{
			LONG FloorMask = 0xC5;
			if (BitTest(&FloorMask, uint8(AttachmentType)))
				return EFortBuildingType::Floor;
		}

		if (AttachmentType == EBuildingAttachmentType::ATTACH_Wall)
			return EFortBuildingType::Wall;

		return EFortBuildingType::None;
	}

	void RewardPickaxeResources(ABuildingSMActor* Target, float Damage, FGameplayTagContainer& DamageTags, AFortPlayerControllerAthena* Instigator, AActor* Causer)
	{
		auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;

		if (!Instigator || Target->bPlayerPlaced || Target->GetHealth() == 1)
			return;

		if (Target->IsA(UObject::FindClassFast("B_Athena_VendingMachine_C")) || Target->IsA(GameState->MapInfo->LlamaClass))
			return;

		if (!Causer || !Causer->IsA<AFortWeapon>() || !((AFortWeapon*)Causer)->WeaponData->IsA<UFortWeaponMeleeItemDefinition>())
			return;

		static auto PickaxeTag = FName(L"Weapon.Melee.Impact.Pickaxe");
		auto PickaxeHit = DamageTags.GameplayTags.Search([](FGameplayTag& Tag) {
			return Tag.TagName.ComparisonIndex == PickaxeTag.ComparisonIndex;
			});
		if (!PickaxeHit)
			return;

		auto Resource = UFortKismetLibrary::K2_GetResourceItemDefinition(Target->ResourceType);
		if (!Resource)
			return;

		const int32 StackLimit = (int32)Utils::EvaluateScalableFloat(Resource->MaxStackSize);

		int ResourceCount = 0;
		if (Target->BuildingResourceAmountOverride.CurveTable && Target->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0)
		{
			float CurveValue;
			UDataTableFunctionLibrary::EvaluateCurveTableRow(Target->BuildingResourceAmountOverride.CurveTable, Target->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &CurveValue, FString());

			float Scaled = CurveValue / (Target->GetMaxHealth() / Damage);
			ResourceCount = (int)round(Scaled);
		}

		if (ResourceCount > 0)
		{
			auto InstigatorLocation = Instigator->Pawn->K2_GetActorLocation();
			FFortItemEntry* Owned = FortInventory::FindEntry(Instigator, Resource);

			if (Owned)
			{
				Owned->Count += ResourceCount;
				if (Owned->Count > StackLimit)
				{
					FortInventory::SpawnPickup(InstigatorLocation, Owned->ItemDefinition, Owned->Count - StackLimit, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, Instigator->MyFortPawn);
					Owned->Count = StackLimit;
				}

				FortInventory::ReplaceEntry(Instigator, *Owned);
			}
			else
			{
				if (ResourceCount > StackLimit)
				{
					FortInventory::SpawnPickup(InstigatorLocation, Resource, ResourceCount - StackLimit, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, Instigator->MyFortPawn);
					ResourceCount = StackLimit;
				}

				FortInventory::GiveItem(Instigator, Resource, ResourceCount, 0, 0, false);
			}
		}

		Instigator->ClientReportDamagedResourceBuilding(Target, ResourceCount == 0 ? EFortResourceType::None : Target->ResourceType, ResourceCount, false, Damage == 100.f);
	}
}

bool BuildingActor::CanBePlacedByPlayer(UClass* BuildClass)
{
	auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;
	return GameState->AllPlayerBuildableClasses.Search([BuildClass](UClass* Class) { return Class == BuildClass; });
}

void BuildingActor::ForwardCreateBuildingActor(AFortPlayerController* PlayerController, FCreateBuildingActorData& CreateData)
{
	callOG(PlayerController, L"/Script/FortniteGame.FortPlayerController", ServerCreateBuildingActor, CreateData);
}

void BuildingActor::ServerCreateBuildingActor(UObject* Context, FFrame& Stack)
{
	FCreateBuildingActorData CreateData;
	Stack.StepCompiledIn(&CreateData);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController)
		return;

	auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;
	auto ClassSlot = GameState->AllPlayerBuildableClassesIndexLookup.SearchForKey([&](UClass* Class, int32 Handle) {
		return Handle == CreateData.BuildingClassHandle;
		});
	if (!ClassSlot)
		return ForwardCreateBuildingActor(PlayerController, CreateData);

	UClass* BuildClass = *ClassSlot;

	TArray<ABuildingSMActor*> Overlapping;
	if (CannotBuildAt(BuildClass, CreateData.BuildLoc, CreateData.BuildRot, CreateData.bMirrored, Overlapping))
		return ForwardCreateBuildingActor(PlayerController, CreateData);

	FFortItemEntry* Cost = FindResourceEntry(PlayerController, ((ABuildingSMActor*)BuildClass->DefaultObject)->ResourceType);
	if (!Cost || Cost->Count < BuildCost)
		return ForwardCreateBuildingActor(PlayerController, CreateData);

	FortInventory::Consume(PlayerController, Cost, BuildCost);
	DestroyAll(Overlapping);

	ABuildingSMActor* Building = SpawnBuilding(BuildClass, CreateData.BuildLoc, CreateData.BuildRot, PlayerController);
	if (!Building)
		return;

	ClaimBuilding(Building, PlayerController);

	if (auto ControllerAthena = PlayerController->Cast<AFortPlayerControllerAthena>())
		ControllerAthena->BuildingsCreated++;

	ForwardCreateBuildingActor(PlayerController, CreateData);
}

void BuildingActor::ServerBeginEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building)
		return;

	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
	if (!PlayerState || Building->TeamIndex != PlayerState->TeamIndex)
		return;

	SetEditingPlayer(Building, PlayerState);
	EquipEditTool(PlayerController, Building);
}

void BuildingActor::ServerEditBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	TSubclassOf<ABuildingSMActor> NewClass;
	uint8 RotationIterations;
	bool bMirrored;
	Stack.StepCompiledIn(&Building);
	Stack.StepCompiledIn(&NewClass);
	Stack.StepCompiledIn(&RotationIterations);
	Stack.StepCompiledIn(&bMirrored);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !Building || !NewClass || !Building->IsA<ABuildingSMActor>())
		return;

	if (!CanBePlacedByPlayer(NewClass) || Building->TeamIndex != TeamOf(PlayerController))
		return;

	SetEditingPlayer(Building, nullptr);

	static auto ReplaceBuildingActor = (ABuildingSMActor * (*)(ABuildingSMActor*, unsigned int, UObject*, unsigned int, int, bool, AFortPlayerController*))(Sarah::Offsets::ImageBase + 0x9CB8FD8);

	ABuildingSMActor* Replacement = ReplaceBuildingActor(Building, 1, NewClass, Building->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController);
	if (Replacement)
		Replacement->bPlayerPlaced = true;
}

void BuildingActor::ServerEndEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building)
		return;

	if (Building->EditingPlayer != (AFortPlayerStateZone*)PlayerController->PlayerState)
		return;

	if (Building->TeamIndex != TeamOf(PlayerController) || Building->bDestroyed)
		return;

	SetEditingPlayer(Building, nullptr);
	EquipEditTool(PlayerController, nullptr);
}

void BuildingActor::ServerRepairBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !Building)
		return;

	FFortItemEntry* Cost = FindResourceEntry(PlayerController, Building->ResourceType);
	if (!Cost)
		return;

	int32 Price = (int32)std::floor((10.f * (1.f - Building->GetHealthPercent())) * 0.75f);
	FortInventory::Consume(PlayerController, Cost, Price);

	Building->RepairBuilding(PlayerController, Price);

	if (auto ControllerAthena = PlayerController->Cast<AFortPlayerControllerAthena>())
		ControllerAthena->BuildingsRepaired++;
}

void BuildingActor::OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	RewardPickaxeResources(Actor, Damage, DamageTags, InstigatedBy, DamageCauser);
	OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void BuildingActor::ServerSpawnDeco(UObject* Context, FFrame& Stack)
{
	FVector Location;
	FRotator Rotation;
	ABuildingSMActor* AttachedActor;
	EBuildingAttachmentType AttachmentType;
	Stack.StepCompiledIn(&Location);
	Stack.StepCompiledIn(&Rotation);
	Stack.StepCompiledIn(&AttachedActor);
	Stack.StepCompiledIn(&AttachmentType);
	Stack.IncrementCode();

	auto DecoTool = (AFortDecoTool*)Context;
	UFortDecoItemDefinition* Definition = ResolveDecoDefinition(DecoTool, AttachmentType);

	auto Trap = Utils::SpawnActorUnfinished<ABuildingActor>(Definition->BlueprintClass.Get(), Location, Rotation, AttachedActor);
	AttachedActor->AttachBuildingActorToMe(Trap, true);
	AttachedActor->bHiddenDueToTrapPlacement = Definition->bReplacesBuildingWhenPlaced;
	if (Definition->bReplacesBuildingWhenPlaced)
		AttachedActor->bActorEnableCollision = false;
	AttachedActor->ForceNetUpdate();

	auto Pawn = (APawn*)DecoTool->Owner;
	if (!Pawn)
		return;

	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController)
		return;

	FFortItemEntry* ToolEntry = FortInventory::FindEntry(PlayerController, DecoTool->ItemDefinition);
	if (!ToolEntry)
		return;

	FortInventory::Consume(PlayerController, ToolEntry, 1);

	if (Trap->TeamIndex != TeamOf(PlayerController))
		AssignTeam(Trap, PlayerController);

	Utils::FinishSpawnActor(Trap, Location, Rotation);
}

void BuildingActor::ServerCreateBuildingAndSpawnDeco(UObject* Context, FFrame& Stack)
{
	FVector_NetQuantize10 BuildingLocation;
	FRotator BuildingRotation;
	FVector_NetQuantize10 Location;
	FRotator Rotation;
	EBuildingAttachmentType AttachmentType;
	bool bSpawnDecoOnExtraPiece;
	FVector BuildingExtraPieceLocation;
	Stack.StepCompiledIn(&BuildingLocation);
	Stack.StepCompiledIn(&BuildingRotation);
	Stack.StepCompiledIn(&Location);
	Stack.StepCompiledIn(&Rotation);
	Stack.StepCompiledIn(&AttachmentType);
	Stack.StepCompiledIn(&bSpawnDecoOnExtraPiece);
	Stack.StepCompiledIn(&BuildingExtraPieceLocation);
	Stack.IncrementCode();

	auto Tool = (AFortDecoTool*)Context;
	auto Pawn = (APawn*)Tool->Owner;
	if (!Pawn)
		return;

	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController)
		return;

	UFortDecoItemDefinition* Definition = ResolveDecoDefinition(Tool, AttachmentType);

	TArray<UBuildingEditModeMetadata*> AttachmentShapes;
	for (auto& Shape : Definition->AutoCreateAttachmentBuildingShapes)
		AttachmentShapes.Add(Shape);

	bool bIgnoreAffordCheck = UFortKismetLibrary::DoesItemDefinitionHaveGameplayTag(Definition, FGameplayTag(FName(L"Trap.ExtraPiece.Cost.Ignore")));

	TSubclassOf<ABuildingSMActor> FoundClass;
	auto FindBuildingClass = (TSubclassOf<ABuildingSMActor> * (*)(AFortPlayerController*, TSubclassOf<ABuildingSMActor>*, EFortBuildingType, TArray<UBuildingEditModeMetadata*>*, bool, EFortResourceType))(Sarah::Offsets::ImageBase + 0x71ffa08);
	FindBuildingClass(PlayerController, &FoundClass, BuildingTypeForAttachment(AttachmentType), &AttachmentShapes, bIgnoreAffordCheck, Definition->AutoCreateAttachmentBuildingResourceType);

	UClass* BuildClass = FoundClass.Get();
	if (!BuildClass)
		return;

	TArray<ABuildingSMActor*> Overlapping;
	if (CannotBuildAt(BuildClass, BuildingLocation, BuildingRotation, false, Overlapping))
		return;

	FFortItemEntry* Cost = FindResourceEntry(PlayerController, ((ABuildingSMActor*)BuildClass->DefaultObject)->ResourceType);
	if (!Cost)
		return;

	FortInventory::Consume(PlayerController, Cost, BuildCost);
	DestroyAll(Overlapping);

	ABuildingSMActor* Building = SpawnBuilding(BuildClass, BuildingLocation, BuildingRotation, PlayerController);
	if (!Building)
		return;

	ClaimBuilding(Building, PlayerController);
	Tool->ServerSpawnDeco(Location, Rotation, Building, AttachmentType);
}

void BuildingActor::Hook()
{
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor", ServerCreateBuildingActor, ServerCreateBuildingActorOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor", ServerBeginEditingBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor", ServerEditBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor", ServerEndEditingBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerRepairBuildingActor", ServerRepairBuildingActor);
	Utils::Hook(Sarah::Offsets::ImageBase + 0x9C2879C, OnDamageServer, OnDamageServerOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortDecoTool.ServerSpawnDeco", ServerSpawnDeco, ServerSpawnDecoOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortDecoTool.ServerCreateBuildingAndSpawnDeco", ServerCreateBuildingAndSpawnDeco);
	Utils::ExecHook(L"/Script/FortniteGame.FortDecoTool_ContextTrap.ServerSpawnDeco_Implementation", ServerSpawnDeco, ServerSpawnDecoOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortDecoTool_ContextTrap.ServerCreateBuildingAndSpawnDeco", ServerCreateBuildingAndSpawnDeco);
}
