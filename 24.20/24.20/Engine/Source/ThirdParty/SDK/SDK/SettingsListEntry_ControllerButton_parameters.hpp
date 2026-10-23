#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_ActionText;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
};
static_assert(alignof(SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton) == 0x000008, "Wrong alignment on SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton");
static_assert(sizeof(SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton) == 0x000028, "Wrong size on SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton");
static_assert(offsetof(SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton, EntryPoint) == 0x000000, "Member 'SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton, K2Node_Event_ActionText) == 0x000008, "Member 'SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton::K2Node_Event_ActionText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton, K2Node_ComponentBoundEvent_Button) == 0x000020, "Member 'SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

struct SettingsListEntry_ControllerButton_C_OnSettingAssigned final
{
public:
	class FText                                   ActionText;
};
static_assert(alignof(SettingsListEntry_ControllerButton_C_OnSettingAssigned) == 0x000008, "Wrong alignment on SettingsListEntry_ControllerButton_C_OnSettingAssigned");
static_assert(sizeof(SettingsListEntry_ControllerButton_C_OnSettingAssigned) == 0x000018, "Wrong size on SettingsListEntry_ControllerButton_C_OnSettingAssigned");
static_assert(offsetof(SettingsListEntry_ControllerButton_C_OnSettingAssigned, ActionText) == 0x000000, "Member 'SettingsListEntry_ControllerButton_C_OnSettingAssigned::ActionText' has a wrong offset!");

}
