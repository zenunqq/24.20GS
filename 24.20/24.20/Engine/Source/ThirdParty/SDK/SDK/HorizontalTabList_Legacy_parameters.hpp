#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct HorizontalTabList_Legacy_C_CustomEvent_0 final
{
public:
	class FName                                   TabId;
};
static_assert(alignof(HorizontalTabList_Legacy_C_CustomEvent_0) == 0x000004, "Wrong alignment on HorizontalTabList_Legacy_C_CustomEvent_0");
static_assert(sizeof(HorizontalTabList_Legacy_C_CustomEvent_0) == 0x000004, "Wrong size on HorizontalTabList_Legacy_C_CustomEvent_0");
static_assert(offsetof(HorizontalTabList_Legacy_C_CustomEvent_0, TabId) == 0x000000, "Member 'HorizontalTabList_Legacy_C_CustomEvent_0::TabId' has a wrong offset!");

struct HorizontalTabList_Legacy_C_CustomEvent_1 final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(HorizontalTabList_Legacy_C_CustomEvent_1) == 0x000001, "Wrong alignment on HorizontalTabList_Legacy_C_CustomEvent_1");
static_assert(sizeof(HorizontalTabList_Legacy_C_CustomEvent_1) == 0x000001, "Wrong size on HorizontalTabList_Legacy_C_CustomEvent_1");
static_assert(offsetof(HorizontalTabList_Legacy_C_CustomEvent_1, InVisibility) == 0x000000, "Member 'HorizontalTabList_Legacy_C_CustomEvent_1::InVisibility' has a wrong offset!");

