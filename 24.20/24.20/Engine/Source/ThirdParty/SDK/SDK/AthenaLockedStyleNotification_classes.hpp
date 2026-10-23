#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaLockedStyleNotification_C final : public UAthenaCosmeticUnlockingInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       DataUpdate;
	class UWidgetAnimation*                       Intro;
	class USizeBox*                               SizeBox_ProgressInfo;
	class USizeBox*                               SizeBox_StaticText;
	class UWidgetSwitcher*                        Switcher_LockedInfo;
	struct FTimerHandle                           AutoHideTimer;
	double                                        HideDelayTime;
	bool                                          AutoHide;

public:
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint);
	void OnUnlockingInfoSet(bool bShowProgression);
	void OutroFinished();
	void RequestIntroAnim();
	void RequestOutroAnim();
	void RequestUpdateAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLockedStyleNotification_C">();
	}
	static class UAthenaLockedStyleNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLockedStyleNotification_C>();
	}
};
static_assert(alignof(UAthenaLockedStyleNotification_C) == 0x000008, "Wrong alignment on UAthenaLockedStyleNotification_C");
static_assert(sizeof(UAthenaLockedStyleNotification_C) == 0x000330, "Wrong size on UAthenaLockedStyleNotification_C");
static_assert(offsetof(UAthenaLockedStyleNotification_C, UberGraphFrame) == 0x0002E8, "Member 'UAthenaLockedStyleNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, DataUpdate) == 0x0002F0, "Member 'UAthenaLockedStyleNotification_C::DataUpdate' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, Intro) == 0x0002F8, "Member 'UAthenaLockedStyleNotification_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, SizeBox_ProgressInfo) == 0x000300, "Member 'UAthenaLockedStyleNotification_C::SizeBox_ProgressInfo' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, SizeBox_StaticText) == 0x000308, "Member 'UAthenaLockedStyleNotification_C::SizeBox_StaticText' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, Switcher_LockedInfo) == 0x000310, "Member 'UAthenaLockedStyleNotification_C::Switcher_LockedInfo' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, AutoHideTimer) == 0x000318, "Member 'UAthenaLockedStyleNotification_C::AutoHideTimer' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, HideDelayTime) == 0x000320, "Member 'UAthenaLockedStyleNotification_C::HideDelayTime' has a wrong offset!");
static_assert(offsetof(UAthenaLockedStyleNotification_C, AutoHide) == 0x000328, "Member 'UAthenaLockedStyleNotification_C::AutoHide' has a wrong offset!");

}
