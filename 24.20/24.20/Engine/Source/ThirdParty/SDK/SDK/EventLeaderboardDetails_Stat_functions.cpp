#pragma once

#include "Basic.hpp"

#include "EventLeaderboardDetails_Stat_classes.hpp"
#include "EventLeaderboardDetails_Stat_parameters.hpp"

namespace SDK
{

void UEventLeaderboardDetails_Stat_C::SetStatData(const class FText& Name_0, double Value, int32 NumFractionalDigits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardDetails_Stat_C", "SetStatData");

	Params::EventLeaderboardDetails_Stat_C_SetStatData Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Value = Value;
	Parms.NumFractionalDigits = NumFractionalDigits;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardDetails_Stat_C::ExecuteUbergraph_EventLeaderboardDetails_Stat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardDetails_Stat_C", "ExecuteUbergraph_EventLeaderboardDetails_Stat");

	Params::EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardDetails_Stat_C::EventStatAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardDetails_Stat_C", "EventStatAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardDetails_Stat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardDetails_Stat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
