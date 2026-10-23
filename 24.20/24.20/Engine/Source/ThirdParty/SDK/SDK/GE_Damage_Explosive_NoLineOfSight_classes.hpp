#pragma once

#include "Basic.hpp"

#include "GE_Ranged_GenericDamage_Explosive_classes.hpp"

namespace SDK
{

class UGE_Damage_Explosive_NoLineOfSight_C final : public UGE_Ranged_GenericDamage_Explosive_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Damage_Explosive_NoLineOfSight_C">();
	}
	static class UGE_Damage_Explosive_NoLineOfSight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Damage_Explosive_NoLineOfSight_C>();
	}
};
static_assert(alignof(UGE_Damage_Explosive_NoLineOfSight_C) == 0x000008, "Wrong alignment on UGE_Damage_Explosive_NoLineOfSight_C");
static_assert(sizeof(UGE_Damage_Explosive_NoLineOfSight_C) == 0x000858, "Wrong size on UGE_Damage_Explosive_NoLineOfSight_C");

}
