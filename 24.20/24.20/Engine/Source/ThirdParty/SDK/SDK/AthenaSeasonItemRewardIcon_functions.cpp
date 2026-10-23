#pragma once

#include "Basic.hpp"

#include "AthenaSeasonItemRewardIcon_classes.hpp"
#include "AthenaSeasonItemRewardIcon_parameters.hpp"

namespace SDK
{

void UAthenaSeasonItemRewardIcon_C::DeselectedAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "DeselectedAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaSeasonItemRewardIcon_C::ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "ExecuteUbergraph_AthenaSeasonItemRewardIcon");

	Params::AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "HandleMultipleRewardSelctedAnim");

	Params::AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim Parms{};

	Parms.bLeftRewardSelected = bLeftRewardSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "Hover");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaSeasonItemRewardIcon_C::OnInitializeReward(const class UFortItem* RewardItem, const TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "OnInitializeReward");

	Params::AthenaSeasonItemRewardIcon_C_OnInitializeReward Parms{};

	Parms.RewardItem = RewardItem;
	Parms.RewardTexture = RewardTexture;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardLevel = RewardLevel;
	Parms.bRequiresBattlePass = bRequiresBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::OnInitializeSeriesReward(const class UFortItemSeriesDefinition* SeriesData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "OnInitializeSeriesReward");

	Params::AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward Parms{};

	Parms.SeriesData = SeriesData;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "PreConstruct");

	Params::AthenaSeasonItemRewardIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::SelectedAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "SelectedAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaSeasonItemRewardIcon_C::SetRarityColors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "SetRarityColors");

	Params::AthenaSeasonItemRewardIcon_C_SetRarityColors Parms{};

	Parms.Color1 = std::move(Color1);
	Parms.Color2 = std::move(Color2);
	Parms.Color3 = std::move(Color3);
	Parms.Color4 = std::move(Color4);
	Parms.Color5 = std::move(Color5);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::SetupItemCardStyle(class UFortItem* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "SetupItemCardStyle");

	Params::AthenaSeasonItemRewardIcon_C_SetupItemCardStyle Parms{};

	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaSeasonItemRewardIcon_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonItemRewardIcon_C", "Unhover");

	UObject::ProcessEvent(Func, nullptr);
}

}
