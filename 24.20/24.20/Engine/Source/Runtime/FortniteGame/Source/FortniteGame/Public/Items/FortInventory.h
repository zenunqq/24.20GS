#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class FortInventory
{
public:
	static FFortRangedWeaponStats* GetStats(UFortWeaponItemDefinition* WeaponDefinition);
	static int GetLevel(const FDataTableCategoryHandle& CategoryHandle);
	static FFortItemEntry* MakeItemEntry(UFortItemDefinition* ItemDefinition, int32 Count, int32 Level);
	static EFortQuickBars GetQuickbar(UFortItemDefinition* ItemDefinition);

	static FFortItemEntry* FindEntry(AFortPlayerController* Controller, UFortItemDefinition* ItemDefinition);
	static FFortItemEntry* FindEntry(AFortPlayerController* Controller, FGuid ItemGuid);

	template <typename Predicate>
	static FFortItemEntry* FindEntryIf(AFortPlayerController* Controller, Predicate Matches)
	{
		if (!Controller || !Controller->WorldInventory)
			return nullptr;

		return Controller->WorldInventory->Inventory.ReplicatedEntries.Search(Matches);
	}

	static int32 Consume(AFortPlayerController* Controller, FFortItemEntry* Entry, int32 Amount, bool bRemoveGadgets = false);

	static void TriggerInventoryUpdate(AFortPlayerController* PlayerController, FFortItemEntry* Entry);
	static UFortWorldItem* GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count = 1, int LoadedAmmo = 0, int Level = 0, bool ShowPickupNoti = true, bool UpdateInventory = true, int PhantomReserveAmmo = 0);
	static UFortWorldItem* GiveItem(AFortPlayerController* PlayerController, FFortItemEntry Entry, int Count = -1, bool ShowPickupNoti = true, bool UpdateInventory = true);

	static AFortPickupAthena* SpawnPickup(FVector Location, FFortItemEntry& Entry, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, int OverrideCount = -1, bool Toss = true, bool RandomRotation = true, bool Combine = true);
	static AFortPickupAthena* SpawnPickup(FVector Location, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, bool Toss = true, bool RandomRotation = true);
	static AFortPickupAthena* SpawnPickup(ABuildingContainer* Container, FFortItemEntry Entry, AFortPlayerPawn* Pawn = nullptr, int OverrideCount = -1);

	static void ReplaceEntry(AFortPlayerController* PlayerController, FFortItemEntry& Entry);
	static void Remove(AFortPlayerController* PlayerController, FGuid ItemGuid);

private:
	static bool ServerRemoveInventoryItem(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid, int Count, bool bForceRemoval, bool bForcePersistWhenEmpty);
	static void GiveItemToInventoryOwner(UObject* Context, FFrame& Stack);
	static bool RemoveInventoryItem(__int64 InterfaceAddress, FGuid ItemGuid, int Count, bool bForceRemoval);
	static bool AddItemToInventoryOwner(UFortItemEntryComponent* Component, TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, bool bUseItemPickupAnalyticEvent);
	static int32 K2_RemoveItemFromPlayer(UObject* Context, FFrame& Stack, int32* Result);
	static int32 K2_RemoveItemFromPlayerByGuid(UObject* Context, FFrame& Stack, int32* Result);

	InitHooks;
};
