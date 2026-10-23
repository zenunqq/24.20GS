#pragma once

#include "Basic.hpp"

#include "CreatureBaseRidableComponent_classes.hpp"

namespace SDK
{

class UWolfRidableComponent_C final : public UCreatureBaseRidableComponent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WolfRidableComponent_C">();
	}
	static class UWolfRidableComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWolfRidableComponent_C>();
	}
};
static_assert(alignof(UWolfRidableComponent_C) == 0x000010, "Wrong alignment on UWolfRidableComponent_C");
static_assert(sizeof(UWolfRidableComponent_C) == 0x000B70, "Wrong size on UWolfRidableComponent_C");

}
