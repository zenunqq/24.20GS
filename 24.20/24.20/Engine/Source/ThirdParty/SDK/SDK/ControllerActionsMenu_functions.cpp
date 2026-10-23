#pragma once

#include "Basic.hpp"

#include "ControllerActionsMenu_classes.hpp"
#include "ControllerActionsMenu_parameters.hpp"

namespace SDK
{

void UControllerActionsMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerActionsMenu_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllerActionsMenu_C::ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerActionsMenu_C", "ExecuteUbergraph_ControllerActionsMenu");

	Params::ControllerActionsMenu_C_ExecuteUbergraph_ControllerActionsMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
