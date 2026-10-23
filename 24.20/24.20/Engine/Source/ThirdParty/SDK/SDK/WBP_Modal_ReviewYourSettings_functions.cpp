#pragma once

#include "Basic.hpp"

#include "WBP_Modal_ReviewYourSettings_classes.hpp"
#include "WBP_Modal_ReviewYourSettings_parameters.hpp"

namespace SDK
{

void UWBP_Modal_ReviewYourSettings_C::ExecuteUbergraph_WBP_Modal_ReviewYourSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modal_ReviewYourSettings_C", "ExecuteUbergraph_WBP_Modal_ReviewYourSettings");

	Params::WBP_Modal_ReviewYourSettings_C_ExecuteUbergraph_WBP_Modal_ReviewYourSettings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Modal_ReviewYourSettings_C::OnModalBackout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modal_ReviewYourSettings_C", "OnModalBackout");

	UObject::ProcessEvent(Func, nullptr);
}

}
