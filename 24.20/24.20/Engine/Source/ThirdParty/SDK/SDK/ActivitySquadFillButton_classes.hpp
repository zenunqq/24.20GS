#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UActivitySquadFillButton_C final : public UFortActivitySquadFillButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_BG;
	class USafeZone*                              SafeZone;
	class UCommonVisibilitySwitcher*              Switcher_Fill;
	class UCommonTextBlock*                       Text_FillOnly;
	class UCommonTextBlock*                       Text_Title;
	class UTextToggle_C*                          TextToggle;
	class FText                                   Button_Description;
	double                                        TextShearX;
	double                                        TextShearY;
	struct FMargin                                TextPadding;
	bool                                          IsDisabled;
	uint8                                         Pad_14A1[0x7];
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
	bool                                          PadLeft;
	bool                                          PadRight;
	bool                                          Is_Fill_Only_Enabled;

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_ActivitySquadFillButton(int32 EntryPoint);
	void Finished_147E379D49BEF6766075069D8A2DDE6F();
	void OnDesiredSquadFillSelectionChanged(const bool bIsSelected);
	void OnSquadFillAvailabilityChanged(const bool bIsAvailable);
	void PreConstruct(bool IsDesignTime);
	void ToggleFillOnlyVisibility(const bool bIsFillOnlyEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivitySquadFillButton_C">();
	}
	static class UActivitySquadFillButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivitySquadFillButton_C>();
	}
};
static_assert(alignof(UActivitySquadFillButton_C) == 0x000010, "Wrong alignment on UActivitySquadFillButton_C");
static_assert(sizeof(UActivitySquadFillButton_C) == 0x001500, "Wrong size on UActivitySquadFillButton_C");
static_assert(offsetof(UActivitySquadFillButton_C, UberGraphFrame) == 0x001420, "Member 'UActivitySquadFillButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Pressed) == 0x001428, "Member 'UActivitySquadFillButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Hover) == 0x001430, "Member 'UActivitySquadFillButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Image_BG) == 0x001438, "Member 'UActivitySquadFillButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, SafeZone) == 0x001440, "Member 'UActivitySquadFillButton_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Switcher_Fill) == 0x001448, "Member 'UActivitySquadFillButton_C::Switcher_Fill' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Text_FillOnly) == 0x001450, "Member 'UActivitySquadFillButton_C::Text_FillOnly' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Text_Title) == 0x001458, "Member 'UActivitySquadFillButton_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, TextToggle) == 0x001460, "Member 'UActivitySquadFillButton_C::TextToggle' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Button_Description) == 0x001468, "Member 'UActivitySquadFillButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, TextShearX) == 0x001480, "Member 'UActivitySquadFillButton_C::TextShearX' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, TextShearY) == 0x001488, "Member 'UActivitySquadFillButton_C::TextShearY' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, TextPadding) == 0x001490, "Member 'UActivitySquadFillButton_C::TextPadding' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, IsDisabled) == 0x0014A0, "Member 'UActivitySquadFillButton_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ButtonMaterial) == 0x0014A8, "Member 'UActivitySquadFillButton_C::ButtonMaterial' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ButtonSharpnessX) == 0x0014B0, "Member 'UActivitySquadFillButton_C::ButtonSharpnessX' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ButtonSharpnessY) == 0x0014B8, "Member 'UActivitySquadFillButton_C::ButtonSharpnessY' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, UseBoxScalingX) == 0x0014C0, "Member 'UActivitySquadFillButton_C::UseBoxScalingX' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, UseBoxScalingY) == 0x0014C8, "Member 'UActivitySquadFillButton_C::UseBoxScalingY' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ButtonBoxScaleSizeX) == 0x0014D0, "Member 'UActivitySquadFillButton_C::ButtonBoxScaleSizeX' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ButtonBoxScaleSizeY) == 0x0014D8, "Member 'UActivitySquadFillButton_C::ButtonBoxScaleSizeY' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, DisabledParamName) == 0x0014E0, "Member 'UActivitySquadFillButton_C::DisabledParamName' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, SharpnessVParamName) == 0x0014E4, "Member 'UActivitySquadFillButton_C::SharpnessVParamName' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, SharpnessUParamName) == 0x0014E8, "Member 'UActivitySquadFillButton_C::SharpnessUParamName' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, UseBoxScaleUParamName) == 0x0014EC, "Member 'UActivitySquadFillButton_C::UseBoxScaleUParamName' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, UseBoxScaleVParamName) == 0x0014F0, "Member 'UActivitySquadFillButton_C::UseBoxScaleVParamName' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, HideButtonBackingOnGamepad) == 0x0014F4, "Member 'UActivitySquadFillButton_C::HideButtonBackingOnGamepad' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, ShouldPlayReversed) == 0x0014F5, "Member 'UActivitySquadFillButton_C::ShouldPlayReversed' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, PadLeft) == 0x0014F6, "Member 'UActivitySquadFillButton_C::PadLeft' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, PadRight) == 0x0014F7, "Member 'UActivitySquadFillButton_C::PadRight' has a wrong offset!");
static_assert(offsetof(UActivitySquadFillButton_C, Is_Fill_Only_Enabled) == 0x0014F8, "Member 'UActivitySquadFillButton_C::Is_Fill_Only_Enabled' has a wrong offset!");

}
