#pragma once

#include "Basic.hpp"

#include "AthenaChallengeRewardsMultiMarker_classes.hpp"
#include "AthenaChallengeRewardsMultiMarker_parameters.hpp"

namespace SDK
{

void UAthenaChallengeRewardsMultiMarker_C::ExecuteUbergraph_AthenaChallengeRewardsMultiMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeRewardsMultiMarker_C", "ExecuteUbergraph_AthenaChallengeRewardsMultiMarker");

	Params::AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeRewardsMultiMarker_C::BP_OnSetMarkerActive(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeRewardsMultiMarker_C", "BP_OnSetMarkerActive");

	Params::AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}
