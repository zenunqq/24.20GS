#pragma once

#include "Basic.hpp"

#include "PlayerBattlePassXpAndReward_classes.hpp"
#include "PlayerBattlePassXpAndReward_parameters.hpp"

namespace SDK
{

void UPlayerBattlePassXpAndReward_C::ExecuteUbergraph_PlayerBattlePassXpAndReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "ExecuteUbergraph_PlayerBattlePassXpAndReward");

	Params::PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBattlePassXpAndReward_C::OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "OnAccountInfoChanged");

	Params::PlayerBattlePassXpAndReward_C_OnAccountInfoChanged Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBattlePassXpAndReward_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "PreConstruct");

	Params::PlayerBattlePassXpAndReward_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBattlePassXpAndReward_C::Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "Refresh");

	Params::PlayerBattlePassXpAndReward_C_Refresh Parms{};

	Parms.FortPublicAccountInfo = std::move(FortPublicAccountInfo);

	UObject::ProcessEvent(Func, &Parms);

	FortPublicAccountInfo = std::move(Parms.FortPublicAccountInfo);
}

void UPlayerBattlePassXpAndReward_C::SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UDailyQuestRewardInfo_Legacy_C* RewardInfoWidget, bool HasReward, const struct FFortItemQuantityPair& RewardItem, int32 LevelRewarded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "SetupReward");

	Params::PlayerBattlePassXpAndReward_C_SetupReward Parms{};

	Parms.Container = Container;
	Parms.RewardText = RewardText;
	Parms.RewardInfoWidget = RewardInfoWidget;
	Parms.HasReward = HasReward;
	Parms.RewardItem = std::move(RewardItem);
	Parms.LevelRewarded = LevelRewarded;

	UObject::ProcessEvent(Func, &Parms);
}

}
