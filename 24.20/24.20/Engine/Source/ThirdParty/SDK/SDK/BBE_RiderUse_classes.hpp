#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_RiderUse_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_RiderUse_C">();
	}
	static class UBBE_RiderUse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_RiderUse_C>();
	}
};
static_assert(alignof(UBBE_RiderUse_C) == 0x000008, "Wrong alignment on UBBE_RiderUse_C");
static_assert(sizeof(UBBE_RiderUse_C) == 0x000070, "Wrong size on UBBE_RiderUse_C");

}
