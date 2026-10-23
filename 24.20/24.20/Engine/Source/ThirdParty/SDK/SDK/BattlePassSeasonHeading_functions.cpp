#pragma once

#include "Basic.hpp"

#include "BattlePassSeasonHeading_classes.hpp"
#include "BattlePassSeasonHeading_parameters.hpp"

namespace SDK
{

void UBattlePassSeasonHeading_C::EventPlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassSeasonHeading_C", "EventPlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassSeasonHeading_C::ExecuteUbergraph_BattlePassSeasonHeading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassSeasonHeading_C", "ExecuteUbergraph_BattlePassSeasonHeading");

	Params::BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassSeasonHeading_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassSeasonHeading_C", "PreConstruct");

	Params::BattlePassSeasonHeading_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
