#pragma once

#include "Basic.hpp"

#include "RockVehicleRuntime_classes.hpp"
#include "RockVehicleRuntime_parameters.hpp"

namespace SDK
{

void UFortCheatManager_RockVehicle::RockVehicleSetBalboaVelocity(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetBalboaVelocity");

	Params::FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_RockVehicle::RockVehicleSetLocation(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetLocation");

	Params::FortCheatManager_RockVehicle_RockVehicleSetLocation Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_RockVehicle::RockVehicleSetRotation(float Pitch, float Yaw, float Roll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetRotation");

	Params::FortCheatManager_RockVehicle_RockVehicleSetRotation Parms{};

	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;
	Parms.Roll = Roll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_RockVehicle::RockVehicleSetVelocity(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetVelocity");

	Params::FortCheatManager_RockVehicle_RockVehicleSetVelocity Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ARockVehicle::OnRep_FreeLookCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "OnRep_FreeLookCamera");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ARockVehicle::ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "ServerSetLegacyDamageValues");

	Params::RockVehicle_ServerSetLegacyDamageValues Parms{};

	Parms.bDamageFriendlyVehicles = bDamageFriendlyVehicles;
	Parms.bDamageOtherVehicles = bDamageOtherVehicles;
	Parms.bDamageOwnVehicle = bDamageOwnVehicle;
	Parms.bDamageAllowedFromOtherVehicle = bDamageAllowedFromOtherVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ARockVehicle::ServerToggleFreeCam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "ServerToggleFreeCam");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const struct FRockRuntimeConfigOverrides ARockVehicle::GetCurrentRockRuntimeConfigOverrides() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "GetCurrentRockRuntimeConfigOverrides");

	Params::RockVehicle_GetCurrentRockRuntimeConfigOverrides Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFortAthenaVehicleInputState ARockVehicle::GetDriverInput() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "GetDriverInput");

	Params::RockVehicle_GetDriverInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ARockVehicle::GetThrottleState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicle", "GetThrottleState");

	Params::RockVehicle_GetThrottleState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URockVehicleAbility::GetActiveSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAbility", "GetActiveSeconds");

	Params::RockVehicleAbility_GetActiveSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URockVehicleAbility::GetInactiveSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAbility", "GetInactiveSeconds");

	Params::RockVehicleAbility_GetInactiveSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ARockVehicle* URockVehicleAbility::GetVehicle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAbility", "GetVehicle");

	Params::RockVehicleAbility_GetVehicle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URockVehicleBoostTank::GiveBoost(float Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "GiveBoost");

	Params::RockVehicleBoostTank_GiveBoost Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleBoostTank::OnRep_SecondsRemaining(float PrevValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "OnRep_SecondsRemaining");

	Params::RockVehicleBoostTank_OnRep_SecondsRemaining Parms{};

	Parms.PrevValue = PrevValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float URockVehicleBoostTank::GetMaxBoostInSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "GetMaxBoostInSeconds");

	Params::RockVehicleBoostTank_GetMaxBoostInSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URockVehicleBoostTank::GetPercentRemaining() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "GetPercentRemaining");

	Params::RockVehicleBoostTank_GetPercentRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URockVehicleBoostTank::HasBoost() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "HasBoost");

	Params::RockVehicleBoostTank_HasBoost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URockVehicleBoostTank::IsBoostFull() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleBoostTank", "IsBoostFull");

	Params::RockVehicleBoostTank_IsBoostFull Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URockVehicleAbility_GroundTrails::OnSurfaceChanged(EPhysicalSurface NewSurface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "OnSurfaceChanged");

	Params::RockVehicleAbility_GroundTrails_OnSurfaceChanged Parms{};

	Parms.NewSurface = NewSurface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAbility_GroundTrails::SetEnabled(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "SetEnabled");

	Params::RockVehicleAbility_GroundTrails_SetEnabled Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnDodged(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDodged");

	Params::RockVehicleAnalyticsComponent_OnDodged Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnDoubleJumped(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDoubleJumped");

	Params::RockVehicleAnalyticsComponent_OnDoubleJumped Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnJumped(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnJumped");

	Params::RockVehicleAnalyticsComponent_OnJumped Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnPawnEnteredSeat(const TScriptInterface<class IFortVehicleInterface>& InVehicle, class AFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnEnteredSeat");

	Params::RockVehicleAnalyticsComponent_OnPawnEnteredSeat Parms{};

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnPawnExitedSeat(const TScriptInterface<class IFortVehicleInterface>& InVehicle, class AFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnExitedSeat");

	Params::RockVehicleAnalyticsComponent_OnPawnExitedSeat Parms{};

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnSupersonicEnd(class UActorComponent* InComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicEnd");

	Params::RockVehicleAnalyticsComponent_OnSupersonicEnd Parms{};

	Parms.InComp = InComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URockVehicleAnalyticsComponent::OnSupersonicStart(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicStart");

	Params::RockVehicleAnalyticsComponent_OnSupersonicStart Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ARockVehicleAudioController::OnInAirUpdated(const bool bNewInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAudioController", "OnInAirUpdated");

	Params::RockVehicleAudioController_OnInAirUpdated Parms{};

	Parms.bNewInAir = bNewInAir;

	UObject::ProcessEvent(Func, &Parms);
}

void ARockVehicleAudioController::SetBoosting(const bool bNewBoosting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAudioController", "SetBoosting");

	Params::RockVehicleAudioController_SetBoosting Parms{};

	Parms.bNewBoosting = bNewBoosting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ARockVehicleAudioController::SetSurfaceTypeParam(const float NewSurfaceParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAudioController", "SetSurfaceTypeParam");

	Params::RockVehicleAudioController_SetSurfaceTypeParam Parms{};

	Parms.NewSurfaceParam = NewSurfaceParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAudioMotorModelComponent* ARockVehicleAudioController::GetMotorSimComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockVehicleAudioController", "GetMotorSimComponent");

	Params::RockVehicleAudioController_GetMotorSimComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStreamingRadioPlayerComponent_Rock::VehicleExploded(const class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent_Rock", "VehicleExploded");

	Params::StreamingRadioPlayerComponent_Rock_VehicleExploded Parms{};

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
