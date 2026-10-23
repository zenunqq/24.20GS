#pragma once

#include "Basic.hpp"

#include "NPC_Pawn_Parent_classes.hpp"
#include "NPC_Pawn_Parent_parameters.hpp"

namespace SDK
{

void ANPC_Pawn_Parent_C::AdditiveHitReactDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "AdditiveHitReactDelay");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::AddSoundSystemLibraries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "AddSoundSystemLibraries");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::BeginMusicTracker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "BeginMusicTracker");

	UObject::ProcessEvent(Func, nullptr);
}

bool ANPC_Pawn_Parent_C::CanUpdateSoundLib(const TArray<class USoundLibrary*>& TargetArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CanUpdateSoundLib");

	Params::NPC_Pawn_Parent_C_CanUpdateSoundLib Parms{};

	Parms.TargetArray = std::move(TargetArray);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ANPC_Pawn_Parent_C::CheckSoundLibraryAdded(TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CheckSoundLibraryAdded");

	Params::NPC_Pawn_Parent_C_CheckSoundLibraryAdded Parms{};

	Parms.Libraries = std::move(Libraries);

	UObject::ProcessEvent(Func, &Parms);

	Libraries = std::move(Parms.Libraries);
}

void ANPC_Pawn_Parent_C::CheckSoundLibraryRemoved(TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CheckSoundLibraryRemoved");

	Params::NPC_Pawn_Parent_C_CheckSoundLibraryRemoved Parms{};

	Parms.Libraries = std::move(Libraries);

	UObject::ProcessEvent(Func, &Parms);

	Libraries = std::move(Parms.Libraries);
}

void ANPC_Pawn_Parent_C::Debug_AlertLevel_ClearDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_AlertLevel_ClearDebug");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Debug_AlertLevel_ForceLevel(Enum_NPC_AlertLevel NewNPC_AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_AlertLevel_ForceLevel");

	Params::NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel Parms{};

	Parms.NewNPC_AlertLevel = NewNPC_AlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::Debug_ForceAlertLevel_Aggressive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Aggressive");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Debug_ForceAlertLevel_Alerted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Alerted");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Debug_ForceAlertLevel_Invalid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Invalid");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Debug_ForceAlertLevel_NA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_NA");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Debug_ForceAlertLevel_Unaware()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Unaware");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::DespawnDueToStorm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "DespawnDueToStorm");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::End_Music_Tracker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "End Music Tracker");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::ExecuteUbergraph_NPC_Pawn_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ExecuteUbergraph_NPC_Pawn_Parent");

	Params::NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::GetSoundFoleyLibrary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "GetSoundFoleyLibrary");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::GrantStartingItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "GrantStartingItems");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::HandleInteracts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "HandleInteracts");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::InitializeInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "InitializeInventory");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::InitializeTestInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "InitializeTestInSafeZone");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::IsConverted(bool* IsConverted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "IsConverted");

	Params::NPC_Pawn_Parent_C_IsConverted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsConverted_0 != nullptr)
		*IsConverted_0 = Parms.IsConverted_0;
}

