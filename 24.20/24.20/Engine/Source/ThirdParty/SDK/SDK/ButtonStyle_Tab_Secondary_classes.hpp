#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Tab_Secondary_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Tab-Secondary_C">();
	}
	static class UButtonStyle_Tab_Secondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Tab_Secondary_C>();
	}
};
static_assert(alignof(UButtonStyle_Tab_Secondary_C) == 0x000010, "Wrong alignment on UButtonStyle_Tab_Secondary_C");
static_assert(sizeof(UButtonStyle_Tab_Secondary_C) == 0x000730, "Wrong size on UButtonStyle_Tab_Secondary_C");

}
