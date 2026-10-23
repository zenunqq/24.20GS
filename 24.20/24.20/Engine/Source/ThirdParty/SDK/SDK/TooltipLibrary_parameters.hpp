#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TooltipLibrary_C_Create_Basic_Tooltip final
{
public:
	class APlayerController*                      Owning_Player;
	class FText                                   Body_Text;
	class FText                                   Header_Text;
	class USlateBrushAsset*                       Icon_Brush;
	class UClass*                                 Header_Style;
	class UClass*                                 Body_Style;
	class UObject*                                __WorldContext;
	class UUserWidget*                            Output;
	class UTooltip_Basic_S_C*                     CallFunc_Create_ReturnValue;
};
static_assert(alignof(TooltipLibrary_C_Create_Basic_Tooltip) == 0x000008, "Wrong alignment on TooltipLibrary_C_Create_Basic_Tooltip");
static_assert(sizeof(TooltipLibrary_C_Create_Basic_Tooltip) == 0x000068, "Wrong size on TooltipLibrary_C_Create_Basic_Tooltip");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Owning_Player) == 0x000000, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Owning_Player' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Body_Text) == 0x000008, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Body_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Header_Text) == 0x000020, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Header_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Icon_Brush) == 0x000038, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Icon_Brush' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Header_Style) == 0x000040, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Header_Style' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Body_Style) == 0x000048, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Body_Style' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, __WorldContext) == 0x000050, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, Output) == 0x000058, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::Output' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Basic_Tooltip, CallFunc_Create_ReturnValue) == 0x000060, "Member 'TooltipLibrary_C_Create_Basic_Tooltip::CallFunc_Create_ReturnValue' has a wrong offset!");

struct TooltipLibrary_C_Create_Compare_Item_Tooltip final
{
public:
	class APlayerController*                      Owning_Player;
	class FText                                   Header_Text;
	class USlateBrushAsset*                       Header_Icon;
	class UFortItem*                              Item;
	class UFortItem*                              ComparedItem;
	class UObject*                                __WorldContext;
	class UWidget*                                Return_Value;
};
static_assert(alignof(TooltipLibrary_C_Create_Compare_Item_Tooltip) == 0x000008, "Wrong alignment on TooltipLibrary_C_Create_Compare_Item_Tooltip");
static_assert(sizeof(TooltipLibrary_C_Create_Compare_Item_Tooltip) == 0x000048, "Wrong size on TooltipLibrary_C_Create_Compare_Item_Tooltip");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, Owning_Player) == 0x000000, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::Owning_Player' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, Header_Text) == 0x000008, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::Header_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, Header_Icon) == 0x000020, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::Header_Icon' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, Item) == 0x000028, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::Item' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, ComparedItem) == 0x000030, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::ComparedItem' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, __WorldContext) == 0x000038, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Compare_Item_Tooltip, Return_Value) == 0x000040, "Member 'TooltipLibrary_C_Create_Compare_Item_Tooltip::Return_Value' has a wrong offset!");

struct TooltipLibrary_C_Create_Custom_Tooltip final
{
public:
	class APlayerController*                      Owning_Player;
	class FText                                   Header_Text;
	class USlateBrushAsset*                       Icon_Brush;
	class UUserWidget*                            Widget;
	class UObject*                                __WorldContext;
	class UUserWidget*                            Output;
	class UTooltip_Custom_S_C*                    CallFunc_Create_ReturnValue;
};
static_assert(alignof(TooltipLibrary_C_Create_Custom_Tooltip) == 0x000008, "Wrong alignment on TooltipLibrary_C_Create_Custom_Tooltip");
static_assert(sizeof(TooltipLibrary_C_Create_Custom_Tooltip) == 0x000048, "Wrong size on TooltipLibrary_C_Create_Custom_Tooltip");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, Owning_Player) == 0x000000, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::Owning_Player' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, Header_Text) == 0x000008, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::Header_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, Icon_Brush) == 0x000020, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::Icon_Brush' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, Widget) == 0x000028, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::Widget' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, __WorldContext) == 0x000030, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, Output) == 0x000038, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::Output' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Custom_Tooltip, CallFunc_Create_ReturnValue) == 0x000040, "Member 'TooltipLibrary_C_Create_Custom_Tooltip::CallFunc_Create_ReturnValue' has a wrong offset!");

