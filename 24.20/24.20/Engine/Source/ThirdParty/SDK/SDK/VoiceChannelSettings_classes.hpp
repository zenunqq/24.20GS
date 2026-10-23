#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVoiceChannelSettings_C final : public UFortVoiceSettingsDisplay
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
	class UFortMobileImage*                       Image_TitleIcon;
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
	void ExecuteUbergraph_VoiceChannelSettings(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelSettings_C">();
	}
	static class UVoiceChannelSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelSettings_C>();
	}
};
static_assert(alignof(UVoiceChannelSettings_C) == 0x000008, "Wrong alignment on UVoiceChannelSettings_C");
static_assert(sizeof(UVoiceChannelSettings_C) == 0x0003B0, "Wrong size on UVoiceChannelSettings_C");
static_assert(offsetof(UVoiceChannelSettings_C, UberGraphFrame) == 0x000330, "Member 'UVoiceChannelSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, GearHover) == 0x000338, "Member 'UVoiceChannelSettings_C::GearHover' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, ActionWidget_InputDisplay) == 0x000340, "Member 'UVoiceChannelSettings_C::ActionWidget_InputDisplay' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, AlertIcon) == 0x000348, "Member 'UVoiceChannelSettings_C::AlertIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_NextInputDevice) == 0x000350, "Member 'UVoiceChannelSettings_C::Button_NextInputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_NextOutputDevice) == 0x000358, "Member 'UVoiceChannelSettings_C::Button_NextOutputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_TogglePTT) == 0x000360, "Member 'UVoiceChannelSettings_C::Button_TogglePTT' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, GearIcon) == 0x000368, "Member 'UVoiceChannelSettings_C::GearIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Image_TitleIcon) == 0x000370, "Member 'UVoiceChannelSettings_C::Image_TitleIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, InputDevice) == 0x000378, "Member 'UVoiceChannelSettings_C::InputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, OutputDevice) == 0x000380, "Member 'UVoiceChannelSettings_C::OutputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, PTTKeybindWidget) == 0x000388, "Member 'UVoiceChannelSettings_C::PTTKeybindWidget' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, PushToTalk) == 0x000390, "Member 'UVoiceChannelSettings_C::PushToTalk' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Text_LowPowerMode) == 0x000398, "Member 'UVoiceChannelSettings_C::Text_LowPowerMode' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, VoiceDisabledIcon) == 0x0003A0, "Member 'UVoiceChannelSettings_C::VoiceDisabledIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, VoiceDisabledText) == 0x0003A8, "Member 'UVoiceChannelSettings_C::VoiceDisabledText' has a wrong offset!");

}
