#pragma once

#include "Basic.hpp"

#include "GA_Interrogate_GC_classes.hpp"
#include "GA_Interrogate_GC_parameters.hpp"

namespace SDK
{

void UGA_Interrogate_GC_C::ExecuteUbergraph_GA_Interrogate_GC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interrogate_GC_C", "ExecuteUbergraph_GA_Interrogate_GC");

	Params::GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Interrogate_GC_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interrogate_GC_C", "FailedToActivatePassiveAbility");

	Params::GA_Interrogate_GC_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Interrogate_GC_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interrogate_GC_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
