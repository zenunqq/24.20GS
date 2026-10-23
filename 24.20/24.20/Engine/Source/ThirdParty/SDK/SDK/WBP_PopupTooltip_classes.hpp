#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_PopupTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HideAnimation;
	class UWidgetAnimation*                       ShowAnimation;
	class UImage*                                 Image_Arrow;
	class UCommonRichTextBlock*                   RichText_SecondaryLine;
	class UCommonTextBlock*                       Text_MainText;
	class FText                                   FirstLineText;
	class FText                                   SecondLineRichText;
	struct FMargin                                ArrowPadding;
	EHorizontalAlignment                          ArrowHorizontalAlignment;
	EVerticalAlignment                            ArrowVerticalAlignment;
	uint8                                         Pad_2DA[0x6];
	struct FWidgetTransform                       ArrowTransform;
	bool                                          IsShowing;

public:
	void Construct();
	void ExecuteUbergraph_WBP_PopupTooltip(int32 EntryPoint);
	void HideNotification();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetFirstLineText(const class FText& FirstLineText_0);
	void ShowNotification();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupTooltip_C">();
	}
	static class UWBP_PopupTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupTooltip_C>();
	}
};
static_assert(alignof(UWBP_PopupTooltip_C) == 0x000008, "Wrong alignment on UWBP_PopupTooltip_C");
static_assert(sizeof(UWBP_PopupTooltip_C) == 0x000320, "Wrong size on UWBP_PopupTooltip_C");
static_assert(offsetof(UWBP_PopupTooltip_C, UberGraphFrame) == 0x000268, "Member 'UWBP_PopupTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, HideAnimation) == 0x000270, "Member 'UWBP_PopupTooltip_C::HideAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, ShowAnimation) == 0x000278, "Member 'UWBP_PopupTooltip_C::ShowAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, Image_Arrow) == 0x000280, "Member 'UWBP_PopupTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, RichText_SecondaryLine) == 0x000288, "Member 'UWBP_PopupTooltip_C::RichText_SecondaryLine' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, Text_MainText) == 0x000290, "Member 'UWBP_PopupTooltip_C::Text_MainText' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, FirstLineText) == 0x000298, "Member 'UWBP_PopupTooltip_C::FirstLineText' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, SecondLineRichText) == 0x0002B0, "Member 'UWBP_PopupTooltip_C::SecondLineRichText' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, ArrowPadding) == 0x0002C8, "Member 'UWBP_PopupTooltip_C::ArrowPadding' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, ArrowHorizontalAlignment) == 0x0002D8, "Member 'UWBP_PopupTooltip_C::ArrowHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, ArrowVerticalAlignment) == 0x0002D9, "Member 'UWBP_PopupTooltip_C::ArrowVerticalAlignment' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, ArrowTransform) == 0x0002E0, "Member 'UWBP_PopupTooltip_C::ArrowTransform' has a wrong offset!");
static_assert(offsetof(UWBP_PopupTooltip_C, IsShowing) == 0x000318, "Member 'UWBP_PopupTooltip_C::IsShowing' has a wrong offset!");

}