struct TooltipLibrary_C_Create_Item_Tooltip final
{
public:
	class APlayerController*                      Owning_Player;
	class FText                                   Header_Text;
	class USlateBrushAsset*                       Header_Icon;
	class UFortItem*                              Item;
	int32                                         OverrideQuantity;
	uint8                                         Pad_34[0x4];
	class UObject*                                __WorldContext;
	class UWidget*                                Return_Value;
};
static_assert(alignof(TooltipLibrary_C_Create_Item_Tooltip) == 0x000008, "Wrong alignment on TooltipLibrary_C_Create_Item_Tooltip");
static_assert(sizeof(TooltipLibrary_C_Create_Item_Tooltip) == 0x000048, "Wrong size on TooltipLibrary_C_Create_Item_Tooltip");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, Owning_Player) == 0x000000, "Member 'TooltipLibrary_C_Create_Item_Tooltip::Owning_Player' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, Header_Text) == 0x000008, "Member 'TooltipLibrary_C_Create_Item_Tooltip::Header_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, Header_Icon) == 0x000020, "Member 'TooltipLibrary_C_Create_Item_Tooltip::Header_Icon' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, Item) == 0x000028, "Member 'TooltipLibrary_C_Create_Item_Tooltip::Item' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, OverrideQuantity) == 0x000030, "Member 'TooltipLibrary_C_Create_Item_Tooltip::OverrideQuantity' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, __WorldContext) == 0x000038, "Member 'TooltipLibrary_C_Create_Item_Tooltip::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Create_Item_Tooltip, Return_Value) == 0x000040, "Member 'TooltipLibrary_C_Create_Item_Tooltip::Return_Value' has a wrong offset!");

struct TooltipLibrary_C_CreateXPTooltip final
{
public:
	class APlayerController*                      Owner;
	class FText                                   Header;
	class FText                                   CommanderXP;
	class FText                                   BoostXP;
	class FText                                   RestXP;
	class FText                                   Body;
	class UObject*                                __WorldContext;
	class UCommonUserWidget*                      Out;
	class UXpBarToolTip_C*                        CallFunc_Create_ReturnValue;
};
static_assert(alignof(TooltipLibrary_C_CreateXPTooltip) == 0x000008, "Wrong alignment on TooltipLibrary_C_CreateXPTooltip");
static_assert(sizeof(TooltipLibrary_C_CreateXPTooltip) == 0x000098, "Wrong size on TooltipLibrary_C_CreateXPTooltip");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, Owner) == 0x000000, "Member 'TooltipLibrary_C_CreateXPTooltip::Owner' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, Header) == 0x000008, "Member 'TooltipLibrary_C_CreateXPTooltip::Header' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, CommanderXP) == 0x000020, "Member 'TooltipLibrary_C_CreateXPTooltip::CommanderXP' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, BoostXP) == 0x000038, "Member 'TooltipLibrary_C_CreateXPTooltip::BoostXP' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, RestXP) == 0x000050, "Member 'TooltipLibrary_C_CreateXPTooltip::RestXP' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, Body) == 0x000068, "Member 'TooltipLibrary_C_CreateXPTooltip::Body' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, __WorldContext) == 0x000080, "Member 'TooltipLibrary_C_CreateXPTooltip::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, Out) == 0x000088, "Member 'TooltipLibrary_C_CreateXPTooltip::Out' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_CreateXPTooltip, CallFunc_Create_ReturnValue) == 0x000090, "Member 'TooltipLibrary_C_CreateXPTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");

struct TooltipLibrary_C_Set_Enabled_And_Tooltip_Text final
{
public:
	class UWidget*                                Widget;
	bool                                          Enabled;
	uint8                                         Pad_9[0x7];
	class FText                                   Tooltip_Text;
	class UObject*                                __WorldContext;
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
};
static_assert(alignof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text) == 0x000008, "Wrong alignment on TooltipLibrary_C_Set_Enabled_And_Tooltip_Text");
static_assert(sizeof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text) == 0x000040, "Wrong size on TooltipLibrary_C_Set_Enabled_And_Tooltip_Text");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, Widget) == 0x000000, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::Widget' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, Enabled) == 0x000008, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::Enabled' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, Tooltip_Text) == 0x000010, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::Tooltip_Text' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, __WorldContext) == 0x000028, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::__WorldContext' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");
static_assert(offsetof(TooltipLibrary_C_Set_Enabled_And_Tooltip_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'TooltipLibrary_C_Set_Enabled_And_Tooltip_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

}
