#pragma once

#include "Basic.hpp"

#include "GET_PeriodicEnergyDamage_classes.hpp"

namespace SDK
{

class UGE_Athena_DBNO_Bleed_C final : public UGET_PeriodicEnergyDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_DBNO_Bleed_C">();
	}
	static class UGE_Athena_DBNO_Bleed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_DBNO_Bleed_C>();
	}
};
static_assert(alignof(UGE_Athena_DBNO_Bleed_C) == 0x000008, "Wrong alignment on UGE_Athena_DBNO_Bleed_C");
static_assert(sizeof(UGE_Athena_DBNO_Bleed_C) == 0x000858, "Wrong size on UGE_Athena_DBNO_Bleed_C");

}
