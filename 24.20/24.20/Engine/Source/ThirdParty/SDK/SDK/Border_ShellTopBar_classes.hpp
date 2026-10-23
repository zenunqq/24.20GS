#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_ShellTopBar_C : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-ShellTopBar_C">();
	}
	static class UBorder_ShellTopBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_ShellTopBar_C>();
	}
};
static_assert(alignof(UBorder_ShellTopBar_C) == 0x000010, "Wrong alignment on UBorder_ShellTopBar_C");
static_assert(sizeof(UBorder_ShellTopBar_C) == 0x0000F0, "Wrong size on UBorder_ShellTopBar_C");

}
