#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortArmoredBattleBusPassengerAnimInstance final : public UFortPlayerAnimInstanceProxy
{
public:
	struct FRotator                               PreviousVehicleRotator;
	float                                         SmoothedVehicleYawRate;
	int32                                         PawnSeat;
	bool                                          bIsFrontTurretPassenger;
	bool                                          bIsRearTurretPassenger;
	uint8                                         Pad_15C2[0x2];
	float                                         Speed;
	float                                         YawDelta;
	float                                         TurretYaw;
	float                                         TurretPitch;
	uint8                                         Pad_15D4[0x4];
	struct FRotator                               TurretYawRotator;
	float                                         SlopeRollDegreeAngle;
	float                                         SlopePitchDegreeAngle;
	struct FVector                                HandAttachL;
	struct FVector                                HandAttachR;
	ERelativeTransformSpace                       TransformSpace;
	uint8                                         Pad_1629[0x3];
	float                                         UpdateYawDeltaSmoothedLerpRate;
	int32                                         TurretPassengerFront;
	int32                                         TurretPassengerRear;
	class FName                                   FrontFootBoneName;
	class FName                                   RearFootBoneName;
	class FName                                   GunHandAttachBoneName_FrontLeft;
	class FName                                   GunHandAttachBoneName_RearLeft;
	class FName                                   GunHandAttachBoneName_FrontRight;
	class FName                                   GunHandAttachBoneName_RearRight;
	class FName                                   PassengerBoneName_Front;
	class FName                                   PassengerBoneName_Rear;
	float                                         TurretPitchDegMin;
	float                                         TurretPitchDegMax;
	float                                         LocalPlayerTurretPitchEaseRate;
	uint8                                         Pad_1664[0xC];

public:
	void GenerateCharacterPitchAndYawForSlopedTerrain(const class AFortAthenaVehicle* VehicleActor, float* TurretYaw_0, float* TurretPitch_0, struct FRotator* PawnYawRotator);
	struct FTransform GetFootAttachTransform(const class USkeletalMeshComponent* BusMeshComponent);
	struct FVector GetHandAttachLocation(const class USkeletalMeshComponent* BusMeshComponent, const class FName FrontHandAttachBoneName, const class FName RearHandAttachBoneName);
	struct FTransform GetPassengerTransform(const class USkeletalMeshComponent* BusMeshComponent);
	struct FVector UnrotateHandAttachLocation(const struct FVector& HandLocation, const struct FVector& FootLocation, const struct FRotator& FootRotation);
	void UpdateHandPositionsSlopeValues(const class USkeletalMeshComponent* BusMeshComponent);
	void UpdateSmoothedVehicleYawRate(const class AFortAthenaVehicle* VehicleActor);
	void UpdateYawDeltaSmoothed(const class AFortAthenaVehicle* VehicleActor, const class FName SocketName, const struct FRotator& NewRotation, float* SmoothedYawValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortArmoredBattleBusPassengerAnimInstance">();
	}
	static class UFortArmoredBattleBusPassengerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortArmoredBattleBusPassengerAnimInstance>();
	}
};
static_assert(alignof(UFortArmoredBattleBusPassengerAnimInstance) == 0x000010, "Wrong alignment on UFortArmoredBattleBusPassengerAnimInstance");
static_assert(sizeof(UFortArmoredBattleBusPassengerAnimInstance) == 0x001670, "Wrong size on UFortArmoredBattleBusPassengerAnimInstance");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PreviousVehicleRotator) == 0x0015A0, "Member 'UFortArmoredBattleBusPassengerAnimInstance::PreviousVehicleRotator' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SmoothedVehicleYawRate) == 0x0015B8, "Member 'UFortArmoredBattleBusPassengerAnimInstance::SmoothedVehicleYawRate' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PawnSeat) == 0x0015BC, "Member 'UFortArmoredBattleBusPassengerAnimInstance::PawnSeat' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, bIsFrontTurretPassenger) == 0x0015C0, "Member 'UFortArmoredBattleBusPassengerAnimInstance::bIsFrontTurretPassenger' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, bIsRearTurretPassenger) == 0x0015C1, "Member 'UFortArmoredBattleBusPassengerAnimInstance::bIsRearTurretPassenger' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, Speed) == 0x0015C4, "Member 'UFortArmoredBattleBusPassengerAnimInstance::Speed' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, YawDelta) == 0x0015C8, "Member 'UFortArmoredBattleBusPassengerAnimInstance::YawDelta' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretYaw) == 0x0015CC, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretYaw' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitch) == 0x0015D0, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretPitch' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretYawRotator) == 0x0015D8, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretYawRotator' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SlopeRollDegreeAngle) == 0x0015F0, "Member 'UFortArmoredBattleBusPassengerAnimInstance::SlopeRollDegreeAngle' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SlopePitchDegreeAngle) == 0x0015F4, "Member 'UFortArmoredBattleBusPassengerAnimInstance::SlopePitchDegreeAngle' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, HandAttachL) == 0x0015F8, "Member 'UFortArmoredBattleBusPassengerAnimInstance::HandAttachL' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, HandAttachR) == 0x001610, "Member 'UFortArmoredBattleBusPassengerAnimInstance::HandAttachR' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TransformSpace) == 0x001628, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TransformSpace' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, UpdateYawDeltaSmoothedLerpRate) == 0x00162C, "Member 'UFortArmoredBattleBusPassengerAnimInstance::UpdateYawDeltaSmoothedLerpRate' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPassengerFront) == 0x001630, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretPassengerFront' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPassengerRear) == 0x001634, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretPassengerRear' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, FrontFootBoneName) == 0x001638, "Member 'UFortArmoredBattleBusPassengerAnimInstance::FrontFootBoneName' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, RearFootBoneName) == 0x00163C, "Member 'UFortArmoredBattleBusPassengerAnimInstance::RearFootBoneName' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_FrontLeft) == 0x001640, "Member 'UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_FrontLeft' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_RearLeft) == 0x001644, "Member 'UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_RearLeft' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_FrontRight) == 0x001648, "Member 'UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_FrontRight' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_RearRight) == 0x00164C, "Member 'UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_RearRight' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PassengerBoneName_Front) == 0x001650, "Member 'UFortArmoredBattleBusPassengerAnimInstance::PassengerBoneName_Front' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PassengerBoneName_Rear) == 0x001654, "Member 'UFortArmoredBattleBusPassengerAnimInstance::PassengerBoneName_Rear' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitchDegMin) == 0x001658, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretPitchDegMin' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitchDegMax) == 0x00165C, "Member 'UFortArmoredBattleBusPassengerAnimInstance::TurretPitchDegMax' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, LocalPlayerTurretPitchEaseRate) == 0x001660, "Member 'UFortArmoredBattleBusPassengerAnimInstance::LocalPlayerTurretPitchEaseRate' has a wrong offset!");

