#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_Button_Loud_classes.hpp"
#include "WBP_UIKit_Button_Loud_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_Button_Loud_C::ExecuteUbergraph_WBP_UIKit_Button_Loud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "ExecuteUbergraph_WBP_UIKit_Button_Loud");

	Params::WBP_UIKit_Button_Loud_C_ExecuteUbergraph_WBP_UIKit_Button_Loud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Button_Loud_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "PreConstruct");

	Params::WBP_UIKit_Button_Loud_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
