#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Right_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Right_C">();
	}
	static class UButtonStyle_Right_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Right_C>();
	}
};
static_assert(alignof(UButtonStyle_Right_C) == 0x000010, "Wrong alignment on UButtonStyle_Right_C");
static_assert(sizeof(UButtonStyle_Right_C) == 0x000730, "Wrong size on UButtonStyle_Right_C");

}
