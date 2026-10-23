#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	uint8                                         Pad_6[0x2];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_13[0x5];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_2;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_3;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_33[0xD];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;
	float                                         K2Node_Event_HeldPercent;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_14A[0x2];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_15D[0x3];
	double                                        K2Node_VariableSet_PressProgress_ImplicitCast;
};
static_assert(alignof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold) == 0x000010, "Wrong alignment on IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold");
static_assert(sizeof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold) == 0x000170, "Wrong size on IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, EntryPoint) == 0x000000, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::EntryPoint' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Event_IsDesignTime) == 0x000004, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_HasAnyChildren_ReturnValue) == 0x000005, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000011, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000012, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetContext_ReturnValue_2) == 0x000020, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetContext_ReturnValue_3) == 0x000028, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetCurrentInputType_ReturnValue) == 0x000030, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000031, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_byte_Variable) == 0x000032, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Event_TabLabelInfo) == 0x000040, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Event_NewTriggeredAction) == 0x000130, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Event_HeldPercent) == 0x000140, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_byte_Variable_1) == 0x000144, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_bool_Variable) == 0x000145, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x000146, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_byte_Variable_2) == 0x000147, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Select_Default) == 0x000148, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_byte_Variable_3) == 0x000149, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_CreateDelegate_OutputDelegate) == 0x00014C, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_Not_PreBool_ReturnValue) == 0x000158, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_BooleanAND_ReturnValue) == 0x000159, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, Temp_bool_Variable_1) == 0x00015A, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, CallFunc_BooleanAND_ReturnValue_1) == 0x00015B, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_Select_Default_1) == 0x00015C, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold, K2Node_VariableSet_PressProgress_ImplicitCast) == 0x000160, "Member 'IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold::K2Node_VariableSet_PressProgress_ImplicitCast' has a wrong offset!");

struct IconTextButtonHold_C_Get_Dynamic_Material final
{
public:
	class UMaterialInstanceDynamic*               Ret_Material;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_Get_Dynamic_Material) == 0x000008, "Wrong alignment on IconTextButtonHold_C_Get_Dynamic_Material");
