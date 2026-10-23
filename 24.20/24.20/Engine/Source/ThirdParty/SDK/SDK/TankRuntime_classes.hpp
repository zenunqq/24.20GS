#pragma once

#include "Basic.hpp"

#include "TankRuntime_structs.hpp"
#include "VehicleAudioRuntime_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UFortTankVehicleConfigs final : public UFortTreadVehicleConfigs
{
public:
	TArray<struct FTankWeaponAimingData>          TankWeaponAimingData;
	class FText                                   SecondInteractText;
	ETInteractionType                             SecondInteractType;
	uint8                                         Pad_9A1[0x7];
	struct FScalableFloat                         SecondInteractDuration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTankVehicleConfigs">();
	}
	static class UFortTankVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTankVehicleConfigs>();
	}
};
static_assert(alignof(UFortTankVehicleConfigs) == 0x000008, "Wrong alignment on UFortTankVehicleConfigs");
static_assert(sizeof(UFortTankVehicleConfigs) == 0x0009D0, "Wrong size on UFortTankVehicleConfigs");
static_assert(offsetof(UFortTankVehicleConfigs, TankWeaponAimingData) == 0x000978, "Member 'UFortTankVehicleConfigs::TankWeaponAimingData' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractText) == 0x000988, "Member 'UFortTankVehicleConfigs::SecondInteractText' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractType) == 0x0009A0, "Member 'UFortTankVehicleConfigs::SecondInteractType' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractDuration) == 0x0009A8, "Member 'UFortTankVehicleConfigs::SecondInteractDuration' has a wrong offset!");

class UFortTankAnimFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTankAnimFunctionLibrary">();
	}
	static class UFortTankAnimFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTankAnimFunctionLibrary>();
	}
};
static_assert(alignof(UFortTankAnimFunctionLibrary) == 0x000008, "Wrong alignment on UFortTankAnimFunctionLibrary");
static_assert(sizeof(UFortTankAnimFunctionLibrary) == 0x000028, "Wrong size on UFortTankAnimFunctionLibrary");

