#pragma once

#include "Basic.hpp"

#include "Athena_ControllerDisconnectedModal_classes.hpp"
#include "Athena_ControllerDisconnectedModal_parameters.hpp"

namespace SDK
{

void UAthena_ControllerDisconnectedModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ControllerDisconnectedModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthena_ControllerDisconnectedModal_C::ExecuteUbergraph_Athena_ControllerDisconnectedModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ControllerDisconnectedModal_C", "ExecuteUbergraph_Athena_ControllerDisconnectedModal");

	Params::Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
