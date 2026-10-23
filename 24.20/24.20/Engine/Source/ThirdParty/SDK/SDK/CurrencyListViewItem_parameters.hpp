#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CurrencyListViewItem_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(CurrencyListViewItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on CurrencyListViewItem_C_BP_OnItemExpansionChanged");
static_assert(sizeof(CurrencyListViewItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on CurrencyListViewItem_C_BP_OnItemExpansionChanged");
static_assert(offsetof(CurrencyListViewItem_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'CurrencyListViewItem_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct CurrencyListViewItem_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(CurrencyListViewItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on CurrencyListViewItem_C_BP_OnItemSelectionChanged");
static_assert(sizeof(CurrencyListViewItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on CurrencyListViewItem_C_BP_OnItemSelectionChanged");
static_assert(offsetof(CurrencyListViewItem_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'CurrencyListViewItem_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsExpanded;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_6[0x2];
	class UObject*                                K2Node_Event_ListItemObject;
	class UCurrencyListObject_C*                  K2Node_DynamicCast_AsCurrency_List_Object;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;
	class FString                                 CallFunc_Replace_ReturnValue;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	uint8                                         Pad_51[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;
	bool                                          CallFunc_IsEmpty_ReturnValue_1;
	uint8                                         Pad_81[0x7];
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;
	class FString                                 CallFunc_Replace_ReturnValue_1;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_4;
	class FString                                 CallFunc_Replace_ReturnValue_2;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;
};
static_assert(alignof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem) == 0x000008, "Wrong alignment on CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem");
static_assert(sizeof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem) == 0x0000F8, "Wrong size on CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, EntryPoint) == 0x000000, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, K2Node_Event_bIsExpanded) == 0x000004, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, K2Node_Event_bIsSelected) == 0x000005, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, K2Node_Event_ListItemObject) == 0x000008, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, K2Node_DynamicCast_AsCurrency_List_Object) == 0x000010, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::K2Node_DynamicCast_AsCurrency_List_Object' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000030, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Replace_ReturnValue) == 0x000040, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_IsEmpty_ReturnValue) == 0x000050, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000070, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_IsEmpty_ReturnValue_1) == 0x000080, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_TextToString_ReturnValue_3) == 0x000088, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Replace_ReturnValue_1) == 0x000098, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_TextToString_ReturnValue_4) == 0x0000C0, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_TextToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Replace_ReturnValue_2) == 0x0000D0, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E0, "Member 'CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

struct CurrencyListViewItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(CurrencyListViewItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on CurrencyListViewItem_C_OnListItemObjectSet");
static_assert(sizeof(CurrencyListViewItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on CurrencyListViewItem_C_OnListItemObjectSet");
static_assert(offsetof(CurrencyListViewItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'CurrencyListViewItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

struct CurrencyListViewItem_C_SetQuantityAndType final
{
public:
	int32                                         inInt;
	uint8                                         Pad_4[0x4];
	class FText                                   To;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	class FText                                   CallFunc_GetText_ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;
	class FString                                 CallFunc_Replace_ReturnValue;
	class FString                                 CallFunc_Replace_ReturnValue_1;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
};
static_assert(alignof(CurrencyListViewItem_C_SetQuantityAndType) == 0x000008, "Wrong alignment on CurrencyListViewItem_C_SetQuantityAndType");
static_assert(sizeof(CurrencyListViewItem_C_SetQuantityAndType) == 0x0000A0, "Wrong size on CurrencyListViewItem_C_SetQuantityAndType");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, inInt) == 0x000000, "Member 'CurrencyListViewItem_C_SetQuantityAndType::inInt' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, To) == 0x000008, "Member 'CurrencyListViewItem_C_SetQuantityAndType::To' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000058, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Replace_ReturnValue) == 0x000068, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Replace_ReturnValue_1) == 0x000078, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CurrencyListViewItem_C_SetQuantityAndType, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'CurrencyListViewItem_C_SetQuantityAndType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
