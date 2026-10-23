#pragma once

#include "Basic.hpp"

#include "GA_GrindRail_Smash_classes.hpp"
#include "GA_GrindRail_Smash_parameters.hpp"

namespace SDK
{

void UGA_GrindRail_Smash_C::EndAsyncBreakNearbyStructuresOverlap(const TArray<class AActor*>& OverlapActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "EndAsyncBreakNearbyStructuresOverlap");

	Params::GA_GrindRail_Smash_C_EndAsyncBreakNearbyStructuresOverlap Parms{};

	Parms.OverlapActors = std::move(OverlapActors);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_GrindRail_Smash_C::ExecuteUbergraph_GA_GrindRail_Smash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "ExecuteUbergraph_GA_GrindRail_Smash");

	Params::GA_GrindRail_Smash_C_ExecuteUbergraph_GA_GrindRail_Smash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_GrindRail_Smash_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "FailedToActivatePassiveAbility");

	Params::GA_GrindRail_Smash_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_GrindRail_Smash_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_GrindRail_Smash_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "K2_OnEndAbility");

	Params::GA_GrindRail_Smash_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_GrindRail_Smash_C::SurroundingCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_Smash_C", "SurroundingCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}
