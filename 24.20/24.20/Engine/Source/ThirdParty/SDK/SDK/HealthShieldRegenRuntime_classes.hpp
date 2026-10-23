#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UFortHealthShieldRegenComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x100];

public:
	static bool AllowHealthShieldRegen();
	static void AssignHealthShieldRegen_HealthListenerDelegates(const class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates);
	static void AssignHealthShieldRegen_ShieldListenerDelegates(const class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates);
	static void ClearHealthShieldRegen_HealthListenerDelegates(const class UGameplayAbility* OwningAbility);
	static void ClearHealthShieldRegen_ShieldListenerDelegates(const class UGameplayAbility* OwningAbility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHealthShieldRegenComponent">();
	}
	static class UFortHealthShieldRegenComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHealthShieldRegenComponent>();
	}
};
static_assert(alignof(UFortHealthShieldRegenComponent) == 0x000008, "Wrong alignment on UFortHealthShieldRegenComponent");
static_assert(sizeof(UFortHealthShieldRegenComponent) == 0x0001A0, "Wrong size on UFortHealthShieldRegenComponent");

}
