#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Consumable_Throw_Parent_classes.hpp"

namespace SDK
{

class UGA_Athena_Grenade_Rethrow_C final : public UGA_Athena_Consumable_Throw_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_Grenade_Rethrow_C;
	class AFortProjectileBase*                    Projectile;
	double                                        TossDelay;
	class FName                                   HolsterId;
	uint8                                         Pad_FC4[0x4];
	double                                        PostThrowEndDelay;

public:
	void AttachProjectile();
	void AttemptSpawnThrownProjectile();
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DetachProjectile();
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void RethrowProjectile();
	void ThrowProjectile();
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_Rethrow_C">();
	}
	static class UGA_Athena_Grenade_Rethrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_Rethrow_C>();
	}
};
static_assert(alignof(UGA_Athena_Grenade_Rethrow_C) == 0x000008, "Wrong alignment on UGA_Athena_Grenade_Rethrow_C");
static_assert(sizeof(UGA_Athena_Grenade_Rethrow_C) == 0x000FD0, "Wrong size on UGA_Athena_Grenade_Rethrow_C");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, UberGraphFrame_GA_Athena_Grenade_Rethrow_C) == 0x000FA8, "Member 'UGA_Athena_Grenade_Rethrow_C::UberGraphFrame_GA_Athena_Grenade_Rethrow_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, Projectile) == 0x000FB0, "Member 'UGA_Athena_Grenade_Rethrow_C::Projectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, TossDelay) == 0x000FB8, "Member 'UGA_Athena_Grenade_Rethrow_C::TossDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, HolsterId) == 0x000FC0, "Member 'UGA_Athena_Grenade_Rethrow_C::HolsterId' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, PostThrowEndDelay) == 0x000FC8, "Member 'UGA_Athena_Grenade_Rethrow_C::PostThrowEndDelay' has a wrong offset!");

}
