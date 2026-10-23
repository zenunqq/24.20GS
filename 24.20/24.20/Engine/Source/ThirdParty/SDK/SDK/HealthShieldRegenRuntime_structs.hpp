#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK
{

struct FFortHealthShieldRegen_ShieldDelegateContainer final
{
public:
	TDelegate<void()>                             OnShieldChanged;
	TDelegate<void()>                             OnShieldedDamage;
	TDelegate<void(class AActor* Instigator)>     OnShieldDestroyed;
	TDelegate<void(const struct FGameplayEventData& Payload)> OnDamageReceived;
};
static_assert(alignof(FFortHealthShieldRegen_ShieldDelegateContainer) == 0x000004, "Wrong alignment on FFortHealthShieldRegen_ShieldDelegateContainer");
static_assert(sizeof(FFortHealthShieldRegen_ShieldDelegateContainer) == 0x000030, "Wrong size on FFortHealthShieldRegen_ShieldDelegateContainer");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldChanged) == 0x000000, "Member 'FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldChanged' has a wrong offset!");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldedDamage) == 0x00000C, "Member 'FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldedDamage' has a wrong offset!");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldDestroyed) == 0x000018, "Member 'FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldDestroyed' has a wrong offset!");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnDamageReceived) == 0x000024, "Member 'FFortHealthShieldRegen_ShieldDelegateContainer::OnDamageReceived' has a wrong offset!");

struct FFortHealthShieldRegen_HealthDelegateContainer final
{
public:
	TDelegate<void()>                             OnHealthChanged;
	TDelegate<void(const struct FGameplayEventData& Payload)> OnDamageReceived;
};
static_assert(alignof(FFortHealthShieldRegen_HealthDelegateContainer) == 0x000004, "Wrong alignment on FFortHealthShieldRegen_HealthDelegateContainer");
static_assert(sizeof(FFortHealthShieldRegen_HealthDelegateContainer) == 0x000018, "Wrong size on FFortHealthShieldRegen_HealthDelegateContainer");
static_assert(offsetof(FFortHealthShieldRegen_HealthDelegateContainer, OnHealthChanged) == 0x000000, "Member 'FFortHealthShieldRegen_HealthDelegateContainer::OnHealthChanged' has a wrong offset!");
static_assert(offsetof(FFortHealthShieldRegen_HealthDelegateContainer, OnDamageReceived) == 0x00000C, "Member 'FFortHealthShieldRegen_HealthDelegateContainer::OnDamageReceived' has a wrong offset!");

}
