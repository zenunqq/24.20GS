#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Riding_Player_IsRiding_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAnimMontage*                           SettleMontageRef;
	class UFortAbilityTask_PlayMontageWaitTarget* settleMontageTask;

public:
	void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Player_IsRiding_C">();
	}
	static class UGA_Riding_Player_IsRiding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Player_IsRiding_C>();
	}
};
static_assert(alignof(UGA_Riding_Player_IsRiding_C) == 0x000008, "Wrong alignment on UGA_Riding_Player_IsRiding_C");
static_assert(sizeof(UGA_Riding_Player_IsRiding_C) == 0x000B40, "Wrong size on UGA_Riding_Player_IsRiding_C");
static_assert(offsetof(UGA_Riding_Player_IsRiding_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Riding_Player_IsRiding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Player_IsRiding_C, SettleMontageRef) == 0x000B30, "Member 'UGA_Riding_Player_IsRiding_C::SettleMontageRef' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Player_IsRiding_C, settleMontageTask) == 0x000B38, "Member 'UGA_Riding_Player_IsRiding_C::settleMontageTask' has a wrong offset!");

}
