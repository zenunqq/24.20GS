#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETankAimingMode : uint8
{
	CameraRotationNoTrace                    = 0,
	CameraTraceFromPivotSocket               = 1,
	CameraTraceFromDistanceScalar            = 2,
	ETankAimingMode_MAX                      = 3,
};

struct FTankWeaponAimingData final
{
public:
	int32                                         SeatIndex;
	bool                                          bAimRotationLerpWithEasing;
	uint8                                         Pad_5[0x3];
	struct FScalableFloat                         AimRotationLerpSpeed;
	struct FRuntimeFloatCurve                     AimYawRotationEasingCurve;
	struct FRuntimeFloatCurve                     AimPitchRotationEasingCurve;
	ETankAimingMode                               AimingMode;
	uint8                                         Pad_141[0x7];
	struct FScalableFloat                         AimingCameraToMuzzleDistanceScalar;
	struct FScalableFloat                         AimingWhileTargetingCameraToMuzzleDistanceScalar;
	struct FScalableFloat                         AimingPitchAdjust;
};
static_assert(alignof(FTankWeaponAimingData) == 0x000008, "Wrong alignment on FTankWeaponAimingData");
static_assert(sizeof(FTankWeaponAimingData) == 0x0001C0, "Wrong size on FTankWeaponAimingData");
static_assert(offsetof(FTankWeaponAimingData, SeatIndex) == 0x000000, "Member 'FTankWeaponAimingData::SeatIndex' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, bAimRotationLerpWithEasing) == 0x000004, "Member 'FTankWeaponAimingData::bAimRotationLerpWithEasing' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimRotationLerpSpeed) == 0x000008, "Member 'FTankWeaponAimingData::AimRotationLerpSpeed' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimYawRotationEasingCurve) == 0x000030, "Member 'FTankWeaponAimingData::AimYawRotationEasingCurve' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimPitchRotationEasingCurve) == 0x0000B8, "Member 'FTankWeaponAimingData::AimPitchRotationEasingCurve' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimingMode) == 0x000140, "Member 'FTankWeaponAimingData::AimingMode' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimingCameraToMuzzleDistanceScalar) == 0x000148, "Member 'FTankWeaponAimingData::AimingCameraToMuzzleDistanceScalar' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimingWhileTargetingCameraToMuzzleDistanceScalar) == 0x000170, "Member 'FTankWeaponAimingData::AimingWhileTargetingCameraToMuzzleDistanceScalar' has a wrong offset!");
static_assert(offsetof(FTankWeaponAimingData, AimingPitchAdjust) == 0x000198, "Member 'FTankWeaponAimingData::AimingPitchAdjust' has a wrong offset!");

struct alignas(0x10) FTankAnimAimingData final
{
public:
	uint8                                         Pad_0[0x60];
};
static_assert(alignof(FTankAnimAimingData) == 0x000010, "Wrong alignment on FTankAnimAimingData");
static_assert(sizeof(FTankAnimAimingData) == 0x000060, "Wrong size on FTankAnimAimingData");

struct FServerSocketTransformOverride final
{
public:
	class FName                                   SocketName;
	uint8                                         Pad_4[0x4];
	struct FVector                                PivotOffset;
	struct FVector                                OffsetFromPivot;
};
static_assert(alignof(FServerSocketTransformOverride) == 0x000008, "Wrong alignment on FServerSocketTransformOverride");
static_assert(sizeof(FServerSocketTransformOverride) == 0x000038, "Wrong size on FServerSocketTransformOverride");
static_assert(offsetof(FServerSocketTransformOverride, SocketName) == 0x000000, "Member 'FServerSocketTransformOverride::SocketName' has a wrong offset!");
static_assert(offsetof(FServerSocketTransformOverride, PivotOffset) == 0x000008, "Member 'FServerSocketTransformOverride::PivotOffset' has a wrong offset!");
static_assert(offsetof(FServerSocketTransformOverride, OffsetFromPivot) == 0x000020, "Member 'FServerSocketTransformOverride::OffsetFromPivot' has a wrong offset!");

