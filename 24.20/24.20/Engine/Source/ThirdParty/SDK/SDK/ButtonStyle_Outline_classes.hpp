#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Outline_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Outline_C">();
	}
	static class UButtonStyle_Outline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Outline_C>();
	}
};
static_assert(alignof(UButtonStyle_Outline_C) == 0x000010, "Wrong alignment on UButtonStyle_Outline_C");
static_assert(sizeof(UButtonStyle_Outline_C) == 0x000730, "Wrong size on UButtonStyle_Outline_C");

}
