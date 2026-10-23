#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_bIsRested;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar) == 0x000008, "Wrong alignment on BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar");
static_assert(sizeof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar) == 0x000030, "Wrong size on BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, EntryPoint) == 0x000000, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, Temp_bool_Variable) == 0x000004, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, Temp_byte_Variable) == 0x000005, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, Temp_byte_Variable_1) == 0x000006, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, K2Node_Event_bIsRested) == 0x000007, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::K2Node_Event_bIsRested' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, K2Node_Select_Default) == 0x000010, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000020, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000028, "Member 'BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct BladesMenu_XpBar_C_OnUpdatedRestedState final
{
public:
	bool                                          bIsRested;
};
static_assert(alignof(BladesMenu_XpBar_C_OnUpdatedRestedState) == 0x000001, "Wrong alignment on BladesMenu_XpBar_C_OnUpdatedRestedState");
static_assert(sizeof(BladesMenu_XpBar_C_OnUpdatedRestedState) == 0x000001, "Wrong size on BladesMenu_XpBar_C_OnUpdatedRestedState");
static_assert(offsetof(BladesMenu_XpBar_C_OnUpdatedRestedState, bIsRested) == 0x000000, "Member 'BladesMenu_XpBar_C_OnUpdatedRestedState::bIsRested' has a wrong offset!");

struct BladesMenu_XpBar_C_Update_Text final
{
public:
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_EC[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
};
static_assert(alignof(BladesMenu_XpBar_C_Update_Text) == 0x000008, "Wrong alignment on BladesMenu_XpBar_C_Update_Text");
static_assert(sizeof(BladesMenu_XpBar_C_Update_Text) == 0x000170, "Wrong size on BladesMenu_XpBar_C_Update_Text");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000000, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'BladesMenu_XpBar_C_Update_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000060, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, K2Node_MakeArray_Array) == 0x000068, "Member 'BladesMenu_XpBar_C_Update_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'BladesMenu_XpBar_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E0, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E8, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0000F0, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000F8, "Member 'BladesMenu_XpBar_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, K2Node_MakeArray_Array_1) == 0x000148, "Member 'BladesMenu_XpBar_C_Update_Text::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BladesMenu_XpBar_C_Update_Text, CallFunc_Format_ReturnValue_1) == 0x000158, "Member 'BladesMenu_XpBar_C_Update_Text::CallFunc_Format_ReturnValue_1' has a wrong offset!");

}
