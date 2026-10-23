#pragma once

#include "Basic.hpp"

#include "CreativeDebugMenuRuntime_classes.hpp"
#include "CreativeDebugMenuRuntime_parameters.hpp"

namespace SDK
{

void UFortControllerComponent_CreativeDebugger::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CreativeDebugger::OnPlayerSpawned(class AFortPlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnPlayerSpawned");

	Params::FortControllerComponent_CreativeDebugger_OnPlayerSpawned Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
