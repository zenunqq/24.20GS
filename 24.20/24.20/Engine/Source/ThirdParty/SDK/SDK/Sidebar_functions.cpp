#pragma once

#include "Basic.hpp"

#include "Sidebar_classes.hpp"
#include "Sidebar_parameters.hpp"

namespace SDK
{

void USidebar_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sidebar_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebar_C::ExecuteUbergraph_Sidebar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sidebar_C", "ExecuteUbergraph_Sidebar");

	Params::Sidebar_C_ExecuteUbergraph_Sidebar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
