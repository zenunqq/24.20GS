#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextScrollStyle_NoFade_C final : public UCommonTextScrollStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextScrollStyle-NoFade_C">();
	}
	static class UTextScrollStyle_NoFade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextScrollStyle_NoFade_C>();
	}
};
static_assert(alignof(UTextScrollStyle_NoFade_C) == 0x000008, "Wrong alignment on UTextScrollStyle_NoFade_C");
static_assert(sizeof(UTextScrollStyle_NoFade_C) == 0x000040, "Wrong size on UTextScrollStyle_NoFade_C");

}
