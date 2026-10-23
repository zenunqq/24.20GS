#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct WB_AudioAnalysis_UI_C_AddScalarParameter final
{
public:
	struct FAudioAnalysisParameterScalar          Param;
};
static_assert(alignof(WB_AudioAnalysis_UI_C_AddScalarParameter) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_AddScalarParameter");
static_assert(sizeof(WB_AudioAnalysis_UI_C_AddScalarParameter) == 0x0000B0, "Wrong size on WB_AudioAnalysis_UI_C_AddScalarParameter");
static_assert(offsetof(WB_AudioAnalysis_UI_C_AddScalarParameter, Param) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_AddScalarParameter::Param' has a wrong offset!");

struct WB_AudioAnalysis_UI_C_AddVectorParameter final
{
public:
	struct FAudioAnalysisParameterVector          Param;
};
static_assert(alignof(WB_AudioAnalysis_UI_C_AddVectorParameter) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_AddVectorParameter");
static_assert(sizeof(WB_AudioAnalysis_UI_C_AddVectorParameter) == 0x0000C0, "Wrong size on WB_AudioAnalysis_UI_C_AddVectorParameter");
static_assert(offsetof(WB_AudioAnalysis_UI_C_AddVectorParameter, Param) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_AddVectorParameter::Param' has a wrong offset!");

struct WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_1C[0x4];
	struct FAudioAnalysisParameterScalar          K2Node_Event_Param_1;
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_DC[0x4];
	struct FAudioAnalysisParameterVector          K2Node_Event_Param;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1A1[0x7];
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Create_ReturnValue;
	class UWB_AudioAnalysis_FloatGraph_C*         CallFunc_Create_ReturnValue_1;
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;
};
static_assert(alignof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI) == 0x000010, "Wrong alignment on WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI");
static_assert(sizeof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI) == 0x0001D0, "Wrong size on WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, EntryPoint) == 0x000000, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, Temp_int_Variable) == 0x000010, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, K2Node_Event_Param_1) == 0x000020, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::K2Node_Event_Param_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, K2Node_Event_Param) == 0x0000E0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::K2Node_Event_Param' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Create_ReturnValue) == 0x0001A8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Create_ReturnValue_1) == 0x0001B0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0001B8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Add_ReturnValue) == 0x0001C0, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_Array_Add_ReturnValue_1) == 0x0001C4, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x0001C8, "Member 'WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");

}
