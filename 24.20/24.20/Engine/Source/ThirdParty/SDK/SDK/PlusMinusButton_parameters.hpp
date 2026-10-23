#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	EHorizontalAlignment                          Temp_byte_Variable;
	EHorizontalAlignment                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	EHorizontalAlignment                          Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_2;
	EVerticalAlignment                            Temp_byte_Variable_3;
	EVerticalAlignment                            Temp_byte_Variable_4;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_35[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	EHorizontalAlignment                          K2Node_Select_Default;
	EHorizontalAlignment                          K2Node_Select_Default_1;
	EVerticalAlignment                            K2Node_Select_Default_2;
};
static_assert(alignof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton) == 0x000008, "Wrong alignment on PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton");
static_assert(sizeof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton) == 0x0000B0, "Wrong size on PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, EntryPoint) == 0x000000, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_bool_Variable) == 0x000004, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_byte_Variable) == 0x000005, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_byte_Variable_1) == 0x000006, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_bool_Variable_1) == 0x000007, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_byte_Variable_2) == 0x000008, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_bool_Variable_2) == 0x000009, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_byte_Variable_3) == 0x00000A, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, Temp_byte_Variable_4) == 0x00000B, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_MakeStruct_SlateColor) == 0x00000C, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_MakeStruct_SlateColor_1) == 0x000020, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_Event_IsDesignTime) == 0x000034, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000038, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_MakeStruct_SlateFontInfo) == 0x000048, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000A0, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_Select_Default) == 0x0000A8, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_Select_Default_1) == 0x0000A9, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton, K2Node_Select_Default_2) == 0x0000AA, "Member 'PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton::K2Node_Select_Default_2' has a wrong offset!");

struct PlusMinusButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PlusMinusButton_C_PreConstruct) == 0x000001, "Wrong alignment on PlusMinusButton_C_PreConstruct");
static_assert(sizeof(PlusMinusButton_C_PreConstruct) == 0x000001, "Wrong size on PlusMinusButton_C_PreConstruct");
static_assert(offsetof(PlusMinusButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlusMinusButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
