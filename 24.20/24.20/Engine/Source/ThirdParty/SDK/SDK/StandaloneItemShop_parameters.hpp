#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_3A[0x6];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          K2Node_Event_bShown;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_53[0x1];
	int32                                         K2Node_Event_TabIndex;
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_1;
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_2;
};
static_assert(alignof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop) == 0x000008, "Wrong alignment on StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop");
static_assert(sizeof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop) == 0x0000B8, "Wrong size on StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, EntryPoint) == 0x000000, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo) == 0x000008, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_byte_Variable) == 0x000038, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_byte_Variable_1) == 0x000039, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000040, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000048, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Event_bShown) == 0x000050, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Event_bShown' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_bool_Variable) == 0x000051, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Select_Default) == 0x000052, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Event_TabIndex) == 0x000054, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Event_TabIndex' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_1) == 0x000058, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_1' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_2) == 0x000088, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_2' has a wrong offset!");

struct StandaloneItemShop_C_OnLoadingIndicatorShown final
{
public:
	bool                                          bShown;
};
static_assert(alignof(StandaloneItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong alignment on StandaloneItemShop_C_OnLoadingIndicatorShown");
static_assert(sizeof(StandaloneItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong size on StandaloneItemShop_C_OnLoadingIndicatorShown");
static_assert(offsetof(StandaloneItemShop_C_OnLoadingIndicatorShown, bShown) == 0x000000, "Member 'StandaloneItemShop_C_OnLoadingIndicatorShown::bShown' has a wrong offset!");

struct StandaloneItemShop_C_OnTabSelected final
{
public:
	int32                                         TabIndex;
};
static_assert(alignof(StandaloneItemShop_C_OnTabSelected) == 0x000004, "Wrong alignment on StandaloneItemShop_C_OnTabSelected");
static_assert(sizeof(StandaloneItemShop_C_OnTabSelected) == 0x000004, "Wrong size on StandaloneItemShop_C_OnTabSelected");
static_assert(offsetof(StandaloneItemShop_C_OnTabSelected, TabIndex) == 0x000000, "Member 'StandaloneItemShop_C_OnTabSelected::TabIndex' has a wrong offset!");

}
