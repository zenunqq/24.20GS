#pragma once

#include "Basic.hpp"

#include "LeaderboardListViewWrapper_classes.hpp"
#include "LeaderboardListViewWrapper_parameters.hpp"

namespace SDK
{

void ULeaderboardListViewWrapper_C::ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "ExecuteUbergraph_LeaderboardListViewWrapper");

	Params::LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeaderboardListViewWrapper_C::OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "OnLeaderboardDisplayTypeChanged");

	Params::LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged Parms{};

	Parms.NewDisplayType = NewDisplayType;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeaderboardListViewWrapper_C::Set_Display_Info(const struct FFortTournamentDisplayInfo& DisplayInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Display Info");

	Params::LeaderboardListViewWrapper_C_Set_Display_Info Parms{};

	Parms.DisplayInfo_0 = std::move(DisplayInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}

void ULeaderboardListViewWrapper_C::Set_Event(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Event");

	Params::LeaderboardListViewWrapper_C_Set_Event Parms{};

	Parms.EventId = std::move(EventId);
	Parms.EventWindowId = std::move(EventWindowId);

	UObject::ProcessEvent(Func, &Parms);
}

}
