#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFeatTimelineListEntry_C final : public UAthenaFeatTimelineListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnActivated;
	class UWidgetAnimation*                       OnShowCompleted;
	class UWidgetAnimation*                       OnHover;
	class UBorder*                                AnimBoundTileBorder;
	class UImage*                                 burst;
	class UImage*                                 Default;
	class UBorder*                                EntryVisbilityBorder;
	class UCommonTextBlock*                       SeasonNumber;
	class USizeBox*                               SizeBox_Contents;
	class USizeBox*                               SizeBox_Date;
	double                                        TimespanMaxWidth;
	double                                        TimespanWidthPerDay;
	bool                                          bWaitingForCompletedTimer;

public:
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_FeatTimelineListEntry(int32 EntryPoint);
	void HoverFeat();
	void OnFeatCompletedThisSession();
	void OnFeatInfoSet(int32 NumFeatsOnDay, int32 IdxOnDay);
	void OnTimespanInfoSet(int32 NumDays);
	void OnWaitingForCompletedTimer();
	void PreConstruct(bool IsDesignTime);
	void SetSeasonStyle();
	void UnHoverFeat();
	void WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FeatTimelineListEntry_C">();
	}
	static class UFeatTimelineListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeatTimelineListEntry_C>();
	}
};
static_assert(alignof(UFeatTimelineListEntry_C) == 0x000008, "Wrong alignment on UFeatTimelineListEntry_C");
static_assert(sizeof(UFeatTimelineListEntry_C) == 0x000360, "Wrong size on UFeatTimelineListEntry_C");
static_assert(offsetof(UFeatTimelineListEntry_C, UberGraphFrame) == 0x0002F0, "Member 'UFeatTimelineListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnActivated) == 0x0002F8, "Member 'UFeatTimelineListEntry_C::OnActivated' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnShowCompleted) == 0x000300, "Member 'UFeatTimelineListEntry_C::OnShowCompleted' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnHover) == 0x000308, "Member 'UFeatTimelineListEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, AnimBoundTileBorder) == 0x000310, "Member 'UFeatTimelineListEntry_C::AnimBoundTileBorder' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, burst) == 0x000318, "Member 'UFeatTimelineListEntry_C::burst' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, Default) == 0x000320, "Member 'UFeatTimelineListEntry_C::Default' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, EntryVisbilityBorder) == 0x000328, "Member 'UFeatTimelineListEntry_C::EntryVisbilityBorder' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SeasonNumber) == 0x000330, "Member 'UFeatTimelineListEntry_C::SeasonNumber' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SizeBox_Contents) == 0x000338, "Member 'UFeatTimelineListEntry_C::SizeBox_Contents' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SizeBox_Date) == 0x000340, "Member 'UFeatTimelineListEntry_C::SizeBox_Date' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, TimespanMaxWidth) == 0x000348, "Member 'UFeatTimelineListEntry_C::TimespanMaxWidth' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, TimespanWidthPerDay) == 0x000350, "Member 'UFeatTimelineListEntry_C::TimespanWidthPerDay' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, bWaitingForCompletedTimer) == 0x000358, "Member 'UFeatTimelineListEntry_C::bWaitingForCompletedTimer' has a wrong offset!");

}
