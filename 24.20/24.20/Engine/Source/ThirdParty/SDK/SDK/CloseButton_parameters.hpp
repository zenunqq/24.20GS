#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct CloseButton_C_ExecuteUbergraph_CloseButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(CloseButton_C_ExecuteUbergraph_CloseButton) == 0x000008, "Wrong alignment on CloseButton_C_ExecuteUbergraph_CloseButton");
static_assert(sizeof(CloseButton_C_ExecuteUbergraph_CloseButton) == 0x000018, "Wrong size on CloseButton_C_ExecuteUbergraph_CloseButton");
static_assert(offsetof(CloseButton_C_ExecuteUbergraph_CloseButton, EntryPoint) == 0x000000, "Member 'CloseButton_C_ExecuteUbergraph_CloseButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CloseButton_C_ExecuteUbergraph_CloseButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'CloseButton_C_ExecuteUbergraph_CloseButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseButton_C_ExecuteUbergraph_CloseButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'CloseButton_C_ExecuteUbergraph_CloseButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct CloseButton_C_HandleSize final
{
public:
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_2[0x2];
	int32                                         Temp_int_Variable;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_Select_Default;
	int32                                         K2Node_Select_Default_1;
	uint8                                         Pad_2C[0x4];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
};
static_assert(alignof(CloseButton_C_HandleSize) == 0x000008, "Wrong alignment on CloseButton_C_HandleSize");
static_assert(sizeof(CloseButton_C_HandleSize) == 0x000088, "Wrong size on CloseButton_C_HandleSize");
static_assert(offsetof(CloseButton_C_HandleSize, Temp_bool_Variable) == 0x000000, "Member 'CloseButton_C_HandleSize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, Temp_bool_Variable_1) == 0x000001, "Member 'CloseButton_C_HandleSize::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, Temp_int_Variable) == 0x000004, "Member 'CloseButton_C_HandleSize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, K2Node_MakeStruct_Margin) == 0x000008, "Member 'CloseButton_C_HandleSize::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, K2Node_Select_Default) == 0x000018, "Member 'CloseButton_C_HandleSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, K2Node_Select_Default_1) == 0x000028, "Member 'CloseButton_C_HandleSize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CloseButton_C_HandleSize, K2Node_MakeStruct_SlateFontInfo) == 0x000030, "Member 'CloseButton_C_HandleSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

struct CloseButton_C_SetText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(CloseButton_C_SetText) == 0x000008, "Wrong alignment on CloseButton_C_SetText");
static_assert(sizeof(CloseButton_C_SetText) == 0x000018, "Wrong size on CloseButton_C_SetText");
static_assert(offsetof(CloseButton_C_SetText, Text) == 0x000000, "Member 'CloseButton_C_SetText::Text' has a wrong offset!");

}
