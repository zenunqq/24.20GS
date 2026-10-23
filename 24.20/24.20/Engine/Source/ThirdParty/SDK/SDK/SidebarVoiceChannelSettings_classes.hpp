#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarVoiceChannelSettings_C final : public UFortVoiceSettingsDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       GearHover;
	class UCommonActionWidget*                    ActionWidget_InputDisplay;
	class UImage*                                 AlertIcon;
	class UIconTextButton_C*                      Button_NextInputDevice;
	class UIconTextButton_C*                      Button_NextOutputDevice;
	class UIconTextButton_C*                      Button_TogglePTT;
	class UImage*                                 GearIcon;
	class UCommonRichTextBlock*                   InputDevice;
	class UCommonRichTextBlock*                   OutputDevice;
	class UKeybindWidget_C*                       PTTKeybindWidget;
	class UCommonRichTextBlock*                   PushToTalk;
	class UCommonTextBlock*                       Text_LowPowerMode;
	class UImage*                                 VoiceDisabledIcon;
	class UCommonRichTextBlock*                   VoiceDisabledText;

public:
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_SidebarVoiceChannelSettings(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarVoiceChannelSettings_C">();
	}
	static class USidebarVoiceChannelSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarVoiceChannelSettings_C>();
	}
};
static_assert(alignof(USidebarVoiceChannelSettings_C) == 0x000008, "Wrong alignment on USidebarVoiceChannelSettings_C");
static_assert(sizeof(USidebarVoiceChannelSettings_C) == 0x0003A8, "Wrong size on USidebarVoiceChannelSettings_C");
static_assert(offsetof(USidebarVoiceChannelSettings_C, UberGraphFrame) == 0x000330, "Member 'USidebarVoiceChannelSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, GearHover) == 0x000338, "Member 'USidebarVoiceChannelSettings_C::GearHover' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, ActionWidget_InputDisplay) == 0x000340, "Member 'USidebarVoiceChannelSettings_C::ActionWidget_InputDisplay' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, AlertIcon) == 0x000348, "Member 'USidebarVoiceChannelSettings_C::AlertIcon' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, Button_NextInputDevice) == 0x000350, "Member 'USidebarVoiceChannelSettings_C::Button_NextInputDevice' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, Button_NextOutputDevice) == 0x000358, "Member 'USidebarVoiceChannelSettings_C::Button_NextOutputDevice' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, Button_TogglePTT) == 0x000360, "Member 'USidebarVoiceChannelSettings_C::Button_TogglePTT' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, GearIcon) == 0x000368, "Member 'USidebarVoiceChannelSettings_C::GearIcon' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, InputDevice) == 0x000370, "Member 'USidebarVoiceChannelSettings_C::InputDevice' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, OutputDevice) == 0x000378, "Member 'USidebarVoiceChannelSettings_C::OutputDevice' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, PTTKeybindWidget) == 0x000380, "Member 'USidebarVoiceChannelSettings_C::PTTKeybindWidget' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, PushToTalk) == 0x000388, "Member 'USidebarVoiceChannelSettings_C::PushToTalk' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, Text_LowPowerMode) == 0x000390, "Member 'USidebarVoiceChannelSettings_C::Text_LowPowerMode' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, VoiceDisabledIcon) == 0x000398, "Member 'USidebarVoiceChannelSettings_C::VoiceDisabledIcon' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelSettings_C, VoiceDisabledText) == 0x0003A0, "Member 'USidebarVoiceChannelSettings_C::VoiceDisabledText' has a wrong offset!");

}