void ANPC_Pawn_Parent_C::LuredInterest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "LuredInterest");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::LuredOnServer(Enum_NPC_AlertLevel AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "LuredOnServer");

	Params::NPC_Pawn_Parent_C_LuredOnServer Parms{};

	Parms.AlertLevel = AlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_AlertLevelChangedServer(Enum_NPC_AlertLevel NPCAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC AlertLevelChangedServer");

	Params::NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer Parms{};

	Parms.NPCAlertLevel = NPCAlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_ApplyGameplayEffectWithMMRScaling(class AActor* Actor, class UClass* GE_Class)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ApplyGameplayEffectWithMMRScaling");

	Params::NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling Parms{};

	Parms.Actor = Actor;
	Parms.GE_Class = GE_Class;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_ApplyRecentlyDamagedTagGE(class UClass* RecentlyDamagedOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ApplyRecentlyDamagedTagGE");

	Params::NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE Parms{};

	Parms.RecentlyDamagedOverride = RecentlyDamagedOverride;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_AttemptToSetLeader(class AActor* PossibleLeader, EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC AttemptToSetLeader");

	Params::NPC_Pawn_Parent_C_NPC_AttemptToSetLeader Parms{};

	Parms.PossibleLeader = PossibleLeader;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_CanBeInteractedWith(bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CanBeInteractedWith");

	Params::NPC_Pawn_Parent_C_NPC_CanBeInteractedWith Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;
}

void ANPC_Pawn_Parent_C::NPC_CheckForDespawnIfStaleToPlayers(class AFortPlayerPawn* ClosestFortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CheckForDespawnIfStaleToPlayers");

	Params::NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers Parms{};

	Parms.ClosestFortPlayerPawn = ClosestFortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_CheckIsInSafeZone(bool* TestSucceeded, bool* isInSafeZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CheckIsInSafeZone");

	Params::NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TestSucceeded != nullptr)
		*TestSucceeded = Parms.TestSucceeded;

	if (isInSafeZone != nullptr)
		*isInSafeZone = Parms.isInSafeZone;
}

void ANPC_Pawn_Parent_C::NPC_ClearOutTargetSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ClearOutTargetSlots");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_DamageAttemptDisableIntroPhaseBehavior(const struct FGameplayTagContainer& DamageTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DamageAttemptDisableIntroPhaseBehavior");

	Params::NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior Parms{};

	Parms.DamageTags = std::move(DamageTags);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_DamageRemovesIdlePhaseTagGE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DamageRemovesIdlePhaseTagGE");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_DisableIntroPhaseBehavior()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DisableIntroPhaseBehavior");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_GetAlertLevelInfo(Enum_NPC_AlertLevel* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetAlertLevelInfo");

	Params::NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AlertLevel != nullptr)
		*AlertLevel = Parms.AlertLevel;

	if (AlertLevelTag != nullptr)
		*AlertLevelTag = std::move(Parms.AlertLevelTag);

	if (ValidDataFound != nullptr)
		*ValidDataFound = Parms.ValidDataFound;
}

void ANPC_Pawn_Parent_C::NPC_GetInventoryInformation(bool* HasItemInInventory, int32* TotalNumberOfInventoryItems, int32* LastInventoryItemIndex, bool* HasEnoughItemsToDeliver, bool* ConsumedEnoughItemsToBeConsideredFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetInventoryInformation");

	Params::NPC_Pawn_Parent_C_NPC_GetInventoryInformation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasItemInInventory != nullptr)
		*HasItemInInventory = Parms.HasItemInInventory;

	if (TotalNumberOfInventoryItems != nullptr)
		*TotalNumberOfInventoryItems = Parms.TotalNumberOfInventoryItems;

	if (LastInventoryItemIndex != nullptr)
		*LastInventoryItemIndex = Parms.LastInventoryItemIndex;

	if (HasEnoughItemsToDeliver != nullptr)
		*HasEnoughItemsToDeliver = Parms.HasEnoughItemsToDeliver;

	if (ConsumedEnoughItemsToBeConsideredFull != nullptr)
		*ConsumedEnoughItemsToBeConsideredFull = Parms.ConsumedEnoughItemsToBeConsideredFull;
}

void ANPC_Pawn_Parent_C::NPC_GetSafeZonePhase(int32* SafeZonePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetSafeZonePhase");

	Params::NPC_Pawn_Parent_C_NPC_GetSafeZonePhase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SafeZonePhase != nullptr)
		*SafeZonePhase = Parms.SafeZonePhase;
}

