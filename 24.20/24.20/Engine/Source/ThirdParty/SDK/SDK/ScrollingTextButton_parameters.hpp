#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;
};
static_assert(alignof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong alignment on ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(sizeof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong size on ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(offsetof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature, bUsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature::bUsingGamepad' has a wrong offset!");

struct ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_6[0x2];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_11[0xF];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;
	uint8                                         Pad_112[0x6];
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;
	float                                         K2Node_Event_HeldPercent;
	uint8                                         Pad_12C[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton) == 0x000010, "Wrong alignment on ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton");
static_assert(sizeof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton) == 0x000140, "Wrong size on ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, EntryPoint) == 0x000000, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_bool_Variable) == 0x000004, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_IsDesignTime) == 0x000005, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_TabLabelInfo) == 0x000020, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000110, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_ComponentBoundEvent_bUsingGamepad) == 0x000111, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_ComponentBoundEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_NewTriggeredAction) == 0x000118, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_HeldPercent) == 0x000128, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetContext_ReturnValue_1) == 0x000130, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x000138, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000139, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00013A, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_byte_Variable) == 0x00013B, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_byte_Variable_1) == 0x00013C, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Select_Default) == 0x00013D, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Select_Default' has a wrong offset!");

struct ScrollingTextButton_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(ScrollingTextButton_C_InitializeButton) == 0x000008, "Wrong alignment on ScrollingTextButton_C_InitializeButton");
static_assert(sizeof(ScrollingTextButton_C_InitializeButton) == 0x000010, "Wrong size on ScrollingTextButton_C_InitializeButton");
static_assert(offsetof(ScrollingTextButton_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct ScrollingTextButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(ScrollingTextButton_C_OnActionProgress) == 0x000004, "Wrong alignment on ScrollingTextButton_C_OnActionProgress");
static_assert(sizeof(ScrollingTextButton_C_OnActionProgress) == 0x000004, "Wrong size on ScrollingTextButton_C_OnActionProgress");
static_assert(offsetof(ScrollingTextButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'ScrollingTextButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct ScrollingTextButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(ScrollingTextButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on ScrollingTextButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(ScrollingTextButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on ScrollingTextButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(ScrollingTextButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'ScrollingTextButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct ScrollingTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ScrollingTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on ScrollingTextButton_C_PreConstruct");
static_assert(sizeof(ScrollingTextButton_C_PreConstruct) == 0x000001, "Wrong size on ScrollingTextButton_C_PreConstruct");
static_assert(offsetof(ScrollingTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ScrollingTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ScrollingTextButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(ScrollingTextButton_C_Set_Icon) == 0x000010, "Wrong alignment on ScrollingTextButton_C_Set_Icon");
static_assert(sizeof(ScrollingTextButton_C_Set_Icon) == 0x0000C0, "Wrong size on ScrollingTextButton_C_Set_Icon");
static_assert(offsetof(ScrollingTextButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'ScrollingTextButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct ScrollingTextButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ScrollingTextButton_C_Set_Text) == 0x000008, "Wrong alignment on ScrollingTextButton_C_Set_Text");
static_assert(sizeof(ScrollingTextButton_C_Set_Text) == 0x000020, "Wrong size on ScrollingTextButton_C_Set_Text");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'ScrollingTextButton_C_Set_Text::ButtonText_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_byte_Variable) == 0x000018, "Member 'ScrollingTextButton_C_Set_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'ScrollingTextButton_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_byte_Variable_1) == 0x00001A, "Member 'ScrollingTextButton_C_Set_Text::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_bool_Variable) == 0x00001B, "Member 'ScrollingTextButton_C_Set_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, K2Node_Select_Default) == 0x00001C, "Member 'ScrollingTextButton_C_Set_Text::K2Node_Select_Default' has a wrong offset!");

struct ScrollingTextButton_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;
};
static_assert(alignof(ScrollingTextButton_C_SetContentAlignment) == 0x000001, "Wrong alignment on ScrollingTextButton_C_SetContentAlignment");
static_assert(sizeof(ScrollingTextButton_C_SetContentAlignment) == 0x000001, "Wrong size on ScrollingTextButton_C_SetContentAlignment");
static_assert(offsetof(ScrollingTextButton_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'ScrollingTextButton_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

struct ScrollingTextButton_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(ScrollingTextButton_C_SetControllerStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_SetControllerStyle");
static_assert(sizeof(ScrollingTextButton_C_SetControllerStyle) == 0x000018, "Wrong size on ScrollingTextButton_C_SetControllerStyle");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'ScrollingTextButton_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_SetControllerStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'ScrollingTextButton_C_SetControllerStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct ScrollingTextButton_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(ScrollingTextButton_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_SetMouseKeyboardStyle");
static_assert(sizeof(ScrollingTextButton_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on ScrollingTextButton_C_SetMouseKeyboardStyle");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct ScrollingTextButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(ScrollingTextButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on ScrollingTextButton_C_SetTabLabelInfo");
static_assert(sizeof(ScrollingTextButton_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on ScrollingTextButton_C_SetTabLabelInfo");
static_assert(offsetof(ScrollingTextButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'ScrollingTextButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

struct ScrollingTextButton_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ScrollingTextButton_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateContentAlignment");
static_assert(sizeof(ScrollingTextButton_C_UpdateContentAlignment) == 0x000018, "Wrong size on ScrollingTextButton_C_UpdateContentAlignment");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'ScrollingTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ScrollingTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct ScrollingTextButton_C_UpdateStyle final
{
public:
	bool                                          UsingGamepad;
};
static_assert(alignof(ScrollingTextButton_C_UpdateStyle) == 0x000001, "Wrong alignment on ScrollingTextButton_C_UpdateStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateStyle) == 0x000001, "Wrong size on ScrollingTextButton_C_UpdateStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateStyle, UsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_UpdateStyle::UsingGamepad' has a wrong offset!");

struct ScrollingTextButton_C_UpdateText final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class FText                                   CallFunc_GetDisplayText_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_22[0x6];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(ScrollingTextButton_C_UpdateText) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateText");
static_assert(sizeof(ScrollingTextButton_C_UpdateText) == 0x000040, "Wrong size on ScrollingTextButton_C_UpdateText");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'ScrollingTextButton_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, K2Node_Select_Default) == 0x000028, "Member 'ScrollingTextButton_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

struct ScrollingTextButton_C_UpdateTextAndStyle final
{
public:
	bool                                          bUsingGamepad;
};
static_assert(alignof(ScrollingTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on ScrollingTextButton_C_UpdateTextAndStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong size on ScrollingTextButton_C_UpdateTextAndStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateTextAndStyle, bUsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_UpdateTextAndStyle::bUsingGamepad' has a wrong offset!");

struct ScrollingTextButton_C_UpdateTextStyle final
{
public:
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
};
static_assert(alignof(ScrollingTextButton_C_UpdateTextStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateTextStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateTextStyle) == 0x000008, "Wrong size on ScrollingTextButton_C_UpdateTextStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}
