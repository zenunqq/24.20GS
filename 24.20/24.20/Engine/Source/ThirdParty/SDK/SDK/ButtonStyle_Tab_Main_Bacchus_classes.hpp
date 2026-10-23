#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Tab_Main_classes.hpp"

namespace SDK
{

class UButtonStyle_Tab_Main_Bacchus_C final : public UButtonStyle_Tab_Main_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Tab-Main_Bacchus_C">();
	}
	static class UButtonStyle_Tab_Main_Bacchus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Tab_Main_Bacchus_C>();
	}
};
static_assert(alignof(UButtonStyle_Tab_Main_Bacchus_C) == 0x000010, "Wrong alignment on UButtonStyle_Tab_Main_Bacchus_C");
static_assert(sizeof(UButtonStyle_Tab_Main_Bacchus_C) == 0x000730, "Wrong size on UButtonStyle_Tab_Main_Bacchus_C");

}
