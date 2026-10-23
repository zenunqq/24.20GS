#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_GrindBoostFast_C final : public AFortGameplayCueNotify_Loop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GrindBoostFast_C">();
	}
	static class AGCNL_GrindBoostFast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GrindBoostFast_C>();
	}
};
static_assert(alignof(AGCNL_GrindBoostFast_C) == 0x000008, "Wrong alignment on AGCNL_GrindBoostFast_C");
static_assert(sizeof(AGCNL_GrindBoostFast_C) == 0x000960, "Wrong size on AGCNL_GrindBoostFast_C");

}
