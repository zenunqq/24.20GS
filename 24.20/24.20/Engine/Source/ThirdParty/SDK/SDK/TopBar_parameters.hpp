#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct TopBar_C_ExecuteUbergraph_TopBar final
{
public:
	int32                                         EntryPoint;
	struct FMargin                                K2Node_MakeStruct_Margin;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_15[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_59[0x7];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
};
static_assert(alignof(TopBar_C_ExecuteUbergraph_TopBar) == 0x000008, "Wrong alignment on TopBar_C_ExecuteUbergraph_TopBar");
static_assert(sizeof(TopBar_C_ExecuteUbergraph_TopBar) == 0x000068, "Wrong size on TopBar_C_ExecuteUbergraph_TopBar");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, EntryPoint) == 0x000000, "Member 'TopBar_C_ExecuteUbergraph_TopBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_MakeStruct_Margin) == 0x000004, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, CallFunc_IsMobileGame_ReturnValue) == 0x000014, "Member 'TopBar_C_ExecuteUbergraph_TopBar::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'TopBar_C_ExecuteUbergraph_TopBar::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_MakeStruct_Margin_1) == 0x000020, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface) == 0x000030, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface_1) == 0x000048, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface_1' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'TopBar_C_ExecuteUbergraph_TopBar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TopBar_C_ExecuteUbergraph_TopBar, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000060, "Member 'TopBar_C_ExecuteUbergraph_TopBar::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");

struct TopBar_C_SetMainNavVisibility final
{
public:
	ESlateVisibility                              NewVisibility;
};
static_assert(alignof(TopBar_C_SetMainNavVisibility) == 0x000001, "Wrong alignment on TopBar_C_SetMainNavVisibility");
static_assert(sizeof(TopBar_C_SetMainNavVisibility) == 0x000001, "Wrong size on TopBar_C_SetMainNavVisibility");
static_assert(offsetof(TopBar_C_SetMainNavVisibility, NewVisibility) == 0x000000, "Member 'TopBar_C_SetMainNavVisibility::NewVisibility' has a wrong offset!");

struct TopBar_C_SetTopTabsVisibility final
{
public:
	ESlateVisibility                              NewVisibility;
};
static_assert(alignof(TopBar_C_SetTopTabsVisibility) == 0x000001, "Wrong alignment on TopBar_C_SetTopTabsVisibility");
static_assert(sizeof(TopBar_C_SetTopTabsVisibility) == 0x000001, "Wrong size on TopBar_C_SetTopTabsVisibility");
static_assert(offsetof(TopBar_C_SetTopTabsVisibility, NewVisibility) == 0x000000, "Member 'TopBar_C_SetTopTabsVisibility::NewVisibility' has a wrong offset!");

struct TopBar_C_UpdateMTXButton final
{
public:
	EFortRuntimeOptionTabState                    Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	TArray<struct FRuntimeOptionTabStateInfo>     CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FRuntimeOptionTabStateInfo             CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	bool                                          K2Node_Select_Default;
};
static_assert(alignof(TopBar_C_UpdateMTXButton) == 0x000008, "Wrong alignment on TopBar_C_UpdateMTXButton");
static_assert(sizeof(TopBar_C_UpdateMTXButton) == 0x000038, "Wrong size on TopBar_C_UpdateMTXButton");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_byte_Variable) == 0x000000, "Member 'TopBar_C_UpdateMTXButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_bool_Variable) == 0x000001, "Member 'TopBar_C_UpdateMTXButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_bool_Variable_1) == 0x000002, "Member 'TopBar_C_UpdateMTXButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_bool_Variable_2) == 0x000003, "Member 'TopBar_C_UpdateMTXButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TopBar_C_UpdateMTXButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'TopBar_C_UpdateMTXButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'TopBar_C_UpdateMTXButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000010, "Member 'TopBar_C_UpdateMTXButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue) == 0x000018, "Member 'TopBar_C_UpdateMTXButton::CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'TopBar_C_UpdateMTXButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_Array_Get_Item) == 0x00002C, "Member 'TopBar_C_UpdateMTXButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'TopBar_C_UpdateMTXButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000035, "Member 'TopBar_C_UpdateMTXButton::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBar_C_UpdateMTXButton, K2Node_Select_Default) == 0x000036, "Member 'TopBar_C_UpdateMTXButton::K2Node_Select_Default' has a wrong offset!");

}
