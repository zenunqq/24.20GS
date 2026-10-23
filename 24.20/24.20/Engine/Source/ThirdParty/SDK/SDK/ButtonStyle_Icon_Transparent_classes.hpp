#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Icon_Transparent_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Icon_Transparent_C">();
	}
	static class UButtonStyle_Icon_Transparent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Icon_Transparent_C>();
	}
};
static_assert(alignof(UButtonStyle_Icon_Transparent_C) == 0x000010, "Wrong alignment on UButtonStyle_Icon_Transparent_C");
static_assert(sizeof(UButtonStyle_Icon_Transparent_C) == 0x000730, "Wrong size on UButtonStyle_Icon_Transparent_C");

}
