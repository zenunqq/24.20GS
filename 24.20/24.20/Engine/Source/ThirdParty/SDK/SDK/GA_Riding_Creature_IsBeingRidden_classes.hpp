#pragma once

#include "Basic.hpp"

#include "GA_NPC_Parent_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UGA_Riding_Creature_IsBeingRidden_C final : public UGA_NPC_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Riding_Creature_IsBeingRidden_C;

public:
	void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Creature_IsBeingRidden_C">();
	}
	static class UGA_Riding_Creature_IsBeingRidden_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Creature_IsBeingRidden_C>();
	}
};
static_assert(alignof(UGA_Riding_Creature_IsBeingRidden_C) == 0x000008, "Wrong alignment on UGA_Riding_Creature_IsBeingRidden_C");
static_assert(sizeof(UGA_Riding_Creature_IsBeingRidden_C) == 0x000E68, "Wrong size on UGA_Riding_Creature_IsBeingRidden_C");
static_assert(offsetof(UGA_Riding_Creature_IsBeingRidden_C, UberGraphFrame_GA_Riding_Creature_IsBeingRidden_C) == 0x000E60, "Member 'UGA_Riding_Creature_IsBeingRidden_C::UberGraphFrame_GA_Riding_Creature_IsBeingRidden_C' has a wrong offset!");

}
