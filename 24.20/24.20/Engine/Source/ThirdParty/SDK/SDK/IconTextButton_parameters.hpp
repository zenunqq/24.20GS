#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct IconTextButton_C_BindCommonInputSubsystem final
{
public:
	bool                                          bBind;
	uint8                                         Pad_1[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(IconTextButton_C_BindCommonInputSubsystem) == 0x000008, "Wrong alignment on IconTextButton_C_BindCommonInputSubsystem");
static_assert(sizeof(IconTextButton_C_BindCommonInputSubsystem) == 0x000020, "Wrong size on IconTextButton_C_BindCommonInputSubsystem");
static_assert(offsetof(IconTextButton_C_BindCommonInputSubsystem, bBind) == 0x000000, "Member 'IconTextButton_C_BindCommonInputSubsystem::bBind' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_BindCommonInputSubsystem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'IconTextButton_C_BindCommonInputSubsystem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_BindCommonInputSubsystem, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'IconTextButton_C_BindCommonInputSubsystem::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_BindCommonInputSubsystem, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'IconTextButton_C_BindCommonInputSubsystem::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_BindCommonInputSubsystem, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'IconTextButton_C_BindCommonInputSubsystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct IconTextButton_C_ExecuteUbergraph_IconTextButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_GetEmptyText_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_21[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_36[0xA];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction_1;
	float                                         K2Node_Event_HeldPercent;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_149[0x7];
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	double                                        K2Node_VariableSet_PressProgress_ImplicitCast;
};
static_assert(alignof(IconTextButton_C_ExecuteUbergraph_IconTextButton) == 0x000010, "Wrong alignment on IconTextButton_C_ExecuteUbergraph_IconTextButton");
static_assert(sizeof(IconTextButton_C_ExecuteUbergraph_IconTextButton) == 0x000170, "Wrong size on IconTextButton_C_ExecuteUbergraph_IconTextButton");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, EntryPoint) == 0x000000, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetEmptyText_ReturnValue) == 0x000008, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_IsDesignTime) == 0x000020, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000030, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable) == 0x000031, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_HasAnyChildren_ReturnValue) == 0x000032, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_1) == 0x000033, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_bool_Variable) == 0x000034, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_2) == 0x000035, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_TabLabelInfo) == 0x000040, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_NewTriggeredAction_1) == 0x000130, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_NewTriggeredAction_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_HeldPercent) == 0x000140, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_3) == 0x000144, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_bool_Variable_1) == 0x000145, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Select_Default) == 0x000146, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x000147, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Select_Default_1) == 0x000148, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_NewTriggeredAction) == 0x000150, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_InFocusEvent) == 0x000160, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_VariableSet_PressProgress_ImplicitCast) == 0x000168, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_VariableSet_PressProgress_ImplicitCast' has a wrong offset!");

struct IconTextButton_C_Get_Dynamic_Material final
{
public:
	class UMaterialInstanceDynamic*               Ret_Material;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(IconTextButton_C_Get_Dynamic_Material) == 0x000008, "Wrong alignment on IconTextButton_C_Get_Dynamic_Material");
