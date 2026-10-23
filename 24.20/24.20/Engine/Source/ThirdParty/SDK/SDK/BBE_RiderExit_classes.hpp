#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_RiderExit_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_RiderExit_C">();
	}
	static class UBBE_RiderExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_RiderExit_C>();
	}
};
static_assert(alignof(UBBE_RiderExit_C) == 0x000008, "Wrong alignment on UBBE_RiderExit_C");
static_assert(sizeof(UBBE_RiderExit_C) == 0x000070, "Wrong size on UBBE_RiderExit_C");

}
