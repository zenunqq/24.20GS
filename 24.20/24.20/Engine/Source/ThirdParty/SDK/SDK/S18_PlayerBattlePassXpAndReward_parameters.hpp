#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_33[0x5];
	struct FVector2D                              K2Node_Select_Default;
};
static_assert(alignof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward) == 0x000008, "Wrong alignment on S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward");
static_assert(sizeof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward) == 0x000048, "Wrong size on S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, EntryPoint) == 0x000000, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, Temp_struct_Variable) == 0x000008, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, Temp_struct_Variable_1) == 0x000018, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, CallFunc_IsMobileGame_ReturnValue) == 0x000030, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, Temp_bool_Variable) == 0x000031, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, CallFunc_IsMobileGame_ReturnValue_1) == 0x000032, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward, K2Node_Select_Default) == 0x000038, "Member 'S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward::K2Node_Select_Default' has a wrong offset!");

struct S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode final
{
public:
	bool                                          IsCollapsed;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode) == 0x000008, "Wrong alignment on S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode");
static_assert(sizeof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode) == 0x000010, "Wrong size on S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, IsCollapsed) == 0x000000, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::IsCollapsed' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, Temp_bool_Variable) == 0x000001, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, Temp_byte_Variable) == 0x000002, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, Temp_byte_Variable_1) == 0x000003, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, K2Node_Select_Default) == 0x000004, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct S18_PlayerBattlePassXpAndReward_C_Update_Text final
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
static_assert(alignof(S18_PlayerBattlePassXpAndReward_C_Update_Text) == 0x000008, "Wrong alignment on S18_PlayerBattlePassXpAndReward_C_Update_Text");
static_assert(sizeof(S18_PlayerBattlePassXpAndReward_C_Update_Text) == 0x000170, "Wrong size on S18_PlayerBattlePassXpAndReward_C_Update_Text");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000000, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000060, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeArray_Array) == 0x000068, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E0, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E8, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0000F0, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000F8, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, K2Node_MakeArray_Array_1) == 0x000148, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(S18_PlayerBattlePassXpAndReward_C_Update_Text, CallFunc_Format_ReturnValue_1) == 0x000158, "Member 'S18_PlayerBattlePassXpAndReward_C_Update_Text::CallFunc_Format_ReturnValue_1' has a wrong offset!");

}
