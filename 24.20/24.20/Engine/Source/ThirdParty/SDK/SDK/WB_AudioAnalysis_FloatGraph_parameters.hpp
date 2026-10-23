#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct WB_AudioAnalysis_FloatGraph_C_calcWidgetSize final
{
public:
	struct FGeometry                              geom;
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_calcWidgetSize");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize) == 0x000080, "Wrong size on WB_AudioAnalysis_FloatGraph_C_calcWidgetSize");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, geom) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::geom' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_GetLocalSize_ReturnValue) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_BreakVector2D_X) == 0x000050, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_BreakVector2D_Y) == 0x000058, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_calcWidgetSize, CallFunc_MakeVector2D_ReturnValue) == 0x000070, "Member 'WB_AudioAnalysis_FloatGraph_C_calcWidgetSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_5[0x3];
	class FName                                   K2Node_CustomEvent_Parameter;
	uint8                                         Pad_C[0x4];
	class UMaterialParameterCollection*           K2Node_CustomEvent_Collection;
	int32                                         K2Node_CustomEvent_VectorIndex;
	uint8                                         Pad_1C[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;
	float                                         CallFunc_BreakColor_R;
	float                                         CallFunc_BreakColor_G;
	float                                         CallFunc_BreakColor_B;
	float                                         CallFunc_BreakColor_A;
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_A4[0x4];
	double                                        K2Node_Select_Default;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_B1[0x7];
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_D1[0x7];
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	class FString                                 CallFunc_SelectString_ReturnValue;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;
	double                                        CallFunc_Set_Value_value_ImplicitCast;
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        K2Node_Select_Option_1_ImplicitCast;
	double                                        K2Node_Select_Option_2_ImplicitCast;
	double                                        K2Node_Select_Option_3_ImplicitCast;
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph) == 0x000168, "Wrong size on WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, EntryPoint) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_Parameter) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_Parameter' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_Collection) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_Collection' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_CustomEvent_VectorIndex) == 0x000018, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_CustomEvent_VectorIndex' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_MyGeometry) == 0x000020, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000064, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000068, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_R) == 0x000078, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_G) == 0x00007C, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_B) == 0x000080, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_BreakColor_A) == 0x000084, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000088, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, Temp_int_Variable) == 0x0000A0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Default) == 0x0000A8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Event_IsDesignTime) == 0x0000B0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x0000B8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_SelectString_ReturnValue) == 0x0000E8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_NameToString_ReturnValue) == 0x0000F8, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Concat_StrStr_ReturnValue) == 0x000108, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_StringToText_ReturnValue) == 0x000118, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x000130, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_Set_Value_value_ImplicitCast) == 0x000138, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_Set_Value_value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Option_0_ImplicitCast) == 0x000140, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Option_1_ImplicitCast) == 0x000148, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Option_2_ImplicitCast) == 0x000150, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Option_2_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, K2Node_Select_Option_3_ImplicitCast) == 0x000158, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::K2Node_Select_Option_3_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000160, "Member 'WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_Initialize_MPC final
{
public:
	class FName                                   Parameter_0;
	uint8                                         Pad_4[0x4];
	class UMaterialParameterCollection*           Collection_0;
	int32                                         VectorIndex_0;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Initialize_MPC");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC) == 0x000018, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Initialize_MPC");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, Parameter_0) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::Parameter_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, Collection_0) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::Collection_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Initialize_MPC, VectorIndex_0) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_Initialize_MPC::VectorIndex_0' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_PreConstruct) == 0x000001, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_PreConstruct");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_PreConstruct) == 0x000001, "Wrong size on WB_AudioAnalysis_FloatGraph_C_PreConstruct");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_Set_Value final
{
public:
	double                                        Value_0;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	double                                        CallFunc_BreakVector2D_X_1;
	double                                        CallFunc_BreakVector2D_Y_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_5C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	struct FVector2D                              CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_94[0x4];
	double                                        CallFunc_BreakVector2D_X_2;
	double                                        CallFunc_BreakVector2D_Y_2;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_C1[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_E9[0x7];
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Set_Value) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Set_Value");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Set_Value) == 0x000108, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Set_Value");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Value_0) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Value_0' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X) == 0x000020, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X_1) == 0x000030, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y_1) == 0x000038, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue) == 0x000048, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000058, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000068, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000070, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Get_Item) == 0x000080, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Add_ReturnValue) == 0x000090, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_X_2) == 0x000098, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_BreakVector2D_Y_2) == 0x0000A0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000A8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000BC, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000D0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Array_Add_ReturnValue_1) == 0x0000E4, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000F0, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0000F8, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Set_Value, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000100, "Member 'WB_AudioAnalysis_FloatGraph_C_Set_Value::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_Tick) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_Tick");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_Tick) == 0x000048, "Wrong size on WB_AudioAnalysis_FloatGraph_C_Tick");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Tick, MyGeometry) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_Tick, InDeltaTime) == 0x000040, "Member 'WB_AudioAnalysis_FloatGraph_C_Tick::InDeltaTime' has a wrong offset!");

struct WB_AudioAnalysis_FloatGraph_C_OnPaint final
{
public:
	struct FPaintContext                          Context;
};
static_assert(alignof(WB_AudioAnalysis_FloatGraph_C_OnPaint) == 0x000008, "Wrong alignment on WB_AudioAnalysis_FloatGraph_C_OnPaint");
static_assert(sizeof(WB_AudioAnalysis_FloatGraph_C_OnPaint) == 0x000030, "Wrong size on WB_AudioAnalysis_FloatGraph_C_OnPaint");
static_assert(offsetof(WB_AudioAnalysis_FloatGraph_C_OnPaint, Context) == 0x000000, "Member 'WB_AudioAnalysis_FloatGraph_C_OnPaint::Context' has a wrong offset!");

}
