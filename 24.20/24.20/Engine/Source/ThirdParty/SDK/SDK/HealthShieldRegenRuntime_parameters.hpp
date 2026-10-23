#pragma once

#include "Basic.hpp"

#include "HealthShieldRegenRuntime_structs.hpp"

namespace SDK::Params
{

struct FortHealthShieldRegenComponent_AllowHealthShieldRegen final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortHealthShieldRegenComponent_AllowHealthShieldRegen) == 0x000001, "Wrong alignment on FortHealthShieldRegenComponent_AllowHealthShieldRegen");
static_assert(sizeof(FortHealthShieldRegenComponent_AllowHealthShieldRegen) == 0x000001, "Wrong size on FortHealthShieldRegenComponent_AllowHealthShieldRegen");
static_assert(offsetof(FortHealthShieldRegenComponent_AllowHealthShieldRegen, ReturnValue) == 0x000000, "Member 'FortHealthShieldRegenComponent_AllowHealthShieldRegen::ReturnValue' has a wrong offset!");

struct FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates final
{
public:
	const class UGameplayAbility*                 OwningAbility;
	struct FFortHealthShieldRegen_HealthDelegateContainer Delegates;
};
static_assert(alignof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates) == 0x000008, "Wrong alignment on FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates");
static_assert(sizeof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates) == 0x000020, "Wrong size on FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates");
static_assert(offsetof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates, OwningAbility) == 0x000000, "Member 'FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates::OwningAbility' has a wrong offset!");
static_assert(offsetof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates, Delegates) == 0x000008, "Member 'FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates::Delegates' has a wrong offset!");

struct FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates final
{
public:
	const class UGameplayAbility*                 OwningAbility;
	struct FFortHealthShieldRegen_ShieldDelegateContainer Delegates;
};
static_assert(alignof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates) == 0x000008, "Wrong alignment on FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates");
static_assert(sizeof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates) == 0x000038, "Wrong size on FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates");
static_assert(offsetof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates, OwningAbility) == 0x000000, "Member 'FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates::OwningAbility' has a wrong offset!");
static_assert(offsetof(FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates, Delegates) == 0x000008, "Member 'FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates::Delegates' has a wrong offset!");

struct FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates final
{
public:
	const class UGameplayAbility*                 OwningAbility;
};
static_assert(alignof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates) == 0x000008, "Wrong alignment on FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates");
static_assert(sizeof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates) == 0x000008, "Wrong size on FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates");
static_assert(offsetof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates, OwningAbility) == 0x000000, "Member 'FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates::OwningAbility' has a wrong offset!");

struct FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates final
{
public:
	const class UGameplayAbility*                 OwningAbility;
};
static_assert(alignof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates) == 0x000008, "Wrong alignment on FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates");
static_assert(sizeof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates) == 0x000008, "Wrong size on FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates");
static_assert(offsetof(FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates, OwningAbility) == 0x000000, "Member 'FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates::OwningAbility' has a wrong offset!");

}
