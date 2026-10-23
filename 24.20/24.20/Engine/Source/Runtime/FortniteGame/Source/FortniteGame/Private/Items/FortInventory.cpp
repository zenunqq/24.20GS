#include "pch.h"
#include "../../Public/Items/FortInventory.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Athena/FortPlayerControllerAthena.h"

namespace
{
	void FillPickupEntry(AFortPickupAthena* Pickup, const FFortItemEntry& Source, int32 CountOverride, bool bCopyPhantomAmmo)
	{
		FFortItemEntry& Target = Pickup->PrimaryPickupItemEntry;
		Target.ItemDefinition = Source.ItemDefinition;
		Target.LoadedAmmo = Source.LoadedAmmo;
		Target.Count = CountOverride != -1 ? CountOverride : Source.Count;
		if (bCopyPhantomAmmo)
			Target.PhantomReserveAmmo = Source.PhantomReserveAmmo;

		Pickup->OnRep_PrimaryPickupItemEntry();
	}

	bool IsOverflowItem(UFortItemDefinition* ItemDefinition)
	{
		if (ItemDefinition->ItemType == EFortItemType::WeaponHarvest)
			return true;

		if (ItemDefinition->IsA<UFortResourceItemDefinition>() || ItemDefinition->IsA<UFortAmmoItemDefinition>())
			return true;

		if (ItemDefinition->IsA<UFortTrapItemDefinition>() || ItemDefinition->IsA<UFortBuildingItemDefinition>())
			return true;

		if (ItemDefinition->IsA<UFortEditToolItemDefinition>())
			return true;

		return ((UFortWorldItemDefinition*)ItemDefinition)->bForceIntoOverflow;
	}
}

FFortRangedWeaponStats* FortInventory::GetStats(UFortWeaponItemDefinition* WeaponDefinition)
{
	if (!WeaponDefinition || !WeaponDefinition->WeaponStatHandle.DataTable)
		return nullptr;

	auto Row = WeaponDefinition->WeaponStatHandle.DataTable->RowMap.Search([&](FName& Key, uint8_t* Value) {
		return WeaponDefinition->WeaponStatHandle.RowName == Key && Value;
		});

	return Row ? *(FFortRangedWeaponStats**)Row : nullptr;
}

int FortInventory::GetLevel(const FDataTableCategoryHandle& CategoryHandle)
{
	if (!CategoryHandle.DataTable || !CategoryHandle.ColumnName || !CategoryHandle.RowContents.ComparisonIndex)
		return 0;

	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	int HighestLevel = 0;
	FFortLootLevelData* Best = nullptr;
	for (auto& Row : (TMap<FName, FFortLootLevelData*>)CategoryHandle.DataTable->RowMap)
	{
		FFortLootLevelData* Candidate = Row.Value();
		if (Candidate->category != CategoryHandle.RowContents)
			continue;

		if (Candidate->LootLevel > GameState->WorldLevel || Candidate->LootLevel <= HighestLevel)
			continue;

		HighestLevel = Candidate->LootLevel;
		Best = Candidate;
	}

	if (!Best)
		return 0;

	int Span = Best->MaxItemLevel - Best->MinItemLevel;
	if (Span <= -1)
	{
		Span = 0;
	}
	else
	{
		int Roll = (int)(((float)rand() / 32767) * (float)(Span + 1));
		if (Roll <= Span)
			Span = Roll;
	}

	return Span + Best->MinItemLevel;
}

FFortItemEntry* FortInventory::MakeItemEntry(UFortItemDefinition* ItemDefinition, int32 Count, int32 Level)
{
	FFortItemEntry* Entry = new FFortItemEntry();

	Entry->MostRecentArrayReplicationKey = -1;
	Entry->ReplicationID = -1;
	Entry->ReplicationKey = -1;

	Entry->ItemDefinition = ItemDefinition;
	Entry->Count = Count;
	Entry->Level = Level;
	Entry->Durability = 1.f;
	Entry->GameplayAbilitySpecHandle = FGameplayAbilitySpecHandle(-1);
	Entry->ParentInventory.ObjectIndex = -1;

	auto Weapon = ItemDefinition->IsA<UFortGadgetItemDefinition>() ? ((UFortGadgetItemDefinition*)ItemDefinition)->GetWeaponItemDefinition() : ItemDefinition->Cast<UFortWeaponItemDefinition>();
	if (Weapon)
	{
		FFortRangedWeaponStats* Stats = GetStats(Weapon);
		if (Stats)
		{
			Entry->LoadedAmmo = Stats->ClipSize;
			if (Weapon->bUsesPhantomReserveAmmo)
				Entry->PhantomReserveAmmo = Stats->InitialClips * Stats->ClipSize;
		}
	}

	return Entry;
}

