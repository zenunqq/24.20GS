#pragma once

#include "Basic.hpp"

#include "GE_Melee_GenericDamage_classes.hpp"

namespace SDK
{

class UGE_Melee_GenericDamageMakeWeakspot_C final : public UGE_Melee_GenericDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Melee_GenericDamageMakeWeakspot_C">();
	}
	static class UGE_Melee_GenericDamageMakeWeakspot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Melee_GenericDamageMakeWeakspot_C>();
	}
};
static_assert(alignof(UGE_Melee_GenericDamageMakeWeakspot_C) == 0x000008, "Wrong alignment on UGE_Melee_GenericDamageMakeWeakspot_C");
static_assert(sizeof(UGE_Melee_GenericDamageMakeWeakspot_C) == 0x000858, "Wrong size on UGE_Melee_GenericDamageMakeWeakspot_C");

}
