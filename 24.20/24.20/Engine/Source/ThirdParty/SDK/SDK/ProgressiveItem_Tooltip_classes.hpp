#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UProgressiveItem_Tooltip_C final : public UUserWidget
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
	class FText                                   Tooltip_Text;
	struct FSlateBrush                            In_Brush;
	EHorizontalAlignment                          In_Horizontal_Alignment;
	EVerticalAlignment                            In_Vertical_Alignment;
	uint8                                         Pad_382[0x6];
	struct FWidgetTransform                       In_Transform;
	bool                                          Show_Icon;
	uint8                                         Pad_3C1[0x3];
	struct FMargin                                Content_Padding;
	bool                                          ShouldShowToolTip;
	bool                                          In_Auto_Wrap_Text;

public:
	void Update_Text(const class FText& InText);
	void ToggleTooltip(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void Finished_BFEB1DDE42F9DC9A32C103B86238359F();
	void ExecuteUbergraph_ProgressiveItem_Tooltip(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItem_Tooltip_C">();
	}
	static class UProgressiveItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItem_Tooltip_C>();
	}
};
static_assert(alignof(UProgressiveItem_Tooltip_C) == 0x000010, "Wrong alignment on UProgressiveItem_Tooltip_C");
static_assert(sizeof(UProgressiveItem_Tooltip_C) == 0x0003E0, "Wrong size on UProgressiveItem_Tooltip_C");
static_assert(offsetof(UProgressiveItem_Tooltip_C, UberGraphFrame) == 0x000268, "Member 'UProgressiveItem_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, FloatLoop) == 0x000270, "Member 'UProgressiveItem_Tooltip_C::FloatLoop' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, burstLoop) == 0x000278, "Member 'UProgressiveItem_Tooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Show) == 0x000280, "Member 'UProgressiveItem_Tooltip_C::Show' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, HorizontalBoxcontent) == 0x000288, "Member 'UProgressiveItem_Tooltip_C::HorizontalBoxcontent' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Icon) == 0x000290, "Member 'UProgressiveItem_Tooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Image_Arrow) == 0x000298, "Member 'UProgressiveItem_Tooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Text_Tooltip) == 0x0002A0, "Member 'UProgressiveItem_Tooltip_C::Text_Tooltip' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Tooltip_Text) == 0x0002A8, "Member 'UProgressiveItem_Tooltip_C::Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Brush) == 0x0002C0, "Member 'UProgressiveItem_Tooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Horizontal_Alignment) == 0x000380, "Member 'UProgressiveItem_Tooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Vertical_Alignment) == 0x000381, "Member 'UProgressiveItem_Tooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Transform) == 0x000388, "Member 'UProgressiveItem_Tooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Show_Icon) == 0x0003C0, "Member 'UProgressiveItem_Tooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, Content_Padding) == 0x0003C4, "Member 'UProgressiveItem_Tooltip_C::Content_Padding' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, ShouldShowToolTip) == 0x0003D4, "Member 'UProgressiveItem_Tooltip_C::ShouldShowToolTip' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tooltip_C, In_Auto_Wrap_Text) == 0x0003D5, "Member 'UProgressiveItem_Tooltip_C::In_Auto_Wrap_Text' has a wrong offset!");

}
