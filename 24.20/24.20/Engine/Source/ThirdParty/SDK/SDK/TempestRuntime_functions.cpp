#pragma once

#include "Basic.hpp"

#include "TempestRuntime_classes.hpp"
#include "TempestRuntime_parameters.hpp"

namespace SDK
{

void UFortCheatManager_Tempest::EndTempestStorm(const class FString& StormName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_Tempest", "EndTempestStorm");

	Params::FortCheatManager_Tempest_EndTempestStorm Parms{};

	Parms.StormName = std::move(StormName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTempestMovementComponent::OnRep_MovementData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestMovementComponent", "OnRep_MovementData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UTempestStateMachineComponent::ForceDissipate(const class FString& InDissipationReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestStateMachineComponent", "ForceDissipate");

	Params::TempestStateMachineComponent_ForceDissipate Parms{};

	Parms.InDissipationReason = std::move(InDissipationReason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTempestStateMachineComponent::OnRep_CurrentStateInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestStateMachineComponent", "OnRep_CurrentStateInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

ETempestState UTempestStateMachineComponent::GetCurrentState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentState");

	Params::TempestStateMachineComponent_GetCurrentState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTempestStateMachineComponent::GetCurrentStateCompletionPercentage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateCompletionPercentage");

	Params::TempestStateMachineComponent_GetCurrentStateCompletionPercentage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTempestStateInfo UTempestStateMachineComponent::GetCurrentStateInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateInfo");

	Params::TempestStateMachineComponent_GetCurrentStateInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
