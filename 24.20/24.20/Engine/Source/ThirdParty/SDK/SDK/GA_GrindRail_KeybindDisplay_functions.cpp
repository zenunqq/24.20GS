#pragma once

#include "Basic.hpp"

#include "GA_GrindRail_KeybindDisplay_classes.hpp"
#include "GA_GrindRail_KeybindDisplay_parameters.hpp"

namespace SDK
{

void UGA_GrindRail_KeybindDisplay_C::ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "ExecuteUbergraph_GA_GrindRail_KeybindDisplay");

	Params::GA_GrindRail_KeybindDisplay_C_ExecuteUbergraph_GA_GrindRail_KeybindDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_GrindRail_KeybindDisplay_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
