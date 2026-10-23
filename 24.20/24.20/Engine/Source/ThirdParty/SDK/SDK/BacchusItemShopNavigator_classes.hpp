#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBacchusItemShopNavigator_C final : public UAthenaItemShopSectionNavigator
{
public:
	class USafeZone*                              ForceDownSafeZone;
	class USafeZone*                              ForceUpSaveZone;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusItemShopNavigator_C">();
	}
	static class UBacchusItemShopNavigator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusItemShopNavigator_C>();
	}
};
static_assert(alignof(UBacchusItemShopNavigator_C) == 0x000008, "Wrong alignment on UBacchusItemShopNavigator_C");
static_assert(sizeof(UBacchusItemShopNavigator_C) == 0x0002D8, "Wrong size on UBacchusItemShopNavigator_C");
static_assert(offsetof(UBacchusItemShopNavigator_C, ForceDownSafeZone) == 0x0002C8, "Member 'UBacchusItemShopNavigator_C::ForceDownSafeZone' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigator_C, ForceUpSaveZone) == 0x0002D0, "Member 'UBacchusItemShopNavigator_C::ForceUpSaveZone' has a wrong offset!");

}
