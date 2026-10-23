#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged final
{
public:
	ECommonInputType                              CurrentInputType_0;
};
static_assert(alignof(WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged");
static_assert(sizeof(WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged, CurrentInputType_0) == 0x000000, "Member 'WBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged::CurrentInputType_0' has a wrong offset!");

struct WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	ECommonInputType                              K2Node_Event_CurrentInputType;
	uint8                                         Pad_11[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
};
static_assert(alignof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet) == 0x000008, "Wrong alignment on WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet");
static_assert(sizeof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet) == 0x000028, "Wrong size on WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, EntryPoint) == 0x000000, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, K2Node_Event_CurrentInputType) == 0x000010, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::K2Node_Event_CurrentInputType' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet, CallFunc_GetCurrentInputType_ReturnValue) == 0x000021, "Member 'WBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

struct WBP_UIKit_Button_Quiet_C_HideBackground final
{
public:
	ECommonInputType                              InputType;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(WBP_UIKit_Button_Quiet_C_HideBackground) == 0x000001, "Wrong alignment on WBP_UIKit_Button_Quiet_C_HideBackground");
static_assert(sizeof(WBP_UIKit_Button_Quiet_C_HideBackground) == 0x000002, "Wrong size on WBP_UIKit_Button_Quiet_C_HideBackground");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_HideBackground, InputType) == 0x000000, "Member 'WBP_UIKit_Button_Quiet_C_HideBackground::InputType' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_HideBackground, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_UIKit_Button_Quiet_C_HideBackground::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct WBP_UIKit_Button_Quiet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_UIKit_Button_Quiet_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIKit_Button_Quiet_C_PreConstruct");
static_assert(sizeof(WBP_UIKit_Button_Quiet_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIKit_Button_Quiet_C_PreConstruct");
static_assert(offsetof(WBP_UIKit_Button_Quiet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIKit_Button_Quiet_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
