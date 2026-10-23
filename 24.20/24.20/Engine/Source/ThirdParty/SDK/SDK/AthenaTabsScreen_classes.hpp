#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaTabsScreen_C final : public UFortAthenaTabsScreenBase
{
public:
	class UItemShopScreen_C*                      CatabaScreen;
	class UBP_AthenaMapScreenContainer_C*         QuestsScreen;
	class USafeZone*                              SafeZoneContent;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTabsScreen_C">();
	}
	static class UAthenaTabsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTabsScreen_C>();
	}
};
static_assert(alignof(UAthenaTabsScreen_C) == 0x000008, "Wrong alignment on UAthenaTabsScreen_C");
static_assert(sizeof(UAthenaTabsScreen_C) == 0x000400, "Wrong size on UAthenaTabsScreen_C");
static_assert(offsetof(UAthenaTabsScreen_C, CatabaScreen) == 0x0003E8, "Member 'UAthenaTabsScreen_C::CatabaScreen' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, QuestsScreen) == 0x0003F0, "Member 'UAthenaTabsScreen_C::QuestsScreen' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, SafeZoneContent) == 0x0003F8, "Member 'UAthenaTabsScreen_C::SafeZoneContent' has a wrong offset!");

}