void ANPC_Pawn_Parent_C::NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetScalableFloatHotfixValue");

	Params::NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue Parms{};

	Parms.ScalableFloatHotfix = std::move(ScalableFloatHotfix);
	Parms.AtLevel = AtLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBool != nullptr)
		*AsBool = Parms.AsBool;

	if (AsIntRounded != nullptr)
		*AsIntRounded = Parms.AsIntRounded;

	if (AsFloat != nullptr)
		*AsFloat = Parms.AsFloat;
}

void ANPC_Pawn_Parent_C::NPC_GhostCollisionSettings(bool NoCollisionForRanged, bool NoCollisionForMelee, bool NoCollisionForProjectiles, bool OnlyOverlapCollisionForPawns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GhostCollisionSettings");

	Params::NPC_Pawn_Parent_C_NPC_GhostCollisionSettings Parms{};

	Parms.NoCollisionForRanged = NoCollisionForRanged;
	Parms.NoCollisionForMelee = NoCollisionForMelee;
	Parms.NoCollisionForProjectiles = NoCollisionForProjectiles;
	Parms.OnlyOverlapCollisionForPawns = OnlyOverlapCollisionForPawns;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_HandleAlertLevelVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC HandleAlertLevelVoice");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_HasLeader_(bool* HasLeader_, class AActor** Leader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC HasLeader?");

	Params::NPC_Pawn_Parent_C_NPC_HasLeader_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasLeader_ != nullptr)
		*HasLeader_ = Parms.HasLeader_;

	if (Leader != nullptr)
		*Leader = Parms.Leader;
}

