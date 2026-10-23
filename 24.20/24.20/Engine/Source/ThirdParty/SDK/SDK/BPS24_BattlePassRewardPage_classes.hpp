#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BattlePassS24UI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_BattlePassRewardPage_C final : public UBattlePassRewardPageS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowTextSupportGradient;
	class UWidgetAnimation*                       ArrowPrevClicked;
	class UWidgetAnimation*                       ArrowPrevHover;
	class UWidgetAnimation*                       ArrowNextClicked;
	class UWidgetAnimation*                       ArrowNextHover;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Arrow_Next;
	class UImage*                                 Arrow_Prev;
	class UBPS24_BattlePassRewardTrack_C*         BPS23_BattlePassRewardTrack;
	class UHorizontalBox*                         HB_PageSwitcher;
	class UCommonActionWidget*                    InputActionWidget_Left;
	class UCommonActionWidget*                    InputActionWidget_Right;
	class UOverlay*                               Overlay_NextPage;
	class UOverlay*                               Overlay_Previous;
	class USizeBox*                               SizeBox_0;
	class USizeBox*                               SizeBox_1;
	class UCommonTextBlock*                       Text_PageSelection;
	class UImage*                                 TextSupportGradient;
	class USoundBase*                             NextButtonSound;
	class USoundBase*                             PrevButtonSound;
	class USoundBase*                             HoverButtonSound;
	struct FLinearColor                           CurrentGradientColor;
	struct FLinearColor                           NextGradientColor;
	int32                                         PrevPageNumber;
	bool                                          bOnInit;

public:
	void BndEvt__BPS23_BattlePassRewardPage_Button_NextPage_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BPS23_BattlePassRewardPage_Button_NextPage_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BPS23_BattlePassRewardPage_Button_NextPage_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BPS23_BattlePassRewardPage_Button_PreviousPage_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BPS23_BattlePassRewardPage_Button_PreviousPage_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BPS23_BattlePassRewardPage_Button_PreviousPage_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_BPS24_BattlePassRewardPage(int32 EntryPoint);
	void HandleSupportGradient();
	void On_Input_Method_Change(ECommonInputType bNewInputType);
	void OnInitForPageType(const ERewardPageType InRewardPageType);
	void OnInitialized();
	void OnInputMethodChanged(const ECommonInputType InputType);
	void OnLoadingScreenSelectedChanged(bool bIsSelected);
	void OnPageChanged(const int32 PageNumber, const int32 RewardPageTotal);
	void PageNavigator_Event_0(class UPageNavigator_C* PageNavigator);
	void SequenceEvent__ENTRYPOINTBPS24_BattlePassRewardPage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_BattlePassRewardPage_C">();
	}
	static class UBPS24_BattlePassRewardPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_BattlePassRewardPage_C>();
	}
};
static_assert(alignof(UBPS24_BattlePassRewardPage_C) == 0x000008, "Wrong alignment on UBPS24_BattlePassRewardPage_C");
static_assert(sizeof(UBPS24_BattlePassRewardPage_C) == 0x000628, "Wrong size on UBPS24_BattlePassRewardPage_C");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, UberGraphFrame) == 0x000550, "Member 'UBPS24_BattlePassRewardPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, ShowTextSupportGradient) == 0x000558, "Member 'UBPS24_BattlePassRewardPage_C::ShowTextSupportGradient' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, ArrowPrevClicked) == 0x000560, "Member 'UBPS24_BattlePassRewardPage_C::ArrowPrevClicked' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, ArrowPrevHover) == 0x000568, "Member 'UBPS24_BattlePassRewardPage_C::ArrowPrevHover' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, ArrowNextClicked) == 0x000570, "Member 'UBPS24_BattlePassRewardPage_C::ArrowNextClicked' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, ArrowNextHover) == 0x000578, "Member 'UBPS24_BattlePassRewardPage_C::ArrowNextHover' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Intro) == 0x000580, "Member 'UBPS24_BattlePassRewardPage_C::Intro' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Arrow_Next) == 0x000588, "Member 'UBPS24_BattlePassRewardPage_C::Arrow_Next' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Arrow_Prev) == 0x000590, "Member 'UBPS24_BattlePassRewardPage_C::Arrow_Prev' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, BPS23_BattlePassRewardTrack) == 0x000598, "Member 'UBPS24_BattlePassRewardPage_C::BPS23_BattlePassRewardTrack' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, HB_PageSwitcher) == 0x0005A0, "Member 'UBPS24_BattlePassRewardPage_C::HB_PageSwitcher' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, InputActionWidget_Left) == 0x0005A8, "Member 'UBPS24_BattlePassRewardPage_C::InputActionWidget_Left' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, InputActionWidget_Right) == 0x0005B0, "Member 'UBPS24_BattlePassRewardPage_C::InputActionWidget_Right' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Overlay_NextPage) == 0x0005B8, "Member 'UBPS24_BattlePassRewardPage_C::Overlay_NextPage' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Overlay_Previous) == 0x0005C0, "Member 'UBPS24_BattlePassRewardPage_C::Overlay_Previous' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, SizeBox_0) == 0x0005C8, "Member 'UBPS24_BattlePassRewardPage_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, SizeBox_1) == 0x0005D0, "Member 'UBPS24_BattlePassRewardPage_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, Text_PageSelection) == 0x0005D8, "Member 'UBPS24_BattlePassRewardPage_C::Text_PageSelection' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, TextSupportGradient) == 0x0005E0, "Member 'UBPS24_BattlePassRewardPage_C::TextSupportGradient' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, NextButtonSound) == 0x0005E8, "Member 'UBPS24_BattlePassRewardPage_C::NextButtonSound' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, PrevButtonSound) == 0x0005F0, "Member 'UBPS24_BattlePassRewardPage_C::PrevButtonSound' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, HoverButtonSound) == 0x0005F8, "Member 'UBPS24_BattlePassRewardPage_C::HoverButtonSound' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, CurrentGradientColor) == 0x000600, "Member 'UBPS24_BattlePassRewardPage_C::CurrentGradientColor' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, NextGradientColor) == 0x000610, "Member 'UBPS24_BattlePassRewardPage_C::NextGradientColor' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, PrevPageNumber) == 0x000620, "Member 'UBPS24_BattlePassRewardPage_C::PrevPageNumber' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassRewardPage_C, bOnInit) == 0x000624, "Member 'UBPS24_BattlePassRewardPage_C::bOnInit' has a wrong offset!");

}
