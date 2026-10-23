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

class UIconTextButton_C : public UCommonButtonLegacy
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
	TMulticastInlineDelegate<void(bool HasFocus)> FocusChangedEvent;

public:
	void BindCommonInputSubsystem(bool bBind);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_IconTextButton(int32 EntryPoint);
	void Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material);
	void GetPressProgress(double* Progress);
	void InitializeButton();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnCurrentTextStyleChanged();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnTriggeringInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
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
		return StaticBPGeneratedClassImpl<"IconTextButton_C">();
	}
	static class UIconTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTextButton_C>();
	}
};
static_assert(alignof(UIconTextButton_C) == 0x000010, "Wrong alignment on UIconTextButton_C");
static_assert(sizeof(UIconTextButton_C) == 0x0015A0, "Wrong size on UIconTextButton_C");
static_assert(offsetof(UIconTextButton_C, UberGraphFrame) == 0x001430, "Member 'UIconTextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, CenterButtonTextWidget) == 0x001438, "Member 'UIconTextButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, ContentBorder) == 0x001440, "Member 'UIconTextButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, HorizontalBox_ButtonContent) == 0x001448, "Member 'UIconTextButton_C::HorizontalBox_ButtonContent' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, LeftSideImage) == 0x001450, "Member 'UIconTextButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, RightExtraContentSlot) == 0x001458, "Member 'UIconTextButton_C::RightExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, ButtonText) == 0x001460, "Member 'UIconTextButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, IconBrush) == 0x001480, "Member 'UIconTextButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, ControllerInputStyle) == 0x001540, "Member 'UIconTextButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, MouseKeyboardStyle) == 0x001548, "Member 'UIconTextButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, ContentAlignment) == 0x001550, "Member 'UIconTextButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, bMouseKeyboardStyleSet) == 0x001551, "Member 'UIconTextButton_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, OverrideButtonText) == 0x001558, "Member 'UIconTextButton_C::OverrideButtonText' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, ButtonTextJustification) == 0x001570, "Member 'UIconTextButton_C::ButtonTextJustification' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, bDisplayAllCaps) == 0x001571, "Member 'UIconTextButton_C::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, PressProgress) == 0x001578, "Member 'UIconTextButton_C::PressProgress' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, bIgnoreInputActionWidgetText) == 0x001580, "Member 'UIconTextButton_C::bIgnoreInputActionWidgetText' has a wrong offset!");
static_assert(offsetof(UIconTextButton_C, FocusChangedEvent) == 0x001588, "Member 'UIconTextButton_C::FocusChangedEvent' has a wrong offset!");

}
