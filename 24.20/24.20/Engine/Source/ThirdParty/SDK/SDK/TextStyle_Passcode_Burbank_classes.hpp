#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Passcode_Burbank_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle_Passcode_Burbank_C">();
	}
	static class UTextStyle_Passcode_Burbank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Passcode_Burbank_C>();
	}
};
static_assert(alignof(UTextStyle_Passcode_Burbank_C) == 0x000010, "Wrong alignment on UTextStyle_Passcode_Burbank_C");
static_assert(sizeof(UTextStyle_Passcode_Burbank_C) == 0x0001A0, "Wrong size on UTextStyle_Passcode_Burbank_C");

}
