#pragma once
#include "pch.h"

#include "Basic.hpp"

#include "PlayerAugmentsCodeRuntime_classes.hpp"
#include "PlayerAugmentsCodeRuntime_parameters.hpp"

namespace SDK
{

void UFortAugmentSelectionToolAbility::OnHighlightSelectionUpdated(int32 NewHighlightedChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnHighlightSelectionUpdated");

	Params::FortAugmentSelectionToolAbility_OnHighlightSelectionUpdated Parms{};

	Parms.NewHighlightedChoiceIndex = NewHighlightedChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAugmentSelectionToolAbility::OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnHoldRerollInputChanged");

	Params::FortAugmentSelectionToolAbility_OnHoldRerollInputChanged Parms{};

	Parms.bIsPressed = bIsPressed;
	Parms.bCompletedHold = bCompletedHold;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAugmentSelectionToolAbility::OnRerollPressedAndCannotAfford()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnRerollPressedAndCannotAfford");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAugmentSelectionToolAbility::OnSelectedChoiceIndex(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnSelectedChoiceIndex");

	Params::FortAugmentSelectionToolAbility_OnSelectedChoiceIndex Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAugmentSelectionToolAbility::SetHighlightedChoiceIndex(int32 NewChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAugmentSelectionToolAbility", "SetHighlightedChoiceIndex");

	Params::FortAugmentSelectionToolAbility_SetHighlightedChoiceIndex Parms{};

	Parms.NewChoiceIndex = NewChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattleRoyalePlayerAugmentSystem::AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "AuthoritySetServerGrantingStartedTimestamp");

	Params::FortBattleRoyalePlayerAugmentSystem_AuthoritySetServerGrantingStartedTimestamp Parms{};

	Parms.ServerTimestamp = ServerTimestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattleRoyalePlayerAugmentSystem::BlueprintAugmentLog(const class FString& message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BlueprintAugmentLog");

	Params::FortBattleRoyalePlayerAugmentSystem_BlueprintAugmentLog Parms{};

	Parms.message = std::move(message);
	Parms.Verbosity = Verbosity;
	Parms.bAutonomousProxyOnly = bAutonomousProxyOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattleRoyalePlayerAugmentSystem::BP_GetAugmentController(EFortBRAugmentSystemCastResult* OutExec, class AController** OutController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BP_GetAugmentController");

	Params::FortBattleRoyalePlayerAugmentSystem_BP_GetAugmentController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	if (OutController != nullptr)
		*OutController = Parms.OutController;
}

void UFortBattleRoyalePlayerAugmentSystem::BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult* OutExec, class AFortPlayerPawn** OutFortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BP_GetAugmentPlayerPawn");

	Params::FortBattleRoyalePlayerAugmentSystem_BP_GetAugmentPlayerPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	if (OutFortPlayerPawn != nullptr)
		*OutFortPlayerPawn = Parms.OutFortPlayerPawn;
}

struct FFortAugmentPassiveUnlockResult UFortBattleRoyalePlayerAugmentSystem::ChooseUnlockFromList(const TArray<struct FPlayerAugmentLockStatus>& LockedList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "ChooseUnlockFromList");

	Params::FortBattleRoyalePlayerAugmentSystem_ChooseUnlockFromList Parms{};

	Parms.LockedList = std::move(LockedList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattleRoyalePlayerAugmentSystem::HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "HandlePossessedPawnChanged");

	Params::FortBattleRoyalePlayerAugmentSystem_HandlePossessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattleRoyalePlayerAugmentSystem::OnMatchAugmentsReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnMatchAugmentsReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattleRoyalePlayerAugmentSystem::OnPossedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnPossedPawnChanged");

	Params::FortBattleRoyalePlayerAugmentSystem_OnPossedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattleRoyalePlayerAugmentSystem::OnRep_ServerGrantingStartedTimestamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnRep_ServerGrantingStartedTimestamp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortBattleRoyalePlayerAugmentSystem::OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnServerAugmentGrantTimestampReplicated");

	Params::FortBattleRoyalePlayerAugmentSystem_OnServerAugmentGrantTimestampReplicated Parms{};

