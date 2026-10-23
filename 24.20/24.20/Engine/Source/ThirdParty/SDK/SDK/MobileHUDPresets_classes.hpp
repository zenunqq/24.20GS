#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMobileHUDPresets_C final : public UFortMobileHUDPresetContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MobileHUDPresets_C">();
	}
	static class UMobileHUDPresets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobileHUDPresets_C>();
	}
};
static_assert(alignof(UMobileHUDPresets_C) == 0x000008, "Wrong alignment on UMobileHUDPresets_C");
static_assert(sizeof(UMobileHUDPresets_C) == 0x000040, "Wrong size on UMobileHUDPresets_C");

}
