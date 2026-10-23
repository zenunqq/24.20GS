#pragma once

#include "Basic.hpp"

#include "GA_Athena_HidingProp_LandedOn_classes.hpp"
#include "GA_Athena_HidingProp_LandedOn_parameters.hpp"

namespace SDK
{

void UGA_Athena_HidingProp_LandedOn_C::ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_LandedOn_C", "ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");

	Params::GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_LandedOn_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_LandedOn_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