	Parms.ServerGrantStartTimestamp = ServerGrantStartTimestamp;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattleRoyalePlayerAugmentSystem::ResetMatchAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "ResetMatchAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FFortAugmentPassiveUnlockResult UFortBattleRoyalePlayerAugmentSystem::TryClaimUnlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "TryClaimUnlock");

	Params::FortBattleRoyalePlayerAugmentSystem_TryClaimUnlock Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattleRoyalePlayerAugmentSystem::TryIncrementUnlockRollCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "TryIncrementUnlockRollCount");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UFortBattleRoyalePlayerAugmentSystem::GetServerGrantingStartedTimestamp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "GetServerGrantingStartedTimestamp");

	Params::FortBattleRoyalePlayerAugmentSystem_GetServerGrantingStartedTimestamp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortContextualTutorial_MultipleAugmentsQueued::ActivationEventCallback(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "ActivationEventCallback");

	Params::FortContextualTutorial_MultipleAugmentsQueued_ActivationEventCallback Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_MultipleAugmentsQueued::CompletionEventCallback(const bool bIsOpened, const bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "CompletionEventCallback");

	Params::FortContextualTutorial_MultipleAugmentsQueued_CompletionEventCallback Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_MultipleAugmentsQueued::HandleBindActivationTrigger(class AFortPlayerControllerZone* FortPCZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "HandleBindActivationTrigger");

	Params::FortContextualTutorial_MultipleAugmentsQueued_HandleBindActivationTrigger Parms{};

	Parms.FortPCZone = FortPCZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_MultipleAugmentsQueued::HandleBindCompletionTrigger(class AFortPlayerControllerZone* FortPCZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "HandleBindCompletionTrigger");

	Params::FortContextualTutorial_MultipleAugmentsQueued_HandleBindCompletionTrigger Parms{};

	Parms.FortPCZone = FortPCZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortControllerComponent_AugmentGrantingSystem* UFortControllerComponent_AugmentGrantingSystem::GetAugmentGrantingComponentFromController(const class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetAugmentGrantingComponentFromController");

	Params::FortControllerComponent_AugmentGrantingSystem_GetAugmentGrantingComponentFromController Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthorityGrantFreeReroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityGrantFreeReroll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthorityGrantNewAugment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityGrantNewAugment");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthorityIncrementLockedSelectionChoices(const int32 NumLocksToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityIncrementLockedSelectionChoices");

	Params::FortControllerComponent_AugmentGrantingSystem_AuthorityIncrementLockedSelectionChoices Parms{};

	Parms.NumLocksToAdd = NumLocksToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthorityRequestSelectionToolItemGrant(class UObject* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityRequestSelectionToolItemGrant");

	Params::FortControllerComponent_AugmentGrantingSystem_AuthorityRequestSelectionToolItemGrant Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthorityResetAugmentData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityResetAugmentData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::AuthoritySetAvailableAugmentChoices(const TArray<struct FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthoritySetAvailableAugmentChoices");

	Params::FortControllerComponent_AugmentGrantingSystem_AuthoritySetAvailableAugmentChoices Parms{};

	Parms.AvailableAugmentsToGrant = std::move(AvailableAugmentsToGrant);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ClientSelectAvailableAugmentToGrant");

	Params::FortControllerComponent_AugmentGrantingSystem_ClientSelectAvailableAugmentToGrant Parms{};

	Parms.ChosenAugmentDef = ChosenAugmentDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandleChangedBuildMode(bool bEnteredBuildMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleChangedBuildMode");

	Params::FortControllerComponent_AugmentGrantingSystem_HandleChangedBuildMode Parms{};

	Parms.bEnteredBuildMode = bEnteredBuildMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandleGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleGamePhaseChanged");

	Params::FortControllerComponent_AugmentGrantingSystem_HandleGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandleHolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleHolsteredEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandlePossessedPawnChanged");

	Params::FortControllerComponent_AugmentGrantingSystem_HandlePossessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandleToggleFullscreenMap(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleToggleFullscreenMap");

	Params::FortControllerComponent_AugmentGrantingSystem_HandleToggleFullscreenMap Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::HandleUnHolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleUnHolsteredEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::OnLocalEquipAugmentSelectionPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnLocalEquipAugmentSelectionPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortControllerComponent_AugmentGrantingSystem::OnLocalUnequipAugmentSelectionPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnLocalUnequipAugmentSelectionPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortControllerComponent_AugmentGrantingSystem::OnRep_NumFreeRerolls()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_NumFreeRerolls");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::OnRep_NumLockedSelectionChoices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_NumLockedSelectionChoices");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::OnRep_ReplicatedAugmentChoices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_ReplicatedAugmentChoices");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::OnRep_ReplicatedNumPendingAugmentsToGrant()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_ReplicatedNumPendingAugmentsToGrant");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::OnRep_SelectorItemEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_SelectorItemEntry");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ServerGrantAugment");

	Params::FortControllerComponent_AugmentGrantingSystem_ServerGrantAugment Parms{};

	Parms.ChosenAugmentDef = ChosenAugmentDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentGrantingSystem::ServerRequestReroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ServerRequestReroll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortControllerComponent_AugmentGrantingSystem::CanReroll() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "CanReroll");

	Params::FortControllerComponent_AugmentGrantingSystem_CanReroll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FPlayerAugmentChoiceDatum> UFortControllerComponent_AugmentGrantingSystem::GetAvailableAugmentsToGrant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetAvailableAugmentsToGrant");

	Params::FortControllerComponent_AugmentGrantingSystem_GetAvailableAugmentsToGrant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortControllerComponent_AugmentGrantingSystem::GetNumFreeRerolls() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetNumFreeRerolls");

	Params::FortControllerComponent_AugmentGrantingSystem_GetNumFreeRerolls Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortControllerComponent_AugmentGrantingSystem::GetPendingAugmentsToGrant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetPendingAugmentsToGrant");

	Params::FortControllerComponent_AugmentGrantingSystem_GetPendingAugmentsToGrant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_AugmentGrantingSystem::IsSelectionChoicesLocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "IsSelectionChoicesLocked");

	Params::FortControllerComponent_AugmentGrantingSystem_IsSelectionChoicesLocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_AugmentGrantingSystem::IsSelectionItemEquipped() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "IsSelectionItemEquipped");

	Params::FortControllerComponent_AugmentGrantingSystem_IsSelectionItemEquipped Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortControllerComponent_AugmentUIEvents::HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "HandleAugmentSelectorOpenedStatusChanged");

	Params::FortControllerComponent_AugmentUIEvents_HandleAugmentSelectorOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingInventory = bViewingInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentUIEvents::NotifyGrantingTimersFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "NotifyGrantingTimersFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentUIEvents::NotifyGrantingTimersReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "NotifyGrantingTimersReset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentUIEvents::SetNumGrantableAugmentsForPlaylist(const int32 NewNumRounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "SetNumGrantableAugmentsForPlaylist");

	Params::FortControllerComponent_AugmentUIEvents_SetNumGrantableAugmentsForPlaylist Parms{};

	Parms.NewNumRounds = NewNumRounds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_AugmentUIEvents::UpdatedTimerProgress(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "UpdatedTimerProgress");

	Params::FortControllerComponent_AugmentUIEvents_UpdatedTimerProgress Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<struct FFortDynamicRollResult> UFortControllerComponent_DynamicRollPlayerComponent::AuthorityRollChoices(const int32 NumChoices, const TArray<class UFortItemDefinition*>& IgnoreItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_DynamicRollPlayerComponent", "AuthorityRollChoices");

	Params::FortControllerComponent_DynamicRollPlayerComponent_AuthorityRollChoices Parms{};

	Parms.NumChoices = NumChoices;
	Parms.IgnoreItems = std::move(IgnoreItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortControllerComponent_PlayerAugmentPersistence::AuthoritySetCarryOverPlayerAugments(const TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthoritySetCarryOverPlayerAugments");

	Params::FortControllerComponent_PlayerAugmentPersistence_AuthoritySetCarryOverPlayerAugments Parms{};

	Parms.NewCarryOverPlayerAugments = std::move(NewCarryOverPlayerAugments);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::AuthoritySetRollCountSinceLastRandomUnlock(int32 NewRollCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthoritySetRollCountSinceLastRandomUnlock");

	Params::FortControllerComponent_PlayerAugmentPersistence_AuthoritySetRollCountSinceLastRandomUnlock Parms{};

	Parms.NewRollCount = NewRollCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthorityUnlockPlayerAugment");

	Params::FortControllerComponent_PlayerAugmentPersistence_AuthorityUnlockPlayerAugment Parms{};

	Parms.PlayerAugmentToUnlock = PlayerAugmentToUnlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleAthenaGamePhaseChanged");

	Params::FortControllerComponent_PlayerAugmentPersistence_HandleAthenaGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::HandleCollectionDataLoaded(TSoftObjectPtr<class UFortCollectionData> BaseCollectionDataSoftPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleCollectionDataLoaded");

	Params::FortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataLoaded Parms{};

	Parms.BaseCollectionDataSoftPtr = BaseCollectionDataSoftPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::HandleCollectionDataTableLoaded(TSoftObjectPtr<class UFortCollectionsDataTable> CollectionsDataTableSoftPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleCollectionDataTableLoaded");

	Params::FortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataTableLoaded Parms{};

	Parms.CollectionsDataTableSoftPtr = CollectionsDataTableSoftPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::HandleMcpProfilesInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleMcpProfilesInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_PlayerAugmentPersistence::GetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>* OutCarryOverPlayerAugments) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetCarryOverPlayerAugments");

	Params::FortControllerComponent_PlayerAugmentPersistence_GetCarryOverPlayerAugments Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCarryOverPlayerAugments != nullptr)
		*OutCarryOverPlayerAugments = std::move(Parms.OutCarryOverPlayerAugments);
}

void UFortControllerComponent_PlayerAugmentPersistence::GetLockedList(TArray<struct FPlayerAugmentLockStatus>* OutLockedList, bool bIncludeSharedAugments) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockedList");

	Params::FortControllerComponent_PlayerAugmentPersistence_GetLockedList Parms{};

	Parms.bIncludeSharedAugments = bIncludeSharedAugments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLockedList != nullptr)
		*OutLockedList = std::move(Parms.OutLockedList);
}

struct FPlayerAugmentLockStatus UFortControllerComponent_PlayerAugmentPersistence::GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockStatus");

	Params::FortControllerComponent_PlayerAugmentPersistence_GetLockStatus Parms{};

	Parms.PlayerAugmentItemDefinition = PlayerAugmentItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortControllerComponent_PlayerAugmentPersistence::GetLockStatusForAll(TArray<struct FPlayerAugmentLockStatus>* OutLockStatusArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockStatusForAll");

	Params::FortControllerComponent_PlayerAugmentPersistence_GetLockStatusForAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLockStatusArray != nullptr)
		*OutLockStatusArray = std::move(Parms.OutLockStatusArray);
}

