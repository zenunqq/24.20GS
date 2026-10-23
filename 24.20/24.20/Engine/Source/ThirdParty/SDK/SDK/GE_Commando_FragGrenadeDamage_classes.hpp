#pragma once

#include "Basic.hpp"

#include "GET_DirectEnergyDamage_classes.hpp"

namespace SDK
{

class UGE_Commando_FragGrenadeDamage_C final : public UGET_DirectEnergyDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Commando_FragGrenadeDamage_C">();
	}
	static class UGE_Commando_FragGrenadeDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Commando_FragGrenadeDamage_C>();
	}
};
static_assert(alignof(UGE_Commando_FragGrenadeDamage_C) == 0x000008, "Wrong alignment on UGE_Commando_FragGrenadeDamage_C");
static_assert(sizeof(UGE_Commando_FragGrenadeDamage_C) == 0x000858, "Wrong size on UGE_Commando_FragGrenadeDamage_C");

}
