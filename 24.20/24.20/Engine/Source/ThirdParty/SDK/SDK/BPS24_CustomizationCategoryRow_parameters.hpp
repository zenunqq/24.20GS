#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_24[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	int32                                         Temp_int_Variable_1;
	int32                                         K2Node_Event_CurrentlyOwnedRewards;
	int32                                         K2Node_Event_TotalRewards;
	float                                         K2Node_Event_CategoryProgress;
	int32                                         K2Node_Event_CurrentlyOwnedBeforeCategory;
	int32                                         K2Node_Event_TotalRewardsBeforeCategory;
	float                                         K2Node_Event_LockedProgress;
	uint8                                         Pad_4C[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_5C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_1B9[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_4;
	bool                                          K2Node_Event_bCategoryLocked;
	uint8                                         Pad_219[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class FText                                   CallFunc_Format_ReturnValue_2;
	class FText                                   K2Node_Select_Default;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_2BA[0x2];
	int32                                         K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow) == 0x000008, "Wrong alignment on BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow");
static_assert(sizeof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow) == 0x0002C8, "Wrong size on BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, EntryPoint) == 0x000000, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_bool_Variable) == 0x000004, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_int_Variable) == 0x000020, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_int_Variable_1) == 0x000030, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_CurrentlyOwnedRewards) == 0x000034, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_CurrentlyOwnedRewards' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_TotalRewards) == 0x000038, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_TotalRewards' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_CategoryProgress) == 0x00003C, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_CategoryProgress' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_CurrentlyOwnedBeforeCategory) == 0x000040, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_CurrentlyOwnedBeforeCategory' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_TotalRewardsBeforeCategory) == 0x000044, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_TotalRewardsBeforeCategory' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_LockedProgress) == 0x000048, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_LockedProgress' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000050, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000B0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0000B8, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeStruct_FormatArgumentData_2) == 0x000110, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeArray_Array) == 0x000160, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeArray_Array_1) == 0x000170, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Format_ReturnValue) == 0x000180, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Format_ReturnValue_1) == 0x000198, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x0001B0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001C0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Conv_IntToInt64_ReturnValue_4) == 0x000210, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Conv_IntToInt64_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Event_bCategoryLocked) == 0x000218, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Event_bCategoryLocked' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeStruct_FormatArgumentData_4) == 0x000220, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_MakeArray_Array_2) == 0x000270, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_Format_ReturnValue_2) == 0x000280, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Select_Default) == 0x000298, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0002B0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_bool_Variable_1) == 0x0002B8, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_byte_Variable) == 0x0002B9, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Select_Default_1) == 0x0002BC, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_byte_Variable_1) == 0x0002C0, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, Temp_bool_Variable_2) == 0x0002C1, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow, K2Node_Select_Default_2) == 0x0002C2, "Member 'BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow::K2Node_Select_Default_2' has a wrong offset!");

struct BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated final
{
public:
	int32                                         CurrentlyOwnedBeforeCategory;
	int32                                         TotalRewardsBeforeCategory;
	float                                         LockedProgress;
};
static_assert(alignof(BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated) == 0x000004, "Wrong alignment on BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated");
static_assert(sizeof(BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated) == 0x00000C, "Wrong size on BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated, CurrentlyOwnedBeforeCategory) == 0x000000, "Member 'BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated::CurrentlyOwnedBeforeCategory' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated, TotalRewardsBeforeCategory) == 0x000004, "Member 'BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated::TotalRewardsBeforeCategory' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated, LockedProgress) == 0x000008, "Member 'BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated::LockedProgress' has a wrong offset!");

struct BPS24_CustomizationCategoryRow_C_OnLockedStateChanged final
{
public:
	bool                                          bCategoryLocked;
};
static_assert(alignof(BPS24_CustomizationCategoryRow_C_OnLockedStateChanged) == 0x000001, "Wrong alignment on BPS24_CustomizationCategoryRow_C_OnLockedStateChanged");
static_assert(sizeof(BPS24_CustomizationCategoryRow_C_OnLockedStateChanged) == 0x000001, "Wrong size on BPS24_CustomizationCategoryRow_C_OnLockedStateChanged");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnLockedStateChanged, bCategoryLocked) == 0x000000, "Member 'BPS24_CustomizationCategoryRow_C_OnLockedStateChanged::bCategoryLocked' has a wrong offset!");

struct BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated final
{
public:
	int32                                         CurrentlyOwnedRewards;
	int32                                         TotalRewards;
	float                                         CategoryProgress;
};
static_assert(alignof(BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated) == 0x000004, "Wrong alignment on BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated");
static_assert(sizeof(BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated) == 0x00000C, "Wrong size on BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated, CurrentlyOwnedRewards) == 0x000000, "Member 'BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated::CurrentlyOwnedRewards' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated, TotalRewards) == 0x000004, "Member 'BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated::TotalRewards' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated, CategoryProgress) == 0x000008, "Member 'BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated::CategoryProgress' has a wrong offset!");

}
