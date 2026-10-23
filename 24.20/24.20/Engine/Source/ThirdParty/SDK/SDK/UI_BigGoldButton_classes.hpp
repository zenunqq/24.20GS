#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CrewUI_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UUI_BigGoldButton_C final : public UBattlePassCrewPurchaseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoldProgress;
	class UWidgetAnimation*                       Hover;
	class UHorizontalBox*                         HBox_Empty;
	class UImage*                                 Image;
	class UImage*                                 Image_0;
	class UImage*                                 Image_1;
	class UImage*                                 Image_Button;
	class UImage*                                 Image_Button_Inner;
	class UImage*                                 Image_CurrencyVBuck;
	class UImage*                                 Image_Shadow;
	class UOverlay*                               Overlay_Hover;
	class UOverlay*                               Overlay_Input_Keybind;
	class UImage*                                 PlayStationStoreLogo;
	class UFortMobileImage*                       PressOrClickIcon;
	class UImage*                                 ProgressCircle;
	class USpacer*                                Spacer_Even;
	class USpacer*                                Spacer_InputAction;
	class UWidgetSwitcher*                        Switcher_Currency;
	class UCommonTextBlock*                       TextBlock_HoldPrompt;
	class UCommonVisibilityWidgetLegacy*          Visibility_PlatformImage;
	class UCommonVisualAttachment*                Visuals_Glows;
	class FText                                   ButtonText;
	bool                                          Unskew;
	bool                                          GlowsOff;
	bool                                          HoverLightning;
	uint8                                         Pad_156B[0x5];
	class USoundBase*                             PurchaseButtonHover;
	class USoundBase*                             PurchaseButtonUnHover;
	class USoundBase*                             PurchaseButtonHoldSound;
	class USoundBase*                             PurchaseButtonReleaseSound;
	class USoundBase*                             PurchaseButtonHoldComplete;
	class UAudioComponent*                        PurchaseHoldComponent;

public:
	void BindInputChanged();
	void BP_OnActionProgressDecreased(const float HoldPercentage);
	void BP_OnActionProgressIncreased(const float HoldPercentage);
	void BP_OnDisabled();
	void BP_OnHoldCompleted();
	void BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHoldReset();
	void BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void Destruct();
	void EventHover(bool In);
	void ExecuteUbergraph_UI_BigGoldButton(int32 EntryPoint);
	void InputChanged(ECommonInputType bNewInputType);
	void OnCurrencyUpdated();
	void OnHoldRequiredChanged(bool bHoldRequired);
	void OnProgressAnimationFinished();
	void OnProgressAnimationStarted();
	void PlayHoldProgressAnimation(double HoldPercent);
	void PreConstruct(bool IsDesignTime);
	void UpdateAnimationBindings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BigGoldButton_C">();
	}
	static class UUI_BigGoldButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BigGoldButton_C>();
	}
};
static_assert(alignof(UUI_BigGoldButton_C) == 0x000010, "Wrong alignment on UUI_BigGoldButton_C");
static_assert(sizeof(UUI_BigGoldButton_C) == 0x0015A0, "Wrong size on UUI_BigGoldButton_C");
static_assert(offsetof(UUI_BigGoldButton_C, UberGraphFrame) == 0x0014A0, "Member 'UUI_BigGoldButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, HoldProgress) == 0x0014A8, "Member 'UUI_BigGoldButton_C::HoldProgress' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Hover) == 0x0014B0, "Member 'UUI_BigGoldButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, HBox_Empty) == 0x0014B8, "Member 'UUI_BigGoldButton_C::HBox_Empty' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image) == 0x0014C0, "Member 'UUI_BigGoldButton_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_0) == 0x0014C8, "Member 'UUI_BigGoldButton_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_1) == 0x0014D0, "Member 'UUI_BigGoldButton_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_Button) == 0x0014D8, "Member 'UUI_BigGoldButton_C::Image_Button' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_Button_Inner) == 0x0014E0, "Member 'UUI_BigGoldButton_C::Image_Button_Inner' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_CurrencyVBuck) == 0x0014E8, "Member 'UUI_BigGoldButton_C::Image_CurrencyVBuck' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Image_Shadow) == 0x0014F0, "Member 'UUI_BigGoldButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Overlay_Hover) == 0x0014F8, "Member 'UUI_BigGoldButton_C::Overlay_Hover' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Overlay_Input_Keybind) == 0x001500, "Member 'UUI_BigGoldButton_C::Overlay_Input_Keybind' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PlayStationStoreLogo) == 0x001508, "Member 'UUI_BigGoldButton_C::PlayStationStoreLogo' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PressOrClickIcon) == 0x001510, "Member 'UUI_BigGoldButton_C::PressOrClickIcon' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, ProgressCircle) == 0x001518, "Member 'UUI_BigGoldButton_C::ProgressCircle' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Spacer_Even) == 0x001520, "Member 'UUI_BigGoldButton_C::Spacer_Even' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Spacer_InputAction) == 0x001528, "Member 'UUI_BigGoldButton_C::Spacer_InputAction' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Switcher_Currency) == 0x001530, "Member 'UUI_BigGoldButton_C::Switcher_Currency' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, TextBlock_HoldPrompt) == 0x001538, "Member 'UUI_BigGoldButton_C::TextBlock_HoldPrompt' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Visibility_PlatformImage) == 0x001540, "Member 'UUI_BigGoldButton_C::Visibility_PlatformImage' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Visuals_Glows) == 0x001548, "Member 'UUI_BigGoldButton_C::Visuals_Glows' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, ButtonText) == 0x001550, "Member 'UUI_BigGoldButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, Unskew) == 0x001568, "Member 'UUI_BigGoldButton_C::Unskew' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, GlowsOff) == 0x001569, "Member 'UUI_BigGoldButton_C::GlowsOff' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, HoverLightning) == 0x00156A, "Member 'UUI_BigGoldButton_C::HoverLightning' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseButtonHover) == 0x001570, "Member 'UUI_BigGoldButton_C::PurchaseButtonHover' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseButtonUnHover) == 0x001578, "Member 'UUI_BigGoldButton_C::PurchaseButtonUnHover' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseButtonHoldSound) == 0x001580, "Member 'UUI_BigGoldButton_C::PurchaseButtonHoldSound' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseButtonReleaseSound) == 0x001588, "Member 'UUI_BigGoldButton_C::PurchaseButtonReleaseSound' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseButtonHoldComplete) == 0x001590, "Member 'UUI_BigGoldButton_C::PurchaseButtonHoldComplete' has a wrong offset!");
static_assert(offsetof(UUI_BigGoldButton_C, PurchaseHoldComponent) == 0x001598, "Member 'UUI_BigGoldButton_C::PurchaseHoldComponent' has a wrong offset!");

}
