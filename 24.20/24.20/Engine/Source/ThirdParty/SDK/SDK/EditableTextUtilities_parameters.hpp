#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EditableTextUtilities_C_CheckIfNeedsTrimming final
{
public:
	class FText                                   Text;
	int32                                         Limit;
	uint8                                         Pad_1C[0x4];
	class UObject*                                __WorldContext;
	class FText                                   TrimmedText;
	bool                                          WasTrimmed;
	uint8                                         Pad_41[0x7];
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	int32                                         CallFunc_Len_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class FString                                 CallFunc_Left_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_71[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
};
static_assert(alignof(EditableTextUtilities_C_CheckIfNeedsTrimming) == 0x000008, "Wrong alignment on EditableTextUtilities_C_CheckIfNeedsTrimming");
static_assert(sizeof(EditableTextUtilities_C_CheckIfNeedsTrimming) == 0x000090, "Wrong size on EditableTextUtilities_C_CheckIfNeedsTrimming");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, Text) == 0x000000, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::Text' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, Limit) == 0x000018, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::Limit' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, __WorldContext) == 0x000020, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::__WorldContext' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, TrimmedText) == 0x000028, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::TrimmedText' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, WasTrimmed) == 0x000040, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::WasTrimmed' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, CallFunc_Len_ReturnValue) == 0x000058, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, CallFunc_Left_ReturnValue) == 0x000060, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, CallFunc_Greater_IntInt_ReturnValue) == 0x000070, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_CheckIfNeedsTrimming, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'EditableTextUtilities_C_CheckIfNeedsTrimming::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

struct EditableTextUtilities_C_LimitTextLength final
{
public:
	class UWidget*                                EditableTextWidget;
	int32                                         Length;
	uint8                                         Pad_C[0x4];
	class UObject*                                __WorldContext;
	bool                                          WasTrimmed;
	uint8                                         Pad_19[0x7];
	class UEditableText*                          K2Node_DynamicCast_AsEditable_Text;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class UEditableTextBox*                       K2Node_DynamicCast_AsText_Box;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_39[0x7];
	class FText                                   CallFunc_GetText_ReturnValue;
	class FText                                   CallFunc_GetText_ReturnValue_1;
	class FText                                   CallFunc_CheckIfNeedsTrimming_TrimmedText;
	bool                                          CallFunc_CheckIfNeedsTrimming_WasTrimmed;
	uint8                                         Pad_89[0x7];
	class FText                                   CallFunc_CheckIfNeedsTrimming_TrimmedText_1;
	bool                                          CallFunc_CheckIfNeedsTrimming_WasTrimmed_1;
};
static_assert(alignof(EditableTextUtilities_C_LimitTextLength) == 0x000008, "Wrong alignment on EditableTextUtilities_C_LimitTextLength");
static_assert(sizeof(EditableTextUtilities_C_LimitTextLength) == 0x0000B0, "Wrong size on EditableTextUtilities_C_LimitTextLength");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, EditableTextWidget) == 0x000000, "Member 'EditableTextUtilities_C_LimitTextLength::EditableTextWidget' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, Length) == 0x000008, "Member 'EditableTextUtilities_C_LimitTextLength::Length' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, __WorldContext) == 0x000010, "Member 'EditableTextUtilities_C_LimitTextLength::__WorldContext' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, WasTrimmed) == 0x000018, "Member 'EditableTextUtilities_C_LimitTextLength::WasTrimmed' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, K2Node_DynamicCast_AsEditable_Text) == 0x000020, "Member 'EditableTextUtilities_C_LimitTextLength::K2Node_DynamicCast_AsEditable_Text' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EditableTextUtilities_C_LimitTextLength::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, K2Node_DynamicCast_AsText_Box) == 0x000030, "Member 'EditableTextUtilities_C_LimitTextLength::K2Node_DynamicCast_AsText_Box' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'EditableTextUtilities_C_LimitTextLength::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_GetText_ReturnValue) == 0x000040, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_GetText_ReturnValue_1) == 0x000058, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_CheckIfNeedsTrimming_TrimmedText) == 0x000070, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_CheckIfNeedsTrimming_TrimmedText' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_CheckIfNeedsTrimming_WasTrimmed) == 0x000088, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_CheckIfNeedsTrimming_WasTrimmed' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_CheckIfNeedsTrimming_TrimmedText_1) == 0x000090, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_CheckIfNeedsTrimming_TrimmedText_1' has a wrong offset!");
static_assert(offsetof(EditableTextUtilities_C_LimitTextLength, CallFunc_CheckIfNeedsTrimming_WasTrimmed_1) == 0x0000A8, "Member 'EditableTextUtilities_C_LimitTextLength::CallFunc_CheckIfNeedsTrimming_WasTrimmed_1' has a wrong offset!");

}
