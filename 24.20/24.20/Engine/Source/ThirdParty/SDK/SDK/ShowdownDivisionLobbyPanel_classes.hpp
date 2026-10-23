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

class UShowdownDivisionLobbyPanel_C final : public UFortDivisionLobbyPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       EventButtonHover;
	class UWidgetAnimation*                       Intro;
	class UProgressBar*                           Bar_DivisionProgress;
	class UBorder*                                BorderTimeRemaining;
	class UCommonWidgetSwitcherLegacy*            CentralContentSwitcher;
	class UCommonTextBlock*                       CommonTextBlock_1;
	class UCommonTextBlock*                       CommonTextBlock_EarnAPin;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_TournamentWarnings;
	class UVerticalBox*                           EarnPinContent;
	class UOverlay*                               EarnPinMessage;
	class UHorizontalBox*                         HorizontalBox_DivisionProgress;
	class UHorizontalBox*                         HorizontalBoxJustHYpe;
	class UImage*                                 HypeIcon;
	class UImage*                                 Image_4;
	class UImage*                                 Image_35;
	class UImage*                                 Image_DetailsButtonBG;
	class UImage*                                 Image_ErrorBG;
	class UImage*                                 Image_PanelBG;
	class UImage*                                 Image_PanelBorder;
	class UCommonTextBlock*                       MFA_WarningText;
	class UOverlay*                               NoMessage;
	class URichTextBlock*                         RichTextBlock_TournamentTitle;
	class UScaleBox*                              ScaleBox_DetailsText;
	class UCommonTextBlock*                       Text_CrossplayWarning;
	class UCommonTextBlock*                       Text_CurrentHype;
	class UCommonTextBlock*                       Text_DetailsButton;
	class UCommonTextBlock*                       Text_DivsionProgress;
	class UCommonTextBlock*                       Text_DivsionRank;
	class UCommonTextBlock*                       Text_MatchCapWarning;
	class UCommonTextBlock*                       Text_Remaining;
	class UCommonBorder*                          TournamentTitleInfo;
	class UOverlay*                               WarningMessage;
	class UWidgetSwitcher*                        WidgetSwitcher_Progress;
	struct FSlateColor                            PrimaryColor;
	struct FSlateColor                            ShadowColor;
	struct FSlateColor                            HighlightColor;

