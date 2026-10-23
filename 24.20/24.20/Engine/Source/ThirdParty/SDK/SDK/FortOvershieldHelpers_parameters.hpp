#pragma once

#include "Basic.hpp"

#include "FortOvershieldHelpers_structs.hpp"

namespace SDK::Params
{

struct FortOvershieldHelperComponent_AssignOvershieldListenerDelegates final
{
public:
	class UGameplayAbility*                       OwningAbility;
	struct FFortOvershieldDelegateContainer       Delegates;
};
static_assert(alignof(FortOvershieldHelperComponent_AssignOvershieldListenerDelegates) == 0x000008, "Wrong alignment on FortOvershieldHelperComponent_AssignOvershieldListenerDelegates");
static_assert(sizeof(FortOvershieldHelperComponent_AssignOvershieldListenerDelegates) == 0x000050, "Wrong size on FortOvershieldHelperComponent_AssignOvershieldListenerDelegates");
static_assert(offsetof(FortOvershieldHelperComponent_AssignOvershieldListenerDelegates, OwningAbility) == 0x000000, "Member 'FortOvershieldHelperComponent_AssignOvershieldListenerDelegates::OwningAbility' has a wrong offset!");
static_assert(offsetof(FortOvershieldHelperComponent_AssignOvershieldListenerDelegates, Delegates) == 0x000008, "Member 'FortOvershieldHelperComponent_AssignOvershieldListenerDelegates::Delegates' has a wrong offset!");

struct FortOvershieldHelperComponent_ClearOvershieldListenerDelegates final
{
public:
	class UGameplayAbility*                       OwningAbility;
};
static_assert(alignof(FortOvershieldHelperComponent_ClearOvershieldListenerDelegates) == 0x000008, "Wrong alignment on FortOvershieldHelperComponent_ClearOvershieldListenerDelegates");
static_assert(sizeof(FortOvershieldHelperComponent_ClearOvershieldListenerDelegates) == 0x000008, "Wrong size on FortOvershieldHelperComponent_ClearOvershieldListenerDelegates");
static_assert(offsetof(FortOvershieldHelperComponent_ClearOvershieldListenerDelegates, OwningAbility) == 0x000000, "Member 'FortOvershieldHelperComponent_ClearOvershieldListenerDelegates::OwningAbility' has a wrong offset!");

}
