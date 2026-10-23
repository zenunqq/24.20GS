#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_BoostJumpPack_JumpHover_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  RequiredTags;
	struct FActiveGameplayEffectHandle            GE_Hover_Instance;
	double                                        RequiredFuelToActivate;
	class UClass*                                 GE_Hover;

public:
	void ExecuteUbergraph_GA_BoostJumpPack_JumpHover(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_CommitExecute();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_JumpHover_C">();
	}
	static class UGA_BoostJumpPack_JumpHover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_JumpHover_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_JumpHover_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_JumpHover_C");
static_assert(sizeof(UGA_BoostJumpPack_JumpHover_C) == 0x000B68, "Wrong size on UGA_BoostJumpPack_JumpHover_C");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, UberGraphFrame) == 0x000B28, "Member 'UGA_BoostJumpPack_JumpHover_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, RequiredTags) == 0x000B30, "Member 'UGA_BoostJumpPack_JumpHover_C::RequiredTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, GE_Hover_Instance) == 0x000B50, "Member 'UGA_BoostJumpPack_JumpHover_C::GE_Hover_Instance' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, RequiredFuelToActivate) == 0x000B58, "Member 'UGA_BoostJumpPack_JumpHover_C::RequiredFuelToActivate' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_JumpHover_C, GE_Hover) == 0x000B60, "Member 'UGA_BoostJumpPack_JumpHover_C::GE_Hover' has a wrong offset!");

}
