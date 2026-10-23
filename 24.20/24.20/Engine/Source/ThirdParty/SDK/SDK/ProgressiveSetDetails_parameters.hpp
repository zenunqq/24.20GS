#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ProgressiveSetDetails_C_Update_Tag final
{
public:
	class FText                                   Expiring_Text;
	bool                                          Completed;
	uint8                                         Pad_19[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_56[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_69[0x3];
	struct FSlateColor                            K2Node_Select_Default_1;
};
static_assert(alignof(ProgressiveSetDetails_C_Update_Tag) == 0x000008, "Wrong alignment on ProgressiveSetDetails_C_Update_Tag");
static_assert(sizeof(ProgressiveSetDetails_C_Update_Tag) == 0x000080, "Wrong size on ProgressiveSetDetails_C_Update_Tag");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Expiring_Text) == 0x000000, "Member 'ProgressiveSetDetails_C_Update_Tag::Expiring_Text' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Completed) == 0x000018, "Member 'ProgressiveSetDetails_C_Update_Tag::Completed' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, K2Node_MakeArray_Array) == 0x000020, "Member 'ProgressiveSetDetails_C_Update_Tag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Temp_bool_Variable) == 0x000030, "Member 'ProgressiveSetDetails_C_Update_Tag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, CallFunc_Format_ReturnValue) == 0x000038, "Member 'ProgressiveSetDetails_C_Update_Tag::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Temp_byte_Variable) == 0x000050, "Member 'ProgressiveSetDetails_C_Update_Tag::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Temp_byte_Variable_1) == 0x000051, "Member 'ProgressiveSetDetails_C_Update_Tag::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, CallFunc_TextIsEmpty_ReturnValue) == 0x000052, "Member 'ProgressiveSetDetails_C_Update_Tag::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, CallFunc_Not_PreBool_ReturnValue) == 0x000053, "Member 'ProgressiveSetDetails_C_Update_Tag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, CallFunc_BooleanAND_ReturnValue) == 0x000054, "Member 'ProgressiveSetDetails_C_Update_Tag::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, K2Node_Select_Default) == 0x000055, "Member 'ProgressiveSetDetails_C_Update_Tag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, CallFunc_SelectColor_ReturnValue) == 0x000058, "Member 'ProgressiveSetDetails_C_Update_Tag::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, Temp_bool_Variable_1) == 0x000068, "Member 'ProgressiveSetDetails_C_Update_Tag::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_Update_Tag, K2Node_Select_Default_1) == 0x00006C, "Member 'ProgressiveSetDetails_C_Update_Tag::K2Node_Select_Default_1' has a wrong offset!");

struct ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	class FText                                   K2Node_Event_SetName;
	class FText                                   K2Node_Event_ExpiringText;
	bool                                          K2Node_Event_bCompleted;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails) == 0x000008, "Wrong alignment on ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails");
static_assert(sizeof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails) == 0x000040, "Wrong size on ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, EntryPoint) == 0x000000, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, Temp_bool_Variable) == 0x000004, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, Temp_byte_Variable) == 0x000005, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, Temp_byte_Variable_1) == 0x000006, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, K2Node_Event_SetName) == 0x000008, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::K2Node_Event_SetName' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, K2Node_Event_ExpiringText) == 0x000020, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::K2Node_Event_ExpiringText' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, K2Node_Event_bCompleted) == 0x000038, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::K2Node_Event_bCompleted' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails, K2Node_Select_Default) == 0x000039, "Member 'ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveSetDetails_C_BP_OnUpdateSetDetails final
{
public:
	class FText                                   SetName;
	class FText                                   ExpiringText;
	bool                                          bCompleted;
};
static_assert(alignof(ProgressiveSetDetails_C_BP_OnUpdateSetDetails) == 0x000008, "Wrong alignment on ProgressiveSetDetails_C_BP_OnUpdateSetDetails");
static_assert(sizeof(ProgressiveSetDetails_C_BP_OnUpdateSetDetails) == 0x000038, "Wrong size on ProgressiveSetDetails_C_BP_OnUpdateSetDetails");
static_assert(offsetof(ProgressiveSetDetails_C_BP_OnUpdateSetDetails, SetName) == 0x000000, "Member 'ProgressiveSetDetails_C_BP_OnUpdateSetDetails::SetName' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_BP_OnUpdateSetDetails, ExpiringText) == 0x000018, "Member 'ProgressiveSetDetails_C_BP_OnUpdateSetDetails::ExpiringText' has a wrong offset!");
static_assert(offsetof(ProgressiveSetDetails_C_BP_OnUpdateSetDetails, bCompleted) == 0x000030, "Member 'ProgressiveSetDetails_C_BP_OnUpdateSetDetails::bCompleted' has a wrong offset!");

}
