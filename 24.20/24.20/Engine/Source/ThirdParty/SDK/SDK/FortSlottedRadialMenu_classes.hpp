#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortSlottedRadialMenu_C final : public UFortSlottedRadialMenu
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortSlottedRadialMenu_C">();
	}
	static class UFortSlottedRadialMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSlottedRadialMenu_C>();
	}
};
static_assert(alignof(UFortSlottedRadialMenu_C) == 0x000008, "Wrong alignment on UFortSlottedRadialMenu_C");
static_assert(sizeof(UFortSlottedRadialMenu_C) == 0x000378, "Wrong size on UFortSlottedRadialMenu_C");

}
