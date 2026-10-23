#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UOnboardingTextInputActionButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UBorder*                                ContentBorder;
	class UImage*                                 LeftSideImage;
	class UNamedSlot*                             RightExtraContentSlot;
	class FText                                   ButtonText;
	struct FSlateBrush                            IconBrush;
	class UClass*                                 ControllerInputStyle;
	class UClass*                                 TouchStyle;
	class UClass*                                 MouseKeyboardStyle;
	EHorizontalAlignment                          ContentAlignment;
	bool                                          bMouseKeyboardStyleSet;
	uint8                                         Pad_154A[0x6];
	class FText                                   OverrideButtonText;
	ETextJustify                                  ButtonTextJustification;
	bool                                          bDisplayAllCaps;
	uint8                                         Pad_156A[0x6];
	double                                        PressProgress;
	bool                                          bIgnoreInputActionWidgetText;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_OnboardingTextInputActionButton(int32 EntryPoint);
	void Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material);
	void GetPressProgress(double* Progress);
	void InitializeButton();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnCurrentTextStyleChanged();
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void PreConstruct(bool IsDesignTime);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Set_Text(const class FText& ButtonText_0);
	void SetContentAlignment(EHorizontalAlignment ContentAlignment_0);
	void SetControllerStyle(class UClass* ControllerInputStyle_0);
	void SetInitialMouseKeyboardStyle();
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void SetTextInternal(const class FText& InButtonText);
	void ShowIcon(bool bShouldShow);
	void UpdateContentAlignment();
	void UpdateStyle(ECommonInputType CurrentInputType);
	void UpdateText();
	void UpdateTextAndStyle(ECommonInputType InputType);
	void UpdateTextStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnboardingTextInputActionButton_C">();
	}
	static class UOnboardingTextInputActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnboardingTextInputActionButton_C>();
	}
};
static_assert(alignof(UOnboardingTextInputActionButton_C) == 0x000010, "Wrong alignment on UOnboardingTextInputActionButton_C");
static_assert(sizeof(UOnboardingTextInputActionButton_C) == 0x001580, "Wrong size on UOnboardingTextInputActionButton_C");
static_assert(offsetof(UOnboardingTextInputActionButton_C, UberGraphFrame) == 0x001430, "Member 'UOnboardingTextInputActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, CenterButtonTextWidget) == 0x001438, "Member 'UOnboardingTextInputActionButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ContentBorder) == 0x001440, "Member 'UOnboardingTextInputActionButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, LeftSideImage) == 0x001448, "Member 'UOnboardingTextInputActionButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, RightExtraContentSlot) == 0x001450, "Member 'UOnboardingTextInputActionButton_C::RightExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ButtonText) == 0x001458, "Member 'UOnboardingTextInputActionButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, IconBrush) == 0x001470, "Member 'UOnboardingTextInputActionButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ControllerInputStyle) == 0x001530, "Member 'UOnboardingTextInputActionButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, TouchStyle) == 0x001538, "Member 'UOnboardingTextInputActionButton_C::TouchStyle' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, MouseKeyboardStyle) == 0x001540, "Member 'UOnboardingTextInputActionButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ContentAlignment) == 0x001548, "Member 'UOnboardingTextInputActionButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bMouseKeyboardStyleSet) == 0x001549, "Member 'UOnboardingTextInputActionButton_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, OverrideButtonText) == 0x001550, "Member 'UOnboardingTextInputActionButton_C::OverrideButtonText' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, ButtonTextJustification) == 0x001568, "Member 'UOnboardingTextInputActionButton_C::ButtonTextJustification' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bDisplayAllCaps) == 0x001569, "Member 'UOnboardingTextInputActionButton_C::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, PressProgress) == 0x001570, "Member 'UOnboardingTextInputActionButton_C::PressProgress' has a wrong offset!");
static_assert(offsetof(UOnboardingTextInputActionButton_C, bIgnoreInputActionWidgetText) == 0x001578, "Member 'UOnboardingTextInputActionButton_C::bIgnoreInputActionWidgetText' has a wrong offset!");

}
