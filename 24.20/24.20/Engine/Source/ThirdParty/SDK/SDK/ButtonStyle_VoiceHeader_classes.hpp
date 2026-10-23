#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_VoiceHeader_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_VoiceHeader_C">();
	}
	static class UButtonStyle_VoiceHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_VoiceHeader_C>();
	}
};
static_assert(alignof(UButtonStyle_VoiceHeader_C) == 0x000010, "Wrong alignment on UButtonStyle_VoiceHeader_C");
static_assert(sizeof(UButtonStyle_VoiceHeader_C) == 0x000730, "Wrong size on UButtonStyle_VoiceHeader_C");

}