class UFortArmoredBattleBusVehicleAnimInstance final : public UFortVehicleAnimInstance
{
public:
	float                                         FrontTurretAimPitch;
	float                                         RearTurretAimPitch;
	float                                         FrontYawDeltaSmoothed;
	float                                         RearYawDeltaSmoothed;
	float                                         SmoothedVehicleYawRate;
	float                                         FrontYawDeltaSmoothedAlpha;
	float                                         RearYawDeltaSmoothedAlpha;
	uint8                                         Pad_60C[0x4];
	struct FRotator                               FrontWeaponYaw;
	struct FRotator                               RearWeaponYaw;
	struct FRotator                               PreviousVehicleRotator;
	bool                                          bHasFrontTurretPassenger;
	bool                                          bHasRearTurretPassenger;
	uint8                                         Pad_65A[0x2];
	float                                         NetworkEaseRate;
	float                                         UpdateYawDeltaSmoothedLerpRate;
	int32                                         FrontPassengerSeatIndex;
	int32                                         RearPassengerSeatIndex;
	float                                         FrontPassengerYawOffset;
	float                                         RearPassengerYawOffset;
	class FName                                   FrontPassengerBoneName;
	class FName                                   RearPassengerBoneName;
	uint8                                         Pad_67C[0x4];

public:
	void GetPitchAndYaw(const class AFortAthenaVehicle* VehicleActor, const class AFortPlayerPawn* GunnerActor, float* AdjustedPitch, float* AdjustedYaw, bool* bIsLocalPlayerControlled, struct FRotator* YawRotator);
	float UpdateSmoothedVehicleYawRate(const class AFortAthenaVehicle* VehicleActor, const struct FRotator& PreviousRotator);
	void UpdateTurretAimPitchWeaponYaw(const class AFortAthenaVehicle* OwnerVehicle, const class AFortPlayerPawn* GunnerActor, const class FName SocketName, const float YawOffset, float* TurretAimPitch, float* YawDeltaSmoothed, struct FRotator* WeaponYaw);
	float UpdateYawDeltaSmoothed(const class AFortAthenaVehicle* VehicleActor, const class FName SocketName, const struct FRotator& NewRotation, const float SmoothedYawValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortArmoredBattleBusVehicleAnimInstance">();
	}
	static class UFortArmoredBattleBusVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortArmoredBattleBusVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortArmoredBattleBusVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortArmoredBattleBusVehicleAnimInstance");
static_assert(sizeof(UFortArmoredBattleBusVehicleAnimInstance) == 0x000680, "Wrong size on UFortArmoredBattleBusVehicleAnimInstance");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontTurretAimPitch) == 0x0005F0, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontTurretAimPitch' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearTurretAimPitch) == 0x0005F4, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearTurretAimPitch' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontYawDeltaSmoothed) == 0x0005F8, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontYawDeltaSmoothed' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearYawDeltaSmoothed) == 0x0005FC, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearYawDeltaSmoothed' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, SmoothedVehicleYawRate) == 0x000600, "Member 'UFortArmoredBattleBusVehicleAnimInstance::SmoothedVehicleYawRate' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontYawDeltaSmoothedAlpha) == 0x000604, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontYawDeltaSmoothedAlpha' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearYawDeltaSmoothedAlpha) == 0x000608, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearYawDeltaSmoothedAlpha' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontWeaponYaw) == 0x000610, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontWeaponYaw' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearWeaponYaw) == 0x000628, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearWeaponYaw' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, PreviousVehicleRotator) == 0x000640, "Member 'UFortArmoredBattleBusVehicleAnimInstance::PreviousVehicleRotator' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, bHasFrontTurretPassenger) == 0x000658, "Member 'UFortArmoredBattleBusVehicleAnimInstance::bHasFrontTurretPassenger' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, bHasRearTurretPassenger) == 0x000659, "Member 'UFortArmoredBattleBusVehicleAnimInstance::bHasRearTurretPassenger' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, NetworkEaseRate) == 0x00065C, "Member 'UFortArmoredBattleBusVehicleAnimInstance::NetworkEaseRate' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, UpdateYawDeltaSmoothedLerpRate) == 0x000660, "Member 'UFortArmoredBattleBusVehicleAnimInstance::UpdateYawDeltaSmoothedLerpRate' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerSeatIndex) == 0x000664, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerSeatIndex' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerSeatIndex) == 0x000668, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearPassengerSeatIndex' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerYawOffset) == 0x00066C, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerYawOffset' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerYawOffset) == 0x000670, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearPassengerYawOffset' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerBoneName) == 0x000674, "Member 'UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerBoneName' has a wrong offset!");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerBoneName) == 0x000678, "Member 'UFortArmoredBattleBusVehicleAnimInstance::RearPassengerBoneName' has a wrong offset!");

}
