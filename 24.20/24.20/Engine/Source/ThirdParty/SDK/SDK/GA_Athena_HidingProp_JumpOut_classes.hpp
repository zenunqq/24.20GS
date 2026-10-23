#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_HidingProp_JumpOut_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_Athena_HidingProp_JumpOut(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_JumpOut_C">();
	}
	static class UGA_Athena_HidingProp_JumpOut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_JumpOut_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_JumpOut_C) == 0x000008, "Wrong alignment on UGA_Athena_HidingProp_JumpOut_C");
static_assert(sizeof(UGA_Athena_HidingProp_JumpOut_C) == 0x000B30, "Wrong size on UGA_Athena_HidingProp_JumpOut_C");
static_assert(offsetof(UGA_Athena_HidingProp_JumpOut_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_HidingProp_JumpOut_C::UberGraphFrame' has a wrong offset!");

}
