#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_11[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_32[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_3;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_43[0xD];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;
	float                                         K2Node_Event_HeldPercent;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_15B[0x5];
	double                                        K2Node_VariableSet_PressProgress_ImplicitCast;
};
static_assert(alignof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton) == 0x000010, "Wrong alignment on OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton");
static_assert(sizeof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton) == 0x000170, "Wrong size on OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, EntryPoint) == 0x000000, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Event_IsDesignTime) == 0x000010, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetContext_ReturnValue_1) == 0x000020, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetContext_ReturnValue_2) == 0x000028, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_HasAnyChildren_ReturnValue) == 0x000030, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000031, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetContext_ReturnValue_3) == 0x000038, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000040, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_byte_Variable) == 0x000041, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_byte_Variable_1) == 0x000042, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Event_TabLabelInfo) == 0x000050, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Event_NewTriggeredAction) == 0x000140, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Event_HeldPercent) == 0x000150, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_bool_Variable) == 0x000154, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_byte_Variable_2) == 0x000155, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x000156, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_byte_Variable_3) == 0x000157, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Select_Default) == 0x000158, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, Temp_bool_Variable_1) == 0x000159, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_Select_Default_1) == 0x00015A, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton, K2Node_VariableSet_PressProgress_ImplicitCast) == 0x000160, "Member 'OnboardingTextInputActionButton_C_ExecuteUbergraph_OnboardingTextInputActionButton::K2Node_VariableSet_PressProgress_ImplicitCast' has a wrong offset!");

