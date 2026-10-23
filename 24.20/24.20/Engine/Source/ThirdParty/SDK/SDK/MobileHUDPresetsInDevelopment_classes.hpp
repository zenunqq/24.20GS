#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMobileHUDPresetsInDevelopment_C final : public UFortMobileHUDPresetContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MobileHUDPresetsInDevelopment_C">();
	}
	static class UMobileHUDPresetsInDevelopment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobileHUDPresetsInDevelopment_C>();
	}
};
static_assert(alignof(UMobileHUDPresetsInDevelopment_C) == 0x000008, "Wrong alignment on UMobileHUDPresetsInDevelopment_C");
static_assert(sizeof(UMobileHUDPresetsInDevelopment_C) == 0x000040, "Wrong size on UMobileHUDPresetsInDevelopment_C");

}
