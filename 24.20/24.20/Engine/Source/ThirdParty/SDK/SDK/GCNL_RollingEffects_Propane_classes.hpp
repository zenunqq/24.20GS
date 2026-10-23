#pragma once

#include "Basic.hpp"

#include "GCNL_RollingEffects_Parent_classes.hpp"

namespace SDK
{

class AGCNL_RollingEffects_Propane_C final : public AGCNL_RollingEffects_Parent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_RollingEffects_Propane_C">();
	}
	static class AGCNL_RollingEffects_Propane_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_RollingEffects_Propane_C>();
	}
};
static_assert(alignof(AGCNL_RollingEffects_Propane_C) == 0x000008, "Wrong alignment on AGCNL_RollingEffects_Propane_C");
static_assert(sizeof(AGCNL_RollingEffects_Propane_C) == 0x000AE8, "Wrong size on AGCNL_RollingEffects_Propane_C");

}
