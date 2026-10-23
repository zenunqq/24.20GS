#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_NevadaHonk_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_NevadaHonk_C">();
	}
	static class UBBE_NevadaHonk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_NevadaHonk_C>();
	}
};
static_assert(alignof(UBBE_NevadaHonk_C) == 0x000008, "Wrong alignment on UBBE_NevadaHonk_C");
static_assert(sizeof(UBBE_NevadaHonk_C) == 0x000070, "Wrong size on UBBE_NevadaHonk_C");

}
