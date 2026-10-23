#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Interrogate_GC_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           Cue;

public:
	void ExecuteUbergraph_GA_Interrogate_GC(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Interrogate_GC_C">();
	}
	static class UGA_Interrogate_GC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Interrogate_GC_C>();
	}
};
static_assert(alignof(UGA_Interrogate_GC_C) == 0x000008, "Wrong alignment on UGA_Interrogate_GC_C");
static_assert(sizeof(UGA_Interrogate_GC_C) == 0x000B38, "Wrong size on UGA_Interrogate_GC_C");
static_assert(offsetof(UGA_Interrogate_GC_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Interrogate_GC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Interrogate_GC_C, Cue) == 0x000B30, "Member 'UGA_Interrogate_GC_C::Cue' has a wrong offset!");

}
