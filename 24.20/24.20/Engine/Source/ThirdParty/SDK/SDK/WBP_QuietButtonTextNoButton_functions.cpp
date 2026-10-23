#pragma once

#include "Basic.hpp"

#include "WBP_QuietButtonTextNoButton_classes.hpp"
#include "WBP_QuietButtonTextNoButton_parameters.hpp"

namespace SDK
{

void UWBP_QuietButtonTextNoButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuietButtonTextNoButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_QuietButtonTextNoButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuietButtonTextNoButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_QuietButtonTextNoButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuietButtonTextNoButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_QuietButtonTextNoButton_C::ExecuteUbergraph_WBP_QuietButtonTextNoButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuietButtonTextNoButton_C", "ExecuteUbergraph_WBP_QuietButtonTextNoButton");

	Params::WBP_QuietButtonTextNoButton_C_ExecuteUbergraph_WBP_QuietButtonTextNoButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
