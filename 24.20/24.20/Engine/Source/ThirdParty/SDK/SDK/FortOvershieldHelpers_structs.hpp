#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK
{

struct FFortOvershieldDelegateContainer final
{
public:
	TDelegate<void()>                             OnOvershieldChanged;
	TDelegate<void()>                             OnShieldedDamage;
	TDelegate<void()>                             OnOvershieldedDamage;
	TDelegate<void(class AActor* Instigator)>     OnShieldDestroyed;
	TDelegate<void(class AActor* Instigator)>     OnOvershieldDestroyed;
	TDelegate<void(const struct FGameplayEventData& Payload)> OnDamageReceived;
};
static_assert(alignof(FFortOvershieldDelegateContainer) == 0x000004, "Wrong alignment on FFortOvershieldDelegateContainer");
static_assert(sizeof(FFortOvershieldDelegateContainer) == 0x000048, "Wrong size on FFortOvershieldDelegateContainer");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldChanged) == 0x000000, "Member 'FFortOvershieldDelegateContainer::OnOvershieldChanged' has a wrong offset!");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnShieldedDamage) == 0x00000C, "Member 'FFortOvershieldDelegateContainer::OnShieldedDamage' has a wrong offset!");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldedDamage) == 0x000018, "Member 'FFortOvershieldDelegateContainer::OnOvershieldedDamage' has a wrong offset!");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnShieldDestroyed) == 0x000024, "Member 'FFortOvershieldDelegateContainer::OnShieldDestroyed' has a wrong offset!");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldDestroyed) == 0x000030, "Member 'FFortOvershieldDelegateContainer::OnOvershieldDestroyed' has a wrong offset!");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnDamageReceived) == 0x00003C, "Member 'FFortOvershieldDelegateContainer::OnDamageReceived' has a wrong offset!");

}
