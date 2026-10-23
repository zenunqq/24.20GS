#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward) == 0x000008, "Wrong alignment on S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward");
static_assert(sizeof(S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward) == 0x000010, "Wrong size on S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward, EntryPoint) == 0x000000, "Member 'S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct S17_PlayerBattlePassXpAndReward_C_Update_Text final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_3[0x5];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_F1[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_F9[0x7];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
};
static_assert(alignof(S17_PlayerBattlePassXpAndReward_C_Update_Text) == 0x000008, "Wrong alignment on S17_PlayerBattlePassXpAndReward_C_Update_Text");
static_assert(sizeof(S17_PlayerBattlePassXpAndReward_C_Update_Text) == 0x000180, "Wrong size on S17_PlayerBattlePassXpAndReward_C_Update_Text");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, Temp_bool_Variable) == 0x000000, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, Temp_byte_Variable) == 0x000001, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, Temp_byte_Variable_1) == 0x000002, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000068, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeArray_Array) == 0x000070, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E8, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Greater_IntInt_ReturnValue) == 0x0000F0, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000F4, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_Select_Default) == 0x0000F8, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000100, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_2) == 0x000108, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeArray_Array_1) == 0x000158, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(S17_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Format_ReturnValue_1) == 0x000168, "Member 'S17_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Format_ReturnValue_1' has a wrong offset!");

}
