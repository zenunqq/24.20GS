#pragma once

#include "Basic.hpp"

#include "GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_classes.hpp"
#include "GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_parameters.hpp"

namespace SDK
{

void UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C", "ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper");

	Params::GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::FireBoostEffectsOnPlayerMulti(class AActor* PlayerTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C", "FireBoostEffectsOnPlayerMulti");

	Params::GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti Parms{};

	Parms.PlayerTarget = PlayerTarget;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C", "K2_ActivateAbilityFromEvent");

	Params::GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
