#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_VoiceSettings_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_VoiceSettings_C">();
	}
	static class UButtonStyle_VoiceSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_VoiceSettings_C>();
	}
};
static_assert(alignof(UButtonStyle_VoiceSettings_C) == 0x000010, "Wrong alignment on UButtonStyle_VoiceSettings_C");
static_assert(sizeof(UButtonStyle_VoiceSettings_C) == 0x000730, "Wrong size on UButtonStyle_VoiceSettings_C");

}
