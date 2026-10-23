#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Left_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Left_C">();
	}
	static class UButtonStyle_Left_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Left_C>();
	}
};
static_assert(alignof(UButtonStyle_Left_C) == 0x000010, "Wrong alignment on UButtonStyle_Left_C");
static_assert(sizeof(UButtonStyle_Left_C) == 0x000730, "Wrong size on UButtonStyle_Left_C");

}