static_assert(sizeof(IconTextButtonHold_C_Get_Dynamic_Material) == 0x000010, "Wrong size on IconTextButtonHold_C_Get_Dynamic_Material");
static_assert(offsetof(IconTextButtonHold_C_Get_Dynamic_Material, Ret_Material) == 0x000000, "Member 'IconTextButtonHold_C_Get_Dynamic_Material::Ret_Material' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_Get_Dynamic_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_Get_Dynamic_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_GetPressProgress final
{
public:
	double                                        Progress;
};
static_assert(alignof(IconTextButtonHold_C_GetPressProgress) == 0x000008, "Wrong alignment on IconTextButtonHold_C_GetPressProgress");
static_assert(sizeof(IconTextButtonHold_C_GetPressProgress) == 0x000008, "Wrong size on IconTextButtonHold_C_GetPressProgress");
static_assert(offsetof(IconTextButtonHold_C_GetPressProgress, Progress) == 0x000000, "Member 'IconTextButtonHold_C_GetPressProgress::Progress' has a wrong offset!");

struct IconTextButtonHold_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_InitializeButton) == 0x000008, "Wrong alignment on IconTextButtonHold_C_InitializeButton");
static_assert(sizeof(IconTextButtonHold_C_InitializeButton) == 0x000010, "Wrong size on IconTextButtonHold_C_InitializeButton");
static_assert(offsetof(IconTextButtonHold_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'IconTextButtonHold_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_InitializeButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_InitializeButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'IconTextButtonHold_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(IconTextButtonHold_C_OnActionProgress) == 0x000004, "Wrong alignment on IconTextButtonHold_C_OnActionProgress");
static_assert(sizeof(IconTextButtonHold_C_OnActionProgress) == 0x000004, "Wrong size on IconTextButtonHold_C_OnActionProgress");
static_assert(offsetof(IconTextButtonHold_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'IconTextButtonHold_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct IconTextButtonHold_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(IconTextButtonHold_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on IconTextButtonHold_C_OnTriggeredInputActionChanged");
static_assert(sizeof(IconTextButtonHold_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on IconTextButtonHold_C_OnTriggeredInputActionChanged");
static_assert(offsetof(IconTextButtonHold_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'IconTextButtonHold_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct IconTextButtonHold_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(IconTextButtonHold_C_PreConstruct) == 0x000001, "Wrong alignment on IconTextButtonHold_C_PreConstruct");
static_assert(sizeof(IconTextButtonHold_C_PreConstruct) == 0x000001, "Wrong size on IconTextButtonHold_C_PreConstruct");
static_assert(offsetof(IconTextButtonHold_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'IconTextButtonHold_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct IconTextButtonHold_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(IconTextButtonHold_C_Set_Icon) == 0x000010, "Wrong alignment on IconTextButtonHold_C_Set_Icon");
static_assert(sizeof(IconTextButtonHold_C_Set_Icon) == 0x0000C0, "Wrong size on IconTextButtonHold_C_Set_Icon");
static_assert(offsetof(IconTextButtonHold_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'IconTextButtonHold_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct IconTextButtonHold_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
};
static_assert(alignof(IconTextButtonHold_C_Set_Text) == 0x000008, "Wrong alignment on IconTextButtonHold_C_Set_Text");
static_assert(sizeof(IconTextButtonHold_C_Set_Text) == 0x000018, "Wrong size on IconTextButtonHold_C_Set_Text");
static_assert(offsetof(IconTextButtonHold_C_Set_Text, ButtonText_0) == 0x000000, "Member 'IconTextButtonHold_C_Set_Text::ButtonText_0' has a wrong offset!");

struct IconTextButtonHold_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;
};
static_assert(alignof(IconTextButtonHold_C_SetContentAlignment) == 0x000001, "Wrong alignment on IconTextButtonHold_C_SetContentAlignment");
static_assert(sizeof(IconTextButtonHold_C_SetContentAlignment) == 0x000001, "Wrong size on IconTextButtonHold_C_SetContentAlignment");
static_assert(offsetof(IconTextButtonHold_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'IconTextButtonHold_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

struct IconTextButtonHold_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_SetControllerStyle) == 0x000008, "Wrong alignment on IconTextButtonHold_C_SetControllerStyle");
static_assert(sizeof(IconTextButtonHold_C_SetControllerStyle) == 0x000018, "Wrong size on IconTextButtonHold_C_SetControllerStyle");
static_assert(offsetof(IconTextButtonHold_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButtonHold_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetControllerStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButtonHold_C_SetControllerStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetControllerStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButtonHold_C_SetControllerStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on IconTextButtonHold_C_SetMouseKeyboardStyle");
static_assert(sizeof(IconTextButtonHold_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on IconTextButtonHold_C_SetMouseKeyboardStyle");
static_assert(offsetof(IconTextButtonHold_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButtonHold_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetMouseKeyboardStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButtonHold_C_SetMouseKeyboardStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetMouseKeyboardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButtonHold_C_SetMouseKeyboardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(IconTextButtonHold_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on IconTextButtonHold_C_SetTabLabelInfo");
static_assert(sizeof(IconTextButtonHold_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on IconTextButtonHold_C_SetTabLabelInfo");
static_assert(offsetof(IconTextButtonHold_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'IconTextButtonHold_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

struct IconTextButtonHold_C_SetTextInternal final
{
public:
	class FText                                   InButtonText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(IconTextButtonHold_C_SetTextInternal) == 0x000008, "Wrong alignment on IconTextButtonHold_C_SetTextInternal");
static_assert(sizeof(IconTextButtonHold_C_SetTextInternal) == 0x000020, "Wrong size on IconTextButtonHold_C_SetTextInternal");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, InButtonText) == 0x000000, "Member 'IconTextButtonHold_C_SetTextInternal::InButtonText' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, Temp_bool_Variable) == 0x000018, "Member 'IconTextButtonHold_C_SetTextInternal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, Temp_byte_Variable) == 0x000019, "Member 'IconTextButtonHold_C_SetTextInternal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, Temp_byte_Variable_1) == 0x00001A, "Member 'IconTextButtonHold_C_SetTextInternal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, CallFunc_TextIsEmpty_ReturnValue) == 0x00001B, "Member 'IconTextButtonHold_C_SetTextInternal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_SetTextInternal, K2Node_Select_Default) == 0x00001C, "Member 'IconTextButtonHold_C_SetTextInternal::K2Node_Select_Default' has a wrong offset!");

struct IconTextButtonHold_C_ShowIcon final
{
public:
	bool                                          bShouldShow;
};
static_assert(alignof(IconTextButtonHold_C_ShowIcon) == 0x000001, "Wrong alignment on IconTextButtonHold_C_ShowIcon");
static_assert(sizeof(IconTextButtonHold_C_ShowIcon) == 0x000001, "Wrong size on IconTextButtonHold_C_ShowIcon");
static_assert(offsetof(IconTextButtonHold_C_ShowIcon, bShouldShow) == 0x000000, "Member 'IconTextButtonHold_C_ShowIcon::bShouldShow' has a wrong offset!");

struct IconTextButtonHold_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(IconTextButtonHold_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on IconTextButtonHold_C_UpdateContentAlignment");
static_assert(sizeof(IconTextButtonHold_C_UpdateContentAlignment) == 0x000018, "Wrong size on IconTextButtonHold_C_UpdateContentAlignment");
static_assert(offsetof(IconTextButtonHold_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'IconTextButtonHold_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'IconTextButtonHold_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'IconTextButtonHold_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct IconTextButtonHold_C_UpdateStyle final
{
public:
	bool                                          UsingGamepad;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_UpdateStyle) == 0x000001, "Wrong alignment on IconTextButtonHold_C_UpdateStyle");
static_assert(sizeof(IconTextButtonHold_C_UpdateStyle) == 0x000003, "Wrong size on IconTextButtonHold_C_UpdateStyle");
static_assert(offsetof(IconTextButtonHold_C_UpdateStyle, UsingGamepad) == 0x000000, "Member 'IconTextButtonHold_C_UpdateStyle::UsingGamepad' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateStyle, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'IconTextButtonHold_C_UpdateStyle::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateStyle, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'IconTextButtonHold_C_UpdateStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_UpdateText final
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
static_assert(alignof(IconTextButtonHold_C_UpdateText) == 0x000008, "Wrong alignment on IconTextButtonHold_C_UpdateText");
static_assert(sizeof(IconTextButtonHold_C_UpdateText) == 0x000058, "Wrong size on IconTextButtonHold_C_UpdateText");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'IconTextButtonHold_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, Temp_bool_Variable_1) == 0x000001, "Member 'IconTextButtonHold_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000003, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, K2Node_Select_Default) == 0x000020, "Member 'IconTextButtonHold_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000038, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'IconTextButtonHold_C_UpdateText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateText, K2Node_Select_Default_1) == 0x000040, "Member 'IconTextButtonHold_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");

struct IconTextButtonHold_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              InputType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on IconTextButtonHold_C_UpdateTextAndStyle");
static_assert(sizeof(IconTextButtonHold_C_UpdateTextAndStyle) == 0x000002, "Wrong size on IconTextButtonHold_C_UpdateTextAndStyle");
static_assert(offsetof(IconTextButtonHold_C_UpdateTextAndStyle, InputType) == 0x000000, "Member 'IconTextButtonHold_C_UpdateTextAndStyle::InputType' has a wrong offset!");
static_assert(offsetof(IconTextButtonHold_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'IconTextButtonHold_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct IconTextButtonHold_C_UpdateTextStyle final
{
public:
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
};
static_assert(alignof(IconTextButtonHold_C_UpdateTextStyle) == 0x000008, "Wrong alignment on IconTextButtonHold_C_UpdateTextStyle");
static_assert(sizeof(IconTextButtonHold_C_UpdateTextStyle) == 0x000008, "Wrong size on IconTextButtonHold_C_UpdateTextStyle");
static_assert(offsetof(IconTextButtonHold_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'IconTextButtonHold_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}
