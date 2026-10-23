#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class USidebar_ButtonStyle_VoiceSettings_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sidebar_ButtonStyle_VoiceSettings_C">();
	}
	static class USidebar_ButtonStyle_VoiceSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebar_ButtonStyle_VoiceSettings_C>();
	}
};
static_assert(alignof(USidebar_ButtonStyle_VoiceSettings_C) == 0x000010, "Wrong alignment on USidebar_ButtonStyle_VoiceSettings_C");
static_assert(sizeof(USidebar_ButtonStyle_VoiceSettings_C) == 0x000730, "Wrong size on USidebar_ButtonStyle_VoiceSettings_C");

}
