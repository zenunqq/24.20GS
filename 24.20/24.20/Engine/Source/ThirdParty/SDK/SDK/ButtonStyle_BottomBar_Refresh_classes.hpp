#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_BottomBar_Refresh_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-BottomBar_Refresh_C">();
	}
	static class UButtonStyle_BottomBar_Refresh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_BottomBar_Refresh_C>();
	}
};
static_assert(alignof(UButtonStyle_BottomBar_Refresh_C) == 0x000010, "Wrong alignment on UButtonStyle_BottomBar_Refresh_C");
static_assert(sizeof(UButtonStyle_BottomBar_Refresh_C) == 0x000730, "Wrong size on UButtonStyle_BottomBar_Refresh_C");

}
