#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBacchusLockerTab_C final : public UAthenaCustomizationScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       LoopingModificationDetected;
	class UWidgetAnimation*                       ModifiedDisabledDisclaimer;
	class UWidgetAnimation*                       ModifiedEnabledDisclaimer;
	class UWidgetAnimation*                       LoopingRandomEnabled_1;
	class UWidgetAnimation*                       LoopingRandomEnabled;
	class UWidgetAnimation*                       PresetAppliedToast_1;
	class UWidgetAnimation*                       PresetAppliedToast_2;
	class UWidgetAnimation*                       PresetAppliedToast;
	class UWidgetAnimation*                       RandomDisabledDisclaimer;
	class UWidgetAnimation*                       RandomEnabledDisclaimer;
	class UWidgetAnimation*                       ItemInfoIntroOutro;
	class UAthenaCustomizationSlotButton_C*       BackpackButton;
	class UWBP_LoadoutTitleButton_C*              Button_QuickRename;
	class UAthenaCustomizationSlotButton_C*       CharacterButton;
	class ULoadoutSaveConfirmation_C*             Confirmation_Save;
	class UAthenaCustomizationSlotButton_C*       DanceButton1;
	class UAthenaCustomizationSlotButton_C*       DanceButton2;
	class UAthenaCustomizationSlotButton_C*       DanceButton3;
	class UAthenaCustomizationSlotButton_C*       DanceButton4;
	class UAthenaCustomizationSlotButton_C*       DanceButton5;
	class UAthenaCustomizationSlotButton_C*       DanceButton6;
	class UImage*                                 Image;
	class UImage*                                 Image_1;
	class UImage*                                 Image_2;
	class UImage*                                 Image_93;
	class UImage*                                 Image_131;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton1;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton2;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton3;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton4;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton5;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton6;
	class UAthenaCustomizationSlotButton_C*       ItemWrapButton7;
	class ULockerBuiltInEmoteWidget_C*            LockerBuiltInEmoteWidget;
	class ULockerBuiltInEmoteWidget_C*            LockerBuiltInEmoteWidget_2;
	class UCommonRichTextBlock*                   ModifiedSlotsText;
	class UAthenaCustomizationSlotButton_C*       MusicPackButton;
	class UCommonTextBlock*                       NextRandom;
	class ULockerArchivingTooltip_C*              QuicksaveTooltip;
	class USizeBox*                               Random_Disclaimer;
	class UCommonRichTextBlock*                   RandomDisclaimerText_Enabled;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_2;
	class USafeZone*                              SafeZone_BackButton;
	class USafeZone*                              SafeZone_iteminfo;
	class USizeBox*                               SizeBox_modified_slots;
	class USizeBox*                               SizeBox_nextrando;
	class UCommonTextBlock*                       UnsavedText_1;
	class UVerticalBox*                           VerticalBox_buttons;
	TArray<class UAthenaCustomizationSlotSelectorButton*> AllSlots;
	EAthenaCustomizationCategory                  CurrentCustomizationType;
	uint8                                         Pad_F99[0x3];
	int32                                         CurrentSubslotIndex;
	class UAthenaItemCustomizationSelector_C*     ItemCustomizationSelector;
	class UAthenaCustomizationSlotButton_C*       CustomizationSlotButtonToPlayConfirmationOn;
	struct FTimerHandle                           AutoHideDetailsForDances;
	class UAthenaCustomizationSlotButtonWrapper_C* FirstSlotInMenu;
	class UWidget*                                LastHoveredSlot_0;
	TArray<class UAthenaCustomizationSlotButtonWrapper_C*> AnimBoundSlotArray;

