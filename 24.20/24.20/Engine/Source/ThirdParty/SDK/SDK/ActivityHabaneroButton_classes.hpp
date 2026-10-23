#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UActivityHabaneroButton_C final : public UFortActivitySquadFillButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_BG;
	class USafeZone*                              SafeZone;
	class UCommonTextBlock*                       Text_Title;
	class UTextToggle_C*                          TextToggle;
	class FText                                   Button_Description;
	double                                        TextShearX;
	double                                        TextShearY;
	struct FMargin                                TextPadding;
	bool                                          IsDisabled;
	uint8                                         Pad_1491[0x7];
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
	void ExecuteUbergraph_ActivityHabaneroButton(int32 EntryPoint);
	void Finished_687506B34C6FE54EA42CF5ABF6AA4E46();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivityHabaneroButton_C">();
	}
	static class UActivityHabaneroButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityHabaneroButton_C>();
	}
};
static_assert(alignof(UActivityHabaneroButton_C) == 0x000010, "Wrong alignment on UActivityHabaneroButton_C");
static_assert(sizeof(UActivityHabaneroButton_C) == 0x0014F0, "Wrong size on UActivityHabaneroButton_C");
static_assert(offsetof(UActivityHabaneroButton_C, UberGraphFrame) == 0x001420, "Member 'UActivityHabaneroButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Pressed) == 0x001428, "Member 'UActivityHabaneroButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Hover) == 0x001430, "Member 'UActivityHabaneroButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Image_BG) == 0x001438, "Member 'UActivityHabaneroButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, SafeZone) == 0x001440, "Member 'UActivityHabaneroButton_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Text_Title) == 0x001448, "Member 'UActivityHabaneroButton_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, TextToggle) == 0x001450, "Member 'UActivityHabaneroButton_C::TextToggle' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Button_Description) == 0x001458, "Member 'UActivityHabaneroButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, TextShearX) == 0x001470, "Member 'UActivityHabaneroButton_C::TextShearX' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, TextShearY) == 0x001478, "Member 'UActivityHabaneroButton_C::TextShearY' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, TextPadding) == 0x001480, "Member 'UActivityHabaneroButton_C::TextPadding' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, IsDisabled) == 0x001490, "Member 'UActivityHabaneroButton_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ButtonMaterial) == 0x001498, "Member 'UActivityHabaneroButton_C::ButtonMaterial' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ButtonSharpnessX) == 0x0014A0, "Member 'UActivityHabaneroButton_C::ButtonSharpnessX' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ButtonSharpnessY) == 0x0014A8, "Member 'UActivityHabaneroButton_C::ButtonSharpnessY' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, UseBoxScalingX) == 0x0014B0, "Member 'UActivityHabaneroButton_C::UseBoxScalingX' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, UseBoxScalingY) == 0x0014B8, "Member 'UActivityHabaneroButton_C::UseBoxScalingY' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ButtonBoxScaleSizeX) == 0x0014C0, "Member 'UActivityHabaneroButton_C::ButtonBoxScaleSizeX' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ButtonBoxScaleSizeY) == 0x0014C8, "Member 'UActivityHabaneroButton_C::ButtonBoxScaleSizeY' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, DisabledParamName) == 0x0014D0, "Member 'UActivityHabaneroButton_C::DisabledParamName' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, SharpnessVParamName) == 0x0014D4, "Member 'UActivityHabaneroButton_C::SharpnessVParamName' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, SharpnessUParamName) == 0x0014D8, "Member 'UActivityHabaneroButton_C::SharpnessUParamName' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, UseBoxScaleUParamName) == 0x0014DC, "Member 'UActivityHabaneroButton_C::UseBoxScaleUParamName' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, UseBoxScaleVParamName) == 0x0014E0, "Member 'UActivityHabaneroButton_C::UseBoxScaleVParamName' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, HideButtonBackingOnGamepad) == 0x0014E4, "Member 'UActivityHabaneroButton_C::HideButtonBackingOnGamepad' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, ShouldPlayReversed) == 0x0014E5, "Member 'UActivityHabaneroButton_C::ShouldPlayReversed' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, PadLeft) == 0x0014E6, "Member 'UActivityHabaneroButton_C::PadLeft' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, PadRight) == 0x0014E7, "Member 'UActivityHabaneroButton_C::PadRight' has a wrong offset!");
static_assert(offsetof(UActivityHabaneroButton_C, Is_Fill_Only_Enabled) == 0x0014E8, "Member 'UActivityHabaneroButton_C::Is_Fill_Only_Enabled' has a wrong offset!");

}
