#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownLobbyPanel_C final : public UFortTournamentLobbyPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       EventButtonHover;
	class UWidgetAnimation*                       Intro;
	class UBorder*                                BorderTimeRemaining;
	class UCommonWidgetSwitcherLegacy*            CentralContentSwitcher;
	class UCommonBorder*                          CommonBorderPinContainer;
	class UCommonTextBlock*                       CommonTextBlock_EarnAPin;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Score;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_TournamentWarnings;
	class UScaleBox*                              Content_ScheduledTime;
	class UScaleBox*                              Content_TimeRemaining;
	class UVerticalBox*                           EarnPinContent;
	class UOverlay*                               EarnPinMessage;
	class UCommonTextBlock*                       EarnPinScoreText;
	class UCommonTextBlock*                       HighestScoreTeammatesText;
	class UCommonTextBlock*                       HighestScoreText;
	class UHorizontalBox*                         HorizontalBox_SpecialScore;
	class UImage*                                 Image;
	class UImage*                                 Image_35;
	class UImage*                                 Image_DetailsButtonBG;
	class UImage*                                 Image_ErrorBG;
	class UImage*                                 Image_PanelBorder;
	class UCommonTextBlock*                       MFA_WarningText;
	class UOverlay*                               NoMessage;
	class UScaleBox*                              ScaleBox_DetailsText;
	class UShowdownPin_C*                         ShowdownPin;
	class UShowdownPin_C*                         ShowdownPin_SpecialScore;
	class USizeBox*                               SizeBox_HighestScore;
	class USizeBox*                               SizeBoxTournamentTitle;
	class UCommonWidgetSwitcherLegacy*            Switcher_ScoreInfo;
	class UCommonWidgetSwitcherLegacy*            Switcher_TimeInfo;
	class UCommonTextBlock*                       Text_CrossplayWarning;
	class UCommonTextBlock*                       Text_DetailsButton;
	class UCommonTextBlock*                       Text_MatchCapWarning;
	class UCommonTextBlock*                       Text_Remaining;
	class UCommonTextBlock*                       Text_ScheduledMMInfo;
	class UFortLazyImage*                         TournamentLogo;
	class UCommonTextBlock*                       TournamentTitle;
	class UCommonTextBlock*                       TournamentTitle2;
	class UVerticalBox*                           VerticalBox_PanelContent;
	class UOverlay*                               WarningMessage;
	struct FSlateColor                            PrimaryColor;
	struct FSlateColor                            ShadowColor;
	struct FSlateColor                            HighlightColor;
	bool                                          DEVhasBranding;

