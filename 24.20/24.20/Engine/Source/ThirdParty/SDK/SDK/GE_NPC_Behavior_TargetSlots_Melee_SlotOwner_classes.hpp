#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C">();
	}
	static class UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C>();
	}
};
static_assert(alignof(UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C) == 0x000008, "Wrong alignment on UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C");
static_assert(sizeof(UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C) == 0x000858, "Wrong size on UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C");

}