EFortQuickBars FortInventory::GetQuickbar(UFortItemDefinition* ItemDefinition)
{
	if (!ItemDefinition)
		return EFortQuickBars::Max_None;

	return IsOverflowItem(ItemDefinition) ? EFortQuickBars::Secondary : EFortQuickBars::Primary;
}

FFortItemEntry* FortInventory::FindEntry(AFortPlayerController* Controller, UFortItemDefinition* ItemDefinition)
{
	return FindEntryIf(Controller, [&](FFortItemEntry& Entry) {
		return Entry.ItemDefinition == ItemDefinition;
		});
}

FFortItemEntry* FortInventory::FindEntry(AFortPlayerController* Controller, FGuid ItemGuid)
{
	return FindEntryIf(Controller, [&](FFortItemEntry& Entry) {
		return Entry.ItemGuid == ItemGuid;
		});
}

int32 FortInventory::Consume(AFortPlayerController* Controller, FFortItemEntry* Entry, int32 Amount, bool bRemoveGadgets)
{
	int32 Removed = Amount;
	Entry->Count -= Amount;

	const bool bDepleted = Entry->Count <= 0 || (bRemoveGadgets && Entry->ItemDefinition->IsA<UFortGadgetItemDefinition>());
	if (bDepleted)
	{
		Removed += Entry->Count;
		Remove(Controller, Entry->ItemGuid);
	}
	else
	{
		ReplaceEntry(Controller, *Entry);
	}

	return Removed;
}

void FortInventory::TriggerInventoryUpdate(AFortPlayerController* PlayerController, FFortItemEntry* Entry)
{
	if (!PlayerController)
		return;

	AFortInventory* WorldInventory = PlayerController->WorldInventory;
	WorldInventory->bRequiresLocalUpdate = true;
	WorldInventory->HandleInventoryLocalUpdate();

	if (Entry)
		WorldInventory->Inventory.MarkItemDirty(*Entry);
	else
		WorldInventory->Inventory.MarkArrayDirty();
}

UFortWorldItem* FortInventory::GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, int Level, bool ShowPickupNoti, bool UpdateInventory, int PhantomReserveAmmo)
{
	if (!PlayerController || !ItemDefinition || !Count)
		return nullptr;

	UFortWorldItem* WorldItem = (UFortWorldItem*)ItemDefinition->CreateTemporaryItemInstanceBP(Count, Level);
	WorldItem->SetOwningControllerForTemporaryItem(PlayerController);
	WorldItem->ItemEntry.LoadedAmmo = LoadedAmmo;
	WorldItem->ItemEntry.PhantomReserveAmmo = PhantomReserveAmmo;

	if (ItemDefinition->IsA<UFortAmmoItemDefinition>() || ItemDefinition->IsA<UFortResourceItemDefinition>())
	{
		FFortItemEntryStateValue ToastState{};
		ToastState.IntValue = ShowPickupNoti;
		ToastState.StateType = EFortItemEntryState::ShouldShowItemToast;
		WorldItem->ItemEntry.StateValues.Add(ToastState);
	}

	AFortInventory* WorldInventory = PlayerController->WorldInventory;
	WorldInventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
	WorldInventory->Inventory.ItemInstances.Add(WorldItem);

	auto OnItemAdded = (bool(*)(UFortItemDefinition*, IInterface*, UFortWorldItem*, uint8)) ItemDefinition->VTable[0x8f];
	OnItemAdded(ItemDefinition, Utils::GetInterface<IFortInventoryOwnerInterface>(PlayerController), WorldItem, 1);

	if (UpdateInventory)
		TriggerInventoryUpdate(PlayerController, &WorldItem->ItemEntry);

	return WorldItem;
}

UFortWorldItem* FortInventory::GiveItem(AFortPlayerController* PlayerController, FFortItemEntry Entry, int Count, bool ShowPickupNoti, bool UpdateInventory)
{
	if (Count == -1)
		Count = Entry.Count;

	return GiveItem(PlayerController, Entry.ItemDefinition, Count, Entry.LoadedAmmo, Entry.Level, ShowPickupNoti, UpdateInventory, Entry.PhantomReserveAmmo);
}

