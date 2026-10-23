#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_UseValetMods_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_UseValetMods_C">();
	}
	static class UBBE_UseValetMods_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_UseValetMods_C>();
	}
};
static_assert(alignof(UBBE_UseValetMods_C) == 0x000008, "Wrong alignment on UBBE_UseValetMods_C");
static_assert(sizeof(UBBE_UseValetMods_C) == 0x000070, "Wrong size on UBBE_UseValetMods_C");

}
