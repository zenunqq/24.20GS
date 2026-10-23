#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct RebootCardIndicator_C_bp_UpdateCountdownText final
{
public:
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(RebootCardIndicator_C_bp_UpdateCountdownText) == 0x000008, "Wrong alignment on RebootCardIndicator_C_bp_UpdateCountdownText");
static_assert(sizeof(RebootCardIndicator_C_bp_UpdateCountdownText) == 0x0000A0, "Wrong size on RebootCardIndicator_C_bp_UpdateCountdownText");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000000, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_FTrunc_ReturnValue) == 0x000008, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Max_ReturnValue) == 0x00000C, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, K2Node_MakeArray_Array) == 0x000078, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Format_ReturnValue) == 0x000088, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Format_ReturnValue' has a wrong offset!");

struct RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x3];
	float                                         K2Node_Event_StartTimeLocalWorld;
	float                                         K2Node_Event_EndTimeLocalWorld;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_41[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          K2Node_Event_bSelf;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_53[0x5];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_FTrunc_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_69[0x7];
	double                                        K2Node_VariableSet_CurTime_ImplicitCast;
	double                                        K2Node_VariableSet_EndTime_ImplicitCast;
};
static_assert(alignof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator) == 0x000008, "Wrong alignment on RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator");
static_assert(sizeof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator) == 0x000080, "Wrong size on RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, EntryPoint) == 0x000000, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_byte_Variable) == 0x000004, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_real_Variable) == 0x000008, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_bool_Variable) == 0x000010, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_StartTimeLocalWorld) == 0x000014, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_StartTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_EndTimeLocalWorld) == 0x000018, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_EndTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_bSelf) == 0x000051, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_bSelf' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_byte_Variable_1) == 0x000052, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000058, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Select_Default) == 0x000060, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_FTrunc_ReturnValue) == 0x000064, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_VariableSet_CurTime_ImplicitCast) == 0x000070, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_VariableSet_CurTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_VariableSet_EndTime_ImplicitCast) == 0x000078, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_VariableSet_EndTime_ImplicitCast' has a wrong offset!");

struct RebootCardIndicator_C_HandleDisplayForSelf final
{
public:
	bool                                          bSelf;
};
static_assert(alignof(RebootCardIndicator_C_HandleDisplayForSelf) == 0x000001, "Wrong alignment on RebootCardIndicator_C_HandleDisplayForSelf");
static_assert(sizeof(RebootCardIndicator_C_HandleDisplayForSelf) == 0x000001, "Wrong size on RebootCardIndicator_C_HandleDisplayForSelf");
static_assert(offsetof(RebootCardIndicator_C_HandleDisplayForSelf, bSelf) == 0x000000, "Member 'RebootCardIndicator_C_HandleDisplayForSelf::bSelf' has a wrong offset!");

struct RebootCardIndicator_C_SetupCountdown final
{
public:
	float                                         StartTimeLocalWorld;
	float                                         EndTimeLocalWorld;
};
static_assert(alignof(RebootCardIndicator_C_SetupCountdown) == 0x000004, "Wrong alignment on RebootCardIndicator_C_SetupCountdown");
static_assert(sizeof(RebootCardIndicator_C_SetupCountdown) == 0x000008, "Wrong size on RebootCardIndicator_C_SetupCountdown");
static_assert(offsetof(RebootCardIndicator_C_SetupCountdown, StartTimeLocalWorld) == 0x000000, "Member 'RebootCardIndicator_C_SetupCountdown::StartTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_SetupCountdown, EndTimeLocalWorld) == 0x000004, "Member 'RebootCardIndicator_C_SetupCountdown::EndTimeLocalWorld' has a wrong offset!");

}
