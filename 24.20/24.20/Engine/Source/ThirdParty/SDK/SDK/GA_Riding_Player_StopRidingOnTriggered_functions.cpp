#pragma once

#include "Basic.hpp"

#include "GA_Riding_Player_StopRidingOnTriggered_classes.hpp"
#include "GA_Riding_Player_StopRidingOnTriggered_parameters.hpp"

namespace SDK
{

void UGA_Riding_Player_StopRidingOnTriggered_C::ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_StopRidingOnTriggered_C", "ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered");

	Params::GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_StopRidingOnTriggered_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_StopRidingOnTriggered_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
