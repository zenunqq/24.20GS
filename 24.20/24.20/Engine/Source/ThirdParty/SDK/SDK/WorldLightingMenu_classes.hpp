#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AWorldLightingMenu_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WorldLightingMenu_C">();
	}
	static class AWorldLightingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWorldLightingMenu_C>();
	}
};
static_assert(alignof(AWorldLightingMenu_C) == 0x000008, "Wrong alignment on AWorldLightingMenu_C");
static_assert(sizeof(AWorldLightingMenu_C) == 0x0002A0, "Wrong size on AWorldLightingMenu_C");

}
