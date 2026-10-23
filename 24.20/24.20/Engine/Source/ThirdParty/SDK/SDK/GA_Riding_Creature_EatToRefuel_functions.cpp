#pragma once

#include "Basic.hpp"

#include "GA_Riding_Creature_EatToRefuel_classes.hpp"
#include "GA_Riding_Creature_EatToRefuel_parameters.hpp"

namespace SDK
{

void UGA_Riding_Creature_EatToRefuel_C::ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_EatToRefuel_C", "ExecuteUbergraph_GA_Riding_Creature_EatToRefuel");

	Params::GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Creature_EatToRefuel_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_EatToRefuel_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
