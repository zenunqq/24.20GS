#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_EndGameButtonBar_Bacchus_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-EndGameButtonBar-Bacchus_C">();
	}
	static class UButtonStyle_EndGameButtonBar_Bacchus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_EndGameButtonBar_Bacchus_C>();
	}
};
static_assert(alignof(UButtonStyle_EndGameButtonBar_Bacchus_C) == 0x000010, "Wrong alignment on UButtonStyle_EndGameButtonBar_Bacchus_C");
static_assert(sizeof(UButtonStyle_EndGameButtonBar_Bacchus_C) == 0x000730, "Wrong size on UButtonStyle_EndGameButtonBar_Bacchus_C");

}
