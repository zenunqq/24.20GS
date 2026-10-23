#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_7[0x1];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	class UGridPanel*                             K2Node_DynamicCast_AsGrid_Panel;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_49[0x7];
	class UWidget*                                CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class UBPS24_BattlePassPrerequisiteHeader_C*  K2Node_DynamicCast_AsBPS24_Battle_Pass_Prerequisite_Header;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack) == 0x000008, "Wrong alignment on BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack");
static_assert(sizeof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack) == 0x000070, "Wrong size on BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, EntryPoint) == 0x000000, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_byte_Variable) == 0x000004, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_byte_Variable_1) == 0x000005, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_bool_True_if_break_was_hit_Variable) == 0x000006, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, Temp_bool_Variable) == 0x000020, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, K2Node_DynamicCast_AsGrid_Panel) == 0x000028, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::K2Node_DynamicCast_AsGrid_Panel' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_GetAllChildren_ReturnValue) == 0x000038, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, K2Node_Select_Default) == 0x000048, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_Array_Get_Item) == 0x000050, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, K2Node_DynamicCast_AsBPS24_Battle_Pass_Prerequisite_Header) == 0x000060, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::K2Node_DynamicCast_AsBPS24_Battle_Pass_Prerequisite_Header' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'BPS24_BattlePassRewardTrack_C_ExecuteUbergraph_BPS24_BattlePassRewardTrack::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
