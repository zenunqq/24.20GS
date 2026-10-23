#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PanelButton_C_UpdateTextAndStyle final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(PanelButton_C_UpdateTextAndStyle) == 0x000008, "Wrong alignment on PanelButton_C_UpdateTextAndStyle");
static_assert(sizeof(PanelButton_C_UpdateTextAndStyle) == 0x000010, "Wrong size on PanelButton_C_UpdateTextAndStyle");
static_assert(offsetof(PanelButton_C_UpdateTextAndStyle, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'PanelButton_C_UpdateTextAndStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateTextAndStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'PanelButton_C_UpdateTextAndStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'PanelButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct PanelButton_C_UpdateStyle final
{
public:
	bool                                          bUsingGamepad;
	uint8                                         Pad_1[0x7];
	class FText                                   ActionText;
};
static_assert(alignof(PanelButton_C_UpdateStyle) == 0x000008, "Wrong alignment on PanelButton_C_UpdateStyle");
static_assert(sizeof(PanelButton_C_UpdateStyle) == 0x000020, "Wrong size on PanelButton_C_UpdateStyle");
static_assert(offsetof(PanelButton_C_UpdateStyle, bUsingGamepad) == 0x000000, "Member 'PanelButton_C_UpdateStyle::bUsingGamepad' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateStyle, ActionText) == 0x000008, "Member 'PanelButton_C_UpdateStyle::ActionText' has a wrong offset!");

struct PanelButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(PanelButton_C_OnActionProgress) == 0x000004, "Wrong alignment on PanelButton_C_OnActionProgress");
static_assert(sizeof(PanelButton_C_OnActionProgress) == 0x000004, "Wrong size on PanelButton_C_OnActionProgress");
static_assert(offsetof(PanelButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'PanelButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct PanelButton_C_UpdateInputActionLayout final
{
public:
	struct FSlateBrush                            RimBrush;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PanelButton_C_UpdateInputActionLayout) == 0x000010, "Wrong alignment on PanelButton_C_UpdateInputActionLayout");
static_assert(sizeof(PanelButton_C_UpdateInputActionLayout) == 0x000190, "Wrong size on PanelButton_C_UpdateInputActionLayout");
static_assert(offsetof(PanelButton_C_UpdateInputActionLayout, RimBrush) == 0x000000, "Member 'PanelButton_C_UpdateInputActionLayout::RimBrush' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateInputActionLayout, K2Node_MakeStruct_SlateBrush) == 0x0000C0, "Member 'PanelButton_C_UpdateInputActionLayout::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateInputActionLayout, K2Node_DynamicCast_AsOverlay_Slot) == 0x000180, "Member 'PanelButton_C_UpdateInputActionLayout::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateInputActionLayout, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'PanelButton_C_UpdateInputActionLayout::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PanelButton_C_UpdateInputActionLayout, CallFunc_IsValid_ReturnValue) == 0x000189, "Member 'PanelButton_C_UpdateInputActionLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PanelButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PanelButton_C_PreConstruct) == 0x000001, "Wrong alignment on PanelButton_C_PreConstruct");
static_assert(sizeof(PanelButton_C_PreConstruct) == 0x000001, "Wrong size on PanelButton_C_PreConstruct");
static_assert(offsetof(PanelButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PanelButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PanelButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(PanelButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on PanelButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(PanelButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on PanelButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(PanelButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'PanelButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct PanelButton_C_ExecuteUbergraph_PanelButton final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_B[0x5];
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;
	float                                         K2Node_Event_HeldPercent;
};
static_assert(alignof(PanelButton_C_ExecuteUbergraph_PanelButton) == 0x000008, "Wrong alignment on PanelButton_C_ExecuteUbergraph_PanelButton");
static_assert(sizeof(PanelButton_C_ExecuteUbergraph_PanelButton) == 0x000028, "Wrong size on PanelButton_C_ExecuteUbergraph_PanelButton");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, EntryPoint) == 0x000000, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, Temp_byte_Variable) == 0x000004, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, Temp_byte_Variable_1) == 0x000005, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, K2Node_Event_IsDesignTime) == 0x000006, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, CallFunc_HasAnyChildren_ReturnValue) == 0x000007, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, Temp_bool_Variable) == 0x000008, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, K2Node_ComponentBoundEvent_bUsingGamepad) == 0x000009, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::K2Node_ComponentBoundEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, K2Node_Select_Default) == 0x00000A, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, K2Node_Event_NewTriggeredAction) == 0x000010, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(PanelButton_C_ExecuteUbergraph_PanelButton, K2Node_Event_HeldPercent) == 0x000020, "Member 'PanelButton_C_ExecuteUbergraph_PanelButton::K2Node_Event_HeldPercent' has a wrong offset!");

struct PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;
};
static_assert(alignof(PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong alignment on PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(sizeof(PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong size on PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(offsetof(PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature, bUsingGamepad) == 0x000000, "Member 'PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature::bUsingGamepad' has a wrong offset!");

}
