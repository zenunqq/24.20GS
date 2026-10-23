#pragma once

#include "Basic.hpp"

#include "GA_Vehicle_ExitHoldEvent_classes.hpp"
#include "GA_Vehicle_ExitHoldEvent_parameters.hpp"

namespace SDK
{

void UGA_Vehicle_ExitHoldEvent_C::EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "EventReceived_209BF560404B83EBEAA8DD8090C443AC");

	Params::GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Vehicle_ExitHoldEvent_C::EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "EventReceived_7AE1D485464AEC7EB429C3877D33AF69");

	Params::GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Vehicle_ExitHoldEvent_C::ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "ExecuteUbergraph_GA_Vehicle_ExitHoldEvent");

	Params::GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Vehicle_ExitHoldEvent_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "FailedToActivatePassiveAbility");

	Params::GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Vehicle_ExitHoldEvent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Vehicle_ExitHoldEvent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Vehicle_ExitHoldEvent_C", "K2_OnEndAbility");

	Params::GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
