#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_RiderEmote_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_RiderEmote_C">();
	}
	static class UBBE_RiderEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_RiderEmote_C>();
	}
};
static_assert(alignof(UBBE_RiderEmote_C) == 0x000008, "Wrong alignment on UBBE_RiderEmote_C");
static_assert(sizeof(UBBE_RiderEmote_C) == 0x000070, "Wrong size on UBBE_RiderEmote_C");

}
