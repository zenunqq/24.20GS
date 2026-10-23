#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTournamentDetails_C final : public UFortTournamentDetailsPage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HidePosterFade;
	class UWidgetAnimation*                       CollapseLeaderboardSummary;
	class UWidgetAnimation*                       FullScreenContent;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       BlurPoster;
	class UWidgetAnimation*                       BlurBG;
	class UWidgetAnimation*                       ShowEventWindowDetails;
	class UWidgetAnimation*                       ShowDetails;
	class UWidgetAnimation*                       PosterFlip;
	class UBackgroundBlur*                        BackgroundBlur_Background;
	class UBackgroundBlur*                        BackgroundBlur_PosterLayer;
	class UEventsSimpleButton_C*                  Button_Back;
	class UIconTextButton_C*                      Button_EnableMFA;
	class UCloseButton_C*                         CloseButton;
	class UCommonBorder*                          CommonBorder_BGText;
	class UCommonBorder*                          CommonBorder_ScoringBG;
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;
	class UCommonTextBlock*                       CommonTextBlock_TournamentDescription;
	class UCommonTextBlock*                       CommonTextBlock_TournamentSubtitle;
	class UCommonTextBlock*                       CommonTextBlock_UnlockCriteria;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_DetailsButtons;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_FullScreenSwitch;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_WindowsDetails;
	class UEventsSimpleButton_C*                  DetailsPanelButton;
	class UCommonWidgetSwitcherLegacy*            DetailsSwitcher;
	class UEventLeaderboardScreen_C*              EventLeaderboardScreen;
	class UEventLeaderboardSummary_C*             EventLeaderboardSummary;
	class UScrollBox*                             EventsScrollBox;
	class UImage*                                 Image_PosterFade;
	class UCommonTextBlock*                       MFA_WarningText;
	class UVerticalBox*                           MFAContainer;
	class UOverlay*                               OverviewPanel;
	class UEventsSimpleButton_C*                  OverviewPanelButton;
	class URetainerBox*                           RetainerBox_BGText;
	class URetainerBox*                           RetainerBox_TimeCallout;
	class URichTextBlock*                         RichTextBlock_TournamentTimeCallout1;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_1;
	class UScrollBox*                             ScrollBox_DetailAndRules;
	class UEventsSimpleButton_C*                  SeriesPointLeaderboardButton;
	class UShowdownEventTile_C*                   ShowdownEventTile;
	class UShowdownEventTile_C*                   ShowdownEventTile_0;
	class UShowdownEventTile_C*                   ShowdownEventTile_1;
	class UShowdownEventTile_C*                   ShowdownEventTile_2;
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule;
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_3;
	class UCommonTextBlock*                       Text_PinUnlockScore;
	class UTournamentEventWindowDetails_C*        TournamentEventWindowDetails;
	class UCommonTextBlock*                       TournamentMatchType;
	class UTournamentPayoutModal_C*               TournamentPayoutModal;
	class UShowdownTournamentPosterBack_C*        TournamentPosterBack;
	class UShowdownTournamentPosterFront_C*       TournamentPosterFront;
	class UCommonTextBlock*                       TournamentRoundText;
	class UCommonTextBlock*                       TournamentSubTitleBackground;
	class UTournamentLiveGames_C*                 TournamentWatchList;
	class UUniformGridPanel*                      UniformGridPanel_TournamentScoringRules;
	class UHorizontalBox*                         UnlockPinContent;
	bool                                          EventWindowDetailsShown;
	bool                                          TournamentDetailsShown;
	uint8                                         Pad_902[0x6];
	TMulticastInlineDelegate<void()>              BackActionSelected;
	class UWidget*                                firstActiveEvent;
	class UWidget*                                lastFocusedEvent;
	bool                                          isCenteringScrollBox;
	bool                                          LeaderboardisCollapsed;
	uint8                                         Pad_92A[0x6];
	class FString                                 DefaultTournamentIdForScoringRules;
	class ULeaderboardListViewWrapper_C*          LeaderboardListViewWrapper;

