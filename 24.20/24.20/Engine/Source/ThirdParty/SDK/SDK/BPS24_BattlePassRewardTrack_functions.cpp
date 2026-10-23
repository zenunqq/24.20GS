#pragma once

#include "Basic.hpp"

#include "BPS24_BattlePassRewardTrack_classes.hpp"
#include "BPS24_BattlePassRewardTrack_parameters.hpp"

namespace SDK
{

void UBPS24_BattlePassRewardTrack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassRewardTrack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassRewardTrack_C::ExecuteUbergraph_BPS24_BattlePassRewardTrack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassRewardTrack_C", "ExecuteUbergraph_BPS24_BattlePassRewardTrack");

	Params::BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
