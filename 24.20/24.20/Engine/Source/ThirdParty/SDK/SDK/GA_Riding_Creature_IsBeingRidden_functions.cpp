#pragma once

#include "Basic.hpp"

#include "GA_Riding_Creature_IsBeingRidden_classes.hpp"
#include "GA_Riding_Creature_IsBeingRidden_parameters.hpp"

namespace SDK
{

void UGA_Riding_Creature_IsBeingRidden_C::ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden");

	Params::GA_Riding_Creature_IsBeingRidden_C_ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Creature_IsBeingRidden_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "FailedToActivatePassiveAbility");

	Params::GA_Riding_Creature_IsBeingRidden_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Creature_IsBeingRidden_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Creature_IsBeingRidden_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "K2_OnEndAbility");

	Params::GA_Riding_Creature_IsBeingRidden_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
