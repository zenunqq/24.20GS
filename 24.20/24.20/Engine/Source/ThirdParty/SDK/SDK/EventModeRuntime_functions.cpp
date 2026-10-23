#pragma once

#include "Basic.hpp"

#include "EventModeRuntime_classes.hpp"
#include "EventModeRuntime_parameters.hpp"

namespace SDK
{

void UFortGameFrameworkComponent_EventMode::OnEnterVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnEnterVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameFrameworkComponent_EventMode::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnExitVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameFrameworkComponent_EventMode::OnPlayerPawnPossessed(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnPlayerPawnPossessed");

	Params::FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed Parms{};

	Parms.PossessedPawn = PossessedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortGameFrameworkComponent_EventMode::GetIsEventModeActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsEventModeActive");

	Params::FortGameFrameworkComponent_EventMode_GetIsEventModeActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortGameFrameworkComponent_EventMode::GetIsFocusAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusAvailable");

	Params::FortGameFrameworkComponent_EventMode_GetIsFocusAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortGameFrameworkComponent_EventMode::GetIsFocusing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusing");

	Params::FortGameFrameworkComponent_EventMode_GetIsFocusing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
