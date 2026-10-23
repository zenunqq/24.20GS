#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Riding_Creature_Burt_SprintCharge_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Creature_Burt_SprintCharge_C">();
	}
	static class UGA_Riding_Creature_Burt_SprintCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Creature_Burt_SprintCharge_C>();
	}
};
static_assert(alignof(UGA_Riding_Creature_Burt_SprintCharge_C) == 0x000008, "Wrong alignment on UGA_Riding_Creature_Burt_SprintCharge_C");
static_assert(sizeof(UGA_Riding_Creature_Burt_SprintCharge_C) == 0x000B30, "Wrong size on UGA_Riding_Creature_Burt_SprintCharge_C");
static_assert(offsetof(UGA_Riding_Creature_Burt_SprintCharge_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Riding_Creature_Burt_SprintCharge_C::UberGraphFrame' has a wrong offset!");

}