public:
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BrandingToggle(bool hasBranding);
	void Construct();
	void EventColorize();
	void EventSwitchUI(ECommonInputType bNewInputType);
	void ExecuteUbergraph_ShowdownLobbyPanel(int32 EntryPoint);
	void HandleCrossplayChanged();
	void InputTypeChanged(bool isGamepad);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshDataBP();
	void UpdateColors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownLobbyPanel_C">();
	}
	static class UShowdownLobbyPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownLobbyPanel_C>();
	}
};
static_assert(alignof(UShowdownLobbyPanel_C) == 0x000008, "Wrong alignment on UShowdownLobbyPanel_C");
static_assert(sizeof(UShowdownLobbyPanel_C) == 0x0008F0, "Wrong size on UShowdownLobbyPanel_C");
static_assert(offsetof(UShowdownLobbyPanel_C, UberGraphFrame) == 0x000768, "Member 'UShowdownLobbyPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, EventButtonHover) == 0x000770, "Member 'UShowdownLobbyPanel_C::EventButtonHover' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Intro) == 0x000778, "Member 'UShowdownLobbyPanel_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, BorderTimeRemaining) == 0x000780, "Member 'UShowdownLobbyPanel_C::BorderTimeRemaining' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, CentralContentSwitcher) == 0x000788, "Member 'UShowdownLobbyPanel_C::CentralContentSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, CommonBorderPinContainer) == 0x000790, "Member 'UShowdownLobbyPanel_C::CommonBorderPinContainer' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, CommonTextBlock_EarnAPin) == 0x000798, "Member 'UShowdownLobbyPanel_C::CommonTextBlock_EarnAPin' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, CommonWidgetSwitcher_Score) == 0x0007A0, "Member 'UShowdownLobbyPanel_C::CommonWidgetSwitcher_Score' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, CommonWidgetSwitcher_TournamentWarnings) == 0x0007A8, "Member 'UShowdownLobbyPanel_C::CommonWidgetSwitcher_TournamentWarnings' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Content_ScheduledTime) == 0x0007B0, "Member 'UShowdownLobbyPanel_C::Content_ScheduledTime' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Content_TimeRemaining) == 0x0007B8, "Member 'UShowdownLobbyPanel_C::Content_TimeRemaining' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, EarnPinContent) == 0x0007C0, "Member 'UShowdownLobbyPanel_C::EarnPinContent' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, EarnPinMessage) == 0x0007C8, "Member 'UShowdownLobbyPanel_C::EarnPinMessage' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, EarnPinScoreText) == 0x0007D0, "Member 'UShowdownLobbyPanel_C::EarnPinScoreText' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, HighestScoreTeammatesText) == 0x0007D8, "Member 'UShowdownLobbyPanel_C::HighestScoreTeammatesText' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, HighestScoreText) == 0x0007E0, "Member 'UShowdownLobbyPanel_C::HighestScoreText' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, HorizontalBox_SpecialScore) == 0x0007E8, "Member 'UShowdownLobbyPanel_C::HorizontalBox_SpecialScore' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Image) == 0x0007F0, "Member 'UShowdownLobbyPanel_C::Image' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Image_35) == 0x0007F8, "Member 'UShowdownLobbyPanel_C::Image_35' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Image_DetailsButtonBG) == 0x000800, "Member 'UShowdownLobbyPanel_C::Image_DetailsButtonBG' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Image_ErrorBG) == 0x000808, "Member 'UShowdownLobbyPanel_C::Image_ErrorBG' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Image_PanelBorder) == 0x000810, "Member 'UShowdownLobbyPanel_C::Image_PanelBorder' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, MFA_WarningText) == 0x000818, "Member 'UShowdownLobbyPanel_C::MFA_WarningText' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, NoMessage) == 0x000820, "Member 'UShowdownLobbyPanel_C::NoMessage' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, ScaleBox_DetailsText) == 0x000828, "Member 'UShowdownLobbyPanel_C::ScaleBox_DetailsText' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, ShowdownPin) == 0x000830, "Member 'UShowdownLobbyPanel_C::ShowdownPin' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, ShowdownPin_SpecialScore) == 0x000838, "Member 'UShowdownLobbyPanel_C::ShowdownPin_SpecialScore' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, SizeBox_HighestScore) == 0x000840, "Member 'UShowdownLobbyPanel_C::SizeBox_HighestScore' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, SizeBoxTournamentTitle) == 0x000848, "Member 'UShowdownLobbyPanel_C::SizeBoxTournamentTitle' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Switcher_ScoreInfo) == 0x000850, "Member 'UShowdownLobbyPanel_C::Switcher_ScoreInfo' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Switcher_TimeInfo) == 0x000858, "Member 'UShowdownLobbyPanel_C::Switcher_TimeInfo' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Text_CrossplayWarning) == 0x000860, "Member 'UShowdownLobbyPanel_C::Text_CrossplayWarning' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Text_DetailsButton) == 0x000868, "Member 'UShowdownLobbyPanel_C::Text_DetailsButton' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Text_MatchCapWarning) == 0x000870, "Member 'UShowdownLobbyPanel_C::Text_MatchCapWarning' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Text_Remaining) == 0x000878, "Member 'UShowdownLobbyPanel_C::Text_Remaining' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, Text_ScheduledMMInfo) == 0x000880, "Member 'UShowdownLobbyPanel_C::Text_ScheduledMMInfo' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, TournamentLogo) == 0x000888, "Member 'UShowdownLobbyPanel_C::TournamentLogo' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, TournamentTitle) == 0x000890, "Member 'UShowdownLobbyPanel_C::TournamentTitle' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, TournamentTitle2) == 0x000898, "Member 'UShowdownLobbyPanel_C::TournamentTitle2' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, VerticalBox_PanelContent) == 0x0008A0, "Member 'UShowdownLobbyPanel_C::VerticalBox_PanelContent' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, WarningMessage) == 0x0008A8, "Member 'UShowdownLobbyPanel_C::WarningMessage' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, PrimaryColor) == 0x0008B0, "Member 'UShowdownLobbyPanel_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, ShadowColor) == 0x0008C4, "Member 'UShowdownLobbyPanel_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, HighlightColor) == 0x0008D8, "Member 'UShowdownLobbyPanel_C::HighlightColor' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyPanel_C, DEVhasBranding) == 0x0008EC, "Member 'UShowdownLobbyPanel_C::DEVhasBranding' has a wrong offset!");

}
