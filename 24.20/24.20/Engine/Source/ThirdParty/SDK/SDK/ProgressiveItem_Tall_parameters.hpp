#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItem_Tall_C_BP_OnInitializeSetInfo final
{
public:
	struct FProgressiveSetInfo                    InSetInfo;
	class FText                                   BottomText;
	class FText                                   BottomSubtext;
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo) == 0x000008, "Wrong alignment on ProgressiveItem_Tall_C_BP_OnInitializeSetInfo");
static_assert(sizeof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo) == 0x0000A0, "Wrong size on ProgressiveItem_Tall_C_BP_OnInitializeSetInfo");
static_assert(offsetof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo, InSetInfo) == 0x000000, "Member 'ProgressiveItem_Tall_C_BP_OnInitializeSetInfo::InSetInfo' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo, BottomText) == 0x000068, "Member 'ProgressiveItem_Tall_C_BP_OnInitializeSetInfo::BottomText' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo, BottomSubtext) == 0x000080, "Member 'ProgressiveItem_Tall_C_BP_OnInitializeSetInfo::BottomSubtext' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_BP_OnInitializeSetInfo, bSubscribed) == 0x000098, "Member 'ProgressiveItem_Tall_C_BP_OnInitializeSetInfo::bSubscribed' has a wrong offset!");

struct ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded) == 0x000001, "Wrong alignment on ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded");
static_assert(sizeof(ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded) == 0x000001, "Wrong size on ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded");
static_assert(offsetof(ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded, bSubscribed) == 0x000000, "Member 'ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded::bSubscribed' has a wrong offset!");

struct ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FProgressiveSetInfo                    K2Node_Event_InSetInfo;
	class FText                                   K2Node_Event_BottomText;
	class FText                                   K2Node_Event_BottomSubtext;
	bool                                          K2Node_Event_bSubscribed_1;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          K2Node_Event_bSubscribed;
	uint8                                         Pad_AB[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall) == 0x000008, "Wrong alignment on ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall");
static_assert(sizeof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall) == 0x0000B8, "Wrong size on ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, EntryPoint) == 0x000000, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_InSetInfo) == 0x000010, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_InSetInfo' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_BottomText) == 0x000078, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_BottomText' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_BottomSubtext) == 0x000090, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_BottomSubtext' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_bSubscribed_1) == 0x0000A8, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_bSubscribed_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_IsDesignTime) == 0x0000A9, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, K2Node_Event_bSubscribed) == 0x0000AA, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::K2Node_Event_bSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct ProgressiveItem_Tall_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveItem_Tall_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveItem_Tall_C_PreConstruct");
static_assert(sizeof(ProgressiveItem_Tall_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveItem_Tall_C_PreConstruct");
static_assert(offsetof(ProgressiveItem_Tall_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveItem_Tall_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveItem_Tall_C_UpdateCompletedState final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_7[0x1];
	int32                                         CallFunc_SelectInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItem_Tall_C_UpdateCompletedState) == 0x000004, "Wrong alignment on ProgressiveItem_Tall_C_UpdateCompletedState");
static_assert(sizeof(ProgressiveItem_Tall_C_UpdateCompletedState) == 0x000010, "Wrong size on ProgressiveItem_Tall_C_UpdateCompletedState");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, Temp_byte_Variable) == 0x000000, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, Temp_byte_Variable_1) == 0x000001, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, Temp_bool_Variable) == 0x000002, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, CallFunc_Less_IntInt_ReturnValue) == 0x000003, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, CallFunc_Less_IntInt_ReturnValue_1) == 0x000004, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, CallFunc_SelectInt_ReturnValue) == 0x000008, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateCompletedState, K2Node_Select_Default) == 0x00000C, "Member 'ProgressiveItem_Tall_C_UpdateCompletedState::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveItem_Tall_C_UpdateSubscribedState final
{
public:
	bool                                          bInSubscribed;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_3;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_4;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_5;
	uint8                                         Pad_64[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(ProgressiveItem_Tall_C_UpdateSubscribedState) == 0x000008, "Wrong alignment on ProgressiveItem_Tall_C_UpdateSubscribedState");
static_assert(sizeof(ProgressiveItem_Tall_C_UpdateSubscribedState) == 0x000078, "Wrong size on ProgressiveItem_Tall_C_UpdateSubscribedState");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, bInSubscribed) == 0x000000, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::bInSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue_1) == 0x000014, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue_2) == 0x000024, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue_3) == 0x000034, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue_4) == 0x000044, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_SelectColor_ReturnValue_5) == 0x000054, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_SelectColor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateSubscribedState, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000070, "Member 'ProgressiveItem_Tall_C_UpdateSubscribedState::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

struct ProgressiveItem_Tall_C_UpdateVisualState final
{
public:
	bool                                          Selected_0;
	bool                                          Subbed;
	bool                                          Completed;
	bool                                          Hovered_0;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_19[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
};
static_assert(alignof(ProgressiveItem_Tall_C_UpdateVisualState) == 0x000008, "Wrong alignment on ProgressiveItem_Tall_C_UpdateVisualState");
static_assert(sizeof(ProgressiveItem_Tall_C_UpdateVisualState) == 0x000068, "Wrong size on ProgressiveItem_Tall_C_UpdateVisualState");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Selected_0) == 0x000000, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Selected_0' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Subbed) == 0x000001, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Subbed' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Completed) == 0x000002, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Completed' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Hovered_0) == 0x000003, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Hovered_0' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_bool_Variable) == 0x000004, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_byte_Variable) == 0x000005, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_byte_Variable_1) == 0x000006, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_bool_Variable_1) == 0x000007, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, K2Node_Select_Default) == 0x000008, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_byte_Variable_2) == 0x000009, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, Temp_byte_Variable_3) == 0x00000A, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, K2Node_Select_Default_1) == 0x000018, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, CallFunc_SelectColor_ReturnValue) == 0x000028, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, K2Node_MakeStruct_SlateColor_1) == 0x00004C, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItem_Tall_C_UpdateVisualState, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'ProgressiveItem_Tall_C_UpdateVisualState::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

}
