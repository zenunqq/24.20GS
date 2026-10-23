#pragma once

#include "Basic.hpp"

#include "ArmoredBattleBusRuntime_classes.hpp"
#include "ArmoredBattleBusRuntime_parameters.hpp"

namespace SDK
{

void UFortArmoredBattleBusPassengerAnimInstance::GenerateCharacterPitchAndYawForSlopedTerrain(const class AFortAthenaVehicle* VehicleActor, float* TurretYaw_0, float* TurretPitch_0, struct FRotator* PawnYawRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GenerateCharacterPitchAndYawForSlopedTerrain");

	Params::FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain Parms{};

	Parms.VehicleActor = VehicleActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TurretYaw_0 != nullptr)
		*TurretYaw_0 = Parms.TurretYaw_0;

	if (TurretPitch_0 != nullptr)
		*TurretPitch_0 = Parms.TurretPitch_0;

	if (PawnYawRotator != nullptr)
		*PawnYawRotator = std::move(Parms.PawnYawRotator);
}

struct FTransform UFortArmoredBattleBusPassengerAnimInstance::GetFootAttachTransform(const class USkeletalMeshComponent* BusMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetFootAttachTransform");

	Params::FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform Parms{};

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UFortArmoredBattleBusPassengerAnimInstance::GetHandAttachLocation(const class USkeletalMeshComponent* BusMeshComponent, const class FName FrontHandAttachBoneName, const class FName RearHandAttachBoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetHandAttachLocation");

	Params::FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation Parms{};

	Parms.BusMeshComponent = BusMeshComponent;
	Parms.FrontHandAttachBoneName = FrontHandAttachBoneName;
	Parms.RearHandAttachBoneName = RearHandAttachBoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UFortArmoredBattleBusPassengerAnimInstance::GetPassengerTransform(const class USkeletalMeshComponent* BusMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetPassengerTransform");

	Params::FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform Parms{};

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UFortArmoredBattleBusPassengerAnimInstance::UnrotateHandAttachLocation(const struct FVector& HandLocation, const struct FVector& FootLocation, const struct FRotator& FootRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UnrotateHandAttachLocation");

	Params::FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation Parms{};

	Parms.HandLocation = std::move(HandLocation);
	Parms.FootLocation = std::move(FootLocation);
	Parms.FootRotation = std::move(FootRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortArmoredBattleBusPassengerAnimInstance::UpdateHandPositionsSlopeValues(const class USkeletalMeshComponent* BusMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateHandPositionsSlopeValues");

	Params::FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues Parms{};

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortArmoredBattleBusPassengerAnimInstance::UpdateSmoothedVehicleYawRate(const class AFortAthenaVehicle* VehicleActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateSmoothedVehicleYawRate");

	Params::FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate Parms{};

	Parms.VehicleActor = VehicleActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortArmoredBattleBusPassengerAnimInstance::UpdateYawDeltaSmoothed(const class AFortAthenaVehicle* VehicleActor, const class FName SocketName, const struct FRotator& NewRotation, float* SmoothedYawValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateYawDeltaSmoothed");

	Params::FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.SocketName = SocketName;
	Parms.NewRotation = std::move(NewRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SmoothedYawValue != nullptr)
		*SmoothedYawValue = Parms.SmoothedYawValue;
}

void UFortArmoredBattleBusVehicleAnimInstance::GetPitchAndYaw(const class AFortAthenaVehicle* VehicleActor, const class AFortPlayerPawn* GunnerActor, float* AdjustedPitch, float* AdjustedYaw, bool* bIsLocalPlayerControlled, struct FRotator* YawRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "GetPitchAndYaw");

	Params::FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.GunnerActor = GunnerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AdjustedPitch != nullptr)
		*AdjustedPitch = Parms.AdjustedPitch;

	if (AdjustedYaw != nullptr)
		*AdjustedYaw = Parms.AdjustedYaw;

	if (bIsLocalPlayerControlled != nullptr)
		*bIsLocalPlayerControlled = Parms.bIsLocalPlayerControlled;

	if (YawRotator != nullptr)
		*YawRotator = std::move(Parms.YawRotator);
}

float UFortArmoredBattleBusVehicleAnimInstance::UpdateSmoothedVehicleYawRate(const class AFortAthenaVehicle* VehicleActor, const struct FRotator& PreviousRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateSmoothedVehicleYawRate");

	Params::FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.PreviousRotator = std::move(PreviousRotator);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortArmoredBattleBusVehicleAnimInstance::UpdateTurretAimPitchWeaponYaw(const class AFortAthenaVehicle* OwnerVehicle, const class AFortPlayerPawn* GunnerActor, const class FName SocketName, const float YawOffset, float* TurretAimPitch, float* YawDeltaSmoothed, struct FRotator* WeaponYaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateTurretAimPitchWeaponYaw");

	Params::FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw Parms{};

	Parms.OwnerVehicle = OwnerVehicle;
	Parms.GunnerActor = GunnerActor;
	Parms.SocketName = SocketName;
	Parms.YawOffset = YawOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TurretAimPitch != nullptr)
		*TurretAimPitch = Parms.TurretAimPitch;

	if (YawDeltaSmoothed != nullptr)
		*YawDeltaSmoothed = Parms.YawDeltaSmoothed;

	if (WeaponYaw != nullptr)
		*WeaponYaw = std::move(Parms.WeaponYaw);
}

float UFortArmoredBattleBusVehicleAnimInstance::UpdateYawDeltaSmoothed(const class AFortAthenaVehicle* VehicleActor, const class FName SocketName, const struct FRotator& NewRotation, const float SmoothedYawValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateYawDeltaSmoothed");

	Params::FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.SocketName = SocketName;
	Parms.NewRotation = std::move(NewRotation);
	Parms.SmoothedYawValue = SmoothedYawValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
