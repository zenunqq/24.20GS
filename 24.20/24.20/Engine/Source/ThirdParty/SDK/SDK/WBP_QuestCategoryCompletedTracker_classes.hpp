#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_QuestCategoryCompletedTracker_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OutOfScreen;
	class UWidgetAnimation*                       Selected;
	class UBorder*                                Border_padding;
	class UHorizontalBox*                         CountdownTimerContainer;
	class UAthenaChallengeDateTimeTextBlock*      DateTimeText_MoreQuestsLater;
	class UImage*                                 Image_ProgressBar;
	class UImage*                                 ImageTimer;
	class UOverlay*                               ProgressContainer;
	class UCommonTextBlock*                       Text_Progress;
	int32                                         PreviewCompletedQuests;
	int32                                         PreviewTotalQuests;
	double                                        TextColorAnimValue;
	int32                                         CompletedQuests;
	int32                                         TotalQuests;
	struct FLinearColor                           NoProgressTextColor;
	struct FLinearColor                           ProgressTextColor;
	struct FLinearColor                           SelectedTextColor;
	EAthenaChallengeTimerState                    Timer_State;

public:
	void Construct();
	void ExecuteUbergraph_WBP_QuestCategoryCompletedTracker(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetIsSelected(bool IsSelected);
	void SetMoreLaterTimer(EAthenaChallengeTimerState TimerState, const struct FTimespan& TimeRemaining);
	void SetOutOfScreen(bool IsOutOfScreen);
	void SetProgress(int32 CompletedQuests_0, int32 TotalQuests_0);
	void SetTextColorAnimValue(double Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuestCategoryCompletedTracker_C">();
	}
	static class UWBP_QuestCategoryCompletedTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuestCategoryCompletedTracker_C>();
	}
};
static_assert(alignof(UWBP_QuestCategoryCompletedTracker_C) == 0x000008, "Wrong alignment on UWBP_QuestCategoryCompletedTracker_C");
static_assert(sizeof(UWBP_QuestCategoryCompletedTracker_C) == 0x000308, "Wrong size on UWBP_QuestCategoryCompletedTracker_C");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, UberGraphFrame) == 0x000268, "Member 'UWBP_QuestCategoryCompletedTracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, OutOfScreen) == 0x000270, "Member 'UWBP_QuestCategoryCompletedTracker_C::OutOfScreen' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, Selected) == 0x000278, "Member 'UWBP_QuestCategoryCompletedTracker_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, Border_padding) == 0x000280, "Member 'UWBP_QuestCategoryCompletedTracker_C::Border_padding' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, CountdownTimerContainer) == 0x000288, "Member 'UWBP_QuestCategoryCompletedTracker_C::CountdownTimerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, DateTimeText_MoreQuestsLater) == 0x000290, "Member 'UWBP_QuestCategoryCompletedTracker_C::DateTimeText_MoreQuestsLater' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, Image_ProgressBar) == 0x000298, "Member 'UWBP_QuestCategoryCompletedTracker_C::Image_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, ImageTimer) == 0x0002A0, "Member 'UWBP_QuestCategoryCompletedTracker_C::ImageTimer' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, ProgressContainer) == 0x0002A8, "Member 'UWBP_QuestCategoryCompletedTracker_C::ProgressContainer' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, Text_Progress) == 0x0002B0, "Member 'UWBP_QuestCategoryCompletedTracker_C::Text_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, PreviewCompletedQuests) == 0x0002B8, "Member 'UWBP_QuestCategoryCompletedTracker_C::PreviewCompletedQuests' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, PreviewTotalQuests) == 0x0002BC, "Member 'UWBP_QuestCategoryCompletedTracker_C::PreviewTotalQuests' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, TextColorAnimValue) == 0x0002C0, "Member 'UWBP_QuestCategoryCompletedTracker_C::TextColorAnimValue' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, CompletedQuests) == 0x0002C8, "Member 'UWBP_QuestCategoryCompletedTracker_C::CompletedQuests' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, TotalQuests) == 0x0002CC, "Member 'UWBP_QuestCategoryCompletedTracker_C::TotalQuests' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, NoProgressTextColor) == 0x0002D0, "Member 'UWBP_QuestCategoryCompletedTracker_C::NoProgressTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, ProgressTextColor) == 0x0002E0, "Member 'UWBP_QuestCategoryCompletedTracker_C::ProgressTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, SelectedTextColor) == 0x0002F0, "Member 'UWBP_QuestCategoryCompletedTracker_C::SelectedTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_QuestCategoryCompletedTracker_C, Timer_State) == 0x000300, "Member 'UWBP_QuestCategoryCompletedTracker_C::Timer_State' has a wrong offset!");

}
