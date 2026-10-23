#pragma once

#include "Basic.hpp"

#include "AthenaExclusiveRewardBannerLeft_classes.hpp"
#include "AthenaExclusiveRewardBannerLeft_parameters.hpp"

namespace SDK
{

void UAthenaExclusiveRewardBannerLeft_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaExclusiveRewardBannerLeft_C::ExecuteUbergraph_AthenaExclusiveRewardBannerLeft(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "ExecuteUbergraph_AthenaExclusiveRewardBannerLeft");

	Params::AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaExclusiveRewardBannerLeft_C::OnClearBanner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "OnClearBanner");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaExclusiveRewardBannerLeft_C::OnInitBanner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "OnInitBanner");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaExclusiveRewardBannerLeft_C::OnInitBannerIcon(const class UTexture2D* RewardIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "OnInitBannerIcon");

	Params::AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon Parms{};

	Parms.RewardIcon = RewardIcon;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaExclusiveRewardBannerLeft_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaExclusiveRewardBannerLeft_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}
