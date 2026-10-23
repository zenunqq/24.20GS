#pragma once

#include "Basic.hpp"

#include "EventMatchHistoryTournamentInfo_classes.hpp"
#include "EventMatchHistoryTournamentInfo_parameters.hpp"

namespace SDK
{

void UEventMatchHistoryTournamentInfo_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventMatchHistoryTournamentInfo_C::ExecuteUbergraph_EventMatchHistoryTournamentInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "ExecuteUbergraph_EventMatchHistoryTournamentInfo");

	Params::EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
