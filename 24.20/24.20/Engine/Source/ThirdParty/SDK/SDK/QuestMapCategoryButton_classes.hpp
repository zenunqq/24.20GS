#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UQuestMapCategoryButton_C final : public UAthenaFullScreenMapQuestCategoryButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OutOfScreen_text;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       OutOfScreen;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       burst;
	class UBorder*                                Border_CountdownTimer;
	class UBorder*                                Border_TimeCustom;
	class UHorizontalBox*                         CountdownTimerContainer;
	class UAthenaChallengeDateTimeTextBlock*      DateTimeText_TimeRemaining;
	class UImage*                                 Image_BG;
	class UImage*                                 Image_CheckMark;
	class UImage*                                 Image_Disabled;
	class UImage*                                 Image_Fade;
	class UImage*                                 Image_OutOfScreen;
	class UImage*                                 ImageTimer;
	class UImage*                                 ImageTimer_1;
	class UFortLazyImage*                         LazyImage_Extension;
	class UCommonBorder*                          NewBang;
	class URichTextBlock*                         RichText_Title;
	class URichTextBlock*                         RichText_Title_Unfocused;
	class USizeBox*                               SizeBox_Title;
	class UCommonTextBlock*                       Text_Subtitle;
	class UCommonTextBlock*                       Text_TimeCustom;
	class UCommonTextBlock*                       Text_Unavailable;
	class UHorizontalBox*                         TimeCustomContainer;
	class UWBP_QuestCategoryCompletedTracker_C*   WBP_QuestCategoryCompletedTracker;
	bool                                          IsSelected;
	uint8                                         Pad_14E9[0x3];
	struct FLinearColor                           DefaultTimerColor;
	struct FLinearColor                           DefaultTimerColor_Selected;
	struct FLinearColor                           HoursRemainingTimerColor;
	struct FLinearColor                           HoursRemainingTimerColor_Selected;
	struct FLinearColor                           UrgentTimerColor;
	struct FLinearColor                           UrgentTimerColor_Selected;
	uint8                                         Pad_154C[0x4];
	class FText                                   DebugTitleText;
	class FText                                   DebugSubText;
	EQuestCategoryButtonTimerState                PreviewTimerType;
	EAthenaChallengeTimerState                    PreviewTimerState;
	uint8                                         Pad_1582[0x6];
	double                                        NudgeAnimValue;
	float                                         TextWidthCompleted;
	float                                         TextWidthDefault;
	bool                                          PreviewAllQuestsCompleted;
	EAthenaChallengeTimerState                    Timer_State;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnTimerSet(EAthenaChallengeTimerState TimerState);
	void BP_OnUnhovered();
	void BP_Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuest, const struct FQuestCategoryButtonOverrides& ButtonOverrides, bool bQuestListContentDisabled);
	void Construct();
	void ExecuteUbergraph_QuestMapCategoryButton(int32 EntryPoint);
	void OnFocusReceivedFromQuests();
	void OnFocusSetToQuests();
	void OnMoreInTimerSet(const EAthenaChallengeTimerState TimerState, const struct FTimespan& TimeRemaining);
	void OnTimeRemainingTimerSet(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& TimeRemaining);
	void Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuests, struct FQuestCategoryButtonOverrides& Overrides);
	void PreConstruct(bool IsDesignTime);
	void SetCompletedState(bool AllCompleted);
	void SetNudgeAnimValue(double Value);
	void SetTimer(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& Timespan);
	void SetTimerStyling(EAthenaChallengeTimerState TimerState);
	void SetTitle(const class FText& Title, const class FText& SubText);
	void SetVisuals(struct FQuestCategoryButtonOverrides& Overrides);
	void ShowNewBang(bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestMapCategoryButton_C">();
	}
	static class UQuestMapCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestMapCategoryButton_C>();
	}
};
static_assert(alignof(UQuestMapCategoryButton_C) == 0x000010, "Wrong alignment on UQuestMapCategoryButton_C");
static_assert(sizeof(UQuestMapCategoryButton_C) == 0x0015A0, "Wrong size on UQuestMapCategoryButton_C");
static_assert(offsetof(UQuestMapCategoryButton_C, UberGraphFrame) == 0x001410, "Member 'UQuestMapCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, OutOfScreen_text) == 0x001418, "Member 'UQuestMapCategoryButton_C::OutOfScreen_text' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Reset) == 0x001420, "Member 'UQuestMapCategoryButton_C::Reset' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, OutOfScreen) == 0x001428, "Member 'UQuestMapCategoryButton_C::OutOfScreen' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Select) == 0x001430, "Member 'UQuestMapCategoryButton_C::Select' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, burst) == 0x001438, "Member 'UQuestMapCategoryButton_C::burst' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Border_CountdownTimer) == 0x001440, "Member 'UQuestMapCategoryButton_C::Border_CountdownTimer' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Border_TimeCustom) == 0x001448, "Member 'UQuestMapCategoryButton_C::Border_TimeCustom' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, CountdownTimerContainer) == 0x001450, "Member 'UQuestMapCategoryButton_C::CountdownTimerContainer' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, DateTimeText_TimeRemaining) == 0x001458, "Member 'UQuestMapCategoryButton_C::DateTimeText_TimeRemaining' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Image_BG) == 0x001460, "Member 'UQuestMapCategoryButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Image_CheckMark) == 0x001468, "Member 'UQuestMapCategoryButton_C::Image_CheckMark' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Image_Disabled) == 0x001470, "Member 'UQuestMapCategoryButton_C::Image_Disabled' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Image_Fade) == 0x001478, "Member 'UQuestMapCategoryButton_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Image_OutOfScreen) == 0x001480, "Member 'UQuestMapCategoryButton_C::Image_OutOfScreen' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, ImageTimer) == 0x001488, "Member 'UQuestMapCategoryButton_C::ImageTimer' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, ImageTimer_1) == 0x001490, "Member 'UQuestMapCategoryButton_C::ImageTimer_1' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, LazyImage_Extension) == 0x001498, "Member 'UQuestMapCategoryButton_C::LazyImage_Extension' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, NewBang) == 0x0014A0, "Member 'UQuestMapCategoryButton_C::NewBang' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, RichText_Title) == 0x0014A8, "Member 'UQuestMapCategoryButton_C::RichText_Title' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, RichText_Title_Unfocused) == 0x0014B0, "Member 'UQuestMapCategoryButton_C::RichText_Title_Unfocused' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, SizeBox_Title) == 0x0014B8, "Member 'UQuestMapCategoryButton_C::SizeBox_Title' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Text_Subtitle) == 0x0014C0, "Member 'UQuestMapCategoryButton_C::Text_Subtitle' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Text_TimeCustom) == 0x0014C8, "Member 'UQuestMapCategoryButton_C::Text_TimeCustom' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Text_Unavailable) == 0x0014D0, "Member 'UQuestMapCategoryButton_C::Text_Unavailable' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, TimeCustomContainer) == 0x0014D8, "Member 'UQuestMapCategoryButton_C::TimeCustomContainer' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, WBP_QuestCategoryCompletedTracker) == 0x0014E0, "Member 'UQuestMapCategoryButton_C::WBP_QuestCategoryCompletedTracker' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, IsSelected) == 0x0014E8, "Member 'UQuestMapCategoryButton_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, DefaultTimerColor) == 0x0014EC, "Member 'UQuestMapCategoryButton_C::DefaultTimerColor' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, DefaultTimerColor_Selected) == 0x0014FC, "Member 'UQuestMapCategoryButton_C::DefaultTimerColor_Selected' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, HoursRemainingTimerColor) == 0x00150C, "Member 'UQuestMapCategoryButton_C::HoursRemainingTimerColor' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, HoursRemainingTimerColor_Selected) == 0x00151C, "Member 'UQuestMapCategoryButton_C::HoursRemainingTimerColor_Selected' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, UrgentTimerColor) == 0x00152C, "Member 'UQuestMapCategoryButton_C::UrgentTimerColor' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, UrgentTimerColor_Selected) == 0x00153C, "Member 'UQuestMapCategoryButton_C::UrgentTimerColor_Selected' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, DebugTitleText) == 0x001550, "Member 'UQuestMapCategoryButton_C::DebugTitleText' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, DebugSubText) == 0x001568, "Member 'UQuestMapCategoryButton_C::DebugSubText' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, PreviewTimerType) == 0x001580, "Member 'UQuestMapCategoryButton_C::PreviewTimerType' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, PreviewTimerState) == 0x001581, "Member 'UQuestMapCategoryButton_C::PreviewTimerState' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, NudgeAnimValue) == 0x001588, "Member 'UQuestMapCategoryButton_C::NudgeAnimValue' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, TextWidthCompleted) == 0x001590, "Member 'UQuestMapCategoryButton_C::TextWidthCompleted' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, TextWidthDefault) == 0x001594, "Member 'UQuestMapCategoryButton_C::TextWidthDefault' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, PreviewAllQuestsCompleted) == 0x001598, "Member 'UQuestMapCategoryButton_C::PreviewAllQuestsCompleted' has a wrong offset!");
static_assert(offsetof(UQuestMapCategoryButton_C, Timer_State) == 0x001599, "Member 'UQuestMapCategoryButton_C::Timer_State' has a wrong offset!");

}
