#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULocalUserSettingsMenu_C final : public UFortLocalUserSettingsMenu
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingsMenu_C">();
	}
	static class ULocalUserSettingsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingsMenu_C>();
	}
};
static_assert(alignof(ULocalUserSettingsMenu_C) == 0x000008, "Wrong alignment on ULocalUserSettingsMenu_C");
static_assert(sizeof(ULocalUserSettingsMenu_C) == 0x0003E0, "Wrong size on ULocalUserSettingsMenu_C");

}