class AFortTankVehicle final : public AFortTreadVehicle
{
public:
	uint8                                         Pad_1A60[0x70];
	TMulticastInlineDelegate<void()>              OnTankRepairedDelegate;
	class FName                                   BarrelSocketName;
	uint8                                         Pad_1AE4[0x4];
	class UCapsuleComponent*                      BarrelCollision;
	class UStaticMeshComponent*                   UnderVehicleCollision;
	TArray<struct FServerSocketTransformOverride> SocketOverrideArray;
	TMap<class FName, struct FTransform>          SocketTransformOverrideMap;
	class USkeletalMeshComponent*                 CachedSkeletalMeshComponent;
	class AFortVehicleAudioController*            CachedVehicleAudioController;
	EVisibilityBasedAnimTickOption                DefaultServerVisibilityBasedAnimTickOption;
	bool                                          DefaultServerSkeletalMeshTickEnabled;
	uint8                                         Pad_1B6A[0x2];
	class FName                                   YawPivotSocketName;
	class FName                                   PitchPivotSocketName;
	uint8                                         Pad_1B74[0x4];
	class ULegacyCameraShake*                     DriverCameraShakeInstance;
	class ULegacyCameraShake*                     AcceleratingCameraShakeInstance;
	uint8                                         Pad_1B88[0x8];
	class UNiagaraComponent*                      CachedNiagaraComponentRoadAndExhaust;
	class FString                                 RoadAndExhaustNiagaraComponentName;
	class FName                                   RoadAndExhaustPeelOutLeftName;
	class FName                                   RoadAndExhaustPeelOutRightName;
	class FName                                   RoadAndExhaustVehicleSpeedName;
	class FName                                   RoadAndExhaustSlideDirectionName;
	float                                         RoadAndExhaustMinSpeedForDust;
	class FName                                   RoadAndExhaustDustColorLerpName;
	float                                         RoadAndExhaustDustColorLerpOffRoad;
	float                                         RoadAndExhaustDustColorLerpOnRoad;
	class FName                                   RoadAndExhaustDustAlphaMultiplierName;
	float                                         RoadAndExhaustDustAlphaMultiplierOffRoad;
	float                                         RoadAndExhaustDustAlphaMultiplierOnRoad;
	class FName                                   RoadAndExhaustDustFrontLeftName;
	class FName                                   RoadAndExhaustDustFrontRightName;
	class FName                                   RoadAndExhaustDustMiddleLeftName;
	class FName                                   RoadAndExhaustDustMiddleRightName;
	class FName                                   RoadAndExhaustDustRearLeftName;
	class FName                                   RoadAndExhaustDustRearRightName;
	class FName                                   RoadAndExhaustIsOnDirtName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTankVehicle">();
	}
	static class AFortTankVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortTankVehicle>();
	}
};
static_assert(alignof(AFortTankVehicle) == 0x000010, "Wrong alignment on AFortTankVehicle");
static_assert(sizeof(AFortTankVehicle) == 0x001BF0, "Wrong size on AFortTankVehicle");
static_assert(offsetof(AFortTankVehicle, OnTankRepairedDelegate) == 0x001AD0, "Member 'AFortTankVehicle::OnTankRepairedDelegate' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, BarrelSocketName) == 0x001AE0, "Member 'AFortTankVehicle::BarrelSocketName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, BarrelCollision) == 0x001AE8, "Member 'AFortTankVehicle::BarrelCollision' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, UnderVehicleCollision) == 0x001AF0, "Member 'AFortTankVehicle::UnderVehicleCollision' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, SocketOverrideArray) == 0x001AF8, "Member 'AFortTankVehicle::SocketOverrideArray' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, SocketTransformOverrideMap) == 0x001B08, "Member 'AFortTankVehicle::SocketTransformOverrideMap' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, CachedSkeletalMeshComponent) == 0x001B58, "Member 'AFortTankVehicle::CachedSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, CachedVehicleAudioController) == 0x001B60, "Member 'AFortTankVehicle::CachedVehicleAudioController' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, DefaultServerVisibilityBasedAnimTickOption) == 0x001B68, "Member 'AFortTankVehicle::DefaultServerVisibilityBasedAnimTickOption' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, DefaultServerSkeletalMeshTickEnabled) == 0x001B69, "Member 'AFortTankVehicle::DefaultServerSkeletalMeshTickEnabled' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, YawPivotSocketName) == 0x001B6C, "Member 'AFortTankVehicle::YawPivotSocketName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, PitchPivotSocketName) == 0x001B70, "Member 'AFortTankVehicle::PitchPivotSocketName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, DriverCameraShakeInstance) == 0x001B78, "Member 'AFortTankVehicle::DriverCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, AcceleratingCameraShakeInstance) == 0x001B80, "Member 'AFortTankVehicle::AcceleratingCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, CachedNiagaraComponentRoadAndExhaust) == 0x001B90, "Member 'AFortTankVehicle::CachedNiagaraComponentRoadAndExhaust' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustNiagaraComponentName) == 0x001B98, "Member 'AFortTankVehicle::RoadAndExhaustNiagaraComponentName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustPeelOutLeftName) == 0x001BA8, "Member 'AFortTankVehicle::RoadAndExhaustPeelOutLeftName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustPeelOutRightName) == 0x001BAC, "Member 'AFortTankVehicle::RoadAndExhaustPeelOutRightName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustVehicleSpeedName) == 0x001BB0, "Member 'AFortTankVehicle::RoadAndExhaustVehicleSpeedName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustSlideDirectionName) == 0x001BB4, "Member 'AFortTankVehicle::RoadAndExhaustSlideDirectionName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustMinSpeedForDust) == 0x001BB8, "Member 'AFortTankVehicle::RoadAndExhaustMinSpeedForDust' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustColorLerpName) == 0x001BBC, "Member 'AFortTankVehicle::RoadAndExhaustDustColorLerpName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustColorLerpOffRoad) == 0x001BC0, "Member 'AFortTankVehicle::RoadAndExhaustDustColorLerpOffRoad' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustColorLerpOnRoad) == 0x001BC4, "Member 'AFortTankVehicle::RoadAndExhaustDustColorLerpOnRoad' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustAlphaMultiplierName) == 0x001BC8, "Member 'AFortTankVehicle::RoadAndExhaustDustAlphaMultiplierName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustAlphaMultiplierOffRoad) == 0x001BCC, "Member 'AFortTankVehicle::RoadAndExhaustDustAlphaMultiplierOffRoad' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustAlphaMultiplierOnRoad) == 0x001BD0, "Member 'AFortTankVehicle::RoadAndExhaustDustAlphaMultiplierOnRoad' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustFrontLeftName) == 0x001BD4, "Member 'AFortTankVehicle::RoadAndExhaustDustFrontLeftName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustFrontRightName) == 0x001BD8, "Member 'AFortTankVehicle::RoadAndExhaustDustFrontRightName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustMiddleLeftName) == 0x001BDC, "Member 'AFortTankVehicle::RoadAndExhaustDustMiddleLeftName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustMiddleRightName) == 0x001BE0, "Member 'AFortTankVehicle::RoadAndExhaustDustMiddleRightName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustRearLeftName) == 0x001BE4, "Member 'AFortTankVehicle::RoadAndExhaustDustRearLeftName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustDustRearRightName) == 0x001BE8, "Member 'AFortTankVehicle::RoadAndExhaustDustRearRightName' has a wrong offset!");
static_assert(offsetof(AFortTankVehicle, RoadAndExhaustIsOnDirtName) == 0x001BEC, "Member 'AFortTankVehicle::RoadAndExhaustIsOnDirtName' has a wrong offset!");