int32 UFortControllerComponent_PlayerAugmentPersistence::GetRollCountSinceLastRandomUnlock() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetRollCountSinceLastRandomUnlock");

	Params::FortControllerComponent_PlayerAugmentPersistence_GetRollCountSinceLastRandomUnlock Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGamestateComponent_DynamicRollTableManager::HandlePlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGamestateComponent_DynamicRollTableManager", "HandlePlaylistDataReady");

	Params::FortGamestateComponent_DynamicRollTableManager_HandlePlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMcpCollectionPlayerAugment::AddToPlayerCollection(const class AFortPlayerController* PlayerController, const struct FGameplayTag& PlayerAugmentVariantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortMcpCollectionPlayerAugment", "AddToPlayerCollection");

	Params::FortMcpCollectionPlayerAugment_AddToPlayerCollection Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PlayerAugmentVariantTag = std::move(PlayerAugmentVariantTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMcpCollectionPlayerAugment::MarkSeenForPlayer(class AFortPlayerController* PlayerController, const struct FGameplayTag& VariantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortMcpCollectionPlayerAugment", "MarkSeenForPlayer");

	Params::FortMcpCollectionPlayerAugment_MarkSeenForPlayer Parms{};

	Parms.PlayerController = PlayerController;
	Parms.VariantTag = std::move(VariantTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::ForceSelectionAugments(const class FString& AugmentNameFirst, const class FString& AugmentNameSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ForceSelectionAugments");

	Params::FortPlayerAugmentCheatManager_ForceSelectionAugments Parms{};

	Parms.AugmentNameFirst = std::move(AugmentNameFirst);
	Parms.AugmentNameSecond = std::move(AugmentNameSecond);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::GiveAugment(const class FString& AugmentName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "GiveAugment");

	Params::FortPlayerAugmentCheatManager_GiveAugment Parms{};

	Parms.AugmentName = std::move(AugmentName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::GiveAugmentToBots(const class FString& AugmentName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "GiveAugmentToBots");

	Params::FortPlayerAugmentCheatManager_GiveAugmentToBots Parms{};

	Parms.AugmentName = std::move(AugmentName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::LogPlayerAugmentsLockStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "LogPlayerAugmentsLockStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::RemoveAllAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "RemoveAllAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::RemoveAllAugmentsFromBots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "RemoveAllAugmentsFromBots");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::ResetAugmentGrantingToSeed(const int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ResetAugmentGrantingToSeed");

	Params::FortPlayerAugmentCheatManager_ResetAugmentGrantingToSeed Parms{};

	Parms.Seed = Seed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ServerLogDynamicWeightsForPlayer");

	Params::FortPlayerAugmentCheatManager_ServerLogDynamicWeightsForPlayer Parms{};

	Parms.bVeryDetailedReport = bVeryDetailedReport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::SetPlayerAugmentRollCountSinceLastUnlock(const int32 RollCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "SetPlayerAugmentRollCountSinceLastUnlock");

	Params::FortPlayerAugmentCheatManager_SetPlayerAugmentRollCountSinceLastUnlock Parms{};

	Parms.RollCount = RollCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::StartAugmentGrantingFlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "StartAugmentGrantingFlow");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::CollectAllPlayerAugments() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "CollectAllPlayerAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentCheatManager::CollectPlayerAugment(const class FString& TagMatch) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentCheatManager", "CollectPlayerAugment");

	Params::FortPlayerAugmentCheatManager_CollectPlayerAugment Parms{};

	Parms.TagMatch = std::move(TagMatch);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UFortPlayerAugmentItemDefinition*> UFortPlayerStateComponent_PlayerAugmentSystem::GetActiveAugments(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetActiveAugments");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_GetActiveAugments Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortPlayerStateComponent_PlayerAugmentSystem* UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentComponent(const class AActor* PlayerContextActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentComponent");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponent Parms{};

	Parms.PlayerContextActor = PlayerContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortPlayerStateComponent_PlayerAugmentSystem* UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentComponentValidated(EAugmentExecResult* OutExec, const class AActor* PlayerContextActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentComponentValidated");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponentValidated Parms{};

	Parms.PlayerContextActor = PlayerContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	return Parms.ReturnValue;
}

void UFortPlayerStateComponent_PlayerAugmentSystem::ClientClearMatchAugmentDataCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "ClientClearMatchAugmentDataCache");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

double UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentMatchDataCacheFloat(EAugmentExecResult* OutExec, const struct FGameplayTag& TargetAugmentCacheTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentMatchDataCacheFloat");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_GetAugmentMatchDataCacheFloat Parms{};

	Parms.TargetAugmentCacheTag = std::move(TargetAugmentCacheTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	return Parms.ReturnValue;
}

void UFortPlayerStateComponent_PlayerAugmentSystem::HandleBotPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "HandleBotPlayerPawnSpawned");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_HandleBotPlayerPawnSpawned Parms{};

	Parms.BotController = BotController;
	Parms.BotPawn = BotPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerStateComponent_PlayerAugmentSystem::HandlePlayerPawnSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "HandlePlayerPawnSpawned");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerStateComponent_PlayerAugmentSystem::OnRep_ActiveAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "OnRep_ActiveAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerStateComponent_PlayerAugmentSystem::SetAugmentMatchDataCacheFloat(const struct FGameplayTag& TargetAugmentCacheTag, double InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "SetAugmentMatchDataCacheFloat");

	Params::FortPlayerStateComponent_PlayerAugmentSystem_SetAugmentMatchDataCacheFloat Parms{};

	Parms.TargetAugmentCacheTag = std::move(TargetAugmentCacheTag);
	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