public:
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void EventColorize();
	void EventSwitchUI(ECommonInputType bNewInputType);
	void ExecuteUbergraph_ShowdownDivisionLobbyPanel(int32 EntryPoint);
	void HandleCrossplayChanged();
	void InputTypeChanged(bool isGamepad);
	void Refresh();
	void RefreshDataBP();
	void RefreshDivisionData();
	void UpdateColors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownDivisionLobbyPanel_C">();
	}
	static class UShowdownDivisionLobbyPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownDivisionLobbyPanel_C>();
	}
};
static_assert(alignof(UShowdownDivisionLobbyPanel_C) == 0x000008, "Wrong alignment on UShowdownDivisionLobbyPanel_C");
static_assert(sizeof(UShowdownDivisionLobbyPanel_C) == 0x0008A0, "Wrong size on UShowdownDivisionLobbyPanel_C");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, UberGraphFrame) == 0x000750, "Member 'UShowdownDivisionLobbyPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, EventButtonHover) == 0x000758, "Member 'UShowdownDivisionLobbyPanel_C::EventButtonHover' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Intro) == 0x000760, "Member 'UShowdownDivisionLobbyPanel_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Bar_DivisionProgress) == 0x000768, "Member 'UShowdownDivisionLobbyPanel_C::Bar_DivisionProgress' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, BorderTimeRemaining) == 0x000770, "Member 'UShowdownDivisionLobbyPanel_C::BorderTimeRemaining' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, CentralContentSwitcher) == 0x000778, "Member 'UShowdownDivisionLobbyPanel_C::CentralContentSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, CommonTextBlock_1) == 0x000780, "Member 'UShowdownDivisionLobbyPanel_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, CommonTextBlock_EarnAPin) == 0x000788, "Member 'UShowdownDivisionLobbyPanel_C::CommonTextBlock_EarnAPin' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, CommonWidgetSwitcher_TournamentWarnings) == 0x000790, "Member 'UShowdownDivisionLobbyPanel_C::CommonWidgetSwitcher_TournamentWarnings' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, EarnPinContent) == 0x000798, "Member 'UShowdownDivisionLobbyPanel_C::EarnPinContent' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, EarnPinMessage) == 0x0007A0, "Member 'UShowdownDivisionLobbyPanel_C::EarnPinMessage' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, HorizontalBox_DivisionProgress) == 0x0007A8, "Member 'UShowdownDivisionLobbyPanel_C::HorizontalBox_DivisionProgress' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, HorizontalBoxJustHYpe) == 0x0007B0, "Member 'UShowdownDivisionLobbyPanel_C::HorizontalBoxJustHYpe' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, HypeIcon) == 0x0007B8, "Member 'UShowdownDivisionLobbyPanel_C::HypeIcon' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_4) == 0x0007C0, "Member 'UShowdownDivisionLobbyPanel_C::Image_4' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_35) == 0x0007C8, "Member 'UShowdownDivisionLobbyPanel_C::Image_35' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_DetailsButtonBG) == 0x0007D0, "Member 'UShowdownDivisionLobbyPanel_C::Image_DetailsButtonBG' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_ErrorBG) == 0x0007D8, "Member 'UShowdownDivisionLobbyPanel_C::Image_ErrorBG' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_PanelBG) == 0x0007E0, "Member 'UShowdownDivisionLobbyPanel_C::Image_PanelBG' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Image_PanelBorder) == 0x0007E8, "Member 'UShowdownDivisionLobbyPanel_C::Image_PanelBorder' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, MFA_WarningText) == 0x0007F0, "Member 'UShowdownDivisionLobbyPanel_C::MFA_WarningText' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, NoMessage) == 0x0007F8, "Member 'UShowdownDivisionLobbyPanel_C::NoMessage' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, RichTextBlock_TournamentTitle) == 0x000800, "Member 'UShowdownDivisionLobbyPanel_C::RichTextBlock_TournamentTitle' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, ScaleBox_DetailsText) == 0x000808, "Member 'UShowdownDivisionLobbyPanel_C::ScaleBox_DetailsText' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_CrossplayWarning) == 0x000810, "Member 'UShowdownDivisionLobbyPanel_C::Text_CrossplayWarning' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_CurrentHype) == 0x000818, "Member 'UShowdownDivisionLobbyPanel_C::Text_CurrentHype' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_DetailsButton) == 0x000820, "Member 'UShowdownDivisionLobbyPanel_C::Text_DetailsButton' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_DivsionProgress) == 0x000828, "Member 'UShowdownDivisionLobbyPanel_C::Text_DivsionProgress' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_DivsionRank) == 0x000830, "Member 'UShowdownDivisionLobbyPanel_C::Text_DivsionRank' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_MatchCapWarning) == 0x000838, "Member 'UShowdownDivisionLobbyPanel_C::Text_MatchCapWarning' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, Text_Remaining) == 0x000840, "Member 'UShowdownDivisionLobbyPanel_C::Text_Remaining' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, TournamentTitleInfo) == 0x000848, "Member 'UShowdownDivisionLobbyPanel_C::TournamentTitleInfo' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, WarningMessage) == 0x000850, "Member 'UShowdownDivisionLobbyPanel_C::WarningMessage' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, WidgetSwitcher_Progress) == 0x000858, "Member 'UShowdownDivisionLobbyPanel_C::WidgetSwitcher_Progress' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, PrimaryColor) == 0x000860, "Member 'UShowdownDivisionLobbyPanel_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, ShadowColor) == 0x000874, "Member 'UShowdownDivisionLobbyPanel_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionLobbyPanel_C, HighlightColor) == 0x000888, "Member 'UShowdownDivisionLobbyPanel_C::HighlightColor' has a wrong offset!");

}
