#pragma once

#include "Basic.hpp"

#include "TankUI_classes.hpp"
#include "TankUI_parameters.hpp"

namespace SDK
{

void UTankVehicleReticle::HandleOnDamageablePartHealthChanged(const struct FVehicleDamageablePartConfig& PartConfig, const struct FVehicleDamageablePart& Part, const bool bNewlyDisabled, const bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "HandleOnDamageablePartHealthChanged");

	Params::TankVehicleReticle_HandleOnDamageablePartHealthChanged Parms{};

	Parms.PartConfig = std::move(PartConfig);
	Parms.Part = std::move(Part);
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTankVehicleReticle::HandleOnEquipMountedWeapon(class AFortWeaponRanged* EquippedMountedWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "HandleOnEquipMountedWeapon");

	Params::TankVehicleReticle_HandleOnEquipMountedWeapon Parms{};

	Parms.EquippedMountedWeapon = EquippedMountedWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTankVehicleReticle::OnCannonFired(const float RateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnCannonFired");

	Params::TankVehicleReticle_OnCannonFired Parms{};

	Parms.RateTime = RateTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankDistanceUpdate(const float Distance, const float DistancePercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankDistanceUpdate");

	Params::TankVehicleReticle_OnTankDistanceUpdate Parms{};

	Parms.Distance = Distance;
	Parms.DistancePercent = DistancePercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankEngineHealthChanged(const float EngineHealth, const float EngineHealthMax, const bool bNewlyDisabled, const bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankEngineHealthChanged");

	Params::TankVehicleReticle_OnTankEngineHealthChanged Parms{};

	Parms.EngineHealth = EngineHealth;
	Parms.EngineHealthMax = EngineHealthMax;
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankHatchHealthChanged(const float HatchHealth, const float HatchHealthMax, const bool bNewlyDisabled, const bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankHatchHealthChanged");

	Params::TankVehicleReticle_OnTankHatchHealthChanged Parms{};

	Parms.HatchHealth = HatchHealth;
	Parms.HatchHealthMax = HatchHealthMax;
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankRotationValueChanged(const float TankValue, const float TurretValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankRotationValueChanged");

	Params::TankVehicleReticle_OnTankRotationValueChanged Parms{};

	Parms.TankValue = TankValue;
	Parms.TurretValue = TurretValue;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankTargetingPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTargetingPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UTankVehicleReticle::OnTankTargetingReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTargetingReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UTankVehicleReticle::OnTankTurretAimPitchValueChanged(const float Pitch, const float PitchPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTurretAimPitchValueChanged");

	Params::TankVehicleReticle_OnTankTurretAimPitchValueChanged Parms{};

	Parms.Pitch = Pitch;
	Parms.PitchPercent = PitchPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTankTurretAimYawValueChanged(const float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTurretAimYawValueChanged");

	Params::TankVehicleReticle_OnTankTurretAimYawValueChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::OnTreadEnabledChanged(const bool bEnabled, const ETreadSide Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "OnTreadEnabledChanged");

	Params::TankVehicleReticle_OnTreadEnabledChanged Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}

void UTankVehicleReticle::SetupVehicleFromBP(class AActor* NewVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TankVehicleReticle", "SetupVehicleFromBP");

	Params::TankVehicleReticle_SetupVehicleFromBP Parms{};

	Parms.NewVehicle = NewVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
