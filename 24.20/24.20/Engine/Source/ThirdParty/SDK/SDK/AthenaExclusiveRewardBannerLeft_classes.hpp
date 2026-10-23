#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaExclusiveRewardBannerLeft_C final : public UAthenaExclusiveRewardBanner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       InitializeOffScreen;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       AnimatePulse;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Backing;
	class UImage*                                 BottomAngle;
	class UOverlay*                               IconOvr;
	class UImage*                                 Pulse;
	class UImage*                                 TopAngle;
	bool                                          Shown;

public:
	void Construct();
	void ExecuteUbergraph_AthenaExclusiveRewardBannerLeft(int32 EntryPoint);
	void OnClearBanner();
	void OnInitBanner();
	void OnInitBannerIcon(const class UTexture2D* RewardIcon);
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaExclusiveRewardBannerLeft_C">();
	}
	static class UAthenaExclusiveRewardBannerLeft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaExclusiveRewardBannerLeft_C>();
	}
};
static_assert(alignof(UAthenaExclusiveRewardBannerLeft_C) == 0x000008, "Wrong alignment on UAthenaExclusiveRewardBannerLeft_C");
static_assert(sizeof(UAthenaExclusiveRewardBannerLeft_C) == 0x000308, "Wrong size on UAthenaExclusiveRewardBannerLeft_C");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, UberGraphFrame) == 0x0002B0, "Member 'UAthenaExclusiveRewardBannerLeft_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, InitializeOffScreen) == 0x0002B8, "Member 'UAthenaExclusiveRewardBannerLeft_C::InitializeOffScreen' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, Outro) == 0x0002C0, "Member 'UAthenaExclusiveRewardBannerLeft_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, AnimatePulse) == 0x0002C8, "Member 'UAthenaExclusiveRewardBannerLeft_C::AnimatePulse' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, Intro) == 0x0002D0, "Member 'UAthenaExclusiveRewardBannerLeft_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, Backing) == 0x0002D8, "Member 'UAthenaExclusiveRewardBannerLeft_C::Backing' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, BottomAngle) == 0x0002E0, "Member 'UAthenaExclusiveRewardBannerLeft_C::BottomAngle' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, IconOvr) == 0x0002E8, "Member 'UAthenaExclusiveRewardBannerLeft_C::IconOvr' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, Pulse) == 0x0002F0, "Member 'UAthenaExclusiveRewardBannerLeft_C::Pulse' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, TopAngle) == 0x0002F8, "Member 'UAthenaExclusiveRewardBannerLeft_C::TopAngle' has a wrong offset!");
static_assert(offsetof(UAthenaExclusiveRewardBannerLeft_C, Shown) == 0x000300, "Member 'UAthenaExclusiveRewardBannerLeft_C::Shown' has a wrong offset!");

}
