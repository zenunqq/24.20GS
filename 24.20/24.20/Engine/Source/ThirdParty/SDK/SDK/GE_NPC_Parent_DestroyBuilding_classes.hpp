#pragma once

#include "Basic.hpp"

#include "GE_NPC_Parent_DirectDamage_classes.hpp"

namespace SDK
{

class UGE_NPC_Parent_DestroyBuilding_C final : public UGE_NPC_Parent_DirectDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_NPC_Parent_DestroyBuilding_C">();
	}
	static class UGE_NPC_Parent_DestroyBuilding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_NPC_Parent_DestroyBuilding_C>();
	}
};
static_assert(alignof(UGE_NPC_Parent_DestroyBuilding_C) == 0x000008, "Wrong alignment on UGE_NPC_Parent_DestroyBuilding_C");
static_assert(sizeof(UGE_NPC_Parent_DestroyBuilding_C) == 0x000858, "Wrong size on UGE_NPC_Parent_DestroyBuilding_C");

}
