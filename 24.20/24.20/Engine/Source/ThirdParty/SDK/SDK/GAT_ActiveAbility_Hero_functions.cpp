#pragma once

#include "Basic.hpp"

#include "GAT_ActiveAbility_Hero_classes.hpp"
#include "GAT_ActiveAbility_Hero_parameters.hpp"

namespace SDK
{

void UGAT_ActiveAbility_Hero_C::CommitAbilityWithEvent(bool* Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "CommitAbilityWithEvent");

	Params::GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passed != nullptr)
		*Passed = Parms.Passed;
}

void UGAT_ActiveAbility_Hero_C::ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "ExecuteUbergraph_GAT_ActiveAbility_Hero");

	Params::GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_ActiveAbility_Hero_C::IncrementAbilityCostAndCooldown(double Energy_Cost, bool Adjust_Cooldown, double Cooldown_Increment, TArray<struct FActiveGameplayEffectHandle>* Active_Cooldown_Modifiers_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "IncrementAbilityCostAndCooldown");

	Params::GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown Parms{};

	Parms.Energy_Cost = Energy_Cost;
	Parms.Adjust_Cooldown = Adjust_Cooldown;
	Parms.Cooldown_Increment = Cooldown_Increment;

	UObject::ProcessEvent(Func, &Parms);

	if (Active_Cooldown_Modifiers_0 != nullptr)
		*Active_Cooldown_Modifiers_0 = std::move(Parms.Active_Cooldown_Modifiers_0);
}

void UGAT_ActiveAbility_Hero_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAT_ActiveAbility_Hero_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "K2_OnEndAbility");

	Params::GAT_ActiveAbility_Hero_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