struct HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_C[0x4];
	class UCommonButtonBase*                      CallFunc_Create_ReturnValue;
	class UCommonButtonBase*                      K2Node_DynamicCast_AsCommon_Button_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_22[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner");
static_assert(sizeof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner) == 0x000028, "Wrong size on HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, Temp_int_Variable) == 0x000008, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, CallFunc_Create_ReturnValue) == 0x000010, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, K2Node_DynamicCast_AsCommon_Button_Base) == 0x000018, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::K2Node_DynamicCast_AsCommon_Button_Base' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'HorizontalTabList_Legacy_C_DebugCreateTabsForDesigner::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_A[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void(class FName TabId)>            K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_2;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_3E[0x2];
	int32                                         CallFunc_GetTabCount_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	int32                                         CallFunc_GetTabCount_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_4F[0x1];
	class FName                                   K2Node_CustomEvent_TabId;
	ESlateVisibility                              Temp_byte_Variable_5;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;
	uint8                                         Pad_57[0x1];
	class FName                                   K2Node_Event_TabNameID_1;
	uint8                                         Pad_5C[0x4];
	class UCommonButtonBase*                      K2Node_Event_TabButton_1;
	class FName                                   K2Node_Event_TabNameID;
	uint8                                         Pad_6C[0x4];
	class UCommonButtonBase*                      K2Node_Event_TabButton;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy");
static_assert(sizeof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy) == 0x000080, "Wrong size on HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, EntryPoint) == 0x000000, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::EntryPoint' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_bool_Variable) == 0x000004, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable) == 0x000005, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable_1) == 0x000006, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_bool_Variable_1) == 0x000007, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable_2) == 0x000008, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable_3) == 0x000009, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable_4) == 0x00003C, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Event_IsDesignTime) == 0x00003D, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_GetTabCount_ReturnValue) == 0x000040, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_GetTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_GetTabCount_ReturnValue_1) == 0x000048, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_GetTabCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00004C, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Select_Default) == 0x00004D, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Select_Default_1) == 0x00004E, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CustomEvent_TabId) == 0x000050, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CustomEvent_TabId' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_byte_Variable_5) == 0x000054, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CustomEvent_bNewInputType) == 0x000055, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_CustomEvent_InVisibility) == 0x000056, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Event_TabNameID_1) == 0x000058, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Event_TabNameID_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Event_TabButton_1) == 0x000060, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Event_TabButton_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Event_TabNameID) == 0x000068, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Event_TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Event_TabButton) == 0x000070, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Event_TabButton' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, Temp_bool_Variable_2) == 0x000078, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_IsValidClass_ReturnValue) == 0x000079, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, K2Node_Select_Default_2) == 0x00007A, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy, CallFunc_BooleanAND_ReturnValue) == 0x00007B, "Member 'HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct HorizontalTabList_Legacy_C_HandleOnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(HorizontalTabList_Legacy_C_HandleOnInputMethodChanged) == 0x000001, "Wrong alignment on HorizontalTabList_Legacy_C_HandleOnInputMethodChanged");
static_assert(sizeof(HorizontalTabList_Legacy_C_HandleOnInputMethodChanged) == 0x000001, "Wrong size on HorizontalTabList_Legacy_C_HandleOnInputMethodChanged");
static_assert(offsetof(HorizontalTabList_Legacy_C_HandleOnInputMethodChanged, bNewInputType) == 0x000000, "Member 'HorizontalTabList_Legacy_C_HandleOnInputMethodChanged::bNewInputType' has a wrong offset!");

struct HorizontalTabList_Legacy_C_HandleTabCreation final
{
public:
	class FName                                   TabNameID;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      TabButton;
};
static_assert(alignof(HorizontalTabList_Legacy_C_HandleTabCreation) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_HandleTabCreation");
static_assert(sizeof(HorizontalTabList_Legacy_C_HandleTabCreation) == 0x000010, "Wrong size on HorizontalTabList_Legacy_C_HandleTabCreation");
static_assert(offsetof(HorizontalTabList_Legacy_C_HandleTabCreation, TabNameID) == 0x000000, "Member 'HorizontalTabList_Legacy_C_HandleTabCreation::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_HandleTabCreation, TabButton) == 0x000008, "Member 'HorizontalTabList_Legacy_C_HandleTabCreation::TabButton' has a wrong offset!");

struct HorizontalTabList_Legacy_C_HandleTabRemoval final
{
public:
	class FName                                   TabNameID;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      TabButton;
};
static_assert(alignof(HorizontalTabList_Legacy_C_HandleTabRemoval) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_HandleTabRemoval");
static_assert(sizeof(HorizontalTabList_Legacy_C_HandleTabRemoval) == 0x000010, "Wrong size on HorizontalTabList_Legacy_C_HandleTabRemoval");
static_assert(offsetof(HorizontalTabList_Legacy_C_HandleTabRemoval, TabNameID) == 0x000000, "Member 'HorizontalTabList_Legacy_C_HandleTabRemoval::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_HandleTabRemoval, TabButton) == 0x000008, "Member 'HorizontalTabList_Legacy_C_HandleTabRemoval::TabButton' has a wrong offset!");

struct HorizontalTabList_Legacy_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(HorizontalTabList_Legacy_C_PreConstruct) == 0x000001, "Wrong alignment on HorizontalTabList_Legacy_C_PreConstruct");
static_assert(sizeof(HorizontalTabList_Legacy_C_PreConstruct) == 0x000001, "Wrong size on HorizontalTabList_Legacy_C_PreConstruct");
static_assert(offsetof(HorizontalTabList_Legacy_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HorizontalTabList_Legacy_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct HorizontalTabList_Legacy_C_SetVerticalAlignment final
{
public:
	EVerticalAlignment                            FillVertically;
	uint8                                         Pad_1[0x7];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
};
static_assert(alignof(HorizontalTabList_Legacy_C_SetVerticalAlignment) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_SetVerticalAlignment");
static_assert(sizeof(HorizontalTabList_Legacy_C_SetVerticalAlignment) == 0x000010, "Wrong size on HorizontalTabList_Legacy_C_SetVerticalAlignment");
static_assert(offsetof(HorizontalTabList_Legacy_C_SetVerticalAlignment, FillVertically) == 0x000000, "Member 'HorizontalTabList_Legacy_C_SetVerticalAlignment::FillVertically' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_SetVerticalAlignment, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000008, "Member 'HorizontalTabList_Legacy_C_SetVerticalAlignment::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");

struct HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility final
{
public:
	int32                                         NumVisibleTabs;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_9[0x3];
	int32                                         CallFunc_GetVisibleTabCount_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility");
static_assert(sizeof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility) == 0x000020, "Wrong size on HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, NumVisibleTabs) == 0x000000, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::NumVisibleTabs' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, Temp_bool_Variable) == 0x000004, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, Temp_byte_Variable) == 0x000005, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, Temp_byte_Variable_1) == 0x000006, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, Temp_bool_Variable_1) == 0x000007, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, Temp_byte_Variable_2) == 0x000008, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_GetVisibleTabCount_ReturnValue) == 0x00000C, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_GetVisibleTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_GetCurrentInputType_ReturnValue) == 0x000019, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, K2Node_Select_Default) == 0x00001C, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility, K2Node_Select_Default_1) == 0x00001D, "Member 'HorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility::K2Node_Select_Default_1' has a wrong offset!");

struct HorizontalTabList_Legacy_C_UpdateTabStyles final
{
public:
	class UCommonButtonBase*                      ButtonWidget;
	class UIconTabButton_Legacy_C*                K2Node_DynamicCast_AsIcon_Tab_Button_Legacy;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	class UIconTabButton_Legacy_C*                K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_29[0x7];
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue_1;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class FText                                   CallFunc_GetEmptyText_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
};
static_assert(alignof(HorizontalTabList_Legacy_C_UpdateTabStyles) == 0x000008, "Wrong alignment on HorizontalTabList_Legacy_C_UpdateTabStyles");
static_assert(sizeof(HorizontalTabList_Legacy_C_UpdateTabStyles) == 0x000080, "Wrong size on HorizontalTabList_Legacy_C_UpdateTabStyles");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, ButtonWidget) == 0x000000, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::ButtonWidget' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_DynamicCast_AsIcon_Tab_Button_Legacy) == 0x000008, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_DynamicCast_AsIcon_Tab_Button_Legacy' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, CallFunc_SlotAsSizeBoxSlot_ReturnValue) == 0x000018, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::CallFunc_SlotAsSizeBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1) == 0x000020, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, CallFunc_SlotAsSizeBoxSlot_ReturnValue_1) == 0x000030, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::CallFunc_SlotAsSizeBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_MakeStruct_Margin) == 0x000038, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, CallFunc_GetEmptyText_ReturnValue) == 0x000048, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_MakeStruct_Margin_1) == 0x000060, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000070, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_MakeStruct_Right_ImplicitCast) == 0x000078, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_Legacy_C_UpdateTabStyles, K2Node_MakeStruct_Left_ImplicitCast) == 0x00007C, "Member 'HorizontalTabList_Legacy_C_UpdateTabStyles::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");

}
