#pragma once

#include "Basic.hpp"

#include "EventLeaderboardPlayerPerformance_classes.hpp"
#include "EventLeaderboardPlayerPerformance_parameters.hpp"

namespace SDK
{

void UEventLeaderboardPlayerPerformance_C::ExecuteUbergraph_EventLeaderboardPlayerPerformance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardPlayerPerformance_C", "ExecuteUbergraph_EventLeaderboardPlayerPerformance");

	Params::EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardPlayerPerformance_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardPlayerPerformance_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
