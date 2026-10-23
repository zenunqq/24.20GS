#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class USidebarMainMenu_C final : public UFortBladeMenu_MainMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Drill_In;
	class UMainMenuButton_C*                      AthenaMainMenuClearPlayerDataButton;
	class UMainMenuButton_C*                      Button_LegalInformation;
	class UMainMenuButton_C*                      Button_MyIsland;
	class UMainMenuButton_C*                      Button_ReportBugOrPlayer;
	class UMainMenuButton_C*                      Button_SupportSubMenu;
	class UMainMenuButton_C*                      ButtonBacchusHelp;
	class UMainMenuButton_C*                      ButtonCredits;
	class UMainMenuButton_C*                      ButtonHUDLayoutTool;
	class UMainMenuButton_C*                      ButtonNews;
	class UMainMenuButton_C*                      CheatsButton;
	class UMainMenuButton_C*                      ConsoleButton;
	class UMainMenuButton_C*                      DisableModeratorModeButton;
	class UMainMenuButton_C*                      EnableModeratorModeButton;
	class UMainMenuButton_C*                      ExportIslandButton;
	class UMainMenuButton_C*                      Legal;
	class ULiveStreamMenuButtonToggle_C*          LiveStreamMenuButtonToggle;
	class UMainMenuButton_C*                      LockerButton;
	class UVerticalBox*                           ModeratorMode;
	class UMainMenuButton_C*                      NewPlayerFeedback;
	class UMainMenuButton_C*                      ParentalControlsButton;
	class UMainMenuButton_C*                      RespawnButton;
	class UMainMenuButton_C*                      ReturnOrCancelPurchase;
	class USafeZone*                              SafeZone_Content;
	class USafeZone*                              SafeZoneRatingIcons;
	class UMainMenuButton_C*                      TeamSelectButton;
	class UCommonTextBlock*                       Text_VoiceChatTitle;
	class UCommonTextBlock*                       TextLowPowerMode;
	class UVerticalBox*                           VBox_MainMenuButtons;
	class UVerticalBox*                           VBox_MainMenuButtons_Legal;
	class UVerticalBox*                           VBox_MainMenuButtons_Reporting;
	class UVerticalBox*                           VBox_MainMenuButtons_SupportAndRefunds;
	TSoftClassPtr<class UClass>                   CreditsScreenClass;
	TSoftClassPtr<class UClass>                   LegalInfoClass;
	TSoftClassPtr<class UClass>                   RespawnClass;
	TSoftClassPtr<class UClass>                   MobileControlsHelpClass;
	class AFortMinigameSettingsBuilding*          Machine;
	TSoftClassPtr<class UClass>                   TeamSelectWidgetClass;
	class FName                                   SettingTabToOpen;
	uint8                                         Pad_744[0x4];
	TSoftClassPtr<class UClass>                   AthenaMOTDWidget;
	TSoftClassPtr<class UClass>                   ParentalControlsClass_New;
	TSoftClassPtr<class UClass>                   PlayerClearIslandDataClass;
	class FText                                   Player_Clear_Persistence_Data_Pregame_Description;
	class FText                                   Player_Clear_Persistence_Data_in_Progress_Description;
	class AFortMinigame*                          LastMinigame;
	class FText                                   ReportButtonText_Creative;
	class FText                                   ReportButtonText_Default;