void ANPC_Pawn_Parent_C::NPC_InitializeIdleVO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC InitializeIdleVO");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_LeaderSet(bool Success_, class AActor* Leader, EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC LeaderSet");

	Params::NPC_Pawn_Parent_C_NPC_LeaderSet Parms{};

	Parms.Success_ = Success_;
	Parms.Leader = Leader;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_MulticastGameplayCueDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC MulticastGameplayCueDeath");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_ParentLaunchVehicle(class AActor* Vehicle, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ParentLaunchVehicle");

	Params::NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_Pawn_Interact(class AFortAIPawn* AI, class AFortPlayerController* InteractingPlayerController, EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC Pawn Interact");

	Params::NPC_Pawn_Parent_C_NPC_Pawn_Interact Parms{};

	Parms.AI = AI;
	Parms.InteractingPlayerController = InteractingPlayerController;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_PawnDebugMessage(const class FString& String, bool OnlyWhenDebug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PawnDebugMessage");

	Params::NPC_Pawn_Parent_C_NPC_PawnDebugMessage Parms{};

	Parms.String = std::move(String);
	Parms.OnlyWhenDebug = OnlyWhenDebug;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_PickupDropped(class AFortPickup* FortPickupDropped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupDropped");

	Params::NPC_Pawn_Parent_C_NPC_PickupDropped Parms{};

	Parms.FortPickupDropped = FortPickupDropped;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_PickupGrabbed(class AFortPickup* FortPickupGrabbed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupGrabbed");

	Params::NPC_Pawn_Parent_C_NPC_PickupGrabbed Parms{};

	Parms.FortPickupGrabbed = FortPickupGrabbed;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_PickupGrabbed_Destroyed(class AActor* ActorGrabbed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupGrabbed_Destroyed");

	Params::NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed Parms{};

	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_ResetOriginalGravityScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ResetOriginalGravityScale");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_ResetOriginalRotationRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ResetOriginalRotationRate");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_ScalableFloatIsValid(const struct FScalableFloat& ScalableFloat, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ScalableFloatIsValid");

	Params::NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid Parms{};

	Parms.ScalableFloat = std::move(ScalableFloat);

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

void ANPC_Pawn_Parent_C::NPC_SendGameplayCuePickupGrabbed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SendGameplayCuePickupGrabbed");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_SetBestLootRarityInInventory(EFortRarity* NPC_BestLootRarityInInventory_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetBestLootRarityInInventory");

	Params::NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NPC_BestLootRarityInInventory_0 != nullptr)
		*NPC_BestLootRarityInInventory_0 = Parms.NPC_BestLootRarityInInventory_0;
}

void ANPC_Pawn_Parent_C::NPC_SetCanDropLoot(bool CanDropLoot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetCanDropLoot");

	Params::NPC_Pawn_Parent_C_NPC_SetCanDropLoot Parms{};

	Parms.CanDropLoot = CanDropLoot;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_SetLeader(class AActor* Leader, bool* Success_, class AActor** LeaderSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetLeader");

	Params::NPC_Pawn_Parent_C_NPC_SetLeader Parms{};

	Parms.Leader = Leader;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

	if (LeaderSet != nullptr)
		*LeaderSet = Parms.LeaderSet;
}

void ANPC_Pawn_Parent_C::NPC_SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetLootCollectionPhaseCompleteToBlackboard");

	Params::NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard Parms{};

	Parms.LootCollectionPhaseComplete = LootCollectionPhaseComplete;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPC_SetReturnGatheredLootToBlackboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetReturnGatheredLootToBlackboard");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_TargetSlotInfo(Enum_NPC_TargetSlots TargetSlotType, class AActor* TargetWeWantToSlotOnto, int32* TargetSlotCount, int32* TargetSlotMax, int32* NPC_TargetSlotsRequired, bool* TargetSlotsMaxOrMore, bool* TargetSlotCountIsExactlyMax, bool* NPC_IsTargetSlotOwner, bool* NPC_HasSpaceToSlotOnTarget, Enum_NPC_TargetSlots* TargetSlotTypeOut, class UClass** TargetSlotCountingGE, struct FScalableFloat* AI_TargetSlotSizeHF, struct FScalableFloat* AI_TargetSlotDurationHF, class UClass** TargetSlotOverrideGE, class UClass** TargetSlotOwnerGE, class UClass** TargetSlotCountingMaxedGE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TargetSlotInfo");

	Params::NPC_Pawn_Parent_C_NPC_TargetSlotInfo Parms{};

	Parms.TargetSlotType = TargetSlotType;
	Parms.TargetWeWantToSlotOnto = TargetWeWantToSlotOnto;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSlotCount != nullptr)
		*TargetSlotCount = Parms.TargetSlotCount;

	if (TargetSlotMax != nullptr)
		*TargetSlotMax = Parms.TargetSlotMax;

	if (NPC_TargetSlotsRequired != nullptr)
		*NPC_TargetSlotsRequired = Parms.NPC_TargetSlotsRequired;

	if (TargetSlotsMaxOrMore != nullptr)
		*TargetSlotsMaxOrMore = Parms.TargetSlotsMaxOrMore;

	if (TargetSlotCountIsExactlyMax != nullptr)
		*TargetSlotCountIsExactlyMax = Parms.TargetSlotCountIsExactlyMax;

	if (NPC_IsTargetSlotOwner != nullptr)
		*NPC_IsTargetSlotOwner = Parms.NPC_IsTargetSlotOwner;

	if (NPC_HasSpaceToSlotOnTarget != nullptr)
		*NPC_HasSpaceToSlotOnTarget = Parms.NPC_HasSpaceToSlotOnTarget;

	if (TargetSlotTypeOut != nullptr)
		*TargetSlotTypeOut = Parms.TargetSlotTypeOut;

	if (TargetSlotCountingGE != nullptr)
		*TargetSlotCountingGE = Parms.TargetSlotCountingGE;

	if (AI_TargetSlotSizeHF != nullptr)
		*AI_TargetSlotSizeHF = std::move(Parms.AI_TargetSlotSizeHF);

	if (AI_TargetSlotDurationHF != nullptr)
		*AI_TargetSlotDurationHF = std::move(Parms.AI_TargetSlotDurationHF);

	if (TargetSlotOverrideGE != nullptr)
		*TargetSlotOverrideGE = Parms.TargetSlotOverrideGE;

	if (TargetSlotOwnerGE != nullptr)
		*TargetSlotOwnerGE = Parms.TargetSlotOwnerGE;

	if (TargetSlotCountingMaxedGE != nullptr)
		*TargetSlotCountingMaxedGE = Parms.TargetSlotCountingMaxedGE;
}

