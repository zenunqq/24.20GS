#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFlagTile_C final : public UFortFlagTileButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlagTile_C">();
	}
	static class UFlagTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlagTile_C>();
	}
};
static_assert(alignof(UFlagTile_C) == 0x000010, "Wrong alignment on UFlagTile_C");
static_assert(sizeof(UFlagTile_C) == 0x001460, "Wrong size on UFlagTile_C");

}
