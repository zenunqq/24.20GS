#pragma once

#include "Basic.hpp"

#include "SidebarButtons_classes.hpp"
#include "SidebarButtons_parameters.hpp"

namespace SDK
{

void USidebarButtons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButtons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButtons_C::ExecuteUbergraph_SidebarButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButtons_C", "ExecuteUbergraph_SidebarButtons");

	Params::SidebarButtons_C_ExecuteUbergraph_SidebarButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