void ANPC_Pawn_Parent_C::NPC_TargetSlotIsUsingOverride(Enum_NPC_TargetSlots TargetSlotType, class AActor* TargetWeWantToSlotOnto, bool* Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TargetSlotIsUsingOverride");

	Params::NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride Parms{};

	Parms.TargetSlotType = TargetSlotType;
	Parms.TargetWeWantToSlotOnto = TargetWeWantToSlotOnto;

	UObject::ProcessEvent(Func, &Parms);

	if (Override != nullptr)
		*Override = Parms.Override;
}

void ANPC_Pawn_Parent_C::NPC_TryToDropLootOnDeath(const struct FGameplayTagContainer& DamageTags, bool* CanDropLoot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TryToDropLootOnDeath");

	Params::NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath Parms{};

	Parms.DamageTags = std::move(DamageTags);

	UObject::ProcessEvent(Func, &Parms);

	if (CanDropLoot != nullptr)
		*CanDropLoot = Parms.CanDropLoot;
}

void ANPC_Pawn_Parent_C::NPC_UpdateHealthBarComponentVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC UpdateHealthBarComponentVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPC_UpdateInteract(bool CanInteract, bool* EnabledInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC UpdateInteract");

	Params::NPC_Pawn_Parent_C_NPC_UpdateInteract Parms{};

	Parms.CanInteract = CanInteract;

	UObject::ProcessEvent(Func, &Parms);

	if (EnabledInteract != nullptr)
		*EnabledInteract = Parms.EnabledInteract;
}

void ANPC_Pawn_Parent_C::NPCAlertLevelChangedClient(Enum_NPC_AlertLevel NPC_AlertLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCAlertLevelChangedClient");

	Params::NPC_Pawn_Parent_C_NPCAlertLevelChangedClient Parms{};

	Parms.NPC_AlertLevel_0 = NPC_AlertLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::NPCDisableHealthBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCDisableHealthBars");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPCEnableHealthBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCEnableHealthBars");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPCScaleMeshIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshIn");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::NPCScaleMeshOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshOut");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::On_NPC_PawnInteractedWith(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "On NPC PawnInteractedWith");

	Params::NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith Parms{};

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnBeginDance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnBeginDance");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnBeginDeepWaterInteraction(const struct FVector& WaterSurfaceLocation, float WaterDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnBeginDeepWaterInteraction");

	Params::NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction Parms{};

	Parms.WaterSurfaceLocation = std::move(WaterSurfaceLocation);
	Parms.WaterDepth = WaterDepth;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamagePlayEffects");

	Params::NPC_Pawn_Parent_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamageServer");

	Params::NPC_Pawn_Parent_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDeathPlayEffects");

	Params::NPC_Pawn_Parent_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDeathServer");

	Params::NPC_Pawn_Parent_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnEndDance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnEndDance");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnEnteredWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnEnteredWaterBody");

	Params::NPC_Pawn_Parent_C_OnEnteredWaterBody Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnExitedWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsLastBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnExitedWaterBody");

	Params::NPC_Pawn_Parent_C_OnExitedWaterBody Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsLastBody = bIsLastBody;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::OnPawnHealthChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnPawnHealthChanged_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnRep_NPC_BestLootRarityInInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC BestLootRarityInInventory");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnRep_NPC_Death_Time()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC Death Time");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnRep_NPC_Leader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC Leader");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnRep_NPC_AlertLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC_AlertLevel");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::OnRep_SelectedPrimitiveDataFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_SelectedPrimitiveDataFloat");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Orphaned");

	Params::NPC_Pawn_Parent_C_Orphaned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;
}

