#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UActivityPrivacyButton_C final : public UFortActivityPrivacyButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UHorizontalBox*                         ContentHB;
	class UImage*                                 Image_BG;
	class USafeZone*                              SafeZone;
	class UCommonTextBlock*                       Text_Title;
	class UTextToggle_C*                          TextToggle;
	class FText                                   Button_Description;
	double                                        TextShearX;
	double                                        TextShearY;
	struct FMargin                                TextPadding;
	bool                                          IsDisabled;
	uint8                                         Pad_1479[0x7];
	class UMaterialInterface*                     ButtonMaterial;
	double                                        ButtonSharpnessX;
	double                                        ButtonSharpnessY;
	double                                        UseBoxScalingX;
	double                                        UseBoxScalingY;
	double                                        ButtonBoxScaleSizeX;
	double                                        ButtonBoxScaleSizeY;
	class FName                                   DisabledParamName;
	class FName                                   SharpnessVParamName;
	class FName                                   SharpnessUParamName;
	class FName                                   UseBoxScaleUParamName;
	class FName                                   UseBoxScaleVParamName;
	bool                                          HideButtonBackingOnGamepad;
	bool                                          ShouldPlayReversed;
	uint8                                         Pad_14CE[0x2];
	TMulticastInlineDelegate<void(bool IsAvailable)> OnPrivacyAvailableChanged;
	bool                                          PadLeft;
	bool                                          PadRight;

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_ActivityPrivacyButton(int32 EntryPoint);
	void Finished_36C2CEC0400119679F9DB4ADF6A040E2();
	void OnDesiredPrivacySelectionChanged(const bool bIsSelected);
	void OnPrivacyAvailabilityChanged(const bool bIsAvailable);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivityPrivacyButton_C">();
	}
	static class UActivityPrivacyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityPrivacyButton_C>();
	}
};
static_assert(alignof(UActivityPrivacyButton_C) == 0x000010, "Wrong alignment on UActivityPrivacyButton_C");
static_assert(sizeof(UActivityPrivacyButton_C) == 0x0014F0, "Wrong size on UActivityPrivacyButton_C");
static_assert(offsetof(UActivityPrivacyButton_C, UberGraphFrame) == 0x001400, "Member 'UActivityPrivacyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, Pressed) == 0x001408, "Member 'UActivityPrivacyButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, Hover) == 0x001410, "Member 'UActivityPrivacyButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ContentHB) == 0x001418, "Member 'UActivityPrivacyButton_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, Image_BG) == 0x001420, "Member 'UActivityPrivacyButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, SafeZone) == 0x001428, "Member 'UActivityPrivacyButton_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, Text_Title) == 0x001430, "Member 'UActivityPrivacyButton_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, TextToggle) == 0x001438, "Member 'UActivityPrivacyButton_C::TextToggle' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, Button_Description) == 0x001440, "Member 'UActivityPrivacyButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, TextShearX) == 0x001458, "Member 'UActivityPrivacyButton_C::TextShearX' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, TextShearY) == 0x001460, "Member 'UActivityPrivacyButton_C::TextShearY' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, TextPadding) == 0x001468, "Member 'UActivityPrivacyButton_C::TextPadding' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, IsDisabled) == 0x001478, "Member 'UActivityPrivacyButton_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ButtonMaterial) == 0x001480, "Member 'UActivityPrivacyButton_C::ButtonMaterial' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ButtonSharpnessX) == 0x001488, "Member 'UActivityPrivacyButton_C::ButtonSharpnessX' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ButtonSharpnessY) == 0x001490, "Member 'UActivityPrivacyButton_C::ButtonSharpnessY' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, UseBoxScalingX) == 0x001498, "Member 'UActivityPrivacyButton_C::UseBoxScalingX' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, UseBoxScalingY) == 0x0014A0, "Member 'UActivityPrivacyButton_C::UseBoxScalingY' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ButtonBoxScaleSizeX) == 0x0014A8, "Member 'UActivityPrivacyButton_C::ButtonBoxScaleSizeX' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ButtonBoxScaleSizeY) == 0x0014B0, "Member 'UActivityPrivacyButton_C::ButtonBoxScaleSizeY' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, DisabledParamName) == 0x0014B8, "Member 'UActivityPrivacyButton_C::DisabledParamName' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, SharpnessVParamName) == 0x0014BC, "Member 'UActivityPrivacyButton_C::SharpnessVParamName' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, SharpnessUParamName) == 0x0014C0, "Member 'UActivityPrivacyButton_C::SharpnessUParamName' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, UseBoxScaleUParamName) == 0x0014C4, "Member 'UActivityPrivacyButton_C::UseBoxScaleUParamName' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, UseBoxScaleVParamName) == 0x0014C8, "Member 'UActivityPrivacyButton_C::UseBoxScaleVParamName' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, HideButtonBackingOnGamepad) == 0x0014CC, "Member 'UActivityPrivacyButton_C::HideButtonBackingOnGamepad' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, ShouldPlayReversed) == 0x0014CD, "Member 'UActivityPrivacyButton_C::ShouldPlayReversed' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, OnPrivacyAvailableChanged) == 0x0014D0, "Member 'UActivityPrivacyButton_C::OnPrivacyAvailableChanged' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, PadLeft) == 0x0014E0, "Member 'UActivityPrivacyButton_C::PadLeft' has a wrong offset!");
static_assert(offsetof(UActivityPrivacyButton_C, PadRight) == 0x0014E1, "Member 'UActivityPrivacyButton_C::PadRight' has a wrong offset!");

}
