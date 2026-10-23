#pragma once

#include "Basic.hpp"

#include "EventLeaderboardHeader_classes.hpp"
#include "EventLeaderboardHeader_parameters.hpp"

namespace SDK
{

void UEventLeaderboardHeader_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardHeader_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardHeader_C::ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardHeader_C", "ExecuteUbergraph_EventLeaderboardHeader");

	Params::EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
