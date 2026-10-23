#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Solo_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Solo_C">();
	}
	static class UButtonStyle_Solo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Solo_C>();
	}
};
static_assert(alignof(UButtonStyle_Solo_C) == 0x000010, "Wrong alignment on UButtonStyle_Solo_C");
static_assert(sizeof(UButtonStyle_Solo_C) == 0x000730, "Wrong size on UButtonStyle_Solo_C");

}