class UFortTankVehicleAnimInstance final : public UFortTreadVehicleAnimInstance
{
public:
	class AFortTankVehicle*                       TankVehicle;
	struct FRotator                               CurrentAimRotation;
	struct FRotator                               CurrentTurretAimRotation;
	struct FRotator                               SmoothedTurretDeltaRotation;
	float                                         InterpolationRate;
	bool                                          bEngineOverheated;
	bool                                          bHasPassenger;
	bool                                          bIsFired;
	bool                                          bIsReady;
	bool                                          bDriverCoverOnCooldown;
	uint8                                         Pad_719[0x3];
	float                                         LeftTreadPower;
	float                                         RightTreadPower;
	float                                         TurretYawAlpha;
	float                                         TurretYawAlphaSmoothingRate;
	float                                         CannonYaw;
	float                                         CannonPitch;
	float                                         TurretYaw;
	float                                         TurretPitch;
	struct FLinearColor                           MIDTreadPositionColor;
	float                                         MIDTreadDamageLeft;
	float                                         MIDTreadDamageRight;
	float                                         MIDExhaustShakeSpeed;
	float                                         MIDExhaustShakeAmp;
	float                                         MIDEngineBoostGlow;
	float                                         MIDEngineHealthRatio;
	uint8                                         Pad_764[0x4];
	TMap<EVehicleSeats, struct FTankAnimAimingData> AimingData;
	struct FRotator                               PreviousTurretAimRotation;
	uint8                                         Pad_7D0[0x10];

public:
	void UpdateMIDEngineProperties(const float DeltaSeconds, const float EngineHealthRatio);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTankVehicleAnimInstance">();
	}
	static class UFortTankVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTankVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortTankVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortTankVehicleAnimInstance");
static_assert(sizeof(UFortTankVehicleAnimInstance) == 0x0007E0, "Wrong size on UFortTankVehicleAnimInstance");
static_assert(offsetof(UFortTankVehicleAnimInstance, TankVehicle) == 0x0006C0, "Member 'UFortTankVehicleAnimInstance::TankVehicle' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, CurrentAimRotation) == 0x0006C8, "Member 'UFortTankVehicleAnimInstance::CurrentAimRotation' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, CurrentTurretAimRotation) == 0x0006E0, "Member 'UFortTankVehicleAnimInstance::CurrentTurretAimRotation' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, SmoothedTurretDeltaRotation) == 0x0006F8, "Member 'UFortTankVehicleAnimInstance::SmoothedTurretDeltaRotation' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, InterpolationRate) == 0x000710, "Member 'UFortTankVehicleAnimInstance::InterpolationRate' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, bEngineOverheated) == 0x000714, "Member 'UFortTankVehicleAnimInstance::bEngineOverheated' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, bHasPassenger) == 0x000715, "Member 'UFortTankVehicleAnimInstance::bHasPassenger' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, bIsFired) == 0x000716, "Member 'UFortTankVehicleAnimInstance::bIsFired' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, bIsReady) == 0x000717, "Member 'UFortTankVehicleAnimInstance::bIsReady' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, bDriverCoverOnCooldown) == 0x000718, "Member 'UFortTankVehicleAnimInstance::bDriverCoverOnCooldown' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, LeftTreadPower) == 0x00071C, "Member 'UFortTankVehicleAnimInstance::LeftTreadPower' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, RightTreadPower) == 0x000720, "Member 'UFortTankVehicleAnimInstance::RightTreadPower' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYawAlpha) == 0x000724, "Member 'UFortTankVehicleAnimInstance::TurretYawAlpha' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYawAlphaSmoothingRate) == 0x000728, "Member 'UFortTankVehicleAnimInstance::TurretYawAlphaSmoothingRate' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, CannonYaw) == 0x00072C, "Member 'UFortTankVehicleAnimInstance::CannonYaw' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, CannonPitch) == 0x000730, "Member 'UFortTankVehicleAnimInstance::CannonPitch' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYaw) == 0x000734, "Member 'UFortTankVehicleAnimInstance::TurretYaw' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretPitch) == 0x000738, "Member 'UFortTankVehicleAnimInstance::TurretPitch' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadPositionColor) == 0x00073C, "Member 'UFortTankVehicleAnimInstance::MIDTreadPositionColor' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadDamageLeft) == 0x00074C, "Member 'UFortTankVehicleAnimInstance::MIDTreadDamageLeft' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadDamageRight) == 0x000750, "Member 'UFortTankVehicleAnimInstance::MIDTreadDamageRight' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDExhaustShakeSpeed) == 0x000754, "Member 'UFortTankVehicleAnimInstance::MIDExhaustShakeSpeed' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDExhaustShakeAmp) == 0x000758, "Member 'UFortTankVehicleAnimInstance::MIDExhaustShakeAmp' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDEngineBoostGlow) == 0x00075C, "Member 'UFortTankVehicleAnimInstance::MIDEngineBoostGlow' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDEngineHealthRatio) == 0x000760, "Member 'UFortTankVehicleAnimInstance::MIDEngineHealthRatio' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, AimingData) == 0x000768, "Member 'UFortTankVehicleAnimInstance::AimingData' has a wrong offset!");
static_assert(offsetof(UFortTankVehicleAnimInstance, PreviousTurretAimRotation) == 0x0007B8, "Member 'UFortTankVehicleAnimInstance::PreviousTurretAimRotation' has a wrong offset!");

