#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class ULockerArchivingTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FloatLoop;
	class UWidgetAnimation*                       burstLoop;
	class UWidgetAnimation*                       Show;
	class UIconTextButton_C*                      Dismiss_Button;
	class UImage*                                 Icon;
	class UImage*                                 Image_Arrow;
	class USizeBox*                               SizeBox_0;
	class UCommonRichTextBlock*                   Text_Tooltip;
	class UVerticalBox*                           VerticalBox_0;
	class FText                                   In_Text;
	bool                                          In_Auto_Wrap_Text;
	uint8                                         Pad_2D1[0xF];
	struct FSlateBrush                            In_Brush;
	bool                                          InShowArrow;
	EHorizontalAlignment                          In_Horizontal_Alignment;
	EVerticalAlignment                            In_Vertical_Alignment;
	uint8                                         Pad_3A3[0x5];
	struct FWidgetTransform                       In_Transform;
	bool                                          Show_Icon;
	uint8                                         Pad_3E1[0x7];
	double                                        InWidthOverride;
	struct FMargin                                Content_Padding;
	bool                                          ShouldShowToolTip;
	bool                                          bEnabled;
	uint8                                         Pad_402[0x6];
	TMulticastInlineDelegate<void()>              OnDismissed;

public:
	void BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_LockerArchivingTooltip(int32 EntryPoint);
	void HideTooltip();
	void PreConstruct(bool IsDesignTime);
	void SetText(class FText& Text);
	void SetTooltipEnabled(bool bInEnabled);
	void SetTooltipStatus(bool bShouldShowTooltip);
	void ShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockerArchivingTooltip_C">();
	}
	static class ULockerArchivingTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockerArchivingTooltip_C>();
	}
};
static_assert(alignof(ULockerArchivingTooltip_C) == 0x000010, "Wrong alignment on ULockerArchivingTooltip_C");
static_assert(sizeof(ULockerArchivingTooltip_C) == 0x000420, "Wrong size on ULockerArchivingTooltip_C");
static_assert(offsetof(ULockerArchivingTooltip_C, UberGraphFrame) == 0x000268, "Member 'ULockerArchivingTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, FloatLoop) == 0x000270, "Member 'ULockerArchivingTooltip_C::FloatLoop' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, burstLoop) == 0x000278, "Member 'ULockerArchivingTooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Show) == 0x000280, "Member 'ULockerArchivingTooltip_C::Show' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Dismiss_Button) == 0x000288, "Member 'ULockerArchivingTooltip_C::Dismiss_Button' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Icon) == 0x000290, "Member 'ULockerArchivingTooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Image_Arrow) == 0x000298, "Member 'ULockerArchivingTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, SizeBox_0) == 0x0002A0, "Member 'ULockerArchivingTooltip_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Text_Tooltip) == 0x0002A8, "Member 'ULockerArchivingTooltip_C::Text_Tooltip' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, VerticalBox_0) == 0x0002B0, "Member 'ULockerArchivingTooltip_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Text) == 0x0002B8, "Member 'ULockerArchivingTooltip_C::In_Text' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Auto_Wrap_Text) == 0x0002D0, "Member 'ULockerArchivingTooltip_C::In_Auto_Wrap_Text' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Brush) == 0x0002E0, "Member 'ULockerArchivingTooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, InShowArrow) == 0x0003A0, "Member 'ULockerArchivingTooltip_C::InShowArrow' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Horizontal_Alignment) == 0x0003A1, "Member 'ULockerArchivingTooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Vertical_Alignment) == 0x0003A2, "Member 'ULockerArchivingTooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, In_Transform) == 0x0003A8, "Member 'ULockerArchivingTooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Show_Icon) == 0x0003E0, "Member 'ULockerArchivingTooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, InWidthOverride) == 0x0003E8, "Member 'ULockerArchivingTooltip_C::InWidthOverride' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, Content_Padding) == 0x0003F0, "Member 'ULockerArchivingTooltip_C::Content_Padding' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, ShouldShowToolTip) == 0x000400, "Member 'ULockerArchivingTooltip_C::ShouldShowToolTip' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, bEnabled) == 0x000401, "Member 'ULockerArchivingTooltip_C::bEnabled' has a wrong offset!");
static_assert(offsetof(ULockerArchivingTooltip_C, OnDismissed) == 0x000408, "Member 'ULockerArchivingTooltip_C::OnDismissed' has a wrong offset!");

}
