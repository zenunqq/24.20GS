#pragma once

#include "Basic.hpp"

#include "GA_Riding_Creature_IsBeingRidden_Passive_classes.hpp"
#include "GA_Riding_Creature_IsBeingRidden_Passive_parameters.hpp"

namespace SDK
{

void UGA_Riding_Creature_IsBeingRidden_Passive_C::ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive");

	Params::GA_Riding_Creature_IsBeingRidden_Passive_C_ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Creature_IsBeingRidden_Passive_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "FailedToActivatePassiveAbility");

	Params::GA_Riding_Creature_IsBeingRidden_Passive_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Creature_IsBeingRidden_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Creature_IsBeingRidden_Passive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "K2_OnEndAbility");

	Params::GA_Riding_Creature_IsBeingRidden_Passive_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