class AFortTankVehicleAudioController final : public AFortVehicleAudioController
{
public:
	struct FFortAudioFloatParameter               SpeedParam;
	struct FFortAudioFloatParameter               TurnPowerParam;
	struct FFortAudioFloatParameter               OutOfFuelParam;
	struct FFortAudioFloatParameter               IdleParam;
	struct FFortAudioFloatParameter               TurningParam;
	struct FFortAudioFloatParameter               ForwardParam;
	struct FFortAudioFloatParameter               ReverseParam;
	struct FFortAudioFloatParameter               SurfaceParam;
	struct FFortAudioFloatParameter               IsInWaterParam;
	struct FFortAudioFloatParameter               IsInAirParam;
	struct FFortAudioFloatParameter               BoostParam;
	struct FFortAudioFloatParameter               CannonHorizontalMovementParam;
	struct FFortAudioFloatParameter               CannonVerticalMovementParam;
	struct FFortAudioFloatParameter               TurretHorizontalMovementParam;
	struct FFortAudioFloatParameter               TurretVerticalMovementParam;
	struct FTankAudioUpdateContext                Context;

public:
	void PlayAccelOneShot();
	void PlayDecelOneShot();
	void PlayTurningOneShot();

	class AFortTankVehicle* GetTankVehicleActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTankVehicleAudioController">();
	}
	static class AFortTankVehicleAudioController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortTankVehicleAudioController>();
	}
};
static_assert(alignof(AFortTankVehicleAudioController) == 0x000008, "Wrong alignment on AFortTankVehicleAudioController");
static_assert(sizeof(AFortTankVehicleAudioController) == 0x0006E8, "Wrong size on AFortTankVehicleAudioController");
static_assert(offsetof(AFortTankVehicleAudioController, SpeedParam) == 0x0002E8, "Member 'AFortTankVehicleAudioController::SpeedParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, TurnPowerParam) == 0x000320, "Member 'AFortTankVehicleAudioController::TurnPowerParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, OutOfFuelParam) == 0x000358, "Member 'AFortTankVehicleAudioController::OutOfFuelParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, IdleParam) == 0x000390, "Member 'AFortTankVehicleAudioController::IdleParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, TurningParam) == 0x0003C8, "Member 'AFortTankVehicleAudioController::TurningParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, ForwardParam) == 0x000400, "Member 'AFortTankVehicleAudioController::ForwardParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, ReverseParam) == 0x000438, "Member 'AFortTankVehicleAudioController::ReverseParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, SurfaceParam) == 0x000470, "Member 'AFortTankVehicleAudioController::SurfaceParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, IsInWaterParam) == 0x0004A8, "Member 'AFortTankVehicleAudioController::IsInWaterParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, IsInAirParam) == 0x0004E0, "Member 'AFortTankVehicleAudioController::IsInAirParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, BoostParam) == 0x000518, "Member 'AFortTankVehicleAudioController::BoostParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, CannonHorizontalMovementParam) == 0x000550, "Member 'AFortTankVehicleAudioController::CannonHorizontalMovementParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, CannonVerticalMovementParam) == 0x000588, "Member 'AFortTankVehicleAudioController::CannonVerticalMovementParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, TurretHorizontalMovementParam) == 0x0005C0, "Member 'AFortTankVehicleAudioController::TurretHorizontalMovementParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, TurretVerticalMovementParam) == 0x0005F8, "Member 'AFortTankVehicleAudioController::TurretVerticalMovementParam' has a wrong offset!");
static_assert(offsetof(AFortTankVehicleAudioController, Context) == 0x000630, "Member 'AFortTankVehicleAudioController::Context' has a wrong offset!");

}
