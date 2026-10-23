#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct ItemUIFunctionLibrary_C_Convert_Tier_To_Integer final
{
public:
	EFortItemTier                                 Tier;
	uint8                                         Pad_1[0x7];
	class UObject*                                __WorldContext;
	int32                                         Numeric_Tier;
	EFortItemTier                                 Temp_byte_Variable;
	uint8                                         Pad_15[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	int32                                         Temp_int_Variable_6;
	int32                                         Temp_int_Variable_7;
	int32                                         Temp_int_Variable_8;
	int32                                         Temp_int_Variable_9;
	int32                                         Temp_int_Variable_10;
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer) == 0x000008, "Wrong alignment on ItemUIFunctionLibrary_C_Convert_Tier_To_Integer");
static_assert(sizeof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer) == 0x000048, "Wrong size on ItemUIFunctionLibrary_C_Convert_Tier_To_Integer");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Tier) == 0x000000, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Tier' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, __WorldContext) == 0x000008, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Numeric_Tier) == 0x000010, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Numeric_Tier' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_byte_Variable) == 0x000014, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable) == 0x000018, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_1) == 0x00001C, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_2) == 0x000020, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_3) == 0x000024, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_4) == 0x000028, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_5) == 0x00002C, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_6) == 0x000030, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_7) == 0x000034, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_8) == 0x000038, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_9) == 0x00003C, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, Temp_int_Variable_10) == 0x000040, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Convert_Tier_To_Integer, K2Node_Select_Default) == 0x000044, "Member 'ItemUIFunctionLibrary_C_Convert_Tier_To_Integer::K2Node_Select_Default' has a wrong offset!");

struct ItemUIFunctionLibrary_C_IsNullItem final
{
public:
	class UObject*                                ItemObject;
	class UObject*                                __WorldContext;
	bool                                          Is_Null_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;
};
static_assert(alignof(ItemUIFunctionLibrary_C_IsNullItem) == 0x000008, "Wrong alignment on ItemUIFunctionLibrary_C_IsNullItem");
static_assert(sizeof(ItemUIFunctionLibrary_C_IsNullItem) == 0x000028, "Wrong size on ItemUIFunctionLibrary_C_IsNullItem");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, ItemObject) == 0x000000, "Member 'ItemUIFunctionLibrary_C_IsNullItem::ItemObject' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, __WorldContext) == 0x000008, "Member 'ItemUIFunctionLibrary_C_IsNullItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, Is_Null_Item) == 0x000010, "Member 'ItemUIFunctionLibrary_C_IsNullItem::Is_Null_Item' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'ItemUIFunctionLibrary_C_IsNullItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'ItemUIFunctionLibrary_C_IsNullItem::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_IsNullItem, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000020, "Member 'ItemUIFunctionLibrary_C_IsNullItem::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

struct ItemUIFunctionLibrary_C_ParseLevelRequiredFromString final
{
public:
	class FString                                 InString;
	class UObject*                                __WorldContext;
	int32                                         OutInt;
	int32                                         CallFunc_FindSubstring_ReturnValue;
	int32                                         CallFunc_FindSubstring_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_34[0x4];
	class FString                                 CallFunc_GetSubstring_ReturnValue;
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;
};
static_assert(alignof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString) == 0x000008, "Wrong alignment on ItemUIFunctionLibrary_C_ParseLevelRequiredFromString");
static_assert(sizeof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString) == 0x000050, "Wrong size on ItemUIFunctionLibrary_C_ParseLevelRequiredFromString");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, InString) == 0x000000, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::InString' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, __WorldContext) == 0x000010, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, OutInt) == 0x000018, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::OutInt' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_FindSubstring_ReturnValue) == 0x00001C, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_FindSubstring_ReturnValue_1) == 0x000020, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_FindSubstring_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00002C, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_GetSubstring_ReturnValue) == 0x000038, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_ParseLevelRequiredFromString, CallFunc_Conv_StringToInt_ReturnValue) == 0x000048, "Member 'ItemUIFunctionLibrary_C_ParseLevelRequiredFromString::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");

struct ItemUIFunctionLibrary_C_Truncate_Integer_Value final
{
public:
	int32                                         Value;
	int32                                         Min_Fractional_Digits;
	int32                                         Max_Fractional_Digits;
	uint8                                         Pad_C[0x4];
	class UObject*                                __WorldContext;
	class FText                                   Formatted_Value;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_39[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_49[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_59[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
	class FText                                   Temp_text_Variable;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_83[0x5];
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_A1[0x7];
	class FText                                   Temp_text_Variable_2;
	double                                        K2Node_Select_Default;
	class FText                                   Temp_text_Variable_3;
	double                                        K2Node_Select_Default_1;
	double                                        K2Node_Select_Default_2;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_F1[0x7];
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class FText                                   K2Node_Select_Default_3;
	class FText                                   K2Node_Select_Default_4;
	class FText                                   K2Node_Select_Default_5;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	double                                        K2Node_Select_Option_0_ImplicitCast;
};
static_assert(alignof(ItemUIFunctionLibrary_C_Truncate_Integer_Value) == 0x000008, "Wrong alignment on ItemUIFunctionLibrary_C_Truncate_Integer_Value");
static_assert(sizeof(ItemUIFunctionLibrary_C_Truncate_Integer_Value) == 0x000240, "Wrong size on ItemUIFunctionLibrary_C_Truncate_Integer_Value");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Value) == 0x000000, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Value' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Min_Fractional_Digits) == 0x000004, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Min_Fractional_Digits' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Max_Fractional_Digits) == 0x000008, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Max_Fractional_Digits' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, __WorldContext) == 0x000010, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Formatted_Value) == 0x000018, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Formatted_Value' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable) == 0x000030, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000034, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00004C, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000058, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00005C, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_text_Variable) == 0x000060, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000078, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable_1) == 0x000080, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable_2) == 0x000081, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable_3) == 0x000082, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_text_Variable_1) == 0x000088, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable_4) == 0x0000A0, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_text_Variable_2) == 0x0000A8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default) == 0x0000C0, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_text_Variable_3) == 0x0000C8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default_1) == 0x0000E0, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default_2) == 0x0000E8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, Temp_bool_Variable_5) == 0x0000F0, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Conv_DoubleToText_ReturnValue) == 0x0000F8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_MakeStruct_FormatArgumentData) == 0x000110, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default_3) == 0x000160, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default_4) == 0x000178, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Default_5) == 0x000190, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001A8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_MakeArray_Array) == 0x0001F8, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Format_ReturnValue) == 0x000208, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000220, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000228, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000230, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(ItemUIFunctionLibrary_C_Truncate_Integer_Value, K2Node_Select_Option_0_ImplicitCast) == 0x000238, "Member 'ItemUIFunctionLibrary_C_Truncate_Integer_Value::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");

}
