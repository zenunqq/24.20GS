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

class UIconTextButtonHold_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UBorder*                                ContentBorder;
	class UHorizontalBox*                         HorizontalBox_ButtonContent;
	class UImage*                                 LeftSideImage;
	class UNamedSlot*                             RightExtraContentSlot;
	class FText                                   ButtonText;
	uint8                                         Pad_1478[0x8];
	struct FSlateBrush                            IconBrush;
	class UClass*                                 ControllerInputStyle;
	class UClass*                                 MouseKeyboardStyle;
	EHorizontalAlignment                          ContentAlignment;
	bool                                          bMouseKeyboardStyleSet;
	uint8                                         Pad_1552[0x6];
	class FText                                   OverrideButtonText;
	ETextJustify                                  ButtonTextJustification;
	bool                                          bDisplayAllCaps;
	uint8                                         Pad_1572[0x6];
	double                                        PressProgress;
	bool                                          bIgnoreInputActionWidgetText;
	uint8                                         Pad_1581[0x7];
	TMulticastInlineDelegate<void()>              HoldActionStarted;
	bool                                          bHolding;
	uint8                                         Pad_1599[0x7];
	TMulticastInlineDelegate<void()>              HoldActionEnded;
	TMulticastInlineDelegate<void()>              HoldActionCompleted;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_IconTextButtonHold(int32 EntryPoint);
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
	void UpdateStyle(bool UsingGamepad);
	void UpdateText();
	void UpdateTextAndStyle(ECommonInputType InputType);
	void UpdateTextStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconTextButtonHold_C">();
	}
	static class UIconTextButtonHold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTextButtonHold_C>();
	}
};
static_assert(alignof(UIconTextButtonHold_C) == 0x000010, "Wrong alignment on UIconTextButtonHold_C");
static_assert(sizeof(UIconTextButtonHold_C) == 0x0015C0, "Wrong size on UIconTextButtonHold_C");
static_assert(offsetof(UIconTextButtonHold_C, UberGraphFrame) == 0x001430, "Member 'UIconTextButtonHold_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, CenterButtonTextWidget) == 0x001438, "Member 'UIconTextButtonHold_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, ContentBorder) == 0x001440, "Member 'UIconTextButtonHold_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, HorizontalBox_ButtonContent) == 0x001448, "Member 'UIconTextButtonHold_C::HorizontalBox_ButtonContent' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, LeftSideImage) == 0x001450, "Member 'UIconTextButtonHold_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, RightExtraContentSlot) == 0x001458, "Member 'UIconTextButtonHold_C::RightExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, ButtonText) == 0x001460, "Member 'UIconTextButtonHold_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, IconBrush) == 0x001480, "Member 'UIconTextButtonHold_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, ControllerInputStyle) == 0x001540, "Member 'UIconTextButtonHold_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, MouseKeyboardStyle) == 0x001548, "Member 'UIconTextButtonHold_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, ContentAlignment) == 0x001550, "Member 'UIconTextButtonHold_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, bMouseKeyboardStyleSet) == 0x001551, "Member 'UIconTextButtonHold_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, OverrideButtonText) == 0x001558, "Member 'UIconTextButtonHold_C::OverrideButtonText' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, ButtonTextJustification) == 0x001570, "Member 'UIconTextButtonHold_C::ButtonTextJustification' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, bDisplayAllCaps) == 0x001571, "Member 'UIconTextButtonHold_C::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, PressProgress) == 0x001578, "Member 'UIconTextButtonHold_C::PressProgress' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, bIgnoreInputActionWidgetText) == 0x001580, "Member 'UIconTextButtonHold_C::bIgnoreInputActionWidgetText' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, HoldActionStarted) == 0x001588, "Member 'UIconTextButtonHold_C::HoldActionStarted' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, bHolding) == 0x001598, "Member 'UIconTextButtonHold_C::bHolding' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, HoldActionEnded) == 0x0015A0, "Member 'UIconTextButtonHold_C::HoldActionEnded' has a wrong offset!");
static_assert(offsetof(UIconTextButtonHold_C, HoldActionCompleted) == 0x0015B0, "Member 'UIconTextButtonHold_C::HoldActionCompleted' has a wrong offset!");

}
