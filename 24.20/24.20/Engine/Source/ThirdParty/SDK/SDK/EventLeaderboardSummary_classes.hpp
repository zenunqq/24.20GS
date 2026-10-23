#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventLeaderboardSummary_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ViewAllHover;
	class UIconTextButton_C*                      Button_ViewAll;
	class UCommonBorder*                          CommonBorder_ContainerBG;
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;
	class UCommonBorder*                          CommonBorder_ViewAllBG;
	class UCommonTextBlock*                       CommonTextBlock_Title;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_0;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_1;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_2;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_3;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_4;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_5;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_6;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_7;
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_8;
	class UOverlay*                               Overlay_SummaryContent;
	class UCommonTextBlock*                       Text_ViewFullLeaderboard;
	TMulticastInlineDelegate<void(const class FString& TournamentId, const class FString& EventId)> EventViewFullLeaderboard;

public:
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo_0);
	void ExecuteUbergraph_EventLeaderboardSummary(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardSummary_C">();
	}
	static class UEventLeaderboardSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardSummary_C>();
	}
};
static_assert(alignof(UEventLeaderboardSummary_C) == 0x000008, "Wrong alignment on UEventLeaderboardSummary_C");
static_assert(sizeof(UEventLeaderboardSummary_C) == 0x0007C0, "Wrong size on UEventLeaderboardSummary_C");
static_assert(offsetof(UEventLeaderboardSummary_C, UberGraphFrame) == 0x000718, "Member 'UEventLeaderboardSummary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, ViewAllHover) == 0x000720, "Member 'UEventLeaderboardSummary_C::ViewAllHover' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Button_ViewAll) == 0x000728, "Member 'UEventLeaderboardSummary_C::Button_ViewAll' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ContainerBG) == 0x000730, "Member 'UEventLeaderboardSummary_C::CommonBorder_ContainerBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ScoringTitleBG) == 0x000738, "Member 'UEventLeaderboardSummary_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ViewAllBG) == 0x000740, "Member 'UEventLeaderboardSummary_C::CommonBorder_ViewAllBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonTextBlock_Title) == 0x000748, "Member 'UEventLeaderboardSummary_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry) == 0x000750, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_0) == 0x000758, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_1) == 0x000760, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_2) == 0x000768, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_2' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_3) == 0x000770, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_3' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_4) == 0x000778, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_4' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_5) == 0x000780, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_5' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_6) == 0x000788, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_6' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_7) == 0x000790, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_7' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_8) == 0x000798, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_8' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Overlay_SummaryContent) == 0x0007A0, "Member 'UEventLeaderboardSummary_C::Overlay_SummaryContent' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Text_ViewFullLeaderboard) == 0x0007A8, "Member 'UEventLeaderboardSummary_C::Text_ViewFullLeaderboard' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventViewFullLeaderboard) == 0x0007B0, "Member 'UEventLeaderboardSummary_C::EventViewFullLeaderboard' has a wrong offset!");

}