public:
	void AnimTransition(bool In, class UWidgetAnimation* Animation, double PlaySpeed);
	void BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void CloseEventWindowDetails();
	void CloseTournamentDetails();
	void Construct();
	void CreateScoringWidgets(const class FString& TournamentSeriesId, const class FString& TournamentId);
	void EventBackoutLiveGames();
	void EventCenterEventWindow(class UWidget* Widget);
	void EventCloseLeaderboard();
	void EventclosePayout();
	void EventDeselectWindows(class UWidget* SelectedWidget);
	void EventFullScreenAnimOutFinished();
	void EventShowWindowDetails(class UCommonButtonLegacy* Button);
	void EventStartCentering();
	void EventStopCentering();
	void EventToggleFullScreenContent(bool In);
	void EventViewFullLeaderboard(const class FString& TournamentId, const class FString& EventId);
	void EventViewLiveGames();
	void EventViewPayout(const class FString& EventWindowId, const class FString& EventId);
	void ExecuteUbergraph_TournamentDetails(int32 EntryPoint);
	void Handle_Back(bool* PassThrough);
	void Is_Scoring_Rule_Valid(const struct FFortShowdownScoringRuleInfo& ScoringRuleInfo, bool* IsValid);
	void No_payouts();
	void OnActivateScreen();
	void OnHandleBack(bool* bResult);
	void OnInitialized();
	void Refresh();
	void RefreshDataBP();
	void RefreshDetailsPanel();
	void RefreshEvents();
	void RefreshOverviewPanel();
	void RefreshScoringRules();
	void RefreshViolators();
	void RemoveInvalidScoringRules(TArray<struct FFortShowdownScoringRuleInfo>& UnfilteredScoringRules, TArray<struct FFortShowdownScoringRuleInfo>* FilteredScoringRules);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateDefaultTournamentEvent(TArray<class FString>& TournamentEvents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentDetails_C">();
	}
	static class UTournamentDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentDetails_C>();
	}
};
static_assert(alignof(UTournamentDetails_C) == 0x000008, "Wrong alignment on UTournamentDetails_C");
static_assert(sizeof(UTournamentDetails_C) == 0x000948, "Wrong size on UTournamentDetails_C");
static_assert(offsetof(UTournamentDetails_C, UberGraphFrame) == 0x000730, "Member 'UTournamentDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, HidePosterFade) == 0x000738, "Member 'UTournamentDetails_C::HidePosterFade' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CollapseLeaderboardSummary) == 0x000740, "Member 'UTournamentDetails_C::CollapseLeaderboardSummary' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, FullScreenContent) == 0x000748, "Member 'UTournamentDetails_C::FullScreenContent' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, Intro) == 0x000750, "Member 'UTournamentDetails_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, BlurPoster) == 0x000758, "Member 'UTournamentDetails_C::BlurPoster' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, BlurBG) == 0x000760, "Member 'UTournamentDetails_C::BlurBG' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowEventWindowDetails) == 0x000768, "Member 'UTournamentDetails_C::ShowEventWindowDetails' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowDetails) == 0x000770, "Member 'UTournamentDetails_C::ShowDetails' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, PosterFlip) == 0x000778, "Member 'UTournamentDetails_C::PosterFlip' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, BackgroundBlur_Background) == 0x000780, "Member 'UTournamentDetails_C::BackgroundBlur_Background' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, BackgroundBlur_PosterLayer) == 0x000788, "Member 'UTournamentDetails_C::BackgroundBlur_PosterLayer' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, Button_Back) == 0x000790, "Member 'UTournamentDetails_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, Button_EnableMFA) == 0x000798, "Member 'UTournamentDetails_C::Button_EnableMFA' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CloseButton) == 0x0007A0, "Member 'UTournamentDetails_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonBorder_BGText) == 0x0007A8, "Member 'UTournamentDetails_C::CommonBorder_BGText' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonBorder_ScoringBG) == 0x0007B0, "Member 'UTournamentDetails_C::CommonBorder_ScoringBG' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonBorder_ScoringTitleBG) == 0x0007B8, "Member 'UTournamentDetails_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonTextBlock_TournamentDescription) == 0x0007C0, "Member 'UTournamentDetails_C::CommonTextBlock_TournamentDescription' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonTextBlock_TournamentSubtitle) == 0x0007C8, "Member 'UTournamentDetails_C::CommonTextBlock_TournamentSubtitle' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonTextBlock_UnlockCriteria) == 0x0007D0, "Member 'UTournamentDetails_C::CommonTextBlock_UnlockCriteria' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonWidgetSwitcher_DetailsButtons) == 0x0007D8, "Member 'UTournamentDetails_C::CommonWidgetSwitcher_DetailsButtons' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonWidgetSwitcher_FullScreenSwitch) == 0x0007E0, "Member 'UTournamentDetails_C::CommonWidgetSwitcher_FullScreenSwitch' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, CommonWidgetSwitcher_WindowsDetails) == 0x0007E8, "Member 'UTournamentDetails_C::CommonWidgetSwitcher_WindowsDetails' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, DetailsPanelButton) == 0x0007F0, "Member 'UTournamentDetails_C::DetailsPanelButton' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, DetailsSwitcher) == 0x0007F8, "Member 'UTournamentDetails_C::DetailsSwitcher' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, EventLeaderboardScreen) == 0x000800, "Member 'UTournamentDetails_C::EventLeaderboardScreen' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, EventLeaderboardSummary) == 0x000808, "Member 'UTournamentDetails_C::EventLeaderboardSummary' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, EventsScrollBox) == 0x000810, "Member 'UTournamentDetails_C::EventsScrollBox' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, Image_PosterFade) == 0x000818, "Member 'UTournamentDetails_C::Image_PosterFade' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, MFA_WarningText) == 0x000820, "Member 'UTournamentDetails_C::MFA_WarningText' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, MFAContainer) == 0x000828, "Member 'UTournamentDetails_C::MFAContainer' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, OverviewPanel) == 0x000830, "Member 'UTournamentDetails_C::OverviewPanel' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, OverviewPanelButton) == 0x000838, "Member 'UTournamentDetails_C::OverviewPanelButton' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, RetainerBox_BGText) == 0x000840, "Member 'UTournamentDetails_C::RetainerBox_BGText' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, RetainerBox_TimeCallout) == 0x000848, "Member 'UTournamentDetails_C::RetainerBox_TimeCallout' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, RichTextBlock_TournamentTimeCallout1) == 0x000850, "Member 'UTournamentDetails_C::RichTextBlock_TournamentTimeCallout1' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, SafeZone_0) == 0x000858, "Member 'UTournamentDetails_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, SafeZone_1) == 0x000860, "Member 'UTournamentDetails_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ScrollBox_DetailAndRules) == 0x000868, "Member 'UTournamentDetails_C::ScrollBox_DetailAndRules' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, SeriesPointLeaderboardButton) == 0x000870, "Member 'UTournamentDetails_C::SeriesPointLeaderboardButton' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownEventTile) == 0x000878, "Member 'UTournamentDetails_C::ShowdownEventTile' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownEventTile_0) == 0x000880, "Member 'UTournamentDetails_C::ShowdownEventTile_0' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownEventTile_1) == 0x000888, "Member 'UTournamentDetails_C::ShowdownEventTile_1' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownEventTile_2) == 0x000890, "Member 'UTournamentDetails_C::ShowdownEventTile_2' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownTournamentDetailsScoringRule) == 0x000898, "Member 'UTournamentDetails_C::ShowdownTournamentDetailsScoringRule' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, ShowdownTournamentDetailsScoringRule_C_3) == 0x0008A0, "Member 'UTournamentDetails_C::ShowdownTournamentDetailsScoringRule_C_3' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, Text_PinUnlockScore) == 0x0008A8, "Member 'UTournamentDetails_C::Text_PinUnlockScore' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentEventWindowDetails) == 0x0008B0, "Member 'UTournamentDetails_C::TournamentEventWindowDetails' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentMatchType) == 0x0008B8, "Member 'UTournamentDetails_C::TournamentMatchType' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentPayoutModal) == 0x0008C0, "Member 'UTournamentDetails_C::TournamentPayoutModal' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentPosterBack) == 0x0008C8, "Member 'UTournamentDetails_C::TournamentPosterBack' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentPosterFront) == 0x0008D0, "Member 'UTournamentDetails_C::TournamentPosterFront' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentRoundText) == 0x0008D8, "Member 'UTournamentDetails_C::TournamentRoundText' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentSubTitleBackground) == 0x0008E0, "Member 'UTournamentDetails_C::TournamentSubTitleBackground' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentWatchList) == 0x0008E8, "Member 'UTournamentDetails_C::TournamentWatchList' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, UniformGridPanel_TournamentScoringRules) == 0x0008F0, "Member 'UTournamentDetails_C::UniformGridPanel_TournamentScoringRules' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, UnlockPinContent) == 0x0008F8, "Member 'UTournamentDetails_C::UnlockPinContent' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, EventWindowDetailsShown) == 0x000900, "Member 'UTournamentDetails_C::EventWindowDetailsShown' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, TournamentDetailsShown) == 0x000901, "Member 'UTournamentDetails_C::TournamentDetailsShown' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, BackActionSelected) == 0x000908, "Member 'UTournamentDetails_C::BackActionSelected' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, firstActiveEvent) == 0x000918, "Member 'UTournamentDetails_C::firstActiveEvent' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, lastFocusedEvent) == 0x000920, "Member 'UTournamentDetails_C::lastFocusedEvent' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, isCenteringScrollBox) == 0x000928, "Member 'UTournamentDetails_C::isCenteringScrollBox' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, LeaderboardisCollapsed) == 0x000929, "Member 'UTournamentDetails_C::LeaderboardisCollapsed' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, DefaultTournamentIdForScoringRules) == 0x000930, "Member 'UTournamentDetails_C::DefaultTournamentIdForScoringRules' has a wrong offset!");
static_assert(offsetof(UTournamentDetails_C, LeaderboardListViewWrapper) == 0x000940, "Member 'UTournamentDetails_C::LeaderboardListViewWrapper' has a wrong offset!");

}
