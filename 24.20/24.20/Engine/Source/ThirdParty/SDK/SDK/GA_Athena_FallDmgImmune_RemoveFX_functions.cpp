#pragma once

#include "Basic.hpp"

#include "GA_Athena_FallDmgImmune_RemoveFX_classes.hpp"
#include "GA_Athena_FallDmgImmune_RemoveFX_parameters.hpp"

namespace SDK
{

void UGA_Athena_FallDmgImmune_RemoveFX_C::ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX");

	Params::GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_FallDmgImmune_RemoveFX_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "FailedToActivatePassiveAbility");

	Params::GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_FallDmgImmune_RemoveFX_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_FallDmgImmune_RemoveFX_C::OnChange_E07DC5494A7BED888E9B24AA514662A5(EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "OnChange_E07DC5494A7BED888E9B24AA514662A5");

	Params::GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5 Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_FallDmgImmune_RemoveFX_C::OnChange_FD84FE4040E65CB60551DE8433D51332(EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "OnChange_FD84FE4040E65CB60551DE8433D51332");

	Params::GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332 Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_FallDmgImmune_RemoveFX_C::VehicleLandedCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_FallDmgImmune_RemoveFX_C", "VehicleLandedCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}
