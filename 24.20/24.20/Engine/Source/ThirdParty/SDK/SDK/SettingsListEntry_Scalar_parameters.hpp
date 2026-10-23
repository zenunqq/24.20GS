#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	float                                         K2Node_Event_Value;
	uint8                                         Pad_C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         K2Node_Event_DefaultValue;
	uint8                                         Pad_1C[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar) == 0x000008, "Wrong alignment on SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar");
static_assert(sizeof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar) == 0x0001A0, "Wrong size on SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, EntryPoint) == 0x000000, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, K2Node_Event_Value) == 0x000008, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, K2Node_Event_DefaultValue) == 0x000018, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::K2Node_Event_DefaultValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, K2Node_Event_MyGeometry) == 0x000020, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, K2Node_Event_MouseEvent_1) == 0x000060, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000F8, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, CallFunc_PlayAnimationForward_ReturnValue) == 0x000100, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar, K2Node_Event_MouseEvent) == 0x000108, "Member 'SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar::K2Node_Event_MouseEvent' has a wrong offset!");

struct SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong alignment on SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget");
static_assert(sizeof(SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong size on SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget");
static_assert(offsetof(SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget, ReturnValue) == 0x000000, "Member 'SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget::ReturnValue' has a wrong offset!");

struct SettingsListEntry_Scalar_C_OnDefaultValueChanged final
{
public:
	float                                         DefaultValue;
};
static_assert(alignof(SettingsListEntry_Scalar_C_OnDefaultValueChanged) == 0x000004, "Wrong alignment on SettingsListEntry_Scalar_C_OnDefaultValueChanged");
static_assert(sizeof(SettingsListEntry_Scalar_C_OnDefaultValueChanged) == 0x000004, "Wrong size on SettingsListEntry_Scalar_C_OnDefaultValueChanged");
static_assert(offsetof(SettingsListEntry_Scalar_C_OnDefaultValueChanged, DefaultValue) == 0x000000, "Member 'SettingsListEntry_Scalar_C_OnDefaultValueChanged::DefaultValue' has a wrong offset!");

struct SettingsListEntry_Scalar_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Scalar_C_OnMouseEnter) == 0x000008, "Wrong alignment on SettingsListEntry_Scalar_C_OnMouseEnter");
static_assert(sizeof(SettingsListEntry_Scalar_C_OnMouseEnter) == 0x0000D8, "Wrong size on SettingsListEntry_Scalar_C_OnMouseEnter");
static_assert(offsetof(SettingsListEntry_Scalar_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SettingsListEntry_Scalar_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Scalar_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SettingsListEntry_Scalar_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SettingsListEntry_Scalar_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Scalar_C_OnMouseLeave) == 0x000008, "Wrong alignment on SettingsListEntry_Scalar_C_OnMouseLeave");
static_assert(sizeof(SettingsListEntry_Scalar_C_OnMouseLeave) == 0x000098, "Wrong size on SettingsListEntry_Scalar_C_OnMouseLeave");
static_assert(offsetof(SettingsListEntry_Scalar_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SettingsListEntry_Scalar_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct SettingsListEntry_Scalar_C_OnValueChanged final
{
public:
	float                                         Value;
};
static_assert(alignof(SettingsListEntry_Scalar_C_OnValueChanged) == 0x000004, "Wrong alignment on SettingsListEntry_Scalar_C_OnValueChanged");
static_assert(sizeof(SettingsListEntry_Scalar_C_OnValueChanged) == 0x000004, "Wrong size on SettingsListEntry_Scalar_C_OnValueChanged");
static_assert(offsetof(SettingsListEntry_Scalar_C_OnValueChanged, Value) == 0x000000, "Member 'SettingsListEntry_Scalar_C_OnValueChanged::Value' has a wrong offset!");

}
