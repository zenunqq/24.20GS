#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PurchaseUnavailable_C_OnUpdateTextStyle final
{
public:
	class FText                                   OfferDisplayName;
};
static_assert(alignof(PurchaseUnavailable_C_OnUpdateTextStyle) == 0x000008, "Wrong alignment on PurchaseUnavailable_C_OnUpdateTextStyle");
static_assert(sizeof(PurchaseUnavailable_C_OnUpdateTextStyle) == 0x000018, "Wrong size on PurchaseUnavailable_C_OnUpdateTextStyle");
static_assert(offsetof(PurchaseUnavailable_C_OnUpdateTextStyle, OfferDisplayName) == 0x000000, "Member 'PurchaseUnavailable_C_OnUpdateTextStyle::OfferDisplayName' has a wrong offset!");

struct PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_OfferDisplayName;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable) == 0x000008, "Wrong alignment on PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable");
static_assert(sizeof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable) == 0x000098, "Wrong size on PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, EntryPoint) == 0x000000, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_Event_OfferDisplayName) == 0x000008, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_Event_OfferDisplayName' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_MakeArray_Array) == 0x000070, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, CallFunc_Format_ReturnValue) == 0x000080, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::CallFunc_Format_ReturnValue' has a wrong offset!");

}
