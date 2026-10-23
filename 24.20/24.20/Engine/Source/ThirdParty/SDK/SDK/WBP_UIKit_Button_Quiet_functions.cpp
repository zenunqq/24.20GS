#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_Button_Quiet_classes.hpp"
#include "WBP_UIKit_Button_Quiet_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_Button_Quiet_C::BP_OnInputMethodChanged(ECommonInputType CurrentInputType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "BP_OnInputMethodChanged");

	Params::WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged Parms{};

	Parms.CurrentInputType_0 = CurrentInputType_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Button_Quiet_C::ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "ExecuteUbergraph_WBP_UIKit_Button_Quiet");

	Params::WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Button_Quiet_C::HideBackground(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "HideBackground");

	Params::WBP_UIKit_Button_Quiet_C_HideBackground Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Button_Quiet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "PreConstruct");

	Params::WBP_UIKit_Button_Quiet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
