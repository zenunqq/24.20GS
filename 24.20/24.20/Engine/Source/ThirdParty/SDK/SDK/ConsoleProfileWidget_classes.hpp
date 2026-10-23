#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UConsoleProfileWidget_C final : public UFortConsoleProfileWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleProfileWidget_C">();
	}
	static class UConsoleProfileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleProfileWidget_C>();
	}
};
static_assert(alignof(UConsoleProfileWidget_C) == 0x000008, "Wrong alignment on UConsoleProfileWidget_C");
static_assert(sizeof(UConsoleProfileWidget_C) == 0x000280, "Wrong size on UConsoleProfileWidget_C");

}
