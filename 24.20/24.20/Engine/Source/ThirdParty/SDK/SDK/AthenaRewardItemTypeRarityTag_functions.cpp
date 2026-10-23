#pragma once

#include "Basic.hpp"

#include "AthenaRewardItemTypeRarityTag_classes.hpp"
#include "AthenaRewardItemTypeRarityTag_parameters.hpp"

namespace SDK
{

void UAthenaRewardItemTypeRarityTag_C::ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "ExecuteUbergraph_AthenaRewardItemTypeRarityTag");

	Params::AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithoutSeries");

	Params::AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries Parms{};

	Parms.RarityData = std::move(RarityData);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithSeries(const class UFortItemSeriesDefinition* SeriesData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithSeries");

	Params::AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries Parms{};

	Parms.SeriesData = SeriesData;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaRewardItemTypeRarityTag_C::OverrideTypeTextColor(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OverrideTypeTextColor");

	Params::AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}

}
