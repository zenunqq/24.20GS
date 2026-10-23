#pragma once

#include "Basic.hpp"

#include "SidebarSpecialNavWidget_classes.hpp"
#include "SidebarSpecialNavWidget_parameters.hpp"

namespace SDK
{

void USidebarSpecialNavWidget_C::ExecuteUbergraph_SidebarSpecialNavWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSpecialNavWidget_C", "ExecuteUbergraph_SidebarSpecialNavWidget");

	Params::SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSpecialNavWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSpecialNavWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}
