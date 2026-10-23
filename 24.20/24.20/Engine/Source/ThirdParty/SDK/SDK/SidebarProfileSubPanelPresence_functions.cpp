#pragma once

#include "Basic.hpp"

#include "SidebarProfileSubPanelPresence_classes.hpp"
#include "SidebarProfileSubPanelPresence_parameters.hpp"

namespace SDK
{

void USidebarProfileSubPanelPresence_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelPresence_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelPresence_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelPresence_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelPresence_C::ExecuteUbergraph_SidebarProfileSubPanelPresence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelPresence_C", "ExecuteUbergraph_SidebarProfileSubPanelPresence");

	Params::SidebarProfileSubPanelPresence_C_ExecuteUbergraph_SidebarProfileSubPanelPresence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
