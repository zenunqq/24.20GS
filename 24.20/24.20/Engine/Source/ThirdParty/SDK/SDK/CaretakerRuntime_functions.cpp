#pragma once

#include "Basic.hpp"

#include "CaretakerRuntime_classes.hpp"
#include "CaretakerRuntime_parameters.hpp"

namespace SDK
{

void AFortAthenaCaretakerAIController::DebugUpdate(float UpdateInterval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaCaretakerAIController", "DebugUpdate");

	Params::FortAthenaCaretakerAIController_DebugUpdate Parms{};

	Parms.UpdateInterval = UpdateInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaCaretakerAIController::OnMovementModeChanged(class ACharacter* CharacterOwner, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaCaretakerAIController", "OnMovementModeChanged");

	Params::FortAthenaCaretakerAIController_OnMovementModeChanged Parms{};

	Parms.CharacterOwner = CharacterOwner;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIAnimInstance_Caretaker::SetDelayedMaterialParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "SetDelayedMaterialParameters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UFortAIAnimInstance_Caretaker::GetStartAnimPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetStartAnimPosition");

	Params::FortAIAnimInstance_Caretaker_GetStartAnimPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIAnimInstance_Caretaker::GetWalkPlayRateValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkPlayRateValue");

	Params::FortAIAnimInstance_Caretaker_GetWalkPlayRateValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIAnimInstance_Caretaker::GetWalkSpeedWarpingValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkSpeedWarpingValue");

	Params::FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAnimWorldStriderComponent* UFortAIAnimInstance_Caretaker::GetWorldStriderComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWorldStriderComponent");

	Params::FortAIAnimInstance_Caretaker_GetWorldStriderComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
