#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_NevadaEnergyCanon_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_NevadaEnergyCanon_C">();
	}
	static class UBBE_NevadaEnergyCanon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_NevadaEnergyCanon_C>();
	}
};
static_assert(alignof(UBBE_NevadaEnergyCanon_C) == 0x000008, "Wrong alignment on UBBE_NevadaEnergyCanon_C");
static_assert(sizeof(UBBE_NevadaEnergyCanon_C) == 0x000070, "Wrong size on UBBE_NevadaEnergyCanon_C");

}
