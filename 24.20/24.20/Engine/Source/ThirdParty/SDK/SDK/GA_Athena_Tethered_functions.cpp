#pragma once

#include "Basic.hpp"

#include "GA_Athena_Tethered_classes.hpp"
#include "GA_Athena_Tethered_parameters.hpp"

namespace SDK
{

void UGA_Athena_Tethered_C::BreakBuildingsAtPlayerInDirectionOfTether()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "BreakBuildingsAtPlayerInDirectionOfTether");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Tethered_C::BreakNearbyStructures(const struct FVector& ForwardVector, double OffsetForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "BreakNearbyStructures");

	Params::GA_Athena_Tethered_C_BreakNearbyStructures Parms{};

	Parms.ForwardVector = std::move(ForwardVector);
	Parms.OffsetForward = OffsetForward;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Tethered_C::ExecuteUbergraph_GA_Athena_Tethered(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "ExecuteUbergraph_GA_Athena_Tethered");

	Params::GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Tethered_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Tethered_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "K2_OnEndAbility");

	Params::GA_Athena_Tethered_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Tethered_C::MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "MovementModeChangedDelegate_Event_0");

	Params::GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0 Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

}
