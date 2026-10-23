#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UUpsell_TutorialTooltip_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FloatLoop;
	class UWidgetAnimation*                       burstLoop;
	class UWidgetAnimation*                       Show;
	class UHorizontalBox*                         HorizontalBoxcontent;
	class UImage*                                 Icon;
	class UImage*                                 Image_Arrow;
	class UCommonRichTextBlock*                   Text_Tooltip;
	class FText                                   In_Text;
	bool                                          In_Auto_Wrap_Text;
	uint8                                         Pad_2E9[0x7];
	struct FSlateBrush                            In_Brush;
	EHorizontalAlignment                          In_Horizontal_Alignment;
	EVerticalAlignment                            In_Vertical_Alignment;
	uint8                                         Pad_3B2[0x6];
	struct FWidgetTransform                       In_Transform;
	bool                                          Show_Icon;
	uint8                                         Pad_3F1[0x3];
	struct FMargin                                Content_Padding;
	bool                                          ShouldShowToolTip;
	bool                                          bEnabled;

public:
	void ShowTooltip();
	void SetTooltipEnabled(bool bInEnabled);
	void SetText(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void HideTooltip();
	void ExecuteUbergraph_Upsell_TutorialTooltip(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Upsell_TutorialTooltip_C">();
	}
	static class UUpsell_TutorialTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpsell_TutorialTooltip_C>();
	}
};
static_assert(alignof(UUpsell_TutorialTooltip_C) == 0x000010, "Wrong alignment on UUpsell_TutorialTooltip_C");
static_assert(sizeof(UUpsell_TutorialTooltip_C) == 0x000410, "Wrong size on UUpsell_TutorialTooltip_C");
static_assert(offsetof(UUpsell_TutorialTooltip_C, UberGraphFrame) == 0x000290, "Member 'UUpsell_TutorialTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, FloatLoop) == 0x000298, "Member 'UUpsell_TutorialTooltip_C::FloatLoop' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, burstLoop) == 0x0002A0, "Member 'UUpsell_TutorialTooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Show) == 0x0002A8, "Member 'UUpsell_TutorialTooltip_C::Show' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, HorizontalBoxcontent) == 0x0002B0, "Member 'UUpsell_TutorialTooltip_C::HorizontalBoxcontent' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Icon) == 0x0002B8, "Member 'UUpsell_TutorialTooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Image_Arrow) == 0x0002C0, "Member 'UUpsell_TutorialTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Text_Tooltip) == 0x0002C8, "Member 'UUpsell_TutorialTooltip_C::Text_Tooltip' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Text) == 0x0002D0, "Member 'UUpsell_TutorialTooltip_C::In_Text' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Auto_Wrap_Text) == 0x0002E8, "Member 'UUpsell_TutorialTooltip_C::In_Auto_Wrap_Text' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Brush) == 0x0002F0, "Member 'UUpsell_TutorialTooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Horizontal_Alignment) == 0x0003B0, "Member 'UUpsell_TutorialTooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Vertical_Alignment) == 0x0003B1, "Member 'UUpsell_TutorialTooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, In_Transform) == 0x0003B8, "Member 'UUpsell_TutorialTooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Show_Icon) == 0x0003F0, "Member 'UUpsell_TutorialTooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, Content_Padding) == 0x0003F4, "Member 'UUpsell_TutorialTooltip_C::Content_Padding' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, ShouldShowToolTip) == 0x000404, "Member 'UUpsell_TutorialTooltip_C::ShouldShowToolTip' has a wrong offset!");
static_assert(offsetof(UUpsell_TutorialTooltip_C, bEnabled) == 0x000405, "Member 'UUpsell_TutorialTooltip_C::bEnabled' has a wrong offset!");

}
