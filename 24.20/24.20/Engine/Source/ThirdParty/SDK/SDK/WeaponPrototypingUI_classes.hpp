#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortGameSettingRegistryExtension_WeaponPrototyping final : public UFortGameSettingRegistryExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameSettingRegistryExtension_WeaponPrototyping">();
	}
	static class UFortGameSettingRegistryExtension_WeaponPrototyping* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameSettingRegistryExtension_WeaponPrototyping>();
	}
};
static_assert(alignof(UFortGameSettingRegistryExtension_WeaponPrototyping) == 0x000008, "Wrong alignment on UFortGameSettingRegistryExtension_WeaponPrototyping");
static_assert(sizeof(UFortGameSettingRegistryExtension_WeaponPrototyping) == 0x000028, "Wrong size on UFortGameSettingRegistryExtension_WeaponPrototyping");

}
