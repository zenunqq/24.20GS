#pragma once

#include "Basic.hpp"

#include "WBP_PanelRebootRally_Header_classes.hpp"
#include "WBP_PanelRebootRally_Header_parameters.hpp"

namespace SDK
{

void UWBP_PanelRebootRally_Header_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PanelRebootRally_Header_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_PanelRebootRally_Header_C::ExecuteUbergraph_WBP_PanelRebootRally_Header(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PanelRebootRally_Header_C", "ExecuteUbergraph_WBP_PanelRebootRally_Header");

	Params::WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PanelRebootRally_Header_C::OnRebootRallyEligibilityUpdated(bool bEligible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PanelRebootRally_Header_C", "OnRebootRallyEligibilityUpdated");

	Params::WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated Parms{};

	Parms.bEligible = bEligible;

	UObject::ProcessEvent(Func, &Parms);
}

}