public:
	void Bind_To_State_Change_Delegate();
	void BndEvt__AthenaMainMenuClearPlayerDataButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_BackToHub_1_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CheatsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ConsoleButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EnableModeratorModeButton_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EnableModeratorModeButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ExportIslandButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__LockerButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_3_StartButtonClicked__DelegateSignature();
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_EndButtonClicked__DelegateSignature();
	void BndEvt__NewPlayerFeedback_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ParentalControlsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__RespawnButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarMainMenu_Button_LegalInformation_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarMainMenu_Button_ReportBugOrPlayer_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarMainMenu_Button_SupportLink_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarMainMenu_ReturnOrCancelPurchase_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SidebarMainMenu_SidebarBackButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Close();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_SidebarMainMenu(int32 EntryPoint);
	void FakeSidebarBackButtonClick();
	void Handle_Low_Power_Mode();
	void Handle_On_Is_Creative_Moderator_Mode_Active_Changed(bool bIsCreativeModeratorModeActive);
	void InitializeMainMenu();
	void OnComplete_0291153C4AC0D1156C271F9118E569A1(class UUserWidget* UserWidget);
	void OnComplete_5F00D0CF4D9E12AAB69866A846D583D6(class UUserWidget* UserWidget);
	void OnComplete_6050D62B44E0DCCC7901A8A6F68E2DC5(class UUserWidget* UserWidget);
	void OnComplete_611E1BC6484238364A9971999FE6F5A2(class UUserWidget* UserWidget);
	void OnComplete_647CD804498A28A84AB5E1BAA1B3B9CF(class UUserWidget* UserWidget);
	void OnComplete_7C6F207D4CDF21EB8BD8A0B2F614AA03(class UUserWidget* UserWidget);
	void OnComplete_A8101A2145286C49CFF50A97984010E3(class UUserWidget* UserWidget);
	void OnComplete_B99DAD204A5DFFFB9673D086E81E1E79(class UUserWidget* UserWidget);
	void OnComplete_C268EAF94DCFCF67F17632BDBF6AC40F(class UUserWidget* UserWidget);
	void OnComplete_CE01A3094981560CC63CA1B171C855B3(class UUserWidget* UserWidget);
	void OnComplete_D16AF2704BEFE18C7BD980843C02589F(class UUserWidget* UserWidget);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void OnRefreshOptions();
	void SetLegalButtonVisibility();
	void SetSupportButtonVisibility();
	void ShowMinigameButtons(class AFortPlayerControllerAthena* Player, class AFortGameStateAthena* FortGameStateAthena, bool* bResult);
	void SwitchSubMenu(int32 Index_0);
	void Update_Team_Select_Visibility();
	void UpdateButtons();
	void UpdateCreativeButtonsVisibility();
	void UpdateLowPowerMessage(bool PassThrough);
	void UpdateMinigameButtons();
	void UpdateRespawnWidgetVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarMainMenu_C">();
	}
	static class USidebarMainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarMainMenu_C>();
	}
};
static_assert(alignof(USidebarMainMenu_C) == 0x000008, "Wrong alignment on USidebarMainMenu_C");
static_assert(sizeof(USidebarMainMenu_C) == 0x000828, "Wrong size on USidebarMainMenu_C");
static_assert(offsetof(USidebarMainMenu_C, UberGraphFrame) == 0x000568, "Member 'USidebarMainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Drill_In) == 0x000570, "Member 'USidebarMainMenu_C::Drill_In' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, AthenaMainMenuClearPlayerDataButton) == 0x000578, "Member 'USidebarMainMenu_C::AthenaMainMenuClearPlayerDataButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Button_LegalInformation) == 0x000580, "Member 'USidebarMainMenu_C::Button_LegalInformation' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Button_MyIsland) == 0x000588, "Member 'USidebarMainMenu_C::Button_MyIsland' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Button_ReportBugOrPlayer) == 0x000590, "Member 'USidebarMainMenu_C::Button_ReportBugOrPlayer' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Button_SupportSubMenu) == 0x000598, "Member 'USidebarMainMenu_C::Button_SupportSubMenu' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ButtonBacchusHelp) == 0x0005A0, "Member 'USidebarMainMenu_C::ButtonBacchusHelp' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ButtonCredits) == 0x0005A8, "Member 'USidebarMainMenu_C::ButtonCredits' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ButtonHUDLayoutTool) == 0x0005B0, "Member 'USidebarMainMenu_C::ButtonHUDLayoutTool' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ButtonNews) == 0x0005B8, "Member 'USidebarMainMenu_C::ButtonNews' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, CheatsButton) == 0x0005C0, "Member 'USidebarMainMenu_C::CheatsButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ConsoleButton) == 0x0005C8, "Member 'USidebarMainMenu_C::ConsoleButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, DisableModeratorModeButton) == 0x0005D0, "Member 'USidebarMainMenu_C::DisableModeratorModeButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, EnableModeratorModeButton) == 0x0005D8, "Member 'USidebarMainMenu_C::EnableModeratorModeButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ExportIslandButton) == 0x0005E0, "Member 'USidebarMainMenu_C::ExportIslandButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Legal) == 0x0005E8, "Member 'USidebarMainMenu_C::Legal' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, LiveStreamMenuButtonToggle) == 0x0005F0, "Member 'USidebarMainMenu_C::LiveStreamMenuButtonToggle' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, LockerButton) == 0x0005F8, "Member 'USidebarMainMenu_C::LockerButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ModeratorMode) == 0x000600, "Member 'USidebarMainMenu_C::ModeratorMode' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, NewPlayerFeedback) == 0x000608, "Member 'USidebarMainMenu_C::NewPlayerFeedback' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ParentalControlsButton) == 0x000610, "Member 'USidebarMainMenu_C::ParentalControlsButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, RespawnButton) == 0x000618, "Member 'USidebarMainMenu_C::RespawnButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ReturnOrCancelPurchase) == 0x000620, "Member 'USidebarMainMenu_C::ReturnOrCancelPurchase' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, SafeZone_Content) == 0x000628, "Member 'USidebarMainMenu_C::SafeZone_Content' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, SafeZoneRatingIcons) == 0x000630, "Member 'USidebarMainMenu_C::SafeZoneRatingIcons' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, TeamSelectButton) == 0x000638, "Member 'USidebarMainMenu_C::TeamSelectButton' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Text_VoiceChatTitle) == 0x000640, "Member 'USidebarMainMenu_C::Text_VoiceChatTitle' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, TextLowPowerMode) == 0x000648, "Member 'USidebarMainMenu_C::TextLowPowerMode' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, VBox_MainMenuButtons) == 0x000650, "Member 'USidebarMainMenu_C::VBox_MainMenuButtons' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, VBox_MainMenuButtons_Legal) == 0x000658, "Member 'USidebarMainMenu_C::VBox_MainMenuButtons_Legal' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, VBox_MainMenuButtons_Reporting) == 0x000660, "Member 'USidebarMainMenu_C::VBox_MainMenuButtons_Reporting' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, VBox_MainMenuButtons_SupportAndRefunds) == 0x000668, "Member 'USidebarMainMenu_C::VBox_MainMenuButtons_SupportAndRefunds' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, CreditsScreenClass) == 0x000670, "Member 'USidebarMainMenu_C::CreditsScreenClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, LegalInfoClass) == 0x000698, "Member 'USidebarMainMenu_C::LegalInfoClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, RespawnClass) == 0x0006C0, "Member 'USidebarMainMenu_C::RespawnClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, MobileControlsHelpClass) == 0x0006E8, "Member 'USidebarMainMenu_C::MobileControlsHelpClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Machine) == 0x000710, "Member 'USidebarMainMenu_C::Machine' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, TeamSelectWidgetClass) == 0x000718, "Member 'USidebarMainMenu_C::TeamSelectWidgetClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, SettingTabToOpen) == 0x000740, "Member 'USidebarMainMenu_C::SettingTabToOpen' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, AthenaMOTDWidget) == 0x000748, "Member 'USidebarMainMenu_C::AthenaMOTDWidget' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ParentalControlsClass_New) == 0x000770, "Member 'USidebarMainMenu_C::ParentalControlsClass_New' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, PlayerClearIslandDataClass) == 0x000798, "Member 'USidebarMainMenu_C::PlayerClearIslandDataClass' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Player_Clear_Persistence_Data_Pregame_Description) == 0x0007C0, "Member 'USidebarMainMenu_C::Player_Clear_Persistence_Data_Pregame_Description' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, Player_Clear_Persistence_Data_in_Progress_Description) == 0x0007D8, "Member 'USidebarMainMenu_C::Player_Clear_Persistence_Data_in_Progress_Description' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, LastMinigame) == 0x0007F0, "Member 'USidebarMainMenu_C::LastMinigame' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ReportButtonText_Creative) == 0x0007F8, "Member 'USidebarMainMenu_C::ReportButtonText_Creative' has a wrong offset!");
static_assert(offsetof(USidebarMainMenu_C, ReportButtonText_Default) == 0x000810, "Member 'USidebarMainMenu_C::ReportButtonText_Default' has a wrong offset!");

}