struct OnboardingTextInputActionButton_C_Get_Dynamic_Material final
{
public:
	class UMaterialInstanceDynamic*               Ret_Material;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(OnboardingTextInputActionButton_C_Get_Dynamic_Material) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_Get_Dynamic_Material");
static_assert(sizeof(OnboardingTextInputActionButton_C_Get_Dynamic_Material) == 0x000010, "Wrong size on OnboardingTextInputActionButton_C_Get_Dynamic_Material");
static_assert(offsetof(OnboardingTextInputActionButton_C_Get_Dynamic_Material, Ret_Material) == 0x000000, "Member 'OnboardingTextInputActionButton_C_Get_Dynamic_Material::Ret_Material' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_Get_Dynamic_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'OnboardingTextInputActionButton_C_Get_Dynamic_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct OnboardingTextInputActionButton_C_GetPressProgress final
{
public:
	double                                        Progress;
};
static_assert(alignof(OnboardingTextInputActionButton_C_GetPressProgress) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_GetPressProgress");
static_assert(sizeof(OnboardingTextInputActionButton_C_GetPressProgress) == 0x000008, "Wrong size on OnboardingTextInputActionButton_C_GetPressProgress");
static_assert(offsetof(OnboardingTextInputActionButton_C_GetPressProgress, Progress) == 0x000000, "Member 'OnboardingTextInputActionButton_C_GetPressProgress::Progress' has a wrong offset!");

struct OnboardingTextInputActionButton_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(OnboardingTextInputActionButton_C_InitializeButton) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_InitializeButton");
static_assert(sizeof(OnboardingTextInputActionButton_C_InitializeButton) == 0x000010, "Wrong size on OnboardingTextInputActionButton_C_InitializeButton");
static_assert(offsetof(OnboardingTextInputActionButton_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'OnboardingTextInputActionButton_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_InitializeButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'OnboardingTextInputActionButton_C_InitializeButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'OnboardingTextInputActionButton_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct OnboardingTextInputActionButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(OnboardingTextInputActionButton_C_OnActionProgress) == 0x000004, "Wrong alignment on OnboardingTextInputActionButton_C_OnActionProgress");
static_assert(sizeof(OnboardingTextInputActionButton_C_OnActionProgress) == 0x000004, "Wrong size on OnboardingTextInputActionButton_C_OnActionProgress");
static_assert(offsetof(OnboardingTextInputActionButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'OnboardingTextInputActionButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;
};
static_assert(alignof(OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'OnboardingTextInputActionButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

struct OnboardingTextInputActionButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(OnboardingTextInputActionButton_C_PreConstruct) == 0x000001, "Wrong alignment on OnboardingTextInputActionButton_C_PreConstruct");
static_assert(sizeof(OnboardingTextInputActionButton_C_PreConstruct) == 0x000001, "Wrong size on OnboardingTextInputActionButton_C_PreConstruct");
static_assert(offsetof(OnboardingTextInputActionButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OnboardingTextInputActionButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct OnboardingTextInputActionButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(OnboardingTextInputActionButton_C_Set_Icon) == 0x000010, "Wrong alignment on OnboardingTextInputActionButton_C_Set_Icon");
static_assert(sizeof(OnboardingTextInputActionButton_C_Set_Icon) == 0x0000C0, "Wrong size on OnboardingTextInputActionButton_C_Set_Icon");
static_assert(offsetof(OnboardingTextInputActionButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'OnboardingTextInputActionButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct OnboardingTextInputActionButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
};
static_assert(alignof(OnboardingTextInputActionButton_C_Set_Text) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_Set_Text");
static_assert(sizeof(OnboardingTextInputActionButton_C_Set_Text) == 0x000018, "Wrong size on OnboardingTextInputActionButton_C_Set_Text");
static_assert(offsetof(OnboardingTextInputActionButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'OnboardingTextInputActionButton_C_Set_Text::ButtonText_0' has a wrong offset!");

struct OnboardingTextInputActionButton_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;
};
static_assert(alignof(OnboardingTextInputActionButton_C_SetContentAlignment) == 0x000001, "Wrong alignment on OnboardingTextInputActionButton_C_SetContentAlignment");
static_assert(sizeof(OnboardingTextInputActionButton_C_SetContentAlignment) == 0x000001, "Wrong size on OnboardingTextInputActionButton_C_SetContentAlignment");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'OnboardingTextInputActionButton_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

struct OnboardingTextInputActionButton_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
};
static_assert(alignof(OnboardingTextInputActionButton_C_SetControllerStyle) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_SetControllerStyle");
static_assert(sizeof(OnboardingTextInputActionButton_C_SetControllerStyle) == 0x000018, "Wrong size on OnboardingTextInputActionButton_C_SetControllerStyle");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'OnboardingTextInputActionButton_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'OnboardingTextInputActionButton_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetControllerStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'OnboardingTextInputActionButton_C_SetControllerStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

struct OnboardingTextInputActionButton_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
};
static_assert(alignof(OnboardingTextInputActionButton_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_SetMouseKeyboardStyle");
static_assert(sizeof(OnboardingTextInputActionButton_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on OnboardingTextInputActionButton_C_SetMouseKeyboardStyle");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'OnboardingTextInputActionButton_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'OnboardingTextInputActionButton_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetMouseKeyboardStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'OnboardingTextInputActionButton_C_SetMouseKeyboardStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

struct OnboardingTextInputActionButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(OnboardingTextInputActionButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on OnboardingTextInputActionButton_C_SetTabLabelInfo");
static_assert(sizeof(OnboardingTextInputActionButton_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on OnboardingTextInputActionButton_C_SetTabLabelInfo");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'OnboardingTextInputActionButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

struct OnboardingTextInputActionButton_C_SetTextInternal final
{
public:
	class FText                                   InButtonText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(OnboardingTextInputActionButton_C_SetTextInternal) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_SetTextInternal");
static_assert(sizeof(OnboardingTextInputActionButton_C_SetTextInternal) == 0x000020, "Wrong size on OnboardingTextInputActionButton_C_SetTextInternal");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, InButtonText) == 0x000000, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::InButtonText' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, Temp_bool_Variable) == 0x000018, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, Temp_byte_Variable) == 0x000019, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, Temp_byte_Variable_1) == 0x00001A, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, CallFunc_TextIsEmpty_ReturnValue) == 0x00001B, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_SetTextInternal, K2Node_Select_Default) == 0x00001C, "Member 'OnboardingTextInputActionButton_C_SetTextInternal::K2Node_Select_Default' has a wrong offset!");

struct OnboardingTextInputActionButton_C_ShowIcon final
{
public:
	bool                                          bShouldShow;
};
static_assert(alignof(OnboardingTextInputActionButton_C_ShowIcon) == 0x000001, "Wrong alignment on OnboardingTextInputActionButton_C_ShowIcon");
static_assert(sizeof(OnboardingTextInputActionButton_C_ShowIcon) == 0x000001, "Wrong size on OnboardingTextInputActionButton_C_ShowIcon");
static_assert(offsetof(OnboardingTextInputActionButton_C_ShowIcon, bShouldShow) == 0x000000, "Member 'OnboardingTextInputActionButton_C_ShowIcon::bShouldShow' has a wrong offset!");

struct OnboardingTextInputActionButton_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(OnboardingTextInputActionButton_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_UpdateContentAlignment");
static_assert(sizeof(OnboardingTextInputActionButton_C_UpdateContentAlignment) == 0x000018, "Wrong size on OnboardingTextInputActionButton_C_UpdateContentAlignment");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'OnboardingTextInputActionButton_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'OnboardingTextInputActionButton_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'OnboardingTextInputActionButton_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct OnboardingTextInputActionButton_C_UpdateStyle final
{
public:
	ECommonInputType                              CurrentInputType;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_2[0x6];
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable;
	TSubclassOf<class UCommonButtonStyle>         K2Node_Select_Default;
};
static_assert(alignof(OnboardingTextInputActionButton_C_UpdateStyle) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_UpdateStyle");
static_assert(sizeof(OnboardingTextInputActionButton_C_UpdateStyle) == 0x000018, "Wrong size on OnboardingTextInputActionButton_C_UpdateStyle");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateStyle, CurrentInputType) == 0x000000, "Member 'OnboardingTextInputActionButton_C_UpdateStyle::CurrentInputType' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateStyle, Temp_byte_Variable) == 0x000001, "Member 'OnboardingTextInputActionButton_C_UpdateStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateStyle, Temp_class_Variable) == 0x000008, "Member 'OnboardingTextInputActionButton_C_UpdateStyle::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateStyle, K2Node_Select_Default) == 0x000010, "Member 'OnboardingTextInputActionButton_C_UpdateStyle::K2Node_Select_Default' has a wrong offset!");

struct OnboardingTextInputActionButton_C_UpdateText final
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
static_assert(alignof(OnboardingTextInputActionButton_C_UpdateText) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_UpdateText");
static_assert(sizeof(OnboardingTextInputActionButton_C_UpdateText) == 0x000058, "Wrong size on OnboardingTextInputActionButton_C_UpdateText");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'OnboardingTextInputActionButton_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, Temp_bool_Variable_1) == 0x000001, "Member 'OnboardingTextInputActionButton_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000003, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, K2Node_Select_Default) == 0x000020, "Member 'OnboardingTextInputActionButton_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000038, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'OnboardingTextInputActionButton_C_UpdateText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateText, K2Node_Select_Default_1) == 0x000040, "Member 'OnboardingTextInputActionButton_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");

struct OnboardingTextInputActionButton_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              InputType;
};
static_assert(alignof(OnboardingTextInputActionButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on OnboardingTextInputActionButton_C_UpdateTextAndStyle");
static_assert(sizeof(OnboardingTextInputActionButton_C_UpdateTextAndStyle) == 0x000001, "Wrong size on OnboardingTextInputActionButton_C_UpdateTextAndStyle");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateTextAndStyle, InputType) == 0x000000, "Member 'OnboardingTextInputActionButton_C_UpdateTextAndStyle::InputType' has a wrong offset!");

struct OnboardingTextInputActionButton_C_UpdateTextStyle final
{
public:
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
};
static_assert(alignof(OnboardingTextInputActionButton_C_UpdateTextStyle) == 0x000008, "Wrong alignment on OnboardingTextInputActionButton_C_UpdateTextStyle");
static_assert(sizeof(OnboardingTextInputActionButton_C_UpdateTextStyle) == 0x000008, "Wrong size on OnboardingTextInputActionButton_C_UpdateTextStyle");
static_assert(offsetof(OnboardingTextInputActionButton_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'OnboardingTextInputActionButton_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}
