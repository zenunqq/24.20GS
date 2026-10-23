#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UCommonRichTextBlock*                   K2Node_CustomEvent_RichText_GoalName;
	struct FLinearColor                           Temp_struct_Variable;
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_51[0x3];
	int32                                         K2Node_Event_Achieved;
	int32                                         K2Node_Event_Required;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_5E[0x2];
	struct FLinearColor                           K2Node_Select_Default;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	uint8                                         Pad_84[0x4];
	class UWidget*                                K2Node_Select_Default_1;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;
	uint8                                         Pad_A4[0x4];
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
};
static_assert(alignof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine) == 0x000008, "Wrong alignment on GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine");
static_assert(sizeof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine) == 0x0000C0, "Wrong size on GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, EntryPoint) == 0x000000, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, Temp_bool_Variable) == 0x000004, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00000C, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_CustomEvent_RichText_GoalName) == 0x000018, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_CustomEvent_RichText_GoalName' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, Temp_struct_Variable) == 0x000020, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_GetEndTime_ReturnValue) == 0x000030, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000034, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_LinearColorLerp_ReturnValue) == 0x000040, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_Event_Achieved) == 0x000054, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_Event_Achieved' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_Event_Required) == 0x000058, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_Event_Required' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, Temp_bool_Variable_1) == 0x00005D, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_Select_Default) == 0x000060, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, K2Node_Select_Default_1) == 0x000088, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000A0, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0000A8, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x0000B0, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x0000B8, "Member 'GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");

struct GoalsPageQuestCardLine_C_RichText_GoalName_Event final
{
public:
	class UCommonRichTextBlock*                   RichText_GoalName_0;
};
static_assert(alignof(GoalsPageQuestCardLine_C_RichText_GoalName_Event) == 0x000008, "Wrong alignment on GoalsPageQuestCardLine_C_RichText_GoalName_Event");
static_assert(sizeof(GoalsPageQuestCardLine_C_RichText_GoalName_Event) == 0x000008, "Wrong size on GoalsPageQuestCardLine_C_RichText_GoalName_Event");
static_assert(offsetof(GoalsPageQuestCardLine_C_RichText_GoalName_Event, RichText_GoalName_0) == 0x000000, "Member 'GoalsPageQuestCardLine_C_RichText_GoalName_Event::RichText_GoalName_0' has a wrong offset!");

struct GoalsPageQuestCardLine_C_SetIsSelectedState final
{
public:
	bool                                          IsSelected;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	bool                                          Temp_bool_Variable_3;
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_29[0x7];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_4;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_5;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_241[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class FText                                   CallFunc_Format_ReturnValue_2;
	struct FLinearColor                           Temp_struct_Variable_2;
	class FText                                   K2Node_Select_Default_1;
	class FText                                   K2Node_Select_Default_2;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_311[0x3];
	struct FLinearColor                           K2Node_Select_Default_3;
	struct FLinearColor                           K2Node_Select_Default_4;
	uint8                                         Pad_334[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(GoalsPageQuestCardLine_C_SetIsSelectedState) == 0x000008, "Wrong alignment on GoalsPageQuestCardLine_C_SetIsSelectedState");
static_assert(sizeof(GoalsPageQuestCardLine_C_SetIsSelectedState) == 0x000358, "Wrong size on GoalsPageQuestCardLine_C_SetIsSelectedState");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, IsSelected) == 0x000000, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::IsSelected' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_bool_Variable) == 0x000001, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_byte_Variable) == 0x000002, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_byte_Variable_1) == 0x000003, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_bool_Variable_1) == 0x000004, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_bool_Variable_2) == 0x000005, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_Select_Default) == 0x000006, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_bool_Variable_3) == 0x000007, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_struct_Variable) == 0x000008, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_struct_Variable_1) == 0x000018, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000088, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000090, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000E8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000138, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue_4) == 0x000140, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData_3) == 0x000148, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData_4) == 0x000198, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeArray_Array) == 0x0001E8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeArray_Array_1) == 0x0001F8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Format_ReturnValue) == 0x000208, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Format_ReturnValue_1) == 0x000220, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Conv_IntToInt64_ReturnValue_5) == 0x000238, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Conv_IntToInt64_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Less_IntInt_ReturnValue_1) == 0x000240, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_FormatArgumentData_5) == 0x000248, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_SelectColor_ReturnValue) == 0x000298, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeArray_Array_2) == 0x0002A8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_Format_ReturnValue_2) == 0x0002B8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_struct_Variable_2) == 0x0002D0, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_Select_Default_1) == 0x0002E0, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_Select_Default_2) == 0x0002F8, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, Temp_bool_Variable_4) == 0x000310, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_Select_Default_3) == 0x000314, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_Select_Default_4) == 0x000324, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, CallFunc_PlayAnimation_ReturnValue) == 0x000338, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetIsSelectedState, K2Node_MakeStruct_SlateColor) == 0x000340, "Member 'GoalsPageQuestCardLine_C_SetIsSelectedState::K2Node_MakeStruct_SlateColor' has a wrong offset!");

struct GoalsPageQuestCardLine_C_SetObjectiveProgress final
{
public:
	int32                                         Achieved_0;
	int32                                         Required_0;
};
static_assert(alignof(GoalsPageQuestCardLine_C_SetObjectiveProgress) == 0x000004, "Wrong alignment on GoalsPageQuestCardLine_C_SetObjectiveProgress");
static_assert(sizeof(GoalsPageQuestCardLine_C_SetObjectiveProgress) == 0x000008, "Wrong size on GoalsPageQuestCardLine_C_SetObjectiveProgress");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetObjectiveProgress, Achieved_0) == 0x000000, "Member 'GoalsPageQuestCardLine_C_SetObjectiveProgress::Achieved_0' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCardLine_C_SetObjectiveProgress, Required_0) == 0x000004, "Member 'GoalsPageQuestCardLine_C_SetObjectiveProgress::Required_0' has a wrong offset!");

}
