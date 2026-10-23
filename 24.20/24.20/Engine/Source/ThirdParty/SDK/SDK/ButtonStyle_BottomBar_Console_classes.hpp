#pragma once

#include "Basic.hpp"

#include "ButtonStyle_MediumBase_classes.hpp"

namespace SDK
{

class UButtonStyle_BottomBar_Console_C final : public UButtonStyle_MediumBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-BottomBar-Console_C">();
	}
	static class UButtonStyle_BottomBar_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_BottomBar_Console_C>();
	}
};
static_assert(alignof(UButtonStyle_BottomBar_Console_C) == 0x000010, "Wrong alignment on UButtonStyle_BottomBar_Console_C");
static_assert(sizeof(UButtonStyle_BottomBar_Console_C) == 0x000730, "Wrong size on UButtonStyle_BottomBar_Console_C");

}
