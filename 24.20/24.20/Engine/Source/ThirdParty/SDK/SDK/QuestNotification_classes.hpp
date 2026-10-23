#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UQuestNotification_C final : public UFortNotificationEntry_Quest
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       TurnInNotificationStandin;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       ResetQuestComplete;
	class UWidgetAnimation*                       QuestComplete;
	class UWidgetAnimation*                       FillProgress;
	class UBorder*                                Border_TimerContainer;
	class UCommonBorder*                          BorderXPBar;
	class UImage*                                 Check;
	class UCommonBorder*                          CommonBorder_MainContent;
	class UImage*                                 GreenFill;
	class UHorizontalBox*                         HorizontalBoxHotkeyPrompt;
	class UImage*                                 Image_Glow;
	class UImage*                                 Image_Spark;
	class UKeybindWidget_C*                       KeybindWidget;
	class UKeybindWidget_C*                       KeybindWidget_1;
	class UOverlay*                               Overlay_Completiontext;
	class UImage*                                 ProgressFill;
	class UImage*                                 ProgressFill_Current;
	class USizeBox*                               SizeBox_main;
	class UCommonWidgetSwitcherLegacy*            Switcher_MobileClueText;
	class UWidgetSwitcher*                        Switcher_TimeOrBar;
	class UCommonRichTextBlock*                   Text_AssistBlock;
	class UCommonTextBlock*                       Text_MapPrompt;
	class UCommonTextBlock*                       Text_MobileCollectionPrompt;
	class UCommonTextBlock*                       Text_TimeRemainingUrgent;
	class UWidgetSwitcher*                        WidgetSwitcher_Complete;
	class UWidgetSwitcher*                        WidgetSwitcher_Urgent;
	class UMaterialInstanceDynamic*               MID_MissionHeader;
	double                                        In_Width_Override;
	ESlateVisibility                              Flavor_Text_Visibility;
	bool                                          bIsEndOfMatch;

public:
	void BndEvt__QuestNotification_Button_MobileClickCatcher_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BP_OnTimerSet(EAthenaChallengeTimerState TimerState);
	void Construct();
	void EventCompleteAnim();
	void EventFillComplete();
	void EventOnIntroStart();
	void EventOnStartComplete();
	void EventReset();
	void ExecuteUbergraph_QuestNotification(int32 EntryPoint);
	void HideBindWidgets();
	void OnEnableCompleteFlavorText(bool IsEnabled);
	void OnInitialized();
	void OnPlayRushedNotificationIntro(float Rate);
	void OnUpdateNotificationBackground(bool bUseRarityContainer, bool bIsDailyPunchcardQuest);
	void PreConstruct(bool IsDesignTime);
	void SetAssistData(bool bWasAssisted, const class FString& OtherPlayersName);
	void ShowBindWidgets();
	void StartNotificationIntro();
	void StartNotificationOutro();
	void TurnInNotification();
	void UpdateProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestNotification_C">();
	}
	static class UQuestNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestNotification_C>();
	}
};
static_assert(alignof(UQuestNotification_C) == 0x000008, "Wrong alignment on UQuestNotification_C");
static_assert(sizeof(UQuestNotification_C) == 0x000488, "Wrong size on UQuestNotification_C");
static_assert(offsetof(UQuestNotification_C, UberGraphFrame) == 0x000388, "Member 'UQuestNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, TurnInNotificationStandin) == 0x000390, "Member 'UQuestNotification_C::TurnInNotificationStandin' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Outro) == 0x000398, "Member 'UQuestNotification_C::Outro' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Intro) == 0x0003A0, "Member 'UQuestNotification_C::Intro' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ResetQuestComplete) == 0x0003A8, "Member 'UQuestNotification_C::ResetQuestComplete' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, QuestComplete) == 0x0003B0, "Member 'UQuestNotification_C::QuestComplete' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, FillProgress) == 0x0003B8, "Member 'UQuestNotification_C::FillProgress' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Border_TimerContainer) == 0x0003C0, "Member 'UQuestNotification_C::Border_TimerContainer' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, BorderXPBar) == 0x0003C8, "Member 'UQuestNotification_C::BorderXPBar' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Check) == 0x0003D0, "Member 'UQuestNotification_C::Check' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, CommonBorder_MainContent) == 0x0003D8, "Member 'UQuestNotification_C::CommonBorder_MainContent' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, GreenFill) == 0x0003E0, "Member 'UQuestNotification_C::GreenFill' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, HorizontalBoxHotkeyPrompt) == 0x0003E8, "Member 'UQuestNotification_C::HorizontalBoxHotkeyPrompt' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Image_Glow) == 0x0003F0, "Member 'UQuestNotification_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Image_Spark) == 0x0003F8, "Member 'UQuestNotification_C::Image_Spark' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, KeybindWidget) == 0x000400, "Member 'UQuestNotification_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, KeybindWidget_1) == 0x000408, "Member 'UQuestNotification_C::KeybindWidget_1' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Overlay_Completiontext) == 0x000410, "Member 'UQuestNotification_C::Overlay_Completiontext' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ProgressFill) == 0x000418, "Member 'UQuestNotification_C::ProgressFill' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ProgressFill_Current) == 0x000420, "Member 'UQuestNotification_C::ProgressFill_Current' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, SizeBox_main) == 0x000428, "Member 'UQuestNotification_C::SizeBox_main' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Switcher_MobileClueText) == 0x000430, "Member 'UQuestNotification_C::Switcher_MobileClueText' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Switcher_TimeOrBar) == 0x000438, "Member 'UQuestNotification_C::Switcher_TimeOrBar' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Text_AssistBlock) == 0x000440, "Member 'UQuestNotification_C::Text_AssistBlock' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Text_MapPrompt) == 0x000448, "Member 'UQuestNotification_C::Text_MapPrompt' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Text_MobileCollectionPrompt) == 0x000450, "Member 'UQuestNotification_C::Text_MobileCollectionPrompt' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Text_TimeRemainingUrgent) == 0x000458, "Member 'UQuestNotification_C::Text_TimeRemainingUrgent' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, WidgetSwitcher_Complete) == 0x000460, "Member 'UQuestNotification_C::WidgetSwitcher_Complete' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, WidgetSwitcher_Urgent) == 0x000468, "Member 'UQuestNotification_C::WidgetSwitcher_Urgent' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, MID_MissionHeader) == 0x000470, "Member 'UQuestNotification_C::MID_MissionHeader' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, In_Width_Override) == 0x000478, "Member 'UQuestNotification_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Flavor_Text_Visibility) == 0x000480, "Member 'UQuestNotification_C::Flavor_Text_Visibility' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, bIsEndOfMatch) == 0x000481, "Member 'UQuestNotification_C::bIsEndOfMatch' has a wrong offset!");

}
