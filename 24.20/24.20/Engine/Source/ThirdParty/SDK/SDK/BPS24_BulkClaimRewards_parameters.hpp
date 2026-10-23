#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_41[0x3];
	int32                                         K2Node_Event_FromPage;
	int32                                         K2Node_Event_ToPage;
	uint8                                         Pad_4C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	int32                                         K2Node_Event_Count;
	int32                                         K2Node_Event_Cost;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_6C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_E4[0x4];
	class FText                                   CallFunc_Format_ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_111[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   K2Node_Select_Default;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   K2Node_Select_Default_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1;
};
static_assert(alignof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards) == 0x000008, "Wrong alignment on BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards");
static_assert(sizeof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards) == 0x000270, "Wrong size on BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, EntryPoint) == 0x000000, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, Temp_bool_Variable) == 0x000005, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, Temp_text_Variable) == 0x000010, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, Temp_text_Variable_1) == 0x000028, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, Temp_bool_Variable_1) == 0x000040, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Event_FromPage) == 0x000044, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Event_FromPage' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Event_ToPage) == 0x000048, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Event_ToPage' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Event_Count) == 0x000058, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Event_Cost) == 0x00005C, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Event_Cost' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000060, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C0, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_MakeArray_Array) == 0x0000D0, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E0, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000100, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000110, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Concat_StrStr_ReturnValue) == 0x000118, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000128, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Select_Default) == 0x000150, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Conv_IntToText_ReturnValue) == 0x000168, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_MakeStruct_FormatArgumentData_1) == 0x000180, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_Select_Default_1) == 0x0001D0, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001E8, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, K2Node_MakeArray_Array_1) == 0x000238, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_Format_ReturnValue_1) == 0x000248, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000260, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000264, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1) == 0x000268, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1) == 0x00026C, "Member 'BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1' has a wrong offset!");

struct BPS24_BulkClaimRewards_C_OnCostChanged final
{
public:
	int32                                         Cost;
};
static_assert(alignof(BPS24_BulkClaimRewards_C_OnCostChanged) == 0x000004, "Wrong alignment on BPS24_BulkClaimRewards_C_OnCostChanged");
static_assert(sizeof(BPS24_BulkClaimRewards_C_OnCostChanged) == 0x000004, "Wrong size on BPS24_BulkClaimRewards_C_OnCostChanged");
static_assert(offsetof(BPS24_BulkClaimRewards_C_OnCostChanged, Cost) == 0x000000, "Member 'BPS24_BulkClaimRewards_C_OnCostChanged::Cost' has a wrong offset!");

struct BPS24_BulkClaimRewards_C_OnPageRangeChanged final
{
public:
	int32                                         FromPage;
	int32                                         ToPage;
};
static_assert(alignof(BPS24_BulkClaimRewards_C_OnPageRangeChanged) == 0x000004, "Wrong alignment on BPS24_BulkClaimRewards_C_OnPageRangeChanged");
static_assert(sizeof(BPS24_BulkClaimRewards_C_OnPageRangeChanged) == 0x000008, "Wrong size on BPS24_BulkClaimRewards_C_OnPageRangeChanged");
static_assert(offsetof(BPS24_BulkClaimRewards_C_OnPageRangeChanged, FromPage) == 0x000000, "Member 'BPS24_BulkClaimRewards_C_OnPageRangeChanged::FromPage' has a wrong offset!");
static_assert(offsetof(BPS24_BulkClaimRewards_C_OnPageRangeChanged, ToPage) == 0x000004, "Member 'BPS24_BulkClaimRewards_C_OnPageRangeChanged::ToPage' has a wrong offset!");

struct BPS24_BulkClaimRewards_C_OnRewardCountChanged final
{
public:
	int32                                         Count;
};
static_assert(alignof(BPS24_BulkClaimRewards_C_OnRewardCountChanged) == 0x000004, "Wrong alignment on BPS24_BulkClaimRewards_C_OnRewardCountChanged");
static_assert(sizeof(BPS24_BulkClaimRewards_C_OnRewardCountChanged) == 0x000004, "Wrong size on BPS24_BulkClaimRewards_C_OnRewardCountChanged");
static_assert(offsetof(BPS24_BulkClaimRewards_C_OnRewardCountChanged, Count) == 0x000000, "Member 'BPS24_BulkClaimRewards_C_OnRewardCountChanged::Count' has a wrong offset!");

}
