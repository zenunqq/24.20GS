#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_Lockout_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FTimerHandle                           Timer_LockoutFailsafe;
	double                                        LockoutFailsafeTime;

public:
	void ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void Failsafe();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Lockout_C">();
	}
	static class UGA_Athena_Lockout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Lockout_C>();
	}
};
static_assert(alignof(UGA_Athena_Lockout_C) == 0x000008, "Wrong alignment on UGA_Athena_Lockout_C");
static_assert(sizeof(UGA_Athena_Lockout_C) == 0x000B40, "Wrong size on UGA_Athena_Lockout_C");
static_assert(offsetof(UGA_Athena_Lockout_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Lockout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Lockout_C, Timer_LockoutFailsafe) == 0x000B30, "Member 'UGA_Athena_Lockout_C::Timer_LockoutFailsafe' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Lockout_C, LockoutFailsafeTime) == 0x000B38, "Member 'UGA_Athena_Lockout_C::LockoutFailsafeTime' has a wrong offset!");

}
