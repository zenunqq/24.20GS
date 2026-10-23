#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UTooltip_Custom_S_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 _hr_;
	class UHorizontalBox*                         Body_HBox;
	class UNamedSlot*                             Content_Slot;
	class UHorizontalBox*                         Header_HBox;
	class UImage*                                 Icon_Header;
	class USpacer*                                Spacer_Header;
	class USpacer*                                Spacer_Icon;
	class UTextBlock*                             Text_Header;
	class FText                                   HeaderText;
	class USlateBrushAsset*                       Icon_Brush;
	class UUserWidget*                            ContentWidget;

public:
	void Construct();
	void ExecuteUbergraph_Tooltip_Custom_S(int32 EntryPoint);
	class FText Get_Body_Text();
	class FText Get_Header_Text();
	struct FSlateBrush Get_Icon_Brush();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip-Custom-S_C">();
	}
	static class UTooltip_Custom_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltip_Custom_S_C>();
	}
};
static_assert(alignof(UTooltip_Custom_S_C) == 0x000008, "Wrong alignment on UTooltip_Custom_S_C");
static_assert(sizeof(UTooltip_Custom_S_C) == 0x0002D8, "Wrong size on UTooltip_Custom_S_C");
static_assert(offsetof(UTooltip_Custom_S_C, UberGraphFrame) == 0x000268, "Member 'UTooltip_Custom_S_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, _hr_) == 0x000270, "Member 'UTooltip_Custom_S_C::_hr_' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Body_HBox) == 0x000278, "Member 'UTooltip_Custom_S_C::Body_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Content_Slot) == 0x000280, "Member 'UTooltip_Custom_S_C::Content_Slot' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Header_HBox) == 0x000288, "Member 'UTooltip_Custom_S_C::Header_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Icon_Header) == 0x000290, "Member 'UTooltip_Custom_S_C::Icon_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Spacer_Header) == 0x000298, "Member 'UTooltip_Custom_S_C::Spacer_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Spacer_Icon) == 0x0002A0, "Member 'UTooltip_Custom_S_C::Spacer_Icon' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Text_Header) == 0x0002A8, "Member 'UTooltip_Custom_S_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, HeaderText) == 0x0002B0, "Member 'UTooltip_Custom_S_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Icon_Brush) == 0x0002C8, "Member 'UTooltip_Custom_S_C::Icon_Brush' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, ContentWidget) == 0x0002D0, "Member 'UTooltip_Custom_S_C::ContentWidget' has a wrong offset!");

}
