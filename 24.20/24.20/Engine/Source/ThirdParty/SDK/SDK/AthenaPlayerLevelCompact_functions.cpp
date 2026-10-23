#pragma once

#include "Basic.hpp"

#include "AthenaPlayerLevelCompact_classes.hpp"
#include "AthenaPlayerLevelCompact_parameters.hpp"

namespace SDK
{

void UAthenaPlayerLevelCompact_C::ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "ExecuteUbergraph_AthenaPlayerLevelCompact");

	Params::AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaPlayerLevelCompact_C::OnUpdateRewardIcon_1(const class UFortItem* RewardItem, const TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateRewardIcon_1");

	Params::AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1 Parms{};

	Parms.RewardItem = RewardItem;
	Parms.RewardTexture = RewardTexture;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardLevel = RewardLevel;
	Parms.bRequiresBattlePass = bRequiresBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaPlayerLevelCompact_C::OnUpdateXpBar_1(double Progress, bool bIsMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateXpBar_1");

	Params::AthenaPlayerLevelCompact_C_OnUpdateXpBar_1 Parms{};

	Parms.Progress = Progress;
	Parms.bIsMaxLevel = bIsMaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}
