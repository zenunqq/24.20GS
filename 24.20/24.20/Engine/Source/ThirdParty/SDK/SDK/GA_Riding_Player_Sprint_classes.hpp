#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Riding_Player_Sprint_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TArray<struct FGameplayTag>                   Tags_to_cancel_sprinting;
	bool                                          ShouldCancelSprint;

public:
	void Added_BA9D24D64958BB04345A3D89BD7617CA();
	void ExecuteUbergraph_GA_Riding_Player_Sprint(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRep_CancelSprintDispatcher();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Player_Sprint_C">();
	}
	static class UGA_Riding_Player_Sprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Player_Sprint_C>();
	}
};
static_assert(alignof(UGA_Riding_Player_Sprint_C) == 0x000008, "Wrong alignment on UGA_Riding_Player_Sprint_C");
static_assert(sizeof(UGA_Riding_Player_Sprint_C) == 0x000B48, "Wrong size on UGA_Riding_Player_Sprint_C");
static_assert(offsetof(UGA_Riding_Player_Sprint_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Riding_Player_Sprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Player_Sprint_C, Tags_to_cancel_sprinting) == 0x000B30, "Member 'UGA_Riding_Player_Sprint_C::Tags_to_cancel_sprinting' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Player_Sprint_C, ShouldCancelSprint) == 0x000B40, "Member 'UGA_Riding_Player_Sprint_C::ShouldCancelSprint' has a wrong offset!");

}
