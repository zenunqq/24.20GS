#pragma once

#include "Basic.hpp"

#include "KnockbackRuntime_classes.hpp"
#include "KnockbackRuntime_parameters.hpp"

namespace SDK
{

TArray<struct FKnockbackMutatorData> AFortAthenaMutator_Knockback::GetAllPlayersKnockbackData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetAllPlayersKnockbackData");

	Params::FortAthenaMutator_Knockback_GetAllPlayersKnockbackData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaMutator_Knockback::HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "HandleBlockedCharacterMovement");

	Params::FortAthenaMutator_Knockback_HandleBlockedCharacterMovement Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutImpact != nullptr)
		*InOutImpact = std::move(Parms.InOutImpact);
}

void AFortAthenaMutator_Knockback::SetPlayersShouldBreakThroughStructures(const bool bActive, class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "SetPlayersShouldBreakThroughStructures");

	Params::FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures Parms{};

	Parms.bActive = bActive;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float AFortAthenaMutator_Knockback::GetKnockbackMultiplierInitialValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetKnockbackMultiplierInitialValue");

	Params::FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortAthenaMutator_Knockback::GetPercentDamageLowMaxThreshold() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageLowMaxThreshold");

	Params::FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortAthenaMutator_Knockback::GetPercentDamageMediumMaxThreshold() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageMediumMaxThreshold");

	Params::FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortAthenaMutator_Knockback* UFortGameplayAbility_KnockbackMutator::GetCachedMutator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "GetCachedMutator");

	Params::FortGameplayAbility_KnockbackMutator_GetCachedMutator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGameplayAbility_KnockbackMutator::SaveKnockbackData(const struct FKnockbackMutatorData& InKnockbackData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "SaveKnockbackData");

	Params::FortGameplayAbility_KnockbackMutator_SaveKnockbackData Parms{};

	Parms.InKnockbackData = std::move(InKnockbackData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
