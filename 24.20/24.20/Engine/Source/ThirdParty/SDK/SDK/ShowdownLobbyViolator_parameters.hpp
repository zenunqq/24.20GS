#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator final
{
public:
	int32                                         EntryPoint;
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;
	uint8                                         Pad_5[0x3];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	class FText                                   Temp_text_Variable_6;
	class FText                                   Temp_text_Variable_7;
	EFortShowdownEventState                       Temp_byte_Variable;
	uint8                                         Pad_C9[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	int32                                         Temp_int_Variable_6;
	int32                                         Temp_int_Variable_7;
	int32                                         Temp_int_Variable_8;
	int32                                         Temp_int_Variable_9;
	int32                                         Temp_int_Variable_10;
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_FC[0x4];
	class FText                                   Temp_text_Variable_8;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	uint8                                         Pad_12C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	class FText                                   Temp_text_Variable_9;
	class FText                                   Temp_text_Variable_10;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	EFortShowdownEventState                       Temp_byte_Variable_1;
	uint8                                         Pad_249[0x7];
	class FText                                   K2Node_Select_Default_1;
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;
};
static_assert(alignof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator) == 0x000008, "Wrong alignment on ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator");
static_assert(sizeof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator) == 0x000280, "Wrong size on ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, EntryPoint) == 0x000000, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, CallFunc_GetEventTimeState_ReturnValue) == 0x000004, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::CallFunc_GetEventTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable) == 0x000008, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_1) == 0x000020, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_2) == 0x000038, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_3) == 0x000050, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_4) == 0x000068, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_5) == 0x000080, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_6) == 0x000098, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_7) == 0x0000B0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_byte_Variable) == 0x0000C8, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable) == 0x0000CC, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_1) == 0x0000D0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_2) == 0x0000D4, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_3) == 0x0000D8, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_4) == 0x0000DC, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_5) == 0x0000E0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_6) == 0x0000E4, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_7) == 0x0000E8, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_8) == 0x0000EC, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_9) == 0x0000F0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_int_Variable_10) == 0x0000F4, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_Select_Default) == 0x0000F8, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_8) == 0x000100, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_MakeStruct_SlateColor) == 0x000118, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_MakeStruct_FormatArgumentData) == 0x000130, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_MakeStruct_FormatArgumentData_1) == 0x000180, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_MakeArray_Array) == 0x0001D0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, CallFunc_Format_ReturnValue) == 0x0001E0, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, CallFunc_TextToUpper_ReturnValue) == 0x0001F8, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_9) == 0x000210, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_9' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_text_Variable_10) == 0x000228, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_text_Variable_10' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, CallFunc_PlayAnimation_ReturnValue) == 0x000240, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, Temp_byte_Variable_1) == 0x000248, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, K2Node_Select_Default_1) == 0x000250, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator, CallFunc_TextToUpper_ReturnValue_1) == 0x000268, "Member 'ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");

}
