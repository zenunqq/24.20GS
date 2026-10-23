#pragma once

#include "Basic.hpp"

#include "FallTeleportationRuntime_classes.hpp"
#include "FallTeleportationRuntime_parameters.hpp"

namespace SDK
{

void UFortFallTeleportSpawnerComponent::HandleGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleGamePhaseChanged");

	Params::FortFallTeleportSpawnerComponent_HandleGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortFallTeleportSpawnerComponent::HandleWarmupCountdownEndTimeUpdated(float NewEndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleWarmupCountdownEndTimeUpdated");

	Params::FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated Parms{};

	Parms.NewEndTime = NewEndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortFallTeleportCheatManager::EnableFallTeleportationIndefinitely()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportCheatManager", "EnableFallTeleportationIndefinitely");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortFallTeleportComponentBase::UpdateLastGroundLocation(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "UpdateLastGroundLocation");

	Params::FortFallTeleportComponentBase_UpdateLastGroundLocation Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortFallTeleportComponentBase::IsTeleportLocationValid(const struct FVector& LocationToTest) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "IsTeleportLocationValid");

	Params::FortFallTeleportComponentBase_IsTeleportLocationValid Parms{};

	Parms.LocationToTest = std::move(LocationToTest);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortFallTeleportComponentBase::IsValidActorToTeleportOn(class AActor* ActorToTeleportOn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "IsValidActorToTeleportOn");

	Params::FortFallTeleportComponentBase_IsValidActorToTeleportOn Parms{};

	Parms.ActorToTeleportOn = ActorToTeleportOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
