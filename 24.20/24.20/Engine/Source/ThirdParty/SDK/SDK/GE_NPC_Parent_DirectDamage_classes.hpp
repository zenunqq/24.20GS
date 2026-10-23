#pragma once

#include "Basic.hpp"

#include "GET_DirectCreatureDamage_classes.hpp"

namespace SDK
{

class UGE_NPC_Parent_DirectDamage_C : public UGET_DirectCreatureDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_NPC_Parent_DirectDamage_C">();
	}
	static class UGE_NPC_Parent_DirectDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_NPC_Parent_DirectDamage_C>();
	}
};
static_assert(alignof(UGE_NPC_Parent_DirectDamage_C) == 0x000008, "Wrong alignment on UGE_NPC_Parent_DirectDamage_C");
static_assert(sizeof(UGE_NPC_Parent_DirectDamage_C) == 0x000858, "Wrong size on UGE_NPC_Parent_DirectDamage_C");

}