static_assert(sizeof(IconTextButton_C_Get_Dynamic_Material) == 0x000010, "Wrong size on IconTextButton_C_Get_Dynamic_Material");
static_assert(offsetof(IconTextButton_C_Get_Dynamic_Material, Ret_Material) == 0x000000, "Member 'IconTextButton_C_Get_Dynamic_Material::Ret_Material' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_Get_Dynamic_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'IconTextButton_C_Get_Dynamic_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct IconTextButton_C_GetPressProgress final
{
public:
	double                                        Progress;
};
static_assert(alignof(IconTextButton_C_GetPressProgress) == 0x000008, "Wrong alignment on IconTextButton_C_GetPressProgress");
static_assert(sizeof(IconTextButton_C_GetPressProgress) == 0x000008, "Wrong size on IconTextButton_C_GetPressProgress");
static_assert(offsetof(IconTextButton_C_GetPressProgress, Progress) == 0x000000, "Member 'IconTextButton_C_GetPressProgress::Progress' has a wrong offset!");

struct IconTextButton_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(IconTextButton_C_InitializeButton) == 0x000008, "Wrong alignment on IconTextButton_C_InitializeButton");
static_assert(sizeof(IconTextButton_C_InitializeButton) == 0x000010, "Wrong size on IconTextButton_C_InitializeButton");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'IconTextButton_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'IconTextButton_C_InitializeButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'IconTextButton_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct IconTextButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(IconTextButton_C_OnActionProgress) == 0x000004, "Wrong alignment on IconTextButton_C_OnActionProgress");
static_assert(sizeof(IconTextButton_C_OnActionProgress) == 0x000004, "Wrong size on IconTextButton_C_OnActionProgress");
static_assert(offsetof(IconTextButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'IconTextButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct IconTextButton_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(IconTextButton_C_OnFocusLost) == 0x000004, "Wrong alignment on IconTextButton_C_OnFocusLost");
static_assert(sizeof(IconTextButton_C_OnFocusLost) == 0x000008, "Wrong size on IconTextButton_C_OnFocusLost");
static_assert(offsetof(IconTextButton_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'IconTextButton_C_OnFocusLost::InFocusEvent' has a wrong offset!");

struct IconTextButton_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;
	struct FFocusEvent                            InFocusEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            K2Node_MakeStruct_EventReply;
};
static_assert(alignof(IconTextButton_C_OnFocusReceived) == 0x000008, "Wrong alignment on IconTextButton_C_OnFocusReceived");
static_assert(sizeof(IconTextButton_C_OnFocusReceived) == 0x0001B8, "Wrong size on IconTextButton_C_OnFocusReceived");
static_assert(offsetof(IconTextButton_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'IconTextButton_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_OnFocusReceived, InFocusEvent) == 0x000040, "Member 'IconTextButton_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_OnFocusReceived, ReturnValue) == 0x000048, "Member 'IconTextButton_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_OnFocusReceived, K2Node_MakeStruct_EventReply) == 0x000100, "Member 'IconTextButton_C_OnFocusReceived::K2Node_MakeStruct_EventReply' has a wrong offset!");

struct IconTextButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(IconTextButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on IconTextButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(IconTextButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on IconTextButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(IconTextButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'IconTextButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct IconTextButton_C_OnTriggeringInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(IconTextButton_C_OnTriggeringInputActionChanged) == 0x000008, "Wrong alignment on IconTextButton_C_OnTriggeringInputActionChanged");
static_assert(sizeof(IconTextButton_C_OnTriggeringInputActionChanged) == 0x000010, "Wrong size on IconTextButton_C_OnTriggeringInputActionChanged");
static_assert(offsetof(IconTextButton_C_OnTriggeringInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'IconTextButton_C_OnTriggeringInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct IconTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(IconTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on IconTextButton_C_PreConstruct");
static_assert(sizeof(IconTextButton_C_PreConstruct) == 0x000001, "Wrong size on IconTextButton_C_PreConstruct");
static_assert(offsetof(IconTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'IconTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct IconTextButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(IconTextButton_C_Set_Icon) == 0x000010, "Wrong alignment on IconTextButton_C_Set_Icon");
static_assert(sizeof(IconTextButton_C_Set_Icon) == 0x0000C0, "Wrong size on IconTextButton_C_Set_Icon");
static_assert(offsetof(IconTextButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'IconTextButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct IconTextButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
};
static_assert(alignof(IconTextButton_C_Set_Text) == 0x000008, "Wrong alignment on IconTextButton_C_Set_Text");
static_assert(sizeof(IconTextButton_C_Set_Text) == 0x000018, "Wrong size on IconTextButton_C_Set_Text");
static_assert(offsetof(IconTextButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'IconTextButton_C_Set_Text::ButtonText_0' has a wrong offset!");

struct IconTextButton_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;
};
static_assert(alignof(IconTextButton_C_SetContentAlignment) == 0x000001, "Wrong alignment on IconTextButton_C_SetContentAlignment");
static_assert(sizeof(IconTextButton_C_SetContentAlignment) == 0x000001, "Wrong size on IconTextButton_C_SetContentAlignment");
static_assert(offsetof(IconTextButton_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'IconTextButton_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

struct IconTextButton_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButton_C_SetControllerStyle) == 0x000008, "Wrong alignment on IconTextButton_C_SetControllerStyle");
static_assert(sizeof(IconTextButton_C_SetControllerStyle) == 0x000018, "Wrong size on IconTextButton_C_SetControllerStyle");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButton_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButton_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButton_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on IconTextButton_C_SetMouseKeyboardStyle");
static_assert(sizeof(IconTextButton_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on IconTextButton_C_SetMouseKeyboardStyle");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButton_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(IconTextButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on IconTextButton_C_SetTabLabelInfo");
static_assert(sizeof(IconTextButton_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on IconTextButton_C_SetTabLabelInfo");
static_assert(offsetof(IconTextButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'IconTextButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

struct IconTextButton_C_SetTextInternal final
{
public:
	class FText                                   InButtonText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(IconTextButton_C_SetTextInternal) == 0x000008, "Wrong alignment on IconTextButton_C_SetTextInternal");
static_assert(sizeof(IconTextButton_C_SetTextInternal) == 0x000020, "Wrong size on IconTextButton_C_SetTextInternal");
static_assert(offsetof(IconTextButton_C_SetTextInternal, InButtonText) == 0x000000, "Member 'IconTextButton_C_SetTextInternal::InButtonText' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_bool_Variable) == 0x000018, "Member 'IconTextButton_C_SetTextInternal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_byte_Variable) == 0x000019, "Member 'IconTextButton_C_SetTextInternal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_byte_Variable_1) == 0x00001A, "Member 'IconTextButton_C_SetTextInternal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, CallFunc_TextIsEmpty_ReturnValue) == 0x00001B, "Member 'IconTextButton_C_SetTextInternal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, K2Node_Select_Default) == 0x00001C, "Member 'IconTextButton_C_SetTextInternal::K2Node_Select_Default' has a wrong offset!");

struct IconTextButton_C_ShowIcon final
{
public:
	bool                                          bShouldShow;
};
static_assert(alignof(IconTextButton_C_ShowIcon) == 0x000001, "Wrong alignment on IconTextButton_C_ShowIcon");
static_assert(sizeof(IconTextButton_C_ShowIcon) == 0x000001, "Wrong size on IconTextButton_C_ShowIcon");
static_assert(offsetof(IconTextButton_C_ShowIcon, bShouldShow) == 0x000000, "Member 'IconTextButton_C_ShowIcon::bShouldShow' has a wrong offset!");

struct IconTextButton_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(IconTextButton_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateContentAlignment");
static_assert(sizeof(IconTextButton_C_UpdateContentAlignment) == 0x000018, "Wrong size on IconTextButton_C_UpdateContentAlignment");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'IconTextButton_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'IconTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'IconTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct IconTextButton_C_UpdateStyle final
{
public:
	bool                                          UsingGamepad;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(IconTextButton_C_UpdateStyle) == 0x000001, "Wrong alignment on IconTextButton_C_UpdateStyle");
static_assert(sizeof(IconTextButton_C_UpdateStyle) == 0x000003, "Wrong size on IconTextButton_C_UpdateStyle");
static_assert(offsetof(IconTextButton_C_UpdateStyle, UsingGamepad) == 0x000000, "Member 'IconTextButton_C_UpdateStyle::UsingGamepad' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateStyle, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'IconTextButton_C_UpdateStyle::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateStyle, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'IconTextButton_C_UpdateStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct IconTextButton_C_UpdateText final
{
public:
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_GetDisplayText_ReturnValue;
	class FText                                   K2Node_Select_Default;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_3B[0x5];
	class FText                                   K2Node_Select_Default_1;
};
static_assert(alignof(IconTextButton_C_UpdateText) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateText");
static_assert(sizeof(IconTextButton_C_UpdateText) == 0x000058, "Wrong size on IconTextButton_C_UpdateText");
static_assert(offsetof(IconTextButton_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'IconTextButton_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, Temp_bool_Variable_1) == 0x000001, "Member 'IconTextButton_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'IconTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000003, "Member 'IconTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'IconTextButton_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, K2Node_Select_Default) == 0x000020, "Member 'IconTextButton_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000038, "Member 'IconTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'IconTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'IconTextButton_C_UpdateText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, K2Node_Select_Default_1) == 0x000040, "Member 'IconTextButton_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");

struct IconTextButton_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              InputType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on IconTextButton_C_UpdateTextAndStyle");
static_assert(sizeof(IconTextButton_C_UpdateTextAndStyle) == 0x000002, "Wrong size on IconTextButton_C_UpdateTextAndStyle");
static_assert(offsetof(IconTextButton_C_UpdateTextAndStyle, InputType) == 0x000000, "Member 'IconTextButton_C_UpdateTextAndStyle::InputType' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'IconTextButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButton_C_UpdateTextStyle final
{
public:
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
};
static_assert(alignof(IconTextButton_C_UpdateTextStyle) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateTextStyle");
static_assert(sizeof(IconTextButton_C_UpdateTextStyle) == 0x000008, "Wrong size on IconTextButton_C_UpdateTextStyle");
static_assert(offsetof(IconTextButton_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'IconTextButton_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}
