#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsListEntry_ControllerButton_C final : public UFortSettingsListEntrySetting_ControllerButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USimpleCommonButton_C*                  Button_ControllerAction;

public:
	void BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint);
	void OnSettingAssigned(const class FText& ActionText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_ControllerButton_C">();
	}
	static class USettingsListEntry_ControllerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_ControllerButton_C>();
	}
};
static_assert(alignof(USettingsListEntry_ControllerButton_C) == 0x000008, "Wrong alignment on USettingsListEntry_ControllerButton_C");
static_assert(sizeof(USettingsListEntry_ControllerButton_C) == 0x000300, "Wrong size on USettingsListEntry_ControllerButton_C");
static_assert(offsetof(USettingsListEntry_ControllerButton_C, UberGraphFrame) == 0x0002F0, "Member 'USettingsListEntry_ControllerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_ControllerButton_C, Button_ControllerAction) == 0x0002F8, "Member 'USettingsListEntry_ControllerButton_C::Button_ControllerAction' has a wrong offset!");

}
