#pragma once

#include "Basic.hpp"

#include "GET_PeriodicEnergyDamage_classes.hpp"

namespace SDK
{

class UGE_UnderwaterDamage_C final : public UGET_PeriodicEnergyDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_UnderwaterDamage_C">();
	}
	static class UGE_UnderwaterDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_UnderwaterDamage_C>();
	}
};
static_assert(alignof(UGE_UnderwaterDamage_C) == 0x000008, "Wrong alignment on UGE_UnderwaterDamage_C");
static_assert(sizeof(UGE_UnderwaterDamage_C) == 0x000858, "Wrong size on UGE_UnderwaterDamage_C");

}
