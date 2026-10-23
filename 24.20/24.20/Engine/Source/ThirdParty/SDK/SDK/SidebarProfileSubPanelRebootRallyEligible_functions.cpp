#pragma once

#include "Basic.hpp"

#include "SidebarProfileSubPanelRebootRallyEligible_classes.hpp"
#include "SidebarProfileSubPanelRebootRallyEligible_parameters.hpp"

namespace SDK
{

void USidebarProfileSubPanelRebootRallyEligible_C::DisplayText(const bool bRallied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelRebootRallyEligible_C", "DisplayText");

	Params::SidebarProfileSubPanelRebootRallyEligible_C_DisplayText Parms{};

	Parms.bRallied = bRallied;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelRebootRallyEligible_C::ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelRebootRallyEligible_C", "ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible");

	Params::SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelRebootRallyEligible_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelRebootRallyEligible_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelRebootRallyEligible_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelRebootRallyEligible_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

}
