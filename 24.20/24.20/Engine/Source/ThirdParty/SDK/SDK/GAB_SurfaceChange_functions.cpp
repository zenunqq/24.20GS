#pragma once

#include "Basic.hpp"

#include "GAB_SurfaceChange_classes.hpp"
#include "GAB_SurfaceChange_parameters.hpp"

namespace SDK
{

void UGAB_SurfaceChange_C::ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "ExecuteUbergraph_GAB_SurfaceChange");

	Params::GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_SurfaceChange_C::GamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "GamePhaseChanged");

	Params::GAB_SurfaceChange_C_GamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_SurfaceChange_C::HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, struct FActiveGameplayEffectHandle* GE_Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "HotfixableGEApplication");

	Params::GAB_SurfaceChange_C_HotfixableGEApplication Parms{};

	Parms.Input = std::move(Input);
	Parms.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	Parms.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;

	UObject::ProcessEvent(Func, &Parms);

	if (GE_Handle != nullptr)
		*GE_Handle = std::move(Parms.GE_Handle);
}

void UGAB_SurfaceChange_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_SurfaceChange_C::LavaBounce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "LavaBounce");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_SurfaceChange_C::MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "MovementModeChanged");

	Params::GAB_SurfaceChange_C_MovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_SurfaceChange_C::OnRep_ReplicatedRandomAngle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "OnRep_ReplicatedRandomAngle");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_SurfaceChange_C::SurfaceCleanup(bool AddLingeringEffects, EPhysicalSurface SurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "SurfaceCleanup");

	Params::GAB_SurfaceChange_C_SurfaceCleanup Parms{};

	Parms.AddLingeringEffects = AddLingeringEffects;
	Parms.SurfaceType = SurfaceType;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_SurfaceChange_C::SurfaceCleanupSpecial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "SurfaceCleanupSpecial");

	UObject::ProcessEvent(Func, nullptr);
}

}
