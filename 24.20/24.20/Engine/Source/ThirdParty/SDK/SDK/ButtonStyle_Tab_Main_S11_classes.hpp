#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Tab_Main_S11_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Tab-Main-S11_C">();
	}
	static class UButtonStyle_Tab_Main_S11_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Tab_Main_S11_C>();
	}
};
static_assert(alignof(UButtonStyle_Tab_Main_S11_C) == 0x000010, "Wrong alignment on UButtonStyle_Tab_Main_S11_C");
static_assert(sizeof(UButtonStyle_Tab_Main_S11_C) == 0x000730, "Wrong size on UButtonStyle_Tab_Main_S11_C");

}
