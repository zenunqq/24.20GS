#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItem_Tooltip_C_Update_Text final
{
public:
	class FText                                   InText;
};
static_assert(alignof(ProgressiveItem_Tooltip_C_Update_Text) == 0x000008, "Wrong alignment on ProgressiveItem_Tooltip_C_Update_Text");
static_assert(sizeof(ProgressiveItem_Tooltip_C_Update_Text) == 0x000018, "Wrong size on ProgressiveItem_Tooltip_C_Update_Text");
static_assert(offsetof(ProgressiveItem_Tooltip_C_Update_Text, InText) == 0x000000, "Member 'ProgressiveItem_Tooltip_C_Update_Text::InText' has a wrong offset!");

struct ProgressiveItem_Tooltip_C_ToggleTooltip final
{
public:
	bool                                          Visible;
};
static_assert(alignof(ProgressiveItem_Tooltip_C_ToggleTooltip) == 0x000001, "Wrong alignment on ProgressiveItem_Tooltip_C_ToggleTooltip");
static_assert(sizeof(ProgressiveItem_Tooltip_C_ToggleTooltip) == 0x000001, "Wrong size on ProgressiveItem_Tooltip_C_ToggleTooltip");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ToggleTooltip, Visible) == 0x000000, "Member 'ProgressiveItem_Tooltip_C_ToggleTooltip::Visible' has a wrong offset!");

struct ProgressiveItem_Tooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveItem_Tooltip_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveItem_Tooltip_C_PreConstruct");
static_assert(sizeof(ProgressiveItem_Tooltip_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveItem_Tooltip_C_PreConstruct");
static_assert(offsetof(ProgressiveItem_Tooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveItem_Tooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	EUMGSequencePlayMode                          Temp_byte_Variable_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          K2Node_Event_IsDesignTime;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          K2Node_CustomEvent_Visible;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_2E[0x2];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip) == 0x000008, "Wrong alignment on ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip");
static_assert(sizeof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip) == 0x000048, "Wrong size on ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, EntryPoint) == 0x000000, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable) == 0x000004, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_bool_Variable) == 0x000005, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable_1) == 0x000006, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable_2) == 0x000007, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_bool_Variable_1) == 0x000014, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable_3) == 0x000015, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable_4) == 0x000016, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_Event_IsDesignTime) == 0x000017, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000018, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x000020, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_byte_Variable_5) == 0x000028, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_CustomEvent_Visible) == 0x000029, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00002A, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_Select_Default) == 0x00002B, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_Select_Default_1) == 0x00002C, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, Temp_bool_Variable_2) == 0x00002D, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000030, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000038, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, K2Node_Select_Default_2) == 0x000040, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
