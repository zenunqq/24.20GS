#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_3B[0x5];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          K2Node_Event_bShown;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_4A[0x2];
	int32                                         K2Node_Event_TabIndex;
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_1;
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_2;
};
static_assert(alignof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop) == 0x000008, "Wrong alignment on StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop");
static_assert(sizeof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop) == 0x0000B0, "Wrong size on StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, EntryPoint) == 0x000000, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo) == 0x000008, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, Temp_bool_Variable) == 0x000038, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, Temp_byte_Variable) == 0x000039, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, Temp_byte_Variable_1) == 0x00003A, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000040, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_Event_bShown) == 0x000048, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_Event_bShown' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_Select_Default) == 0x000049, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_Event_TabIndex) == 0x00004C, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_Event_TabIndex' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_1) == 0x000050, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_1' has a wrong offset!");
static_assert(offsetof(StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_2) == 0x000080, "Member 'StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_2' has a wrong offset!");

struct StandaloneBacchusItemShop_C_OnLoadingIndicatorShown final
{
public:
	bool                                          bShown;
};
static_assert(alignof(StandaloneBacchusItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong alignment on StandaloneBacchusItemShop_C_OnLoadingIndicatorShown");
static_assert(sizeof(StandaloneBacchusItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong size on StandaloneBacchusItemShop_C_OnLoadingIndicatorShown");
static_assert(offsetof(StandaloneBacchusItemShop_C_OnLoadingIndicatorShown, bShown) == 0x000000, "Member 'StandaloneBacchusItemShop_C_OnLoadingIndicatorShown::bShown' has a wrong offset!");

struct StandaloneBacchusItemShop_C_OnTabSelected final
{
public:
	int32                                         TabIndex;
};
static_assert(alignof(StandaloneBacchusItemShop_C_OnTabSelected) == 0x000004, "Wrong alignment on StandaloneBacchusItemShop_C_OnTabSelected");
static_assert(sizeof(StandaloneBacchusItemShop_C_OnTabSelected) == 0x000004, "Wrong size on StandaloneBacchusItemShop_C_OnTabSelected");
static_assert(offsetof(StandaloneBacchusItemShop_C_OnTabSelected, TabIndex) == 0x000000, "Member 'StandaloneBacchusItemShop_C_OnTabSelected::TabIndex' has a wrong offset!");

}