AFortPickupAthena* FortInventory::SpawnPickup(FVector Location, FFortItemEntry& Entry, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, AFortPlayerPawn* Pawn, int OverrideCount, bool Toss, bool RandomRotation, bool Combine)
{
	AFortPickupAthena* Pickup = Utils::SpawnActor<AFortPickupAthena>(Location, {});
	if (!Pickup)
		return nullptr;

	Pickup->bRandomRotation = RandomRotation;
	FillPickupEntry(Pickup, Entry, OverrideCount, true);
	Pickup->PawnWhoDroppedPickup = Pawn;

	Pickup->TossPickup(Location, Pawn, -1, Toss, true, SourceTypeFlag, SpawnSource);

	Pickup->bTossedFromContainer = SpawnSource == EFortPickupSpawnSource::Chest || SpawnSource == EFortPickupSpawnSource::AmmoBox;
	if (Pickup->bTossedFromContainer)
		Pickup->OnRep_TossedFromContainer();

	return Pickup;
}

AFortPickupAthena* FortInventory::SpawnPickup(FVector Location, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, AFortPlayerPawn* Pawn, bool Toss, bool RandomRotation)
{
	FFortItemEntry* Entry = MakeItemEntry(ItemDefinition, Count, 0);
	return SpawnPickup(Location, *Entry, SourceTypeFlag, SpawnSource, Pawn, -1, Toss, true, RandomRotation);
}

AFortPickupAthena* FortInventory::SpawnPickup(ABuildingContainer* Container, FFortItemEntry Entry, AFortPlayerPawn* Pawn, int OverrideCount)
{
	auto Origin = Container->K2_GetActorLocation();
	auto Location = Origin
		+ (Container->GetActorForwardVector() * Container->LootSpawnLocation_Athena.X)
		+ (Container->GetActorRightVector() * Container->LootSpawnLocation_Athena.Y)
		+ (Container->GetActorUpVector() * Container->LootSpawnLocation_Athena.Z);

	AFortPickupAthena* Pickup = Utils::SpawnActor<AFortPickupAthena>(Location, {});
	if (!Pickup)
		return nullptr;

	Pickup->bRandomRotation = true;
	FillPickupEntry(Pickup, Entry, OverrideCount, false);
	Pickup->PawnWhoDroppedPickup = Pawn;

	FRotator TossDirection;
	TossDirection.Pitch = Container->LootTossDirection_Athena.Pitch;
	TossDirection.Roll = Container->LootTossDirection_Athena.Roll;
	TossDirection.Yaw = Container->LootTossDirection_Athena.Yaw;
	UFortKismetLibrary::TossPickupFromContainer(UWorld::GetWorld(), Container, Pickup, 1, 0, Container->LootTossConeHalfAngle_Athena, TossDirection, Container->LootTossSpeed_Athena, false);

	Pickup->bTossedFromContainer = true;
	Pickup->OnRep_TossedFromContainer();

	return Pickup;
}

void FortInventory::ReplaceEntry(AFortPlayerController* PlayerController, FFortItemEntry& Entry)
{
	if (!PlayerController)
		return;

	auto Instance = PlayerController->WorldInventory->Inventory.ItemInstances.Search([&](UFortWorldItem* Item) {
		return Item->ItemEntry.ItemGuid == Entry.ItemGuid;
		});
	if (Instance)
		(*Instance)->ItemEntry = Entry;

	TriggerInventoryUpdate(PlayerController, &Entry);
}

void FortInventory::Remove(AFortPlayerController* PlayerController, FGuid ItemGuid)
{
	if (!PlayerController)
		return;

	auto& ItemList = PlayerController->WorldInventory->Inventory;

	int32 EntryIndex = ItemList.ReplicatedEntries.SearchIndex([&](FFortItemEntry& Entry) {
		return Entry.ItemGuid == ItemGuid;
		});
	if (EntryIndex != -1)
		ItemList.ReplicatedEntries.Remove(EntryIndex);

	int32 InstanceIndex = ItemList.ItemInstances.SearchIndex([&](UFortWorldItem* Instance) {
		return Instance->ItemEntry.ItemGuid == ItemGuid;
		});

	UFortWorldItem* RemovedInstance = nullptr;
	if (InstanceIndex != -1)
	{
		RemovedInstance = ItemList.ItemInstances[InstanceIndex];
		ItemList.ItemInstances.Remove(InstanceIndex);
	}

	if (RemovedInstance && RemovedInstance->ItemEntry.ItemDefinition)
	{
		UFortItemDefinition* Definition = RemovedInstance->ItemEntry.ItemDefinition;
		auto OnItemRemoved = (bool(*)(UFortItemDefinition*, IInterface*, UFortWorldItem*)) Definition->VTable[0x90];
		OnItemRemoved(Definition, Utils::GetInterface<IFortInventoryOwnerInterface>(PlayerController), RemovedInstance);
	}

	TriggerInventoryUpdate(PlayerController, nullptr);
}

