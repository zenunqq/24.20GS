#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class AbilitySystemComponent {
private:
	static void InternalServerTryActivateAbility(UFortAbilitySystemComponentAthena*, FGameplayAbilitySpecHandle, bool, FPredictionKey&, FGameplayEventData*);
public:
	static void GiveAbility(UAbilitySystemComponent*, TSubclassOf<UFortGameplayAbility>);
	static void GiveAbilitySet(UAbilitySystemComponent*, UFortAbilitySet*);

	InitHooks;
};
