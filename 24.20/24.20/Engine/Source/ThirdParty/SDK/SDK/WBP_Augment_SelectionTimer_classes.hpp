#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UWBP_Augment_SelectionTimer_C final : public UFortPlayerAugmentHUDTimerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_AugmentReady_IncreaseCount;
	class UWidgetAnimation*                       Anim_AugmentReady_Reminder;
	class UWidgetAnimation*                       Anim_AugmentReady;
	class UWidgetAnimation*                       Anim_TimerText_CountdownUpdated;
	class UWidgetAnimation*                       Anim_ProgressBar_CountdownUpdated;
	class UWidgetAnimation*                       Anim_CountdownReveal;
	class UBorder*                                Border_Mobile;
	class UHorizontalBox*                         HorizontalBox_Content;
	class UImage*                                 Image_MobileButtonBG;
	class UImage*                                 Image_MultiplierBacking;
	class UImage*                                 Image_Ready_Backing;
	class UImage*                                 Image_Timer_InnerRing;
	class UImage*                                 Image_Timer_ProgressBar;
	class UKeybindWidget_C*                       Keybind_OpenAugments_Action;
	class UKeybindWidget_C*                       Keybind_OpenAugments_Action_Build;
	class UOverlay*                               Overlay_AttentionLIne;
	class UOverlay*                               Overlay_CannotOpenSelector;
	class UOverlay*                               Overlay_DeviceAndProgressBar;
	class UOverlay*                               Overlay_DeviceAndTimer;
	class UOverlay*                               Overlay_FXGlowAndBacking;
	class UOverlay*                               Overlay_Main;
	class UOverlay*                               Overlay_ReadyOpenPrompt;
	class UOverlay*                               Overlay_ReadyPrompt;
	class USizeBox*                               SizeBox_Keybind;
	class USizeBox*                               SizeBox_Timer;
	class USpacer*                                Spacer_OverallHeightControl;
	class USpacer*                                Spacer_WidgetOffset;
	class UCommonVisibilitySwitcher*              Switcher_OpenAugments_Action;
	class UWidgetSwitcher*                        Switcher_ReadyPrompt;
	class UCommonTextBlock*                       Text_Alert;
	class UCommonTextBlock*                       Text_AugmentMulitplier;
	class UCommonTextBlock*                       Text_AugmentReady;
	class UCommonTextBlock*                       Text_AugmentTimer;
	class UFortControllerComponent_SpyTechPerkSystem* OwningPerkComponent;
	class UMaterialInstanceDynamic*               TimerProgress_DMI;
	int32                                         Num_Pending_Augments_to_Grant;
	bool                                          Can_Select_Augment;
	bool                                          IsCountdownActive;
	uint8                                         Pad_3F6[0x2];
	class FText                                   TextAugmentReady;
	class FText                                   TextAugmentCount;
	bool                                          IsAugmentReadyVisible;
	uint8                                         Pad_429[0x7];
	double                                        ReminderFrequencyInSeconds;
	struct FTimerHandle                           AugmentReadyReminderTimer;
	double                                        CountdownAnimStartPoint;
	double                                        CountdownAnimStopPoint;
	class USoundBase*                             MultiplierSound;
	bool                                          IsOffline;
	uint8                                         Pad_459[0x7];
	struct FTimerHandle                           HideTimerHandle;
	struct FScalableFloat                         CountdownStartTime_HF;
	bool                                          Player_Able_to_Open_Selector;
	uint8                                         Pad_491[0x7];
	TSoftObjectPtr<class UPaperSprite>            MobileBackgroundSprite;

