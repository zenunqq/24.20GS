#pragma once

#include "Basic.hpp"

#include "EventLeaderboardEventDetails_classes.hpp"
#include "EventLeaderboardEventDetails_parameters.hpp"

namespace SDK
{

void UEventLeaderboardEventDetails_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEventDetails_C::ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "ExecuteUbergraph_EventLeaderboardEventDetails");

	Params::EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
