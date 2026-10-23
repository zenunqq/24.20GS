#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_GetEmptyText_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	int32                                         CallFunc_GetBestEventScore_ReturnValue;
	uint8                                         Pad_2C[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	float                                         CallFunc_GetEventLeaderboardPercentile_ReturnValue;
	uint8                                         Pad_8C[0x4];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;
	float                                         CallFunc_GetEventLeaderboardPercentile_ReturnValue_1;
	uint8                                         Pad_DC[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_131[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_161[0x3];
	int32                                         CallFunc_GetBestEventScore_ReturnValue_1;
	bool                                          CallFunc_HasScoreInEvent_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_16A[0x6];
	class FText                                   CallFunc_GetEmptyText_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_189[0x7];
	class FText                                   K2Node_Select_Default_2;
	bool                                          CallFunc_HasScoreInEvent_ReturnValue_1;
	uint8                                         Pad_1A9[0x7];
	class FText                                   K2Node_Select_Default_3;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance) == 0x000008, "Wrong alignment on EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance");
static_assert(sizeof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance) == 0x0001D8, "Wrong size on EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, EntryPoint) == 0x000000, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetEmptyText_ReturnValue) == 0x000008, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_bool_Variable) == 0x000020, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_byte_Variable) == 0x000021, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_byte_Variable_1) == 0x000022, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_bool_Variable_1) == 0x000023, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_byte_Variable_2) == 0x000024, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_byte_Variable_3) == 0x000025, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_bool_Variable_2) == 0x000026, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, Temp_bool_Variable_3) == 0x000027, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetBestEventScore_ReturnValue) == 0x000028, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetBestEventScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetEventLeaderboardPercentile_ReturnValue) == 0x000088, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetEventLeaderboardPercentile_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_MakeArray_Array) == 0x000090, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Conv_DoubleToText_ReturnValue) == 0x0000C0, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetEventLeaderboardPercentile_ReturnValue_1) == 0x0000D8, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetEventLeaderboardPercentile_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000130, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_MakeArray_Array_1) == 0x000138, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Format_ReturnValue_1) == 0x000148, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_Select_Default) == 0x000160, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetBestEventScore_ReturnValue_1) == 0x000164, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetBestEventScore_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_HasScoreInEvent_ReturnValue) == 0x000168, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_HasScoreInEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Less_IntInt_ReturnValue) == 0x000169, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_GetEmptyText_ReturnValue_1) == 0x000170, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_GetEmptyText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_Select_Default_1) == 0x000188, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_Select_Default_2) == 0x000190, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_HasScoreInEvent_ReturnValue_1) == 0x0001A8, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_HasScoreInEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, K2Node_Select_Default_3) == 0x0001B0, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001D0, "Member 'EventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