public:
	void AnimShowRandomDisclaimerEnabled(bool Show);
	void AssignAllSlots();
	void BeginPickingCustomization(class UCommonButtonBase* WidgetToReturnFocusTo, const struct FAthenaCustomizationParams& CustomizationParams_0);
	void BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaLockerTab_LockerArchivingTooltip_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_BacchusLockerTab(int32 EntryPoint);
	class UWidget* LoadoutButtonCustomNavigationDown(EUINavigation Navigation_0);
	void OnBeginPickingCustomizationSlot(class UAthenaCustomizationSlotSelectorButton* SlotButton);
	void OnBeginPickingLoadouts();
	void OnBeginSavingLoadouts();
	void OnInputMethodChanged_Event_0(ECommonInputType bNewInputType);
	void OnModifiedStatusUpdated(bool bIsModified, bool bCanShowToolTip);
	void OnQuickRenameStatusUpdated(bool bIsAvailable, const class FText& LoadoutName);
	void OnRefreshForNewLoadout(const class FString& LoadoutName, bool bIsShuffleTile);
	void PlayEquippedLockerMusic_STW();
	void PlaySlotAnimationAndCenterSlot();
	void PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn);
	class UWidget* TopRowCustomNavigationUp(EUINavigation Navigation_0);
	void TriggerModifiedLoopingAnim();
	void TriggerRandomLoopingAnim();
	void UpdatePresetButtonStyles(ECommonInputType InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusLockerTab_C">();
	}
	static class UBacchusLockerTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusLockerTab_C>();
	}
};
static_assert(alignof(UBacchusLockerTab_C) == 0x000008, "Wrong alignment on UBacchusLockerTab_C");
static_assert(sizeof(UBacchusLockerTab_C) == 0x000FD8, "Wrong size on UBacchusLockerTab_C");
static_assert(offsetof(UBacchusLockerTab_C, UberGraphFrame) == 0x000DF8, "Member 'UBacchusLockerTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LoopingModificationDetected) == 0x000E00, "Member 'UBacchusLockerTab_C::LoopingModificationDetected' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ModifiedDisabledDisclaimer) == 0x000E08, "Member 'UBacchusLockerTab_C::ModifiedDisabledDisclaimer' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ModifiedEnabledDisclaimer) == 0x000E10, "Member 'UBacchusLockerTab_C::ModifiedEnabledDisclaimer' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LoopingRandomEnabled_1) == 0x000E18, "Member 'UBacchusLockerTab_C::LoopingRandomEnabled_1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LoopingRandomEnabled) == 0x000E20, "Member 'UBacchusLockerTab_C::LoopingRandomEnabled' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, PresetAppliedToast_1) == 0x000E28, "Member 'UBacchusLockerTab_C::PresetAppliedToast_1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, PresetAppliedToast_2) == 0x000E30, "Member 'UBacchusLockerTab_C::PresetAppliedToast_2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, PresetAppliedToast) == 0x000E38, "Member 'UBacchusLockerTab_C::PresetAppliedToast' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, RandomDisabledDisclaimer) == 0x000E40, "Member 'UBacchusLockerTab_C::RandomDisabledDisclaimer' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, RandomEnabledDisclaimer) == 0x000E48, "Member 'UBacchusLockerTab_C::RandomEnabledDisclaimer' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemInfoIntroOutro) == 0x000E50, "Member 'UBacchusLockerTab_C::ItemInfoIntroOutro' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, BackpackButton) == 0x000E58, "Member 'UBacchusLockerTab_C::BackpackButton' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Button_QuickRename) == 0x000E60, "Member 'UBacchusLockerTab_C::Button_QuickRename' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, CharacterButton) == 0x000E68, "Member 'UBacchusLockerTab_C::CharacterButton' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Confirmation_Save) == 0x000E70, "Member 'UBacchusLockerTab_C::Confirmation_Save' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton1) == 0x000E78, "Member 'UBacchusLockerTab_C::DanceButton1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton2) == 0x000E80, "Member 'UBacchusLockerTab_C::DanceButton2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton3) == 0x000E88, "Member 'UBacchusLockerTab_C::DanceButton3' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton4) == 0x000E90, "Member 'UBacchusLockerTab_C::DanceButton4' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton5) == 0x000E98, "Member 'UBacchusLockerTab_C::DanceButton5' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, DanceButton6) == 0x000EA0, "Member 'UBacchusLockerTab_C::DanceButton6' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Image) == 0x000EA8, "Member 'UBacchusLockerTab_C::Image' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Image_1) == 0x000EB0, "Member 'UBacchusLockerTab_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Image_2) == 0x000EB8, "Member 'UBacchusLockerTab_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Image_93) == 0x000EC0, "Member 'UBacchusLockerTab_C::Image_93' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Image_131) == 0x000EC8, "Member 'UBacchusLockerTab_C::Image_131' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton1) == 0x000ED0, "Member 'UBacchusLockerTab_C::ItemWrapButton1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton2) == 0x000ED8, "Member 'UBacchusLockerTab_C::ItemWrapButton2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton3) == 0x000EE0, "Member 'UBacchusLockerTab_C::ItemWrapButton3' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton4) == 0x000EE8, "Member 'UBacchusLockerTab_C::ItemWrapButton4' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton5) == 0x000EF0, "Member 'UBacchusLockerTab_C::ItemWrapButton5' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton6) == 0x000EF8, "Member 'UBacchusLockerTab_C::ItemWrapButton6' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemWrapButton7) == 0x000F00, "Member 'UBacchusLockerTab_C::ItemWrapButton7' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LockerBuiltInEmoteWidget) == 0x000F08, "Member 'UBacchusLockerTab_C::LockerBuiltInEmoteWidget' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LockerBuiltInEmoteWidget_2) == 0x000F10, "Member 'UBacchusLockerTab_C::LockerBuiltInEmoteWidget_2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ModifiedSlotsText) == 0x000F18, "Member 'UBacchusLockerTab_C::ModifiedSlotsText' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, MusicPackButton) == 0x000F20, "Member 'UBacchusLockerTab_C::MusicPackButton' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, NextRandom) == 0x000F28, "Member 'UBacchusLockerTab_C::NextRandom' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, QuicksaveTooltip) == 0x000F30, "Member 'UBacchusLockerTab_C::QuicksaveTooltip' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, Random_Disclaimer) == 0x000F38, "Member 'UBacchusLockerTab_C::Random_Disclaimer' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, RandomDisclaimerText_Enabled) == 0x000F40, "Member 'UBacchusLockerTab_C::RandomDisclaimerText_Enabled' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SafeZone_0) == 0x000F48, "Member 'UBacchusLockerTab_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SafeZone_2) == 0x000F50, "Member 'UBacchusLockerTab_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SafeZone_BackButton) == 0x000F58, "Member 'UBacchusLockerTab_C::SafeZone_BackButton' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SafeZone_iteminfo) == 0x000F60, "Member 'UBacchusLockerTab_C::SafeZone_iteminfo' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SizeBox_modified_slots) == 0x000F68, "Member 'UBacchusLockerTab_C::SizeBox_modified_slots' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, SizeBox_nextrando) == 0x000F70, "Member 'UBacchusLockerTab_C::SizeBox_nextrando' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, UnsavedText_1) == 0x000F78, "Member 'UBacchusLockerTab_C::UnsavedText_1' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, VerticalBox_buttons) == 0x000F80, "Member 'UBacchusLockerTab_C::VerticalBox_buttons' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, AllSlots) == 0x000F88, "Member 'UBacchusLockerTab_C::AllSlots' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, CurrentCustomizationType) == 0x000F98, "Member 'UBacchusLockerTab_C::CurrentCustomizationType' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, CurrentSubslotIndex) == 0x000F9C, "Member 'UBacchusLockerTab_C::CurrentSubslotIndex' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, ItemCustomizationSelector) == 0x000FA0, "Member 'UBacchusLockerTab_C::ItemCustomizationSelector' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, CustomizationSlotButtonToPlayConfirmationOn) == 0x000FA8, "Member 'UBacchusLockerTab_C::CustomizationSlotButtonToPlayConfirmationOn' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, AutoHideDetailsForDances) == 0x000FB0, "Member 'UBacchusLockerTab_C::AutoHideDetailsForDances' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, FirstSlotInMenu) == 0x000FB8, "Member 'UBacchusLockerTab_C::FirstSlotInMenu' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, LastHoveredSlot_0) == 0x000FC0, "Member 'UBacchusLockerTab_C::LastHoveredSlot_0' has a wrong offset!");
static_assert(offsetof(UBacchusLockerTab_C, AnimBoundSlotArray) == 0x000FC8, "Member 'UBacchusLockerTab_C::AnimBoundSlotArray' has a wrong offset!");

}
