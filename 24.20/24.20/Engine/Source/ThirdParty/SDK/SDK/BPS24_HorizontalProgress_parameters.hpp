#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_6[0x2];
	int32                                         K2Node_CustomEvent_Current;
	int32                                         K2Node_CustomEvent_Needed;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_19[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	class FText                                   K2Node_CustomEvent_InText;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_109[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress) == 0x000008, "Wrong alignment on BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress");
static_assert(sizeof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress) == 0x000130, "Wrong size on BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, EntryPoint) == 0x000000, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, Temp_bool_Variable) == 0x000004, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_Event_IsDesignTime) == 0x000005, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_CustomEvent_Current) == 0x000008, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_CustomEvent_Current' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_CustomEvent_Needed) == 0x00000C, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_CustomEvent_Needed' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000070, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_CustomEvent_InText) == 0x000078, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_MakeArray_Array) == 0x0000E0, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_Not_PreBool_ReturnValue) == 0x000108, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000110, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000118, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress, K2Node_Select_Default) == 0x000120, "Member 'BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress::K2Node_Select_Default' has a wrong offset!");

struct BPS24_HorizontalProgress_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BPS24_HorizontalProgress_C_PreConstruct) == 0x000001, "Wrong alignment on BPS24_HorizontalProgress_C_PreConstruct");
static_assert(sizeof(BPS24_HorizontalProgress_C_PreConstruct) == 0x000001, "Wrong size on BPS24_HorizontalProgress_C_PreConstruct");
static_assert(offsetof(BPS24_HorizontalProgress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPS24_HorizontalProgress_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BPS24_HorizontalProgress_C_UpdateBarProgress final
{
public:
	int32                                         Owned;
	int32                                         Needed;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	uint8                                         Pad_14[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(BPS24_HorizontalProgress_C_UpdateBarProgress) == 0x000008, "Wrong alignment on BPS24_HorizontalProgress_C_UpdateBarProgress");
static_assert(sizeof(BPS24_HorizontalProgress_C_UpdateBarProgress) == 0x000048, "Wrong size on BPS24_HorizontalProgress_C_UpdateBarProgress");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, Owned) == 0x000000, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::Owned' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, Needed) == 0x000004, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::Needed' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000010, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000028, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateBarProgress, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000040, "Member 'BPS24_HorizontalProgress_C_UpdateBarProgress::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct BPS24_HorizontalProgress_C_UpdateProgress final
{
public:
	int32                                         Current;
	int32                                         Needed;
};
static_assert(alignof(BPS24_HorizontalProgress_C_UpdateProgress) == 0x000004, "Wrong alignment on BPS24_HorizontalProgress_C_UpdateProgress");
static_assert(sizeof(BPS24_HorizontalProgress_C_UpdateProgress) == 0x000008, "Wrong size on BPS24_HorizontalProgress_C_UpdateProgress");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateProgress, Current) == 0x000000, "Member 'BPS24_HorizontalProgress_C_UpdateProgress::Current' has a wrong offset!");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateProgress, Needed) == 0x000004, "Member 'BPS24_HorizontalProgress_C_UpdateProgress::Needed' has a wrong offset!");

struct BPS24_HorizontalProgress_C_UpdateText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(BPS24_HorizontalProgress_C_UpdateText) == 0x000008, "Wrong alignment on BPS24_HorizontalProgress_C_UpdateText");
static_assert(sizeof(BPS24_HorizontalProgress_C_UpdateText) == 0x000018, "Wrong size on BPS24_HorizontalProgress_C_UpdateText");
static_assert(offsetof(BPS24_HorizontalProgress_C_UpdateText, InText) == 0x000000, "Member 'BPS24_HorizontalProgress_C_UpdateText::InText' has a wrong offset!");

}