struct FTankAudioUpdateContext final
{
public:
	bool                                          bIsAwake;
	uint8                                         Pad_1[0x3];
	float                                         SpeedParamValue;
	float                                         LeftTrackPower;
	float                                         RightTrackPower;
	float                                         TurningParamValue;
	int32                                         CurrentGear;
	float                                         AccelSpeedThreshold;
	float                                         LastGearChangeTime;
	float                                         AccelWaitTime;
	bool                                          bTurningRight;
	bool                                          bTurningLeft;
	bool                                          bPreviousTryMotion;
	uint8                                         Pad_27[0x1];
	float                                         LastForwardSpeed;
	float                                         TimeUntilAccelOneShotFade;
	float                                         DecelSpeedThreshold;
	float                                         EngineIdleThreshold;
	struct FVector2D                              WeaponsMovementThreshold;
	class FName                                   CannonSocketName;
	class FName                                   TurretSocketName;
	int32                                         SurfaceID;
	uint8                                         Pad_54[0x4];
	class UAudioComponent*                        DecelOneShot;
	class UAudioComponent*                        AccelOneShot;
	class UAudioComponent*                        TurningOneShot;
	class UFortLayeredAudioComponent*             TracksLeftAudio;
	class UFortLayeredAudioComponent*             TracksRightAudio;
	uint8                                         Pad_80[0x38];
};
static_assert(alignof(FTankAudioUpdateContext) == 0x000008, "Wrong alignment on FTankAudioUpdateContext");
static_assert(sizeof(FTankAudioUpdateContext) == 0x0000B8, "Wrong size on FTankAudioUpdateContext");
static_assert(offsetof(FTankAudioUpdateContext, bIsAwake) == 0x000000, "Member 'FTankAudioUpdateContext::bIsAwake' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, SpeedParamValue) == 0x000004, "Member 'FTankAudioUpdateContext::SpeedParamValue' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, LeftTrackPower) == 0x000008, "Member 'FTankAudioUpdateContext::LeftTrackPower' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, RightTrackPower) == 0x00000C, "Member 'FTankAudioUpdateContext::RightTrackPower' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TurningParamValue) == 0x000010, "Member 'FTankAudioUpdateContext::TurningParamValue' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, CurrentGear) == 0x000014, "Member 'FTankAudioUpdateContext::CurrentGear' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, AccelSpeedThreshold) == 0x000018, "Member 'FTankAudioUpdateContext::AccelSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, LastGearChangeTime) == 0x00001C, "Member 'FTankAudioUpdateContext::LastGearChangeTime' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, AccelWaitTime) == 0x000020, "Member 'FTankAudioUpdateContext::AccelWaitTime' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, bTurningRight) == 0x000024, "Member 'FTankAudioUpdateContext::bTurningRight' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, bTurningLeft) == 0x000025, "Member 'FTankAudioUpdateContext::bTurningLeft' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, bPreviousTryMotion) == 0x000026, "Member 'FTankAudioUpdateContext::bPreviousTryMotion' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, LastForwardSpeed) == 0x000028, "Member 'FTankAudioUpdateContext::LastForwardSpeed' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TimeUntilAccelOneShotFade) == 0x00002C, "Member 'FTankAudioUpdateContext::TimeUntilAccelOneShotFade' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, DecelSpeedThreshold) == 0x000030, "Member 'FTankAudioUpdateContext::DecelSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, EngineIdleThreshold) == 0x000034, "Member 'FTankAudioUpdateContext::EngineIdleThreshold' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, WeaponsMovementThreshold) == 0x000038, "Member 'FTankAudioUpdateContext::WeaponsMovementThreshold' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, CannonSocketName) == 0x000048, "Member 'FTankAudioUpdateContext::CannonSocketName' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TurretSocketName) == 0x00004C, "Member 'FTankAudioUpdateContext::TurretSocketName' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, SurfaceID) == 0x000050, "Member 'FTankAudioUpdateContext::SurfaceID' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, DecelOneShot) == 0x000058, "Member 'FTankAudioUpdateContext::DecelOneShot' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, AccelOneShot) == 0x000060, "Member 'FTankAudioUpdateContext::AccelOneShot' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TurningOneShot) == 0x000068, "Member 'FTankAudioUpdateContext::TurningOneShot' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TracksLeftAudio) == 0x000070, "Member 'FTankAudioUpdateContext::TracksLeftAudio' has a wrong offset!");
static_assert(offsetof(FTankAudioUpdateContext, TracksRightAudio) == 0x000078, "Member 'FTankAudioUpdateContext::TracksRightAudio' has a wrong offset!");

}
