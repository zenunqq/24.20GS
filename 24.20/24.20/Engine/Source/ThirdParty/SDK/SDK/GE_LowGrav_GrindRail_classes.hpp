#pragma once

#include "Basic.hpp"

#include "GE_Athena_TillLandFallDamageImmunity_Grant_Parent_classes.hpp"

namespace SDK
{

class UGE_LowGrav_GrindRail_C final : public UGE_Athena_TillLandFallDamageImmunity_Grant_Parent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_LowGrav_GrindRail_C">();
	}
	static class UGE_LowGrav_GrindRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_LowGrav_GrindRail_C>();
	}
};
static_assert(alignof(UGE_LowGrav_GrindRail_C) == 0x000008, "Wrong alignment on UGE_LowGrav_GrindRail_C");
static_assert(sizeof(UGE_LowGrav_GrindRail_C) == 0x000858, "Wrong size on UGE_LowGrav_GrindRail_C");

}
