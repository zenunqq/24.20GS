#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTooltip_Basic_S_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 _hr_;
	class UHorizontalBox*                         Body_HBox;
	class UHorizontalBox*                         Header_HBox;
	class UImage*                                 Icon_Header;
	class USpacer*                                Spacer_Icon;
	class UCommonTextBlock*                       Text_Body;
	class UCommonTextBlock*                       Text_Header;
	class FText                                   BodyText;
	class FText                                   HeaderText;
	class USlateBrushAsset*                       Icon_Brush;
	class UClass*                                 Body_Style;
	class UClass*                                 Header_Style;

public:
	void Construct();
	void ExecuteUbergraph_Tooltip_Basic_S(int32 EntryPoint);
	class FText Get_Body_Text();
	class FText Get_Header_Text();
	struct FSlateBrush Get_Icon_Brush();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip-Basic-S_C">();
	}
	static class UTooltip_Basic_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltip_Basic_S_C>();
	}
};
static_assert(alignof(UTooltip_Basic_S_C) == 0x000008, "Wrong alignment on UTooltip_Basic_S_C");
static_assert(sizeof(UTooltip_Basic_S_C) == 0x000318, "Wrong size on UTooltip_Basic_S_C");
static_assert(offsetof(UTooltip_Basic_S_C, UberGraphFrame) == 0x000290, "Member 'UTooltip_Basic_S_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, _hr_) == 0x000298, "Member 'UTooltip_Basic_S_C::_hr_' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Body_HBox) == 0x0002A0, "Member 'UTooltip_Basic_S_C::Body_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Header_HBox) == 0x0002A8, "Member 'UTooltip_Basic_S_C::Header_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Icon_Header) == 0x0002B0, "Member 'UTooltip_Basic_S_C::Icon_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Spacer_Icon) == 0x0002B8, "Member 'UTooltip_Basic_S_C::Spacer_Icon' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Text_Body) == 0x0002C0, "Member 'UTooltip_Basic_S_C::Text_Body' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Text_Header) == 0x0002C8, "Member 'UTooltip_Basic_S_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, BodyText) == 0x0002D0, "Member 'UTooltip_Basic_S_C::BodyText' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, HeaderText) == 0x0002E8, "Member 'UTooltip_Basic_S_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Icon_Brush) == 0x000300, "Member 'UTooltip_Basic_S_C::Icon_Brush' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Body_Style) == 0x000308, "Member 'UTooltip_Basic_S_C::Body_Style' has a wrong offset!");
static_assert(offsetof(UTooltip_Basic_S_C, Header_Style) == 0x000310, "Member 'UTooltip_Basic_S_C::Header_Style' has a wrong offset!");

}
