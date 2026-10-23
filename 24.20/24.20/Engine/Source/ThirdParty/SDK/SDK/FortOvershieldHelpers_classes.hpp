#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UFortOvershieldHelperComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0xB0];

public:
	static void AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates);
	static void ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortOvershieldHelperComponent">();
	}
	static class UFortOvershieldHelperComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortOvershieldHelperComponent>();
	}
};
static_assert(alignof(UFortOvershieldHelperComponent) == 0x000008, "Wrong alignment on UFortOvershieldHelperComponent");
static_assert(sizeof(UFortOvershieldHelperComponent) == 0x000150, "Wrong size on UFortOvershieldHelperComponent");

}