public:
	void Construct();
	void ExecuteUbergraph_WBP_Augment_SelectionTimer(int32 EntryPoint);
	void ForceAugmentReadyState(bool AugmentSelectionAvailable);
	void IsAugmentSelectionAvailable(bool* IsEnabled);
	void OnAugmentGrantingTimersFinishedForMatch();
	void OnAugmentReadyFadeInFinished();
	void OnCanSelectAugmentChanged(bool bCanSelectAugment);
	void OnHideTimerEventFinished();
	void OnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer);
	void OnInitialized();
	void OnLoaded_7B3490DB452F1589FC28169C2C321233(class UObject* Loaded);
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnPlayerChangedBuildMode(bool bEnteredBuildMode);
	void OnTimerUpdated(float TimeRemaining, float TimePercentage);
	void PlayReminderAnimation();
	void PreConstruct(bool IsDesignTime);
	void ResetAugmentReadyStateAnims();
	void SetAugmentReadyState(bool AugmentSelectionAvailable);
	void SetMobileProgressTimer(double FPercentLeft);
	void SetMobileVisuals();
	void StartHideTimerEvent();
	void UpdateCanOpenSelector(bool InPlayerAbleToOpenSelector);
	void UpdateCountdown(double InTimeLeft);
	void UpdateVisibility();

	void IsCountdownVisible(bool* IsVisible_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_SelectionTimer_C">();
	}
	static class UWBP_Augment_SelectionTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_SelectionTimer_C>();
	}
};
static_assert(alignof(UWBP_Augment_SelectionTimer_C) == 0x000008, "Wrong alignment on UWBP_Augment_SelectionTimer_C");
static_assert(sizeof(UWBP_Augment_SelectionTimer_C) == 0x0004C0, "Wrong size on UWBP_Augment_SelectionTimer_C");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_Augment_SelectionTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_AugmentReady_IncreaseCount) == 0x0002D8, "Member 'UWBP_Augment_SelectionTimer_C::Anim_AugmentReady_IncreaseCount' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_AugmentReady_Reminder) == 0x0002E0, "Member 'UWBP_Augment_SelectionTimer_C::Anim_AugmentReady_Reminder' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_AugmentReady) == 0x0002E8, "Member 'UWBP_Augment_SelectionTimer_C::Anim_AugmentReady' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_TimerText_CountdownUpdated) == 0x0002F0, "Member 'UWBP_Augment_SelectionTimer_C::Anim_TimerText_CountdownUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_ProgressBar_CountdownUpdated) == 0x0002F8, "Member 'UWBP_Augment_SelectionTimer_C::Anim_ProgressBar_CountdownUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Anim_CountdownReveal) == 0x000300, "Member 'UWBP_Augment_SelectionTimer_C::Anim_CountdownReveal' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Border_Mobile) == 0x000308, "Member 'UWBP_Augment_SelectionTimer_C::Border_Mobile' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, HorizontalBox_Content) == 0x000310, "Member 'UWBP_Augment_SelectionTimer_C::HorizontalBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Image_MobileButtonBG) == 0x000318, "Member 'UWBP_Augment_SelectionTimer_C::Image_MobileButtonBG' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Image_MultiplierBacking) == 0x000320, "Member 'UWBP_Augment_SelectionTimer_C::Image_MultiplierBacking' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Image_Ready_Backing) == 0x000328, "Member 'UWBP_Augment_SelectionTimer_C::Image_Ready_Backing' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Image_Timer_InnerRing) == 0x000330, "Member 'UWBP_Augment_SelectionTimer_C::Image_Timer_InnerRing' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Image_Timer_ProgressBar) == 0x000338, "Member 'UWBP_Augment_SelectionTimer_C::Image_Timer_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Keybind_OpenAugments_Action) == 0x000340, "Member 'UWBP_Augment_SelectionTimer_C::Keybind_OpenAugments_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Keybind_OpenAugments_Action_Build) == 0x000348, "Member 'UWBP_Augment_SelectionTimer_C::Keybind_OpenAugments_Action_Build' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_AttentionLIne) == 0x000350, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_AttentionLIne' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_CannotOpenSelector) == 0x000358, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_CannotOpenSelector' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_DeviceAndProgressBar) == 0x000360, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_DeviceAndProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_DeviceAndTimer) == 0x000368, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_DeviceAndTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_FXGlowAndBacking) == 0x000370, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_FXGlowAndBacking' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_Main) == 0x000378, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_ReadyOpenPrompt) == 0x000380, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_ReadyOpenPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Overlay_ReadyPrompt) == 0x000388, "Member 'UWBP_Augment_SelectionTimer_C::Overlay_ReadyPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, SizeBox_Keybind) == 0x000390, "Member 'UWBP_Augment_SelectionTimer_C::SizeBox_Keybind' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, SizeBox_Timer) == 0x000398, "Member 'UWBP_Augment_SelectionTimer_C::SizeBox_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Spacer_OverallHeightControl) == 0x0003A0, "Member 'UWBP_Augment_SelectionTimer_C::Spacer_OverallHeightControl' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Spacer_WidgetOffset) == 0x0003A8, "Member 'UWBP_Augment_SelectionTimer_C::Spacer_WidgetOffset' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Switcher_OpenAugments_Action) == 0x0003B0, "Member 'UWBP_Augment_SelectionTimer_C::Switcher_OpenAugments_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Switcher_ReadyPrompt) == 0x0003B8, "Member 'UWBP_Augment_SelectionTimer_C::Switcher_ReadyPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Text_Alert) == 0x0003C0, "Member 'UWBP_Augment_SelectionTimer_C::Text_Alert' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Text_AugmentMulitplier) == 0x0003C8, "Member 'UWBP_Augment_SelectionTimer_C::Text_AugmentMulitplier' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Text_AugmentReady) == 0x0003D0, "Member 'UWBP_Augment_SelectionTimer_C::Text_AugmentReady' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Text_AugmentTimer) == 0x0003D8, "Member 'UWBP_Augment_SelectionTimer_C::Text_AugmentTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, OwningPerkComponent) == 0x0003E0, "Member 'UWBP_Augment_SelectionTimer_C::OwningPerkComponent' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, TimerProgress_DMI) == 0x0003E8, "Member 'UWBP_Augment_SelectionTimer_C::TimerProgress_DMI' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Num_Pending_Augments_to_Grant) == 0x0003F0, "Member 'UWBP_Augment_SelectionTimer_C::Num_Pending_Augments_to_Grant' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Can_Select_Augment) == 0x0003F4, "Member 'UWBP_Augment_SelectionTimer_C::Can_Select_Augment' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, IsCountdownActive) == 0x0003F5, "Member 'UWBP_Augment_SelectionTimer_C::IsCountdownActive' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, TextAugmentReady) == 0x0003F8, "Member 'UWBP_Augment_SelectionTimer_C::TextAugmentReady' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, TextAugmentCount) == 0x000410, "Member 'UWBP_Augment_SelectionTimer_C::TextAugmentCount' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, IsAugmentReadyVisible) == 0x000428, "Member 'UWBP_Augment_SelectionTimer_C::IsAugmentReadyVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, ReminderFrequencyInSeconds) == 0x000430, "Member 'UWBP_Augment_SelectionTimer_C::ReminderFrequencyInSeconds' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, AugmentReadyReminderTimer) == 0x000438, "Member 'UWBP_Augment_SelectionTimer_C::AugmentReadyReminderTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, CountdownAnimStartPoint) == 0x000440, "Member 'UWBP_Augment_SelectionTimer_C::CountdownAnimStartPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, CountdownAnimStopPoint) == 0x000448, "Member 'UWBP_Augment_SelectionTimer_C::CountdownAnimStopPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, MultiplierSound) == 0x000450, "Member 'UWBP_Augment_SelectionTimer_C::MultiplierSound' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, IsOffline) == 0x000458, "Member 'UWBP_Augment_SelectionTimer_C::IsOffline' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, HideTimerHandle) == 0x000460, "Member 'UWBP_Augment_SelectionTimer_C::HideTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, CountdownStartTime_HF) == 0x000468, "Member 'UWBP_Augment_SelectionTimer_C::CountdownStartTime_HF' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, Player_Able_to_Open_Selector) == 0x000490, "Member 'UWBP_Augment_SelectionTimer_C::Player_Able_to_Open_Selector' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_SelectionTimer_C, MobileBackgroundSprite) == 0x000498, "Member 'UWBP_Augment_SelectionTimer_C::MobileBackgroundSprite' has a wrong offset!");

}
