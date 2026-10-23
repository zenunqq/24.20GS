#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct ItemReceivedCurrencyHeader_C_ActiveFromPresentation final
{
public:
	struct FCurrencyDataWithGiftBox               CurrencyDataArray;
};
static_assert(alignof(ItemReceivedCurrencyHeader_C_ActiveFromPresentation) == 0x000008, "Wrong alignment on ItemReceivedCurrencyHeader_C_ActiveFromPresentation");
static_assert(sizeof(ItemReceivedCurrencyHeader_C_ActiveFromPresentation) == 0x000010, "Wrong size on ItemReceivedCurrencyHeader_C_ActiveFromPresentation");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ActiveFromPresentation, CurrencyDataArray) == 0x000000, "Member 'ItemReceivedCurrencyHeader_C_ActiveFromPresentation::CurrencyDataArray' has a wrong offset!");

struct ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	struct FCurrencyDataWithGiftBox               K2Node_CustomEvent_CurrencyDataArray;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	struct FCurrencyData                          CallFunc_Array_Get_Item;
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;
	bool                                          CallFunc_HasPurchasedSeasonBook_ReturnValue;
	uint8                                         Pad_89[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_91[0x7];
	class UImage*                                 K2Node_Select_Default;
};
static_assert(alignof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader) == 0x000008, "Wrong alignment on ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader");
static_assert(sizeof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader) == 0x0000A0, "Wrong size on ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, EntryPoint) == 0x000000, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, Temp_bool_Variable) == 0x000004, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, K2Node_CustomEvent_CurrencyDataArray) == 0x000018, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::K2Node_CustomEvent_CurrencyDataArray' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_Array_Get_Item) == 0x000030, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_GetAthenaProfile_ReturnValue) == 0x000080, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_HasPurchasedSeasonBook_ReturnValue) == 0x000088, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_HasPurchasedSeasonBook_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader, K2Node_Select_Default) == 0x000098, "Member 'ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader::K2Node_Select_Default' has a wrong offset!");

}
