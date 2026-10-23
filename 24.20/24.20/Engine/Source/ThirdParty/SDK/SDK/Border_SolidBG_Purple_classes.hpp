#pragma once

#include "Basic.hpp"

#include "Border_ShellTopBar_classes.hpp"

namespace SDK
{

class UBorder_SolidBG_Purple_C final : public UBorder_ShellTopBar_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-SolidBG-Purple_C">();
	}
	static class UBorder_SolidBG_Purple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_SolidBG_Purple_C>();
	}
};
static_assert(alignof(UBorder_SolidBG_Purple_C) == 0x000010, "Wrong alignment on UBorder_SolidBG_Purple_C");
static_assert(sizeof(UBorder_SolidBG_Purple_C) == 0x0000F0, "Wrong size on UBorder_SolidBG_Purple_C");

}
