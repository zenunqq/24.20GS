#pragma once

#include "Basic.hpp"

#include "SidebarProfileSubPanelMutualCount_classes.hpp"
#include "SidebarProfileSubPanelMutualCount_parameters.hpp"

namespace SDK
{

void USidebarProfileSubPanelMutualCount_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelMutualCount_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelMutualCount_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelMutualCount_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelMutualCount_C::ExecuteUbergraph_SidebarProfileSubPanelMutualCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelMutualCount_C", "ExecuteUbergraph_SidebarProfileSubPanelMutualCount");

	Params::SidebarProfileSubPanelMutualCount_C_ExecuteUbergraph_SidebarProfileSubPanelMutualCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
