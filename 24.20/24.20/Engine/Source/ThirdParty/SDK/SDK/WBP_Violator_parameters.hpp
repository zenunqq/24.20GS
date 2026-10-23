#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_Violator_C_ExecuteUbergraph_WBP_Violator final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_6[0x2];
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_1;
	struct FSlateBrush                            CallFunc_MakeBrushFromMaterial_ReturnValue;
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
};
static_assert(alignof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator) == 0x000010, "Wrong alignment on WBP_Violator_C_ExecuteUbergraph_WBP_Violator");
static_assert(sizeof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator) == 0x0001C0, "Wrong size on WBP_Violator_C_ExecuteUbergraph_WBP_Violator");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, EntryPoint) == 0x000000, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, K2Node_Event_IsDesignTime) == 0x000005, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_BreakVector2D_X) == 0x000008, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_FTrunc_ReturnValue_1) == 0x00001C, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_MakeBrushFromMaterial_ReturnValue) == 0x000020, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_MakeBrushFromMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x0000E0, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, K2Node_MakeStruct_Margin) == 0x0001A0, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x0001B0, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_ExecuteUbergraph_WBP_Violator, K2Node_MakeStruct_Right_ImplicitCast) == 0x0001B8, "Member 'WBP_Violator_C_ExecuteUbergraph_WBP_Violator::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");

struct WBP_Violator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_Violator_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Violator_C_PreConstruct");
static_assert(sizeof(WBP_Violator_C_PreConstruct) == 0x000001, "Wrong size on WBP_Violator_C_PreConstruct");
static_assert(offsetof(WBP_Violator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Violator_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_Violator_C_UpdateViolatorText final
{
public:
	class FText                                   InText;
	bool                                          bDisplayTimeIcon;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(WBP_Violator_C_UpdateViolatorText) == 0x000008, "Wrong alignment on WBP_Violator_C_UpdateViolatorText");
static_assert(sizeof(WBP_Violator_C_UpdateViolatorText) == 0x000020, "Wrong size on WBP_Violator_C_UpdateViolatorText");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, InText) == 0x000000, "Member 'WBP_Violator_C_UpdateViolatorText::InText' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, bDisplayTimeIcon) == 0x000018, "Member 'WBP_Violator_C_UpdateViolatorText::bDisplayTimeIcon' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, Temp_bool_Variable) == 0x000019, "Member 'WBP_Violator_C_UpdateViolatorText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, Temp_byte_Variable) == 0x00001A, "Member 'WBP_Violator_C_UpdateViolatorText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, Temp_byte_Variable_1) == 0x00001B, "Member 'WBP_Violator_C_UpdateViolatorText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Violator_C_UpdateViolatorText, K2Node_Select_Default) == 0x00001C, "Member 'WBP_Violator_C_UpdateViolatorText::K2Node_Select_Default' has a wrong offset!");

}
