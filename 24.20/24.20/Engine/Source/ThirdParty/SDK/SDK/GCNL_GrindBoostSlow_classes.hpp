#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_GrindBoostSlow_C final : public AFortGameplayCueNotify_Loop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GrindBoostSlow_C">();
	}
	static class AGCNL_GrindBoostSlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GrindBoostSlow_C>();
	}
};
static_assert(alignof(AGCNL_GrindBoostSlow_C) == 0x000008, "Wrong alignment on AGCNL_GrindBoostSlow_C");
static_assert(sizeof(AGCNL_GrindBoostSlow_C) == 0x000960, "Wrong size on AGCNL_GrindBoostSlow_C");

}