void ANPC_Pawn_Parent_C::Play_Water_Splash_at_Water_Surface(class AFortWaterBodyActor* Water_Body, bool Enter_Water_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Play Water Splash at Water Surface");

	Params::NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface Parms{};

	Parms.Water_Body = Water_Body;
	Parms.Enter_Water_0 = Enter_Water_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayAdditiveHitReacts");

	Params::NPC_Pawn_Parent_C_PlayAdditiveHitReacts Parms{};

	Parms.Hit_Direction = std::move(Hit_Direction);
	Parms.Anim_Montage = Anim_Montage;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::PlayEnterWaterSplash(class AFortWaterBodyActor* Water_Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayEnterWaterSplash");

	Params::NPC_Pawn_Parent_C_PlayEnterWaterSplash Parms{};

	Parms.Water_Body = Water_Body;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::PlayExitWaterSplash(class AFortWaterBodyActor* Water_Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayExitWaterSplash");

	Params::NPC_Pawn_Parent_C_PlayExitWaterSplash Parms{};

	Parms.Water_Body = Water_Body;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::PlayStateChangeAudio(Enum_NPC_AlertLevel Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayStateChangeAudio");

	Params::NPC_Pawn_Parent_C_PlayStateChangeAudio Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveEndPlay");

	Params::NPC_Pawn_Parent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceivePossessed");

	Params::NPC_Pawn_Parent_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::RemoveSoundSystemLibraries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "RemoveSoundSystemLibraries");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::RequestUpdateNPCAlertLevel(Enum_NPC_AlertLevel NPC_AlertLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "RequestUpdateNPCAlertLevel");

	Params::NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel Parms{};

	Parms.NPC_AlertLevel_0 = NPC_AlertLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::ResetMaterialFromDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ResetMaterialFromDeath");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::SelectPrimitiveDataFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "SelectPrimitiveDataFloat");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::SetPrimitiveDataFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "SetPrimitiveDataFloat");

	UObject::ProcessEvent(Func, nullptr);
}

bool ANPC_Pawn_Parent_C::ShouldUpdateSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ShouldUpdateSkeletalMesh");

	Params::NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ANPC_Pawn_Parent_C::StartUpdatingHleathBarWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StartUpdatingHleathBarWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::StopTestingIsInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StopTestingIsInSafeZone");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::StopUpdatingHealthBarWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StopUpdatingHealthBarWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::StoreOriginalGravityAndRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StoreOriginalGravityAndRotation");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TestIsInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TestIsInSafeZone");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TestLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TestLoot");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Timeline_ScaleMeshInOrOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Timeline_ScaleMeshInOrOut__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::Timeline_ScaleMeshInOrOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Timeline_ScaleMeshInOrOut__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TriggerDeathFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerDeathFX");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TriggerDespawnAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerDespawnAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TriggerIdleVO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerIdleVO");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TryShowHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryShowHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::TryToDespawnDueToStorm(bool Reset_Timer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryToDespawnDueToStorm");

	Params::NPC_Pawn_Parent_C_TryToDespawnDueToStorm Parms{};

	Parms.Reset_Timer = Reset_Timer;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::TryWaterInteractionDrown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryWaterInteractionDrown");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::UpdateCustomDepth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateCustomDepth");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::UpdateSoundLibFoley()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateSoundLibFoley");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::UpdateSoundLibrary(Enum_NPC_AlertLevel Alert_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateSoundLibrary");

	Params::NPC_Pawn_Parent_C_UpdateSoundLibrary Parms{};

	Parms.Alert_Level = Alert_Level;

	UObject::ProcessEvent(Func, &Parms);
}

void ANPC_Pawn_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ANPC_Pawn_Parent_C::WidgetVisibilityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "WidgetVisibilityChanged");

	Params::NPC_Pawn_Parent_C_WidgetVisibilityChanged Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
