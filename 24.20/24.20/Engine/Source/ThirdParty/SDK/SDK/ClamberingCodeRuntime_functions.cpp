#pragma once

#include "Basic.hpp"

#include "ClamberingCodeRuntime_classes.hpp"
#include "ClamberingCodeRuntime_parameters.hpp"

namespace SDK
{

void UClamberingComponent::BP_HandleClamberingStateChanged(const EClamberingState OldClamberingState, const EClamberingState NewClamberingState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_HandleClamberingStateChanged");

	Params::ClamberingComponent_BP_HandleClamberingStateChanged Parms{};

	Parms.OldClamberingState = OldClamberingState;
	Parms.NewClamberingState = NewClamberingState;

	UObject::ProcessEvent(Func, &Parms);
}

void UClamberingComponent::BP_HandleSynchedActionStarted(const struct FSynchedActionInfo& SynchedActionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_HandleSynchedActionStarted");

	Params::ClamberingComponent_BP_HandleSynchedActionStarted Parms{};

	Parms.SynchedActionInfo = std::move(SynchedActionInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UClamberingComponent::DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "DrawDebugHUD");

	Params::ClamberingComponent_DrawDebugHUD Parms{};

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleClamberingTargetInActivationRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleClamberingTargetInActivationRange");

	UObject::ProcessEvent(Func, nullptr);
}

void UClamberingComponent::HandleClamberingTargetOutOfActivationRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleClamberingTargetOutOfActivationRange");

	UObject::ProcessEvent(Func, nullptr);
}

void UClamberingComponent::HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerASCInitialized");

	Params::ClamberingComponent_HandleOwnerASCInitialized Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerASCInvalidated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerASCInvalidated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerDBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerDBNO");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerDied(class AFortPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerDied");

	Params::ClamberingComponent_HandleOwnerDied Parms{};

	Parms.DeadPawn = DeadPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerJumpInput");

	Params::ClamberingComponent_HandleOwnerJumpInput Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerMovementModeChanged(class ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerMovementModeChanged");

	Params::ClamberingComponent_HandleOwnerMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleOwnerTeleported(class AFortPawn* TeleportedOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleOwnerTeleported");

	Params::ClamberingComponent_HandleOwnerTeleported Parms{};

	Parms.TeleportedOwner = TeleportedOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleTargetActorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleTargetActorDestroyed");

	Params::ClamberingComponent_HandleTargetActorDestroyed Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleTargetActorHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleTargetActorHealthChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::HandleTargetingDataInvalid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleTargetingDataInvalid");

	UObject::ProcessEvent(Func, nullptr);
}

void UClamberingComponent::HandleTargetingDataValid(const struct FClamberingTargetingData& TargetingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "HandleTargetingDataValid");

	Params::ClamberingComponent_HandleTargetingDataValid Parms{};

	Parms.TargetingData = std::move(TargetingData);

	UObject::ProcessEvent(Func, &Parms);
}

void UClamberingComponent::NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "NetMulticast_ClamberingLedgeFailed");

	Params::ClamberingComponent_NetMulticast_ClamberingLedgeFailed Parms{};

	Parms.FailedReason = FailedReason;
	Parms.FailedState = FailedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "OnPlayerStatePawnSet");

	Params::ClamberingComponent_OnPlayerStatePawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::OnRep_ReplicatedClamberingState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedClamberingState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::OnRep_ReplicatedLastTeleportTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedLastTeleportTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::OnRep_ReplicatedTargetingData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedTargetingData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "RegisterMutatorUpdatedDelegate");

	Params::ClamberingComponent_RegisterMutatorUpdatedDelegate Parms{};

	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::ServerStartClambering(const struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, const double ClientLastTeleportTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "ServerStartClambering");

	Params::ClamberingComponent_ServerStartClambering Parms{};

	Parms.InReplicatedTargetingData = std::move(InReplicatedTargetingData);
	Parms.ClientLastTeleportTime = ClientLastTeleportTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::SetTutorialModeEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "SetTutorialModeEnabled");

	Params::ClamberingComponent_SetTutorialModeEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::UnregisterMutatorUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "UnregisterMutatorUpdatedDelegate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClamberingComponent::BP_CanStartClambering(bool* bCanStartClambering) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_CanStartClambering");

	Params::ClamberingComponent_BP_CanStartClambering Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartClambering != nullptr)
		*bCanStartClambering = Parms.bCanStartClambering;
}

void UClamberingComponent::BP_CanStartTargeting(bool* bCanStartTargeting) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_CanStartTargeting");

	Params::ClamberingComponent_BP_CanStartTargeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartTargeting != nullptr)
		*bCanStartTargeting = Parms.bCanStartTargeting;
}

void UClamberingComponent::BP_IsValidTargetActor(const class AActor* TargetActor, bool* bIsValidTargetActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_IsValidTargetActor");

	Params::ClamberingComponent_BP_IsValidTargetActor Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValidTargetActor != nullptr)
		*bIsValidTargetActor = Parms.bIsValidTargetActor;
}

void UClamberingComponent::BP_TutorialModeDisabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_TutorialModeDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UClamberingComponent::BP_TutorialModeEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "BP_TutorialModeEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

bool UClamberingComponent::IsAutoClamberingEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "IsAutoClamberingEnabled");

	Params::ClamberingComponent_IsAutoClamberingEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UClamberingComponent::IsClamberingEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "IsClamberingEnabled");

	Params::ClamberingComponent_IsClamberingEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UClamberingComponent::IsTutorialModeEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "IsTutorialModeEnabled");

	Params::ClamberingComponent_IsTutorialModeEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UClamberingComponent::ShouldShowClamberIndicator() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClamberingComponent", "ShouldShowClamberIndicator");

	Params::ClamberingComponent_ShouldShowClamberIndicator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UClamberingLibrary::PerformClamberingTargeting(const class ACharacter* Character, struct FClamberingTargetingData* OutTargetingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ClamberingLibrary", "PerformClamberingTargeting");

	Params::ClamberingLibrary_PerformClamberingTargeting Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTargetingData != nullptr)
		*OutTargetingData = std::move(Parms.OutTargetingData);

	return Parms.ReturnValue;
}

}