void FortInventory::GiveItemToInventoryOwner(UObject* Context, FFrame& Stack)
{
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
	UFortWorldItemDefinition* ItemDefinition;
	FGuid ItemVariantGuid;
	int32 NumberToGive;
	bool bNotifyPlayer;
	int32 ItemLevel;
	int32 PickupInstigatorHandle;
	bool bUseItemPickupAnalyticEvent;
	Stack.StepCompiledIn(&InventoryOwner);
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&ItemVariantGuid);
	Stack.StepCompiledIn(&NumberToGive);
	Stack.StepCompiledIn(&bNotifyPlayer);
	Stack.StepCompiledIn(&ItemLevel);
	Stack.StepCompiledIn(&PickupInstigatorHandle);
	Stack.StepCompiledIn(&bUseItemPickupAnalyticEvent);
	Stack.IncrementCode();

	auto PlayerController = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
	FFortItemEntry* Entry = MakeItemEntry(ItemDefinition, NumberToGive, ItemLevel);
	FortPlayerControllerAthena::InternalPickup(PlayerController, *Entry);
}

bool FortInventory::ServerRemoveInventoryItem(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid, int Count, bool bForceRemoval, bool bForcePersistWhenEmpty)
{
	FFortItemEntry* Entry = FindEntry(PlayerController, ItemGuid);
	if (!Entry)
		return false;

	Consume(PlayerController, Entry, Count);
	return true;
}

bool FortInventory::RemoveInventoryItem(__int64 InterfaceAddress, FGuid ItemGuid, int Count, bool bForceRemoval)
{
	return ServerRemoveInventoryItem((AFortPlayerControllerAthena*)(InterfaceAddress - 2224), ItemGuid, Count, bForceRemoval, 0);
}

bool FortInventory::AddItemToInventoryOwner(UFortItemEntryComponent* Component, TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, bool bUseItemPickupAnalyticEvent)
{
	FortPlayerControllerAthena::InternalPickup((AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer, Component->OwnedItemEntry);
	return true;
}

int32 FortInventory::K2_RemoveItemFromPlayer(UObject* Context, FFrame& Stack, int32* Result)
{
	AFortPlayerControllerAthena* PlayerController;
	UFortWorldItemDefinition* ItemDefinition;
	FGuid ItemVariantGuid;
	int32 AmountToRemove;
	bool bForceRemoval;
	Stack.StepCompiledIn(&PlayerController);
	Stack.StepCompiledIn(&ItemDefinition);
	Stack.StepCompiledIn(&ItemVariantGuid);
	Stack.StepCompiledIn(&AmountToRemove);
	Stack.StepCompiledIn(&bForceRemoval);
	Stack.IncrementCode();

	if (!PlayerController)
		return *Result = 0;

	FFortItemEntry* Entry = FindEntry(PlayerController, ItemDefinition);
	if (!Entry)
		return *Result = 0;

	return *Result = Consume(PlayerController, Entry, AmountToRemove, true);
}

int32 FortInventory::K2_RemoveItemFromPlayerByGuid(UObject* Context, FFrame& Stack, int32* Result)
{
	AFortPlayerControllerAthena* PlayerController;
	FGuid ItemGuid;
	int32 AmountToRemove;
	bool bForceRemoval;
	Stack.StepCompiledIn(&PlayerController);
	Stack.StepCompiledIn(&ItemGuid);
	Stack.StepCompiledIn(&AmountToRemove);
	Stack.StepCompiledIn(&bForceRemoval);
	Stack.IncrementCode();

	FFortItemEntry* Entry = FindEntry(PlayerController, ItemGuid);
	if (!Entry)
		return *Result = 0;

	return *Result = Consume(PlayerController, Entry, AmountToRemove, true);
}

void FortInventory::Hook()
{
	Utils::ExecHook(L"/Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner", GiveItemToInventoryOwner);
	Utils::Hook<AFortPlayerControllerAthena>(uint32(0x22b), ServerRemoveInventoryItem);
	Utils::ExecHook(L"/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayer", K2_RemoveItemFromPlayer);
	Utils::ExecHook(L"/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayerByGuid", K2_RemoveItemFromPlayerByGuid);
}
