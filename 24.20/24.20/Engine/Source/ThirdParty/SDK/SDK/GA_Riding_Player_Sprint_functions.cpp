#pragma once

#include "Basic.hpp"

#include "GA_Riding_Player_Sprint_classes.hpp"
#include "GA_Riding_Player_Sprint_parameters.hpp"

namespace SDK
{

void UGA_Riding_Player_Sprint_C::Added_BA9D24D64958BB04345A3D89BD7617CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "Added_BA9D24D64958BB04345A3D89BD7617CA");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Sprint_C::ExecuteUbergraph_GA_Riding_Player_Sprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "ExecuteUbergraph_GA_Riding_Player_Sprint");

	Params::GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Sprint_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "FailedToActivatePassiveAbility");

	Params::GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Sprint_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Sprint_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "K2_OnEndAbility");

	Params::GA_Riding_Player_Sprint_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Sprint_C::OnRep_CancelSprintDispatcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Sprint_C", "OnRep_CancelSprintDispatcher");

	UObject::ProcessEvent(Func, nullptr);
}

}
