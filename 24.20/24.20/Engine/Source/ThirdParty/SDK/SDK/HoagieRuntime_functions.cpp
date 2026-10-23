#pragma once

#include "Basic.hpp"

#include "HoagieRuntime_classes.hpp"
#include "HoagieRuntime_parameters.hpp"

namespace SDK
{

void AFortHoagieAudioController::CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheAudioComponents");

	Params::FortHoagieAudioController_CacheAudioComponents Parms{};

	Parms.InEngine = InEngine;
	Parms.InRotor = InRotor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieAudioController::CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheHoagieVehicle");

	Params::FortHoagieAudioController_CacheHoagieVehicle Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "Update");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::MulticastRotorImpulse(const struct FHitResult& RotorHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "MulticastRotorImpulse");

	Params::FortHoagieVehicle_MulticastRotorImpulse Parms{};

	Parms.RotorHit = std::move(RotorHit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFailed");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostReady");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnCritRotor(float Damage, const struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnCritRotor");

	Params::FortHoagieVehicle_OnCritRotor Parms{};

	Parms.Damage = Damage;
	Parms.ImpactLocation = std::move(ImpactLocation);
	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.bMainRotor = bMainRotor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnImpactOtherHoagie(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactOtherHoagie");

	Params::FortHoagieVehicle_OnImpactOtherHoagie Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnImpactWhileCritical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactWhileCritical");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnRefueledFromEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRefueledFromEmpty");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::OnRep_ControlState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_ControlState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::OnRep_HoagieState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_HoagieState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::OnRotorDamageDealt(const struct FHitResult& Impact, bool bInner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealt");

	Params::FortHoagieVehicle_OnRotorDamageDealt Parms{};

	Parms.Impact = std::move(Impact);
	Parms.bInner = bInner;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnRotorDamageDealtInner(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtInner");

	Params::FortHoagieVehicle_OnRotorDamageDealtInner Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnRotorDamageDealtOuter(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtOuter");

	Params::FortHoagieVehicle_OnRotorDamageDealtOuter Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnRotorDamagePlayer(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamagePlayer");

	Params::FortHoagieVehicle_OnRotorDamagePlayer Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::OnRotorsStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorsStop");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnStartupBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupBegin");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnStartupEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortHoagieVehicle::OnTickRotors(float RotorAngleDegrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnTickRotors");

	Params::FortHoagieVehicle_OnTickRotors Parms{};

	Parms.RotorAngleDegrees = RotorAngleDegrees;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "ServerUpdateControlState");

	Params::FortHoagieVehicle_ServerUpdateControlState Parms{};

	Parms.InControlState = std::move(InControlState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::SetMainRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetMainRotorRotation");

	Params::FortHoagieVehicle_SetMainRotorRotation Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::SetRotorWashActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetRotorWashActive");

	Params::FortHoagieVehicle_SetRotorWashActive Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::SetTailRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetTailRotorRotation");

	Params::FortHoagieVehicle_SetTailRotorRotation Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::ShowCooldownCue(class AFortPlayerPawn* Pawn, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "ShowCooldownCue");

	Params::FortHoagieVehicle_ShowCooldownCue Parms{};

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateDamageStateNative");

	Params::FortHoagieVehicle_UpdateDamageStateNative Parms{};

	Parms.Damage = Damage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortHoagieVehicle::UpdateHoagieAnimBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateHoagieAnimBP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float AFortHoagieVehicle::GetAltitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetAltitude");

	Params::FortHoagieVehicle_GetAltitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetBoostCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostCooldown");

	Params::FortHoagieVehicle_GetBoostCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AFortHoagieVehicle::GetBoostDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDirection");

	Params::FortHoagieVehicle_GetBoostDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetBoostDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDuration");

	Params::FortHoagieVehicle_GetBoostDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetBoostTimeLeft() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostTimeLeft");

	Params::FortHoagieVehicle_GetBoostTimeLeft Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetDistanceToGround() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetDistanceToGround");

	Params::FortHoagieVehicle_GetDistanceToGround Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetForwardAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetForwardAlpha");

	Params::FortHoagieVehicle_GetForwardAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortHoagieVehicle::GetIsEngineOn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetIsEngineOn");

	Params::FortHoagieVehicle_GetIsEngineOn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetLiftAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetLiftAlpha");

	Params::FortHoagieVehicle_GetLiftAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetMaxAltitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxAltitude");

	Params::FortHoagieVehicle_GetMaxAltitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetMaxBoostCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxBoostCooldown");

	Params::FortHoagieVehicle_GetMaxBoostCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetRotorAngleDegrees() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorAngleDegrees");

	Params::FortHoagieVehicle_GetRotorAngleDegrees Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AFortHoagieVehicle::GetRotorCenterPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorCenterPosition");

	Params::FortHoagieVehicle_GetRotorCenterPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetRotorSpeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeed");

	Params::FortHoagieVehicle_GetRotorSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetRotorSpeedPercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeedPercent");

	Params::FortHoagieVehicle_GetRotorSpeedPercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetShutdownTimeLeft() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetShutdownTimeLeft");

	Params::FortHoagieVehicle_GetShutdownTimeLeft Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetSteerAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetSteerAlpha");

	Params::FortHoagieVehicle_GetSteerAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetStrafeAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetStrafeAlpha");

	Params::FortHoagieVehicle_GetStrafeAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetThrustDirection");

	Params::FortHoagieVehicle_GetThrustDirection Parms{};

	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortHoagieVehicle::GetVerticalSpeedKmh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetVerticalSpeedKmh");

	Params::FortHoagieVehicle_GetVerticalSpeedKmh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortHoagieVehicle::IsScrapingBottom() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsScrapingBottom");

	Params::FortHoagieVehicle_IsScrapingBottom Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortHoagieVehicle::IsShuttingDown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsShuttingDown");

	Params::FortHoagieVehicle_IsShuttingDown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortHoagieVehicle::IsStartingUp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsStartingUp");

	Params::FortHoagieVehicle_IsStartingUp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
