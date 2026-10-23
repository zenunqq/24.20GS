#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget final
{
public:
	int32                                         EntryPoint;
	struct FFortPublicAccountInfo                 K2Node_Event_Result;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget) == 0x000008, "Wrong alignment on ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget");
static_assert(sizeof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget) == 0x0000B8, "Wrong size on ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, EntryPoint) == 0x000000, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, K2Node_Event_Result) == 0x000004, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000038, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, K2Node_MakeArray_Array) == 0x000090, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget::CallFunc_Format_ReturnValue' has a wrong offset!");

struct ItemReceivedAccountWidget_C_OnAccountInfoChanged final
{
public:
	struct FFortPublicAccountInfo                 Result;
};
static_assert(alignof(ItemReceivedAccountWidget_C_OnAccountInfoChanged) == 0x000004, "Wrong alignment on ItemReceivedAccountWidget_C_OnAccountInfoChanged");
static_assert(sizeof(ItemReceivedAccountWidget_C_OnAccountInfoChanged) == 0x000034, "Wrong size on ItemReceivedAccountWidget_C_OnAccountInfoChanged");
static_assert(offsetof(ItemReceivedAccountWidget_C_OnAccountInfoChanged, Result) == 0x000000, "Member 'ItemReceivedAccountWidget_C_OnAccountInfoChanged::Result' has a wrong offset!");

}
