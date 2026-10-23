#pragma once

#include "Basic.hpp"

#include "TacticalSprintRuntime_classes.hpp"
#include "TacticalSprintRuntime_parameters.hpp"

namespace SDK
{

void UFortPlayerControllerComponent_TacticalSprint::LogAndVisualLog(class UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, const class FString& LogString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "LogAndVisualLog");

	Params::FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog Parms{};

	Parms.LoggingSource = LoggingSource;
	Parms.Verbosity = Verbosity;
	Parms.LogString = std::move(LogString);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnAutoRunChanged(bool bAutoRunIsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnAutoRunChanged");

	Params::FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged Parms{};

	Parms.bAutoRunIsOn = bAutoRunIsOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMovementModeChanged");

	Params::FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnPawnChanged(class AFortPawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPawnChanged");

	Params::FortPlayerControllerComponent_TacticalSprint_OnPawnChanged Parms{};

	Parms.InPawn = InPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPlayerStatePawnSet");

	Params::FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnWeaponEquipped");

	Params::FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PreviousWeapon = PreviousWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::RegisterMutatorUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "RegisterMutatorUpdatedDelegate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerControllerComponent_TacticalSprint::SetIsSprinting(bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "SetIsSprinting");

	Params::FortPlayerControllerComponent_TacticalSprint_SetIsSprinting Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
