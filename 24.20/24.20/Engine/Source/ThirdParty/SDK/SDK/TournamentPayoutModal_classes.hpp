#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTournamentPayoutModal_C final : public UFortTournamentPayoutModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UEventsSimpleButton_C*                  BackButton;
	class UCloseButton_C*                         CloseButton;
	class UCommonBorder*                          CommonBorder_ContainerBG;
	class UCommonBorder*                          CommonBorder_OptionsBarBG;
	class UCommonHierarchicalScrollBox*           CommonHierarchicalScrollBox_0;
	class UCommonTextBlock*                       CommonTextBlock_1;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_476;
	class UVerticalBox*                           Content_LeaderboardEntries;
	class UCommonBorder*                          Content_NoLeaderboardEntries;
	class UEventLeaderboardEventDetails_C*        EventLeaderboardEventDetails;
	class UEventLeaderboardHeader_C*              EventLeaderboardHeaderDetails;
	class UHorizontalBox*                         HorizontalBox_0;
	class USafeZone*                              SafeZone_0;
	class USizeBox*                               SizeBox_TopContainer;
	class UCommonWidgetSwitcherLegacy*            Switcher_LeaderboardEntries;
	class UCommonTextBlock*                       Text_NoLeaderboardEntries;
	TMulticastInlineDelegate<void()>              CallEventBack;
	TMulticastInlineDelegate<void()>              NoPayout;
	struct FFortTournamentDisplayInfo             CurrentDisplayInfo;

public:
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void EmptyFunction(bool* Handled);
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void EventIntro();
	void ExecuteUbergraph_TournamentPayoutModal(int32 EntryPoint);
	void Init(const class FString& EventWindowId, const class FString& TournamentId);
	void InitializeTabButton(class UCommonButtonLegacy* TabButton, const class FText& TabText);
	void NotifyNoPayouts();
	void OnTabVisibilityChange(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentPayoutModal_C">();
	}
	static class UTournamentPayoutModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentPayoutModal_C>();
	}
};
static_assert(alignof(UTournamentPayoutModal_C) == 0x000008, "Wrong alignment on UTournamentPayoutModal_C");
static_assert(sizeof(UTournamentPayoutModal_C) == 0x0006F8, "Wrong size on UTournamentPayoutModal_C");
static_assert(offsetof(UTournamentPayoutModal_C, UberGraphFrame) == 0x000478, "Member 'UTournamentPayoutModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, Intro) == 0x000480, "Member 'UTournamentPayoutModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, BackButton) == 0x000488, "Member 'UTournamentPayoutModal_C::BackButton' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CloseButton) == 0x000490, "Member 'UTournamentPayoutModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CommonBorder_ContainerBG) == 0x000498, "Member 'UTournamentPayoutModal_C::CommonBorder_ContainerBG' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CommonBorder_OptionsBarBG) == 0x0004A0, "Member 'UTournamentPayoutModal_C::CommonBorder_OptionsBarBG' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CommonHierarchicalScrollBox_0) == 0x0004A8, "Member 'UTournamentPayoutModal_C::CommonHierarchicalScrollBox_0' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CommonTextBlock_1) == 0x0004B0, "Member 'UTournamentPayoutModal_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CommonWidgetSwitcher_476) == 0x0004B8, "Member 'UTournamentPayoutModal_C::CommonWidgetSwitcher_476' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, Content_LeaderboardEntries) == 0x0004C0, "Member 'UTournamentPayoutModal_C::Content_LeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, Content_NoLeaderboardEntries) == 0x0004C8, "Member 'UTournamentPayoutModal_C::Content_NoLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, EventLeaderboardEventDetails) == 0x0004D0, "Member 'UTournamentPayoutModal_C::EventLeaderboardEventDetails' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, EventLeaderboardHeaderDetails) == 0x0004D8, "Member 'UTournamentPayoutModal_C::EventLeaderboardHeaderDetails' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, HorizontalBox_0) == 0x0004E0, "Member 'UTournamentPayoutModal_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, SafeZone_0) == 0x0004E8, "Member 'UTournamentPayoutModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, SizeBox_TopContainer) == 0x0004F0, "Member 'UTournamentPayoutModal_C::SizeBox_TopContainer' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, Switcher_LeaderboardEntries) == 0x0004F8, "Member 'UTournamentPayoutModal_C::Switcher_LeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, Text_NoLeaderboardEntries) == 0x000500, "Member 'UTournamentPayoutModal_C::Text_NoLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CallEventBack) == 0x000508, "Member 'UTournamentPayoutModal_C::CallEventBack' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, NoPayout) == 0x000518, "Member 'UTournamentPayoutModal_C::NoPayout' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutModal_C, CurrentDisplayInfo) == 0x000528, "Member 'UTournamentPayoutModal_C::CurrentDisplayInfo' has a wrong offset!");

}
