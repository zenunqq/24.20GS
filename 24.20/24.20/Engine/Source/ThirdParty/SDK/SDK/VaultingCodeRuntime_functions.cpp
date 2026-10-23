#pragma once

#include "Basic.hpp"

#include "VaultingCodeRuntime_classes.hpp"
#include "VaultingCodeRuntime_parameters.hpp"

namespace SDK
{

void UHurdleComponent::BP_CanStartHurdle(bool* OutCanStartHurdle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "BP_CanStartHurdle");

	Params::HurdleComponent_BP_CanStartHurdle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCanStartHurdle != nullptr)
		*OutCanStartHurdle = Parms.OutCanStartHurdle;
}

void UHurdleComponent::BP_HandleHurdleEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UHurdleComponent::BP_HandleHurdleStarted(EHurdleType HurdleType, const struct FSynchedActionInfo& SynchedActionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleStarted");

	Params::HurdleComponent_BP_HandleHurdleStarted Parms{};

	Parms.HurdleType = HurdleType;
	Parms.SynchedActionInfo = std::move(SynchedActionInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UHurdleComponent::BP_HandleSpringJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleSpringJump");

	UObject::ProcessEvent(Func, nullptr);
}

void UHurdleComponent::HandleOwnerJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerJumpInput");

	Params::HurdleComponent_HandleOwnerJumpInput Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::HandleOwnerMovementModeChanged(class ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerMovementModeChanged");

	Params::HurdleComponent_HandleOwnerMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::HandleOwnerTeleported(class AFortPawn* TeleportedOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerTeleported");

	Params::HurdleComponent_HandleOwnerTeleported Parms{};

	Parms.TeleportedOwner = TeleportedOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::HandleTargetingDataInvalid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataInvalid");

	UObject::ProcessEvent(Func, nullptr);
}

void UHurdleComponent::HandleTargetingDataValid(const struct FHurdleTargetingData& TargetingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataValid");

	Params::HurdleComponent_HandleTargetingDataValid Parms{};

	Parms.TargetingData = std::move(TargetingData);

	UObject::ProcessEvent(Func, &Parms);
}

void UHurdleComponent::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "OnPlayerStatePawnSet");

	Params::HurdleComponent_OnPlayerStatePawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::OnRep_ReplicatedHurdleState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedHurdleState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::OnRep_ReplicatedLastTeleportTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedLastTeleportTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "RegisterMutatorUpdatedDelegate");

	Params::HurdleComponent_RegisterMutatorUpdatedDelegate Parms{};

	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, const double ClientLastTeleportTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "ServerStartHurdle");

	Params::HurdleComponent_ServerStartHurdle Parms{};

	Parms.InReplicatedTargetingData = std::move(InReplicatedTargetingData);
	Parms.ClientLastTeleportTime = ClientLastTeleportTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHurdleComponent::UnregisterMutatorUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "UnregisterMutatorUpdatedDelegate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UHurdleComponent::ShouldShowHurdleIndicator() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HurdleComponent", "ShouldShowHurdleIndicator");

	Params::HurdleComponent_ShouldShowHurdleIndicator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHurdleLibrary::PerformHurdleTargeting(const class ACharacter* Character, struct FHurdleInputConfig* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HurdleLibrary", "PerformHurdleTargeting");

	Params::HurdleLibrary_PerformHurdleTargeting Parms{};

	Parms.Character = Character;
	Parms.bIsAutoHurdle = bIsAutoHurdle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (HurdleInputConfig != nullptr)
		*HurdleInputConfig = std::move(Parms.HurdleInputConfig);

	if (OutTargetingData != nullptr)
		*OutTargetingData = std::move(Parms.OutTargetingData);

	return Parms.ReturnValue;
}

}
