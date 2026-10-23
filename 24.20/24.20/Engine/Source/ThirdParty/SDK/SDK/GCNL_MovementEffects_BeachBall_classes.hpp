#pragma once

#include "Basic.hpp"

#include "GCNL_RollingEffects_Parent_classes.hpp"

namespace SDK
{

class AGCNL_MovementEffects_BeachBall_C final : public AGCNL_RollingEffects_Parent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_MovementEffects_BeachBall_C">();
	}
	static class AGCNL_MovementEffects_BeachBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_MovementEffects_BeachBall_C>();
	}
};
static_assert(alignof(AGCNL_MovementEffects_BeachBall_C) == 0x000008, "Wrong alignment on AGCNL_MovementEffects_BeachBall_C");
static_assert(sizeof(AGCNL_MovementEffects_BeachBall_C) == 0x000AE8, "Wrong size on AGCNL_MovementEffects_BeachBall_C");

}
