#pragma once

#include "Basic.hpp"

#include "GA_Athena_Lockout_classes.hpp"
#include "GA_Athena_Lockout_parameters.hpp"

namespace SDK
{

void UGA_Athena_Lockout_C::ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "ExecuteUbergraph_GA_Athena_Lockout");

	Params::GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Lockout_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "FailedToActivatePassiveAbility");

	Params::GA_Athena_Lockout_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Lockout_C::Failsafe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "Failsafe");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Lockout_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Lockout_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_OnEndAbility");

	Params::GA_Athena_Lockout_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
