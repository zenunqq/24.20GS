#pragma once

#include "Basic.hpp"

#include "GA_Athena_TillLandFallDamageImmunity_Parent_classes.hpp"

namespace SDK
{

class UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C : public UGA_Athena_TillLandFallDamageImmunity_Parent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C">();
	}
	static class UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C) == 0x000008, "Wrong alignment on UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C");
static_assert(sizeof(UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C) == 0x000B98, "Wrong size on UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C");

}
