#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemShopNavigator_C final : public UAthenaItemShopSectionNavigator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopNavigator_C">();
	}
	static class UItemShopNavigator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopNavigator_C>();
	}
};
static_assert(alignof(UItemShopNavigator_C) == 0x000008, "Wrong alignment on UItemShopNavigator_C");
static_assert(sizeof(UItemShopNavigator_C) == 0x0002C8, "Wrong size on UItemShopNavigator_C");

}
