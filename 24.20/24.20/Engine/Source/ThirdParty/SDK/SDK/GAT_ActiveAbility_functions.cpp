#pragma once

#include "Basic.hpp"

#include "GAT_ActiveAbility_classes.hpp"
#include "GAT_ActiveAbility_parameters.hpp"

namespace SDK
{

void UGAT_ActiveAbility_C::ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "ActiveAbilitySetup");

	Params::GAT_ActiveAbility_C_ActiveAbilitySetup Parms{};

	Parms.AbilitySystemIn = AbilitySystemIn;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = Parms.AbilitySystemOut;
}

void UGAT_ActiveAbility_C::EndAbilityWithReason(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "EndAbilityWithReason");

	Params::GAT_ActiveAbility_C_EndAbilityWithReason Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAT_ActiveAbility_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_OnEndAbility");

	Params::GAT_ActiveAbility_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_ActiveAbility_C::SendHeroAbilityActivationEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SendHeroAbilityActivationEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAT_ActiveAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetHolsterWeaponWithName");

	Params::GAT_ActiveAbility_C_SetHolsterWeaponWithName Parms{};

	Parms.Target_Fort_Pawn = Target_Fort_Pawn;
	Parms.ShouldHolster = ShouldHolster;
	Parms.PlayEquipAnim = PlayEquipAnim;
	Parms.ShowDebugPrintName = ShowDebugPrintName;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponHolstered != nullptr)
		*IsWeaponHolstered = Parms.IsWeaponHolstered;

	if (OperationSuccessful != nullptr)
		*OperationSuccessful = Parms.OperationSuccessful;
}

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetKnockbackImmunity");

	Params::GAT_ActiveAbility_C_SetKnockbackImmunity Parms{};

	Parms.ImmunityOn = ImmunityOn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetPawnCollision");

	Params::GAT_ActiveAbility_C_SetPawnCollision Parms{};

	Parms.FortPawn = FortPawn;
	Parms.CollisionOn = CollisionOn;

	UObject::ProcessEvent(Func, &Parms);
}

bool UGAT_ActiveAbility_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ShouldAbilityRespondToEvent");

	Params::GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
