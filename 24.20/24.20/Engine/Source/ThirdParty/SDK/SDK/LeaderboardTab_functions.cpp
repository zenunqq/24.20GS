#pragma once

#include "Basic.hpp"

#include "LeaderboardTab_classes.hpp"
#include "LeaderboardTab_parameters.hpp"

namespace SDK
{

void ULeaderboardTab_C::Colorize(const struct FFortTournamentDisplayInfo& Color_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardTab_C", "Colorize");

	Params::LeaderboardTab_C_Colorize Parms{};

	Parms.Color_Info = std::move(Color_Info);

	UObject::ProcessEvent(Func, &Parms);
}

void ULeaderboardTab_C::ExecuteUbergraph_LeaderboardTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardTab_C", "ExecuteUbergraph_LeaderboardTab");

	Params::LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeaderboardTab_C::Set_Event(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardTab_C", "Set Event");

	Params::LeaderboardTab_C_Set_Event Parms{};

	Parms.EventId = std::move(EventId);
	Parms.EventWindowId = std::move(EventWindowId);

	UObject::ProcessEvent(Func, &Parms);
}

}
