#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_199[0x7];
	class FText                                   K2Node_Event_ActionText;
	bool                                          K2Node_Event_bShowKeybindWidget;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action) == 0x000008, "Wrong alignment on SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action");
static_assert(sizeof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action) == 0x0001C0, "Wrong size on SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, EntryPoint) == 0x000000, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000008, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_Event_MyGeometry) == 0x000028, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_Event_MouseEvent_1) == 0x000068, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_Event_MouseEvent) == 0x000100, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, CallFunc_IsUsingTouch_ReturnValue) == 0x000198, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_Event_ActionText) == 0x0001A0, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_Event_ActionText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, K2Node_Event_bShowKeybindWidget) == 0x0001B8, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::K2Node_Event_bShowKeybindWidget' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action, CallFunc_Not_PreBool_ReturnValue) == 0x0001B9, "Member 'SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong alignment on SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget");
static_assert(sizeof(SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong size on SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget");
static_assert(offsetof(SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget, ReturnValue) == 0x000000, "Member 'SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget::ReturnValue' has a wrong offset!");

struct SettingsListEntry_Action_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Action_C_OnMouseEnter) == 0x000008, "Wrong alignment on SettingsListEntry_Action_C_OnMouseEnter");
static_assert(sizeof(SettingsListEntry_Action_C_OnMouseEnter) == 0x0000D8, "Wrong size on SettingsListEntry_Action_C_OnMouseEnter");
static_assert(offsetof(SettingsListEntry_Action_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SettingsListEntry_Action_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SettingsListEntry_Action_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SettingsListEntry_Action_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Action_C_OnMouseLeave) == 0x000008, "Wrong alignment on SettingsListEntry_Action_C_OnMouseLeave");
static_assert(sizeof(SettingsListEntry_Action_C_OnMouseLeave) == 0x000098, "Wrong size on SettingsListEntry_Action_C_OnMouseLeave");
static_assert(offsetof(SettingsListEntry_Action_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SettingsListEntry_Action_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct SettingsListEntry_Action_C_OnSettingAssigned final
{
public:
	class FText                                   ActionText;
	bool                                          bShowKeybindWidget;
};
static_assert(alignof(SettingsListEntry_Action_C_OnSettingAssigned) == 0x000008, "Wrong alignment on SettingsListEntry_Action_C_OnSettingAssigned");
static_assert(sizeof(SettingsListEntry_Action_C_OnSettingAssigned) == 0x000020, "Wrong size on SettingsListEntry_Action_C_OnSettingAssigned");
static_assert(offsetof(SettingsListEntry_Action_C_OnSettingAssigned, ActionText) == 0x000000, "Member 'SettingsListEntry_Action_C_OnSettingAssigned::ActionText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Action_C_OnSettingAssigned, bShowKeybindWidget) == 0x000018, "Member 'SettingsListEntry_Action_C_OnSettingAssigned::bShowKeybindWidget' has a wrong offset!");

}
