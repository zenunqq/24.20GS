#pragma once

#include "Basic.hpp"

#include "MotorcycleRuntime_classes.hpp"
#include "MotorcycleRuntime_parameters.hpp"

namespace SDK
{

void UFortMotorcycleVehicleAnimInstance::CollectConditionsFromDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicleAnimInstance", "CollectConditionsFromDriver");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::AnimNotify_JumpEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "AnimNotify_JumpEntered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::CalculateNoiseAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "CalculateNoiseAlpha");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::CollapsedAimYawSmoothed(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "CollapsedAimYawSmoothed");

	Params::FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleCancelChargingJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleCancelChargingJump");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleChargingJump(const float InJumpChargeFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleChargingJump");

	Params::FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump Parms{};

	Parms.InJumpChargeFactor = InJumpChargeFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleFinishAirTrick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleFinishAirTrick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleJump(const float InJumpChargeFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleJump");

	Params::FortPlayerAnimInstance_MotorcycleRider_HandleJump Parms{};

	Parms.InJumpChargeFactor = InJumpChargeFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleReleaseStoppie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleReleaseStoppie");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleReleaseWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleReleaseWheelie");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartAirTrick(const EFortMotorcycleAirTrickType TrickType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartAirTrick");

	Params::FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick Parms{};

	Parms.TrickType = TrickType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartChargingJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartChargingJump");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartStoppie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartStoppie");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartWheelie");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortMotorcycleVehicle::BP_OnCancelChargingJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnCancelChargingJump");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnChargingJump(const float JumpChargeFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnChargingJump");

	Params::FortMotorcycleVehicle_BP_OnChargingJump Parms{};

	Parms.JumpChargeFactor = JumpChargeFactor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortMotorcycleVehicle::BP_OnFailWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnFailWheelie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnFinishAirTrick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnFinishAirTrick");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnJump(const float JumpChargeFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnJump");

	Params::FortMotorcycleVehicle_BP_OnJump Parms{};

	Parms.JumpChargeFactor = JumpChargeFactor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortMotorcycleVehicle::BP_OnLandStoppie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnLandStoppie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnLandWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnLandWheelie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnReleaseStoppie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnReleaseStoppie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnReleaseWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnReleaseWheelie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnStartAirTrick(const EFortMotorcycleAirTrickType TrickType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartAirTrick");

	Params::FortMotorcycleVehicle_BP_OnStartAirTrick Parms{};

	Parms.TrickType = TrickType;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortMotorcycleVehicle::BP_OnStartChargingJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartChargingJump");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnStartStoppie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartStoppie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::BP_OnStartWheelie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartWheelie");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortMotorcycleVehicle::ChangeBoostAttackState(const bool bNewIsBoostAttacking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "ChangeBoostAttackState");

	Params::FortMotorcycleVehicle_ChangeBoostAttackState Parms{};

	Parms.bNewIsBoostAttacking = bNewIsBoostAttacking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortMotorcycleVehicle::OnInventoryModeToggled(bool bIsInInventoryMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "OnInventoryModeToggled");

	Params::FortMotorcycleVehicle_OnInventoryModeToggled Parms{};

	Parms.bIsInInventoryMode = bIsInInventoryMode;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortMotorcycleVehicle::OnPlayerWeaponChanged(class AFortWeapon* InNewWeapon, class AFortWeapon* InPrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "OnPlayerWeaponChanged");

	Params::FortMotorcycleVehicle_OnPlayerWeaponChanged Parms{};

	Parms.InNewWeapon = InNewWeapon;
	Parms.InPrevWeapon = InPrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortMotorcycleVehicle::OnRep_IsBoostAttacking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "OnRep_IsBoostAttacking");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortMotorcycleVehicle::ServerEjectAllPlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "ServerEjectAllPlayers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FVector AFortMotorcycleVehicle::GetAverageSpringNormal() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "GetAverageSpringNormal");

	Params::FortMotorcycleVehicle_GetAverageSpringNormal Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortMotorcycleVehicle::GetLeanAngleDegrees() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "GetLeanAngleDegrees");

	Params::FortMotorcycleVehicle_GetLeanAngleDegrees Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EPhysicalSurface AFortMotorcycleVehicle::GetSurfaceTypeVehicleOn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "GetSurfaceTypeVehicleOn");

	Params::FortMotorcycleVehicle_GetSurfaceTypeVehicleOn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortMotorcycleVehicle::IsInInventoryMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "IsInInventoryMode");

	Params::FortMotorcycleVehicle_IsInInventoryMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortMotorcycleVehicle::IsPowerSliding() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "IsPowerSliding");

	Params::FortMotorcycleVehicle_IsPowerSliding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortMotorcycleVehicle::IsSuperSliding() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMotorcycleVehicle", "IsSuperSliding");

	Params::FortMotorcycleVehicle_IsSuperSliding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
