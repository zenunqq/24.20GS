#pragma once

#include "Basic.hpp"

#include "WBP_EnterCabinModeModal_classes.hpp"
#include "WBP_EnterCabinModeModal_parameters.hpp"

namespace SDK
{

void UWBP_EnterCabinModeModal_C::ExecuteUbergraph_WBP_EnterCabinModeModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnterCabinModeModal_C", "ExecuteUbergraph_WBP_EnterCabinModeModal");

	Params::WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_EnterCabinModeModal_C::SwapPanel(class UWidget* PanelToSwapTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnterCabinModeModal_C", "SwapPanel");

	Params::WBP_EnterCabinModeModal_C_SwapPanel Parms{};

	Parms.PanelToSwapTo = PanelToSwapTo;

	UObject::ProcessEvent(Func, &Parms);
}

}
