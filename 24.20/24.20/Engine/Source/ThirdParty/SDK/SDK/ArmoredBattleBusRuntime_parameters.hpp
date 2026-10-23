#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
	float                                         TurretYaw_0;
	float                                         TurretPitch_0;
	struct FRotator                               PawnYawRotator;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain) == 0x000028, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain::VehicleActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain, TurretYaw_0) == 0x000008, "Member 'FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain::TurretYaw_0' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain, TurretPitch_0) == 0x00000C, "Member 'FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain::TurretPitch_0' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain, PawnYawRotator) == 0x000010, "Member 'FortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain::PawnYawRotator' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform final
{
public:
	const class USkeletalMeshComponent*           BusMeshComponent;
	uint8                                         Pad_8[0x8];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform) == 0x000010, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform) == 0x000070, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform, BusMeshComponent) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform::BusMeshComponent' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform, ReturnValue) == 0x000010, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform::ReturnValue' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation final
{
public:
	const class USkeletalMeshComponent*           BusMeshComponent;
	class FName                                   FrontHandAttachBoneName;
	class FName                                   RearHandAttachBoneName;
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation) == 0x000028, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation, BusMeshComponent) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation::BusMeshComponent' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation, FrontHandAttachBoneName) == 0x000008, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation::FrontHandAttachBoneName' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation, RearHandAttachBoneName) == 0x00000C, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation::RearHandAttachBoneName' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation, ReturnValue) == 0x000010, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation::ReturnValue' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform final
{
public:
	const class USkeletalMeshComponent*           BusMeshComponent;
	uint8                                         Pad_8[0x8];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform) == 0x000010, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform) == 0x000070, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform, BusMeshComponent) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform::BusMeshComponent' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform, ReturnValue) == 0x000010, "Member 'FortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform::ReturnValue' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation final
{
public:
	struct FVector                                HandLocation;
	struct FVector                                FootLocation;
	struct FRotator                               FootRotation;
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation) == 0x000060, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation, HandLocation) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation::HandLocation' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation, FootLocation) == 0x000018, "Member 'FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation::FootLocation' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation, FootRotation) == 0x000030, "Member 'FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation::FootRotation' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation, ReturnValue) == 0x000048, "Member 'FortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation::ReturnValue' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues final
{
public:
	const class USkeletalMeshComponent*           BusMeshComponent;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues) == 0x000008, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues, BusMeshComponent) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues::BusMeshComponent' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate) == 0x000008, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate::VehicleActor' has a wrong offset!");

struct FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
	class FName                                   SocketName;
	uint8                                         Pad_C[0x4];
	struct FRotator                               NewRotation;
	float                                         SmoothedYawValue;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed) == 0x000008, "Wrong alignment on FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed");
static_assert(sizeof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed) == 0x000030, "Wrong size on FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed::VehicleActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed, SocketName) == 0x000008, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed::SocketName' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed, NewRotation) == 0x000010, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed::NewRotation' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed, SmoothedYawValue) == 0x000028, "Member 'FortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed::SmoothedYawValue' has a wrong offset!");

struct FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
	const class AFortPlayerPawn*                  GunnerActor;
	float                                         AdjustedPitch;
	float                                         AdjustedYaw;
	bool                                          bIsLocalPlayerControlled;
	uint8                                         Pad_19[0x7];
	struct FRotator                               YawRotator;
};
static_assert(alignof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw) == 0x000008, "Wrong alignment on FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw");
static_assert(sizeof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw) == 0x000038, "Wrong size on FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::VehicleActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, GunnerActor) == 0x000008, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::GunnerActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, AdjustedPitch) == 0x000010, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::AdjustedPitch' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, AdjustedYaw) == 0x000014, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::AdjustedYaw' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, bIsLocalPlayerControlled) == 0x000018, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::bIsLocalPlayerControlled' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw, YawRotator) == 0x000020, "Member 'FortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw::YawRotator' has a wrong offset!");

struct FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
	struct FRotator                               PreviousRotator;
	float                                         ReturnValue;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate) == 0x000008, "Wrong alignment on FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate");
static_assert(sizeof(FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate) == 0x000028, "Wrong size on FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate::VehicleActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate, PreviousRotator) == 0x000008, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate::PreviousRotator' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate, ReturnValue) == 0x000020, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate::ReturnValue' has a wrong offset!");

struct FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw final
{
public:
	const class AFortAthenaVehicle*               OwnerVehicle;
	const class AFortPlayerPawn*                  GunnerActor;
	class FName                                   SocketName;
	float                                         YawOffset;
	float                                         TurretAimPitch;
	float                                         YawDeltaSmoothed;
	struct FRotator                               WeaponYaw;
};
static_assert(alignof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw) == 0x000008, "Wrong alignment on FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw");
static_assert(sizeof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw) == 0x000038, "Wrong size on FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, OwnerVehicle) == 0x000000, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::OwnerVehicle' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, GunnerActor) == 0x000008, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::GunnerActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, SocketName) == 0x000010, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::SocketName' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, YawOffset) == 0x000014, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::YawOffset' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, TurretAimPitch) == 0x000018, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::TurretAimPitch' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, YawDeltaSmoothed) == 0x00001C, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::YawDeltaSmoothed' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw, WeaponYaw) == 0x000020, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw::WeaponYaw' has a wrong offset!");

struct FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed final
{
public:
	const class AFortAthenaVehicle*               VehicleActor;
	class FName                                   SocketName;
	uint8                                         Pad_C[0x4];
	struct FRotator                               NewRotation;
	float                                         SmoothedYawValue;
	float                                         ReturnValue;
};
static_assert(alignof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed) == 0x000008, "Wrong alignment on FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed");
static_assert(sizeof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed) == 0x000030, "Wrong size on FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed, VehicleActor) == 0x000000, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed::VehicleActor' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed, SocketName) == 0x000008, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed::SocketName' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed, NewRotation) == 0x000010, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed::NewRotation' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed, SmoothedYawValue) == 0x000028, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed::SmoothedYawValue' has a wrong offset!");
static_assert(offsetof(FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed, ReturnValue) == 0x00002C, "Member 'FortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed::ReturnValue' has a wrong offset!");

}
