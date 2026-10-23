#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "HoagieRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFortHoagieDriverAnimInstance final : public UFortVehicleOccupantAnimInstance
{
public:
	struct FVector                                LeftHandIKPositionOffset;
	struct FVector                                RightHandIKPositionOffset;
	struct FRotator                               LeftHandIKRotationOffset;
	struct FRotator                               RightHandIKRotationOffset;
	EFortCardinalDirection                        BoostCardinalDirection;
	uint8                                         Pad_869[0x3];
	float                                         NormalizedAcceleration;
	float                                         VehicleRoll;
	float                                         VehicleYaw;
	float                                         ForwardSpeed;
	bool                                          bIsMovingAnyDirection;
	bool                                          bIsMovingFastAnyDirection;
	bool                                          bShouldReverse;
	bool                                          bShouldGoBackToIdle;
	bool                                          bTransition_Default_ReverseStart;
	bool                                          bTransition_BoostLoop_Reverse;
	uint8                                         Pad_882[0xE];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieDriverAnimInstance">();
	}
	static class UFortHoagieDriverAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHoagieDriverAnimInstance>();
	}
};
static_assert(alignof(UFortHoagieDriverAnimInstance) == 0x000010, "Wrong alignment on UFortHoagieDriverAnimInstance");
static_assert(sizeof(UFortHoagieDriverAnimInstance) == 0x000890, "Wrong size on UFortHoagieDriverAnimInstance");
static_assert(offsetof(UFortHoagieDriverAnimInstance, LeftHandIKPositionOffset) == 0x000808, "Member 'UFortHoagieDriverAnimInstance::LeftHandIKPositionOffset' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, RightHandIKPositionOffset) == 0x000820, "Member 'UFortHoagieDriverAnimInstance::RightHandIKPositionOffset' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, LeftHandIKRotationOffset) == 0x000838, "Member 'UFortHoagieDriverAnimInstance::LeftHandIKRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, RightHandIKRotationOffset) == 0x000850, "Member 'UFortHoagieDriverAnimInstance::RightHandIKRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, BoostCardinalDirection) == 0x000868, "Member 'UFortHoagieDriverAnimInstance::BoostCardinalDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, NormalizedAcceleration) == 0x00086C, "Member 'UFortHoagieDriverAnimInstance::NormalizedAcceleration' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, VehicleRoll) == 0x000870, "Member 'UFortHoagieDriverAnimInstance::VehicleRoll' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, VehicleYaw) == 0x000874, "Member 'UFortHoagieDriverAnimInstance::VehicleYaw' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, ForwardSpeed) == 0x000878, "Member 'UFortHoagieDriverAnimInstance::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bIsMovingAnyDirection) == 0x00087C, "Member 'UFortHoagieDriverAnimInstance::bIsMovingAnyDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bIsMovingFastAnyDirection) == 0x00087D, "Member 'UFortHoagieDriverAnimInstance::bIsMovingFastAnyDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bShouldReverse) == 0x00087E, "Member 'UFortHoagieDriverAnimInstance::bShouldReverse' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bShouldGoBackToIdle) == 0x00087F, "Member 'UFortHoagieDriverAnimInstance::bShouldGoBackToIdle' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bTransition_Default_ReverseStart) == 0x000880, "Member 'UFortHoagieDriverAnimInstance::bTransition_Default_ReverseStart' has a wrong offset!");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bTransition_BoostLoop_Reverse) == 0x000881, "Member 'UFortHoagieDriverAnimInstance::bTransition_BoostLoop_Reverse' has a wrong offset!");

class UFortHoagieVehicleAnimInstance final : public UFortVehicleAnimInstance
{
public:
	uint8                                         Pad_5F0[0x130];
	struct FRotator                               EngineRotation;
	struct FRotator                               MainRotorRotation;
	struct FRotator                               TailRotorRotaton;
	struct FRotator                               BoosterFanRotation;
	EFortCardinalDirection                        BoostCardinalDirection;
	uint8                                         Pad_781[0x1B];
	float                                         EngineRotationInterpSpeed;
	float                                         EngineRotationDuringBoostInterpSpeed;
	float                                         EngineFlipSpeedThreshold;
	float                                         BoostDirectionDeadzone;
	float                                         EngineFlipDeadzone;
	float                                         DriverRoll;
	float                                         DriverYaw;
	float                                         VerticalSpeed;
	float                                         FwdSpeed;
	float                                         LocalBoostDirection;
	float                                         YawBlendSpaceInput;
	float                                         NormalizedAcceleration;
	uint8                                         Pad_7CC[0x1];
	bool                                          bShouldHideBlades;
	bool                                          bIsBoostOnCD;
	bool                                          bIsBoostReady;
	bool                                          bIsMovingForward;
	bool                                          bIsReversing;
	bool                                          bIsMovingAnyDirection;
	bool                                          bIsBoosting;
	bool                                          bShouldReverse;
	bool                                          bShouldGoBackToIdle;
	bool                                          bShouldApplyBoostAdditive;
	bool                                          bIsEngineShuttingOff;
	bool                                          bTransition_Default_ReverseStart;
	bool                                          bTransition_BoostLoop_Reverse;
	uint8                                         Pad_7DA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieVehicleAnimInstance">();
	}
	static class UFortHoagieVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHoagieVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortHoagieVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortHoagieVehicleAnimInstance");
static_assert(sizeof(UFortHoagieVehicleAnimInstance) == 0x0007E0, "Wrong size on UFortHoagieVehicleAnimInstance");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotation) == 0x000720, "Member 'UFortHoagieVehicleAnimInstance::EngineRotation' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, MainRotorRotation) == 0x000738, "Member 'UFortHoagieVehicleAnimInstance::MainRotorRotation' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, TailRotorRotaton) == 0x000750, "Member 'UFortHoagieVehicleAnimInstance::TailRotorRotaton' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoosterFanRotation) == 0x000768, "Member 'UFortHoagieVehicleAnimInstance::BoosterFanRotation' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoostCardinalDirection) == 0x000780, "Member 'UFortHoagieVehicleAnimInstance::BoostCardinalDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotationInterpSpeed) == 0x00079C, "Member 'UFortHoagieVehicleAnimInstance::EngineRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotationDuringBoostInterpSpeed) == 0x0007A0, "Member 'UFortHoagieVehicleAnimInstance::EngineRotationDuringBoostInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineFlipSpeedThreshold) == 0x0007A4, "Member 'UFortHoagieVehicleAnimInstance::EngineFlipSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoostDirectionDeadzone) == 0x0007A8, "Member 'UFortHoagieVehicleAnimInstance::BoostDirectionDeadzone' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineFlipDeadzone) == 0x0007AC, "Member 'UFortHoagieVehicleAnimInstance::EngineFlipDeadzone' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, DriverRoll) == 0x0007B0, "Member 'UFortHoagieVehicleAnimInstance::DriverRoll' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, DriverYaw) == 0x0007B4, "Member 'UFortHoagieVehicleAnimInstance::DriverYaw' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, VerticalSpeed) == 0x0007B8, "Member 'UFortHoagieVehicleAnimInstance::VerticalSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, FwdSpeed) == 0x0007BC, "Member 'UFortHoagieVehicleAnimInstance::FwdSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, LocalBoostDirection) == 0x0007C0, "Member 'UFortHoagieVehicleAnimInstance::LocalBoostDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, YawBlendSpaceInput) == 0x0007C4, "Member 'UFortHoagieVehicleAnimInstance::YawBlendSpaceInput' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, NormalizedAcceleration) == 0x0007C8, "Member 'UFortHoagieVehicleAnimInstance::NormalizedAcceleration' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldHideBlades) == 0x0007CD, "Member 'UFortHoagieVehicleAnimInstance::bShouldHideBlades' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoostOnCD) == 0x0007CE, "Member 'UFortHoagieVehicleAnimInstance::bIsBoostOnCD' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoostReady) == 0x0007CF, "Member 'UFortHoagieVehicleAnimInstance::bIsBoostReady' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsMovingForward) == 0x0007D0, "Member 'UFortHoagieVehicleAnimInstance::bIsMovingForward' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsReversing) == 0x0007D1, "Member 'UFortHoagieVehicleAnimInstance::bIsReversing' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsMovingAnyDirection) == 0x0007D2, "Member 'UFortHoagieVehicleAnimInstance::bIsMovingAnyDirection' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoosting) == 0x0007D3, "Member 'UFortHoagieVehicleAnimInstance::bIsBoosting' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldReverse) == 0x0007D4, "Member 'UFortHoagieVehicleAnimInstance::bShouldReverse' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldGoBackToIdle) == 0x0007D5, "Member 'UFortHoagieVehicleAnimInstance::bShouldGoBackToIdle' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldApplyBoostAdditive) == 0x0007D6, "Member 'UFortHoagieVehicleAnimInstance::bShouldApplyBoostAdditive' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsEngineShuttingOff) == 0x0007D7, "Member 'UFortHoagieVehicleAnimInstance::bIsEngineShuttingOff' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bTransition_Default_ReverseStart) == 0x0007D8, "Member 'UFortHoagieVehicleAnimInstance::bTransition_Default_ReverseStart' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bTransition_BoostLoop_Reverse) == 0x0007D9, "Member 'UFortHoagieVehicleAnimInstance::bTransition_BoostLoop_Reverse' has a wrong offset!");

class UFortCameraMode_Hoagie final : public UFortCameraMode_AthenaVehicle
{
public:
	float                                         CurrentRollMultiplier;
	float                                         CurrentPitchMultiplier;
	struct FVector                                LastOrigin;
	struct FVector                                CurrentInterpSpeed;
	struct FVector                                BoostInterpSpeed;
	float                                         BaseRollMultiplier;
	float                                         BasePitchMultiplier;
	float                                         BoostRollMultiplier;
	float                                         BoostPitchMultiplier;
	float                                         BoostRollDampFactor;
	float                                         BoostRollRecoveryDampFactor;
	float                                         BoostRecoveryInterpSpeed;
	uint8                                         Pad_1B9C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_Hoagie">();
	}
	static class UFortCameraMode_Hoagie* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_Hoagie>();
	}
};
static_assert(alignof(UFortCameraMode_Hoagie) == 0x000010, "Wrong alignment on UFortCameraMode_Hoagie");
static_assert(sizeof(UFortCameraMode_Hoagie) == 0x001BA0, "Wrong size on UFortCameraMode_Hoagie");
static_assert(offsetof(UFortCameraMode_Hoagie, CurrentRollMultiplier) == 0x001B30, "Member 'UFortCameraMode_Hoagie::CurrentRollMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, CurrentPitchMultiplier) == 0x001B34, "Member 'UFortCameraMode_Hoagie::CurrentPitchMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, LastOrigin) == 0x001B38, "Member 'UFortCameraMode_Hoagie::LastOrigin' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, CurrentInterpSpeed) == 0x001B50, "Member 'UFortCameraMode_Hoagie::CurrentInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostInterpSpeed) == 0x001B68, "Member 'UFortCameraMode_Hoagie::BoostInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BaseRollMultiplier) == 0x001B80, "Member 'UFortCameraMode_Hoagie::BaseRollMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BasePitchMultiplier) == 0x001B84, "Member 'UFortCameraMode_Hoagie::BasePitchMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollMultiplier) == 0x001B88, "Member 'UFortCameraMode_Hoagie::BoostRollMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostPitchMultiplier) == 0x001B8C, "Member 'UFortCameraMode_Hoagie::BoostPitchMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollDampFactor) == 0x001B90, "Member 'UFortCameraMode_Hoagie::BoostRollDampFactor' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollRecoveryDampFactor) == 0x001B94, "Member 'UFortCameraMode_Hoagie::BoostRollRecoveryDampFactor' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRecoveryInterpSpeed) == 0x001B98, "Member 'UFortCameraMode_Hoagie::BoostRecoveryInterpSpeed' has a wrong offset!");

class AFortHoagieAudioController final : public AActor
{
public:
	bool                                          bHighQualityOverride;
	bool                                          bLocalPlayerInHoagie;
	bool                                          bCriticalDamageNative;
	bool                                          bRotorHitNative;
	bool                                          bIsRotorWashActiveNative;
	uint8                                         Pad_28D[0x3];
	float                                         RotorWashRelativeZOffset;
	TWeakObjectPtr<class AFortHoagieVehicle>      Vehicle;
	uint8                                         Pad_29C[0x4];
	class UFortLayeredAudioComponent*             EngineAudio;
	class UFortLayeredAudioComponent*             RotorAudio;
	uint8                                         Pad_2B0[0x40];

public:
	void CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor);
	void CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle);
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieAudioController">();
	}
	static class AFortHoagieAudioController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortHoagieAudioController>();
	}
};
static_assert(alignof(AFortHoagieAudioController) == 0x000008, "Wrong alignment on AFortHoagieAudioController");
static_assert(sizeof(AFortHoagieAudioController) == 0x0002F0, "Wrong size on AFortHoagieAudioController");
static_assert(offsetof(AFortHoagieAudioController, bHighQualityOverride) == 0x000288, "Member 'AFortHoagieAudioController::bHighQualityOverride' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, bLocalPlayerInHoagie) == 0x000289, "Member 'AFortHoagieAudioController::bLocalPlayerInHoagie' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, bCriticalDamageNative) == 0x00028A, "Member 'AFortHoagieAudioController::bCriticalDamageNative' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, bRotorHitNative) == 0x00028B, "Member 'AFortHoagieAudioController::bRotorHitNative' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, bIsRotorWashActiveNative) == 0x00028C, "Member 'AFortHoagieAudioController::bIsRotorWashActiveNative' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, RotorWashRelativeZOffset) == 0x000290, "Member 'AFortHoagieAudioController::RotorWashRelativeZOffset' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, Vehicle) == 0x000294, "Member 'AFortHoagieAudioController::Vehicle' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, EngineAudio) == 0x0002A0, "Member 'AFortHoagieAudioController::EngineAudio' has a wrong offset!");
static_assert(offsetof(AFortHoagieAudioController, RotorAudio) == 0x0002A8, "Member 'AFortHoagieAudioController::RotorAudio' has a wrong offset!");

class AFortHoagieVehicle final : public AFortAthenaSKVehicle
{
public:
	class FName                                   PassengerCollision;
	float                                         CameraBoomDistance;
	float                                         CameraBoomHeight;
	uint8                                         Pad_1ABC[0x4];
	TMulticastInlineDelegate<void(EHoagieBoostState State)> OnBoostStateChanged;
	TMulticastInlineDelegate<void()>              OnAltimeterTraceUpdated;
	TMulticastInlineDelegate<void()>              OnCrashingStateEntered;
	bool                                          bEngineAudioDisabled;
	uint8                                         Pad_1AF1[0x3];
	float                                         LiftRumbleTimer;
	bool                                          bLiftUp;
	uint8                                         Pad_1AF9[0x7];
	uint64                                        LiftForceFeedbackHandle;
	uint64                                        PassiveForceFeedbackHandle;
	float                                         Theta_Native;
	float                                         WashAltAlpha_Native;
	float                                         RotorWashTickTimer;
	uint8                                         Pad_1B1C[0x4];
	TArray<struct FVector>                        RotorTraceArray;
	TArray<EObjectTypeQuery>                      RotorWashObjectsTypes;
	class UFortHoagieVehicleConfigs*              FortHoagieVehicleConfigs;
	class UCurveFloat*                            RumbleIntensity;
	struct FFortHeliFlightModel                   FlightModel;
	bool                                          bClearPitchInput;
	uint8                                         Pad_1D39[0x3];
	float                                         BoostTimeLeft;
	float                                         BoostBrakingTimeLeft;
	float                                         BoostCooldown;
	float                                         ShutdownTimer;
	float                                         FoliageDestructionTimer;
	float                                         CrashingScrapingTimer;
	float                                         CrashingNotMovingTimer;
	bool                                          bCanSleep;
	bool                                          bHasAppliedCrashDamage;
	bool                                          bOrientedForLanding;
	bool                                          bForceNegativeLift;
	float                                         AltimeterTraceTimer;
	float                                         LastRotorImpulseTime;
	float                                         CriticalExplodeTimer;
	bool                                          bCriticalExplosionPlayed;
	uint8                                         Pad_1D69[0x3];
	float                                         TimeWhileCritical;
	float                                         TimeWhileLanding;
	float                                         LiftFromOverrideButton;
	struct FVector                                BoostDirection;
	struct FVector                                LastRotorSweepDirection;
	struct FHitResult                             AltimeterTraceResult;
	int32                                         HoagieStateRep;
	EHoagieState                                  CurrentHoagieState;
	float                                         CurrentRotorSpeed;
	float                                         CurrentRotorAngle;
	float                                         RotorImpactTraceAngle;
	struct FVehicleGamepadLiftInputs              LiftInputs;
	uint8                                         Pad_1EA4[0x4];
	TArray<struct FRotorHit>                      RotorHits;
	TArray<struct FCachedSeatCollision>           CachedSeatCollision;
	struct FVector                                RotorHitLinearImpulse;
	struct FVector                                RotorHitAngularImpulse;
	class UNiagaraComponent*                      HoagieIdleFX_Native;
	class UNiagaraComponent*                      DamageFX_Native;
	class UNiagaraComponent*                      RotorWashFX_Native;
	class UFortHoagieVehicleAnimInstance*         HoagieAnimBP_Native;
	class FName                                   AltimeterTraceSocketName;
	class FName                                   RotorDamageTraceSocketName;
	class FName                                   MainRotorCritSocketName;
	class FName                                   TailRotorCritSocketName;
	class UAnimMontage*                           SeatTransition_ToDriver;
	class UAnimMontage*                           SeatTransition_ToPassenger;
	class FName                                   RotorTraceProfile;
	class FName                                   FoliageOverlapsBoxTag;
	struct FReplicatedHeliControlState            ControlState;
	float                                         CurrentViewDistanceScale;
	float                                         CurrentHLODDistanceOverrideScale;
	float                                         CurrentHLODMaxDrawDistanceScale;
	uint8                                         Pad_1F7C[0xC];
	struct FHoagieDeathEffectInfo                 CachedDeathEffectInfo;

public:
	void MulticastRotorImpulse(const struct FHitResult& RotorHit);
	void OnBoostFailed();
	void OnBoostFinished();
	void OnBoostReady();
	void OnBoostStarted();
	void OnCritRotor(float Damage, const struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor);
	void OnImpactOtherHoagie(const struct FVector& HitLocation, const struct FVector& NormalImpulse);
	void OnImpactWhileCritical();
	void OnRefueledFromEmpty();
	void OnRep_ControlState();
	void OnRep_HoagieState();
	void OnRotorDamageDealt(const struct FHitResult& Impact, bool bInner);
	void OnRotorDamageDealtInner(const struct FHitResult& Impact);
	void OnRotorDamageDealtOuter(const struct FHitResult& Impact);
	void OnRotorDamagePlayer(const struct FHitResult& Impact);
	void OnRotorsStop();
	void OnStartupBegin();
	void OnStartupEnd();
	void OnTickRotors(float RotorAngleDegrees);
	void ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState);
	void SetMainRotorRotation(float Degrees);
	void SetRotorWashActive(bool bActive);
	void SetTailRotorRotation(float Degrees);
	void ShowCooldownCue(class AFortPlayerPawn* Pawn, float Duration);
	void UpdateDamageStateNative(float Damage);
	void UpdateHoagieAnimBP();

	float GetAltitude() const;
	float GetBoostCooldown() const;
	struct FVector GetBoostDirection() const;
	float GetBoostDuration() const;
	float GetBoostTimeLeft() const;
	float GetDistanceToGround() const;
	float GetForwardAlpha() const;
	bool GetIsEngineOn() const;
	float GetLiftAlpha() const;
	float GetMaxAltitude() const;
	float GetMaxBoostCooldown() const;
	float GetRotorAngleDegrees() const;
	struct FVector GetRotorCenterPosition() const;
	float GetRotorSpeed() const;
	float GetRotorSpeedPercent() const;
	float GetShutdownTimeLeft() const;
	float GetSteerAlpha() const;
	float GetStrafeAlpha() const;
	struct FVector GetThrustDirection(bool bWorldSpace) const;
	float GetVerticalSpeedKmh() const;
	bool IsScrapingBottom() const;
	bool IsShuttingDown() const;
	bool IsStartingUp() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieVehicle">();
	}
	static class AFortHoagieVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortHoagieVehicle>();
	}
};
static_assert(alignof(AFortHoagieVehicle) == 0x000010, "Wrong alignment on AFortHoagieVehicle");
static_assert(sizeof(AFortHoagieVehicle) == 0x0020D0, "Wrong size on AFortHoagieVehicle");
static_assert(offsetof(AFortHoagieVehicle, PassengerCollision) == 0x001AB0, "Member 'AFortHoagieVehicle::PassengerCollision' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CameraBoomDistance) == 0x001AB4, "Member 'AFortHoagieVehicle::CameraBoomDistance' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CameraBoomHeight) == 0x001AB8, "Member 'AFortHoagieVehicle::CameraBoomHeight' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, OnBoostStateChanged) == 0x001AC0, "Member 'AFortHoagieVehicle::OnBoostStateChanged' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, OnAltimeterTraceUpdated) == 0x001AD0, "Member 'AFortHoagieVehicle::OnAltimeterTraceUpdated' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, OnCrashingStateEntered) == 0x001AE0, "Member 'AFortHoagieVehicle::OnCrashingStateEntered' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bEngineAudioDisabled) == 0x001AF0, "Member 'AFortHoagieVehicle::bEngineAudioDisabled' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LiftRumbleTimer) == 0x001AF4, "Member 'AFortHoagieVehicle::LiftRumbleTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bLiftUp) == 0x001AF8, "Member 'AFortHoagieVehicle::bLiftUp' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LiftForceFeedbackHandle) == 0x001B00, "Member 'AFortHoagieVehicle::LiftForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, PassiveForceFeedbackHandle) == 0x001B08, "Member 'AFortHoagieVehicle::PassiveForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, Theta_Native) == 0x001B10, "Member 'AFortHoagieVehicle::Theta_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, WashAltAlpha_Native) == 0x001B14, "Member 'AFortHoagieVehicle::WashAltAlpha_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorWashTickTimer) == 0x001B18, "Member 'AFortHoagieVehicle::RotorWashTickTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorTraceArray) == 0x001B20, "Member 'AFortHoagieVehicle::RotorTraceArray' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorWashObjectsTypes) == 0x001B30, "Member 'AFortHoagieVehicle::RotorWashObjectsTypes' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, FortHoagieVehicleConfigs) == 0x001B40, "Member 'AFortHoagieVehicle::FortHoagieVehicleConfigs' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RumbleIntensity) == 0x001B48, "Member 'AFortHoagieVehicle::RumbleIntensity' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, FlightModel) == 0x001B50, "Member 'AFortHoagieVehicle::FlightModel' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bClearPitchInput) == 0x001D38, "Member 'AFortHoagieVehicle::bClearPitchInput' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, BoostTimeLeft) == 0x001D3C, "Member 'AFortHoagieVehicle::BoostTimeLeft' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, BoostBrakingTimeLeft) == 0x001D40, "Member 'AFortHoagieVehicle::BoostBrakingTimeLeft' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, BoostCooldown) == 0x001D44, "Member 'AFortHoagieVehicle::BoostCooldown' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, ShutdownTimer) == 0x001D48, "Member 'AFortHoagieVehicle::ShutdownTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, FoliageDestructionTimer) == 0x001D4C, "Member 'AFortHoagieVehicle::FoliageDestructionTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CrashingScrapingTimer) == 0x001D50, "Member 'AFortHoagieVehicle::CrashingScrapingTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CrashingNotMovingTimer) == 0x001D54, "Member 'AFortHoagieVehicle::CrashingNotMovingTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bCanSleep) == 0x001D58, "Member 'AFortHoagieVehicle::bCanSleep' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bHasAppliedCrashDamage) == 0x001D59, "Member 'AFortHoagieVehicle::bHasAppliedCrashDamage' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bOrientedForLanding) == 0x001D5A, "Member 'AFortHoagieVehicle::bOrientedForLanding' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bForceNegativeLift) == 0x001D5B, "Member 'AFortHoagieVehicle::bForceNegativeLift' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, AltimeterTraceTimer) == 0x001D5C, "Member 'AFortHoagieVehicle::AltimeterTraceTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LastRotorImpulseTime) == 0x001D60, "Member 'AFortHoagieVehicle::LastRotorImpulseTime' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CriticalExplodeTimer) == 0x001D64, "Member 'AFortHoagieVehicle::CriticalExplodeTimer' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, bCriticalExplosionPlayed) == 0x001D68, "Member 'AFortHoagieVehicle::bCriticalExplosionPlayed' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, TimeWhileCritical) == 0x001D6C, "Member 'AFortHoagieVehicle::TimeWhileCritical' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, TimeWhileLanding) == 0x001D70, "Member 'AFortHoagieVehicle::TimeWhileLanding' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LiftFromOverrideButton) == 0x001D74, "Member 'AFortHoagieVehicle::LiftFromOverrideButton' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, BoostDirection) == 0x001D78, "Member 'AFortHoagieVehicle::BoostDirection' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LastRotorSweepDirection) == 0x001D90, "Member 'AFortHoagieVehicle::LastRotorSweepDirection' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, AltimeterTraceResult) == 0x001DA8, "Member 'AFortHoagieVehicle::AltimeterTraceResult' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, HoagieStateRep) == 0x001E88, "Member 'AFortHoagieVehicle::HoagieStateRep' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentHoagieState) == 0x001E8C, "Member 'AFortHoagieVehicle::CurrentHoagieState' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentRotorSpeed) == 0x001E90, "Member 'AFortHoagieVehicle::CurrentRotorSpeed' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentRotorAngle) == 0x001E94, "Member 'AFortHoagieVehicle::CurrentRotorAngle' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorImpactTraceAngle) == 0x001E98, "Member 'AFortHoagieVehicle::RotorImpactTraceAngle' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, LiftInputs) == 0x001E9C, "Member 'AFortHoagieVehicle::LiftInputs' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorHits) == 0x001EA8, "Member 'AFortHoagieVehicle::RotorHits' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CachedSeatCollision) == 0x001EB8, "Member 'AFortHoagieVehicle::CachedSeatCollision' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorHitLinearImpulse) == 0x001EC8, "Member 'AFortHoagieVehicle::RotorHitLinearImpulse' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorHitAngularImpulse) == 0x001EE0, "Member 'AFortHoagieVehicle::RotorHitAngularImpulse' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, HoagieIdleFX_Native) == 0x001EF8, "Member 'AFortHoagieVehicle::HoagieIdleFX_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, DamageFX_Native) == 0x001F00, "Member 'AFortHoagieVehicle::DamageFX_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorWashFX_Native) == 0x001F08, "Member 'AFortHoagieVehicle::RotorWashFX_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, HoagieAnimBP_Native) == 0x001F10, "Member 'AFortHoagieVehicle::HoagieAnimBP_Native' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, AltimeterTraceSocketName) == 0x001F18, "Member 'AFortHoagieVehicle::AltimeterTraceSocketName' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorDamageTraceSocketName) == 0x001F1C, "Member 'AFortHoagieVehicle::RotorDamageTraceSocketName' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, MainRotorCritSocketName) == 0x001F20, "Member 'AFortHoagieVehicle::MainRotorCritSocketName' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, TailRotorCritSocketName) == 0x001F24, "Member 'AFortHoagieVehicle::TailRotorCritSocketName' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, SeatTransition_ToDriver) == 0x001F28, "Member 'AFortHoagieVehicle::SeatTransition_ToDriver' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, SeatTransition_ToPassenger) == 0x001F30, "Member 'AFortHoagieVehicle::SeatTransition_ToPassenger' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, RotorTraceProfile) == 0x001F38, "Member 'AFortHoagieVehicle::RotorTraceProfile' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, FoliageOverlapsBoxTag) == 0x001F3C, "Member 'AFortHoagieVehicle::FoliageOverlapsBoxTag' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, ControlState) == 0x001F40, "Member 'AFortHoagieVehicle::ControlState' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentViewDistanceScale) == 0x001F70, "Member 'AFortHoagieVehicle::CurrentViewDistanceScale' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentHLODDistanceOverrideScale) == 0x001F74, "Member 'AFortHoagieVehicle::CurrentHLODDistanceOverrideScale' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CurrentHLODMaxDrawDistanceScale) == 0x001F78, "Member 'AFortHoagieVehicle::CurrentHLODMaxDrawDistanceScale' has a wrong offset!");
static_assert(offsetof(AFortHoagieVehicle, CachedDeathEffectInfo) == 0x001F88, "Member 'AFortHoagieVehicle::CachedDeathEffectInfo' has a wrong offset!");

class UFortHoagieVehicleConfigs final : public UFortPhysicsVehicleConfigs
{
public:
	float                                         StrafeForce;
	float                                         StrafeForceMin;
	float                                         MaxStrafeSpeedKmh;
	float                                         StrafeTooFastBrakeForce;
	float                                         LandedBrakeForce;
	float                                         LiftForce;
	float                                         MaxLiftSpeedKmh;
	float                                         LiftTooFastBrakeForce;
	float                                         LateralDragCoefficient;
	float                                         LateralDragCoefficient2;
	float                                         LiftDragCoefficient;
	float                                         LiftDragCoefficient2;
	float                                         MaxPitchForCameraYaw;
	float                                         MaxCameraYawAngle;
	float                                         CameraYawStiff;
	float                                         CameraYawDamp;
	float                                         CameraYawStrength;
	float                                         UprightStiff;
	float                                         UprightDamp;
	bool                                          bUseVehiclePivotForCameraPitch;
	uint8                                         Pad_8F5[0x3];
	float                                         ThrustTorqueAnglePercent;
	float                                         BoostThrustTorqueAnglePercent;
	float                                         ThrustTorqueStiff;
	float                                         ThrustTorqueDamp;
	float                                         ThrustTorqueMaxAccel;
	float                                         ThrustTorque;
	float                                         YawTorque;
	float                                         YawTorqueDampingSpeed;
	float                                         BoostForce;
	float                                         BoostMaxSpeedKmh;
	float                                         BoostDuration;
	float                                         BoostCooldown;
	float                                         BoostTorqueStiff;
	float                                         BoostTorqueDamp;
	float                                         AfterBoostBrakingForce;
	float                                         AfterBoostBrakingDuration;
	float                                         AfterBoostBrakingMinSpeed;
	float                                         PitchAngleRequiredForFullThrust;
	float                                         DistanceToGroundForLanding;
	float                                         StartupDelay;
	float                                         LandingSequenceDelay;
	float                                         RotorsRadius;
	float                                         RotorsRadiusInner;
	float                                         NoDriverBrakeForce;
	float                                         TimeBetweenRotorDamageTicks;
	float                                         AutoLandingForce;
	float                                         RotorDamageBoxSweepLength;
	float                                         CriticalStateLiftForce;
	float                                         IdleRotationMultiplier;
	float                                         LiftPitchDegrees;
	float                                         MinAltitudeForIdleNoise;
	float                                         DefaultLinearDamp;
	float                                         DefaultAngularDamp;
	float                                         LandingLinearDamp;
	float                                         LandingAngularDamp;
	float                                         LandingLiftAlpha;
	float                                         CriticalStateThrustMultiplier;
	float                                         BodyUpDotThresholdForLanding;
	int32                                         CriticalHealthThreshold;
	float                                         DamagePerImpulseWhileCritical;
	float                                         RotorImpulseLinear;
	float                                         RotorImpulseAngular;
	float                                         RotorImpulseCooldown;
	float                                         StartupLift;
	float                                         StartupLiftTime;
	float                                         MaxAltitude;
	float                                         AltitudeForSpinning;
	float                                         RotorMaxSpeed;
	float                                         RotorAccel;
	float                                         RotorDecel;
	float                                         ExplodeRotorDecel;
	float                                         MinRotorSpeedForSkippingStartup;
	float                                         RotorSpeedForStartupLift;
	float                                         CriticalLiftForceDecay;
	float                                         CriticalYawTorqueMin;
	float                                         CriticalYawTorqueMax;
	float                                         CriticalYawTorqueRampDuration;
	float                                         RotorTraceRotationSpeed;
	float                                         RotorTraceBoxSize;
	float                                         RotorTraceBoxHeight;
	float                                         MaxCriticalFallForce;
	float                                         BoostFOV;
	float                                         GentleCrashTimeToExplode;
	float                                         CriticalTimeForGentleCrash;
	float                                         AutoLandingYawTorque;
	float                                         MinHeightForAutoLandingYawTorque;
	float                                         MinSpeedForScrapingBottom;
	float                                         FallDamageHeightBuffer;
	float                                         TimeBetweenRotorPlayerDamage;
	float                                         RotorMoveSpeedRequiredToUpdateTraceDirSqr;
	float                                         FoliageTraceRate;
	float                                         RotorWashTicksPerFrame;
	float                                         CriticalHitRadius;
	float                                         AngleNormalUpForLockMovement;
	float                                         MaxAutoLandingTime;
	float                                         SpeedThresholdForCrashed;
	float                                         CritMultiplier;
	float                                         AltitudeForSprings;
	float                                         MaxCrashingTime;
	float                                         MaxCrashingScrapingTime;
	float                                         MaxCrashingTimeSpentNotMoving;
	float                                         LandscapeRotorImpulseMag;
	float                                         HealthThresholdForLandscapeRotorImpulse;
	float                                         MaxHeightBuffer;
	bool                                          bImpulseOnOuterRotorHitLandscape;
	bool                                          bSkipRotorImpulses;
	bool                                          bEnableCVarScaling;
	uint8                                         Pad_A4B[0x1];
	float                                         CVarScalingInterp;
	struct FVector                                FoliageTraceBoxSize;
	struct FVector                                WaterBoxSize;
	struct FVector                                WaterBoxOffset;
	struct FVector                                RotorOffsetFromActorLocationOnServer;
	bool                                          bSkipContactRotations;
	uint8                                         Pad_AB1[0x7];
	struct FScalableFloat                         MaxAutoLandHeightWhenOutOfFuel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieVehicleConfigs">();
	}
	static class UFortHoagieVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHoagieVehicleConfigs>();
	}
};
static_assert(alignof(UFortHoagieVehicleConfigs) == 0x000008, "Wrong alignment on UFortHoagieVehicleConfigs");
static_assert(sizeof(UFortHoagieVehicleConfigs) == 0x000AE0, "Wrong size on UFortHoagieVehicleConfigs");
static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeForce) == 0x0008A8, "Member 'UFortHoagieVehicleConfigs::StrafeForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeForceMin) == 0x0008AC, "Member 'UFortHoagieVehicleConfigs::StrafeForceMin' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxStrafeSpeedKmh) == 0x0008B0, "Member 'UFortHoagieVehicleConfigs::MaxStrafeSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeTooFastBrakeForce) == 0x0008B4, "Member 'UFortHoagieVehicleConfigs::StrafeTooFastBrakeForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandedBrakeForce) == 0x0008B8, "Member 'UFortHoagieVehicleConfigs::LandedBrakeForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftForce) == 0x0008BC, "Member 'UFortHoagieVehicleConfigs::LiftForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxLiftSpeedKmh) == 0x0008C0, "Member 'UFortHoagieVehicleConfigs::MaxLiftSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftTooFastBrakeForce) == 0x0008C4, "Member 'UFortHoagieVehicleConfigs::LiftTooFastBrakeForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LateralDragCoefficient) == 0x0008C8, "Member 'UFortHoagieVehicleConfigs::LateralDragCoefficient' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LateralDragCoefficient2) == 0x0008CC, "Member 'UFortHoagieVehicleConfigs::LateralDragCoefficient2' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftDragCoefficient) == 0x0008D0, "Member 'UFortHoagieVehicleConfigs::LiftDragCoefficient' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftDragCoefficient2) == 0x0008D4, "Member 'UFortHoagieVehicleConfigs::LiftDragCoefficient2' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxPitchForCameraYaw) == 0x0008D8, "Member 'UFortHoagieVehicleConfigs::MaxPitchForCameraYaw' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCameraYawAngle) == 0x0008DC, "Member 'UFortHoagieVehicleConfigs::MaxCameraYawAngle' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawStiff) == 0x0008E0, "Member 'UFortHoagieVehicleConfigs::CameraYawStiff' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawDamp) == 0x0008E4, "Member 'UFortHoagieVehicleConfigs::CameraYawDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawStrength) == 0x0008E8, "Member 'UFortHoagieVehicleConfigs::CameraYawStrength' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, UprightStiff) == 0x0008EC, "Member 'UFortHoagieVehicleConfigs::UprightStiff' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, UprightDamp) == 0x0008F0, "Member 'UFortHoagieVehicleConfigs::UprightDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, bUseVehiclePivotForCameraPitch) == 0x0008F4, "Member 'UFortHoagieVehicleConfigs::bUseVehiclePivotForCameraPitch' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueAnglePercent) == 0x0008F8, "Member 'UFortHoagieVehicleConfigs::ThrustTorqueAnglePercent' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostThrustTorqueAnglePercent) == 0x0008FC, "Member 'UFortHoagieVehicleConfigs::BoostThrustTorqueAnglePercent' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueStiff) == 0x000900, "Member 'UFortHoagieVehicleConfigs::ThrustTorqueStiff' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueDamp) == 0x000904, "Member 'UFortHoagieVehicleConfigs::ThrustTorqueDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueMaxAccel) == 0x000908, "Member 'UFortHoagieVehicleConfigs::ThrustTorqueMaxAccel' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorque) == 0x00090C, "Member 'UFortHoagieVehicleConfigs::ThrustTorque' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, YawTorque) == 0x000910, "Member 'UFortHoagieVehicleConfigs::YawTorque' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, YawTorqueDampingSpeed) == 0x000914, "Member 'UFortHoagieVehicleConfigs::YawTorqueDampingSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostForce) == 0x000918, "Member 'UFortHoagieVehicleConfigs::BoostForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostMaxSpeedKmh) == 0x00091C, "Member 'UFortHoagieVehicleConfigs::BoostMaxSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostDuration) == 0x000920, "Member 'UFortHoagieVehicleConfigs::BoostDuration' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostCooldown) == 0x000924, "Member 'UFortHoagieVehicleConfigs::BoostCooldown' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostTorqueStiff) == 0x000928, "Member 'UFortHoagieVehicleConfigs::BoostTorqueStiff' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostTorqueDamp) == 0x00092C, "Member 'UFortHoagieVehicleConfigs::BoostTorqueDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingForce) == 0x000930, "Member 'UFortHoagieVehicleConfigs::AfterBoostBrakingForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingDuration) == 0x000934, "Member 'UFortHoagieVehicleConfigs::AfterBoostBrakingDuration' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingMinSpeed) == 0x000938, "Member 'UFortHoagieVehicleConfigs::AfterBoostBrakingMinSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, PitchAngleRequiredForFullThrust) == 0x00093C, "Member 'UFortHoagieVehicleConfigs::PitchAngleRequiredForFullThrust' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, DistanceToGroundForLanding) == 0x000940, "Member 'UFortHoagieVehicleConfigs::DistanceToGroundForLanding' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupDelay) == 0x000944, "Member 'UFortHoagieVehicleConfigs::StartupDelay' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingSequenceDelay) == 0x000948, "Member 'UFortHoagieVehicleConfigs::LandingSequenceDelay' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorsRadius) == 0x00094C, "Member 'UFortHoagieVehicleConfigs::RotorsRadius' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorsRadiusInner) == 0x000950, "Member 'UFortHoagieVehicleConfigs::RotorsRadiusInner' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, NoDriverBrakeForce) == 0x000954, "Member 'UFortHoagieVehicleConfigs::NoDriverBrakeForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, TimeBetweenRotorDamageTicks) == 0x000958, "Member 'UFortHoagieVehicleConfigs::TimeBetweenRotorDamageTicks' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AutoLandingForce) == 0x00095C, "Member 'UFortHoagieVehicleConfigs::AutoLandingForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorDamageBoxSweepLength) == 0x000960, "Member 'UFortHoagieVehicleConfigs::RotorDamageBoxSweepLength' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalStateLiftForce) == 0x000964, "Member 'UFortHoagieVehicleConfigs::CriticalStateLiftForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, IdleRotationMultiplier) == 0x000968, "Member 'UFortHoagieVehicleConfigs::IdleRotationMultiplier' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftPitchDegrees) == 0x00096C, "Member 'UFortHoagieVehicleConfigs::LiftPitchDegrees' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinAltitudeForIdleNoise) == 0x000970, "Member 'UFortHoagieVehicleConfigs::MinAltitudeForIdleNoise' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, DefaultLinearDamp) == 0x000974, "Member 'UFortHoagieVehicleConfigs::DefaultLinearDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, DefaultAngularDamp) == 0x000978, "Member 'UFortHoagieVehicleConfigs::DefaultAngularDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingLinearDamp) == 0x00097C, "Member 'UFortHoagieVehicleConfigs::LandingLinearDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingAngularDamp) == 0x000980, "Member 'UFortHoagieVehicleConfigs::LandingAngularDamp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingLiftAlpha) == 0x000984, "Member 'UFortHoagieVehicleConfigs::LandingLiftAlpha' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalStateThrustMultiplier) == 0x000988, "Member 'UFortHoagieVehicleConfigs::CriticalStateThrustMultiplier' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BodyUpDotThresholdForLanding) == 0x00098C, "Member 'UFortHoagieVehicleConfigs::BodyUpDotThresholdForLanding' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalHealthThreshold) == 0x000990, "Member 'UFortHoagieVehicleConfigs::CriticalHealthThreshold' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, DamagePerImpulseWhileCritical) == 0x000994, "Member 'UFortHoagieVehicleConfigs::DamagePerImpulseWhileCritical' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseLinear) == 0x000998, "Member 'UFortHoagieVehicleConfigs::RotorImpulseLinear' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseAngular) == 0x00099C, "Member 'UFortHoagieVehicleConfigs::RotorImpulseAngular' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseCooldown) == 0x0009A0, "Member 'UFortHoagieVehicleConfigs::RotorImpulseCooldown' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupLift) == 0x0009A4, "Member 'UFortHoagieVehicleConfigs::StartupLift' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupLiftTime) == 0x0009A8, "Member 'UFortHoagieVehicleConfigs::StartupLiftTime' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAltitude) == 0x0009AC, "Member 'UFortHoagieVehicleConfigs::MaxAltitude' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AltitudeForSpinning) == 0x0009B0, "Member 'UFortHoagieVehicleConfigs::AltitudeForSpinning' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorMaxSpeed) == 0x0009B4, "Member 'UFortHoagieVehicleConfigs::RotorMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorAccel) == 0x0009B8, "Member 'UFortHoagieVehicleConfigs::RotorAccel' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorDecel) == 0x0009BC, "Member 'UFortHoagieVehicleConfigs::RotorDecel' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, ExplodeRotorDecel) == 0x0009C0, "Member 'UFortHoagieVehicleConfigs::ExplodeRotorDecel' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinRotorSpeedForSkippingStartup) == 0x0009C4, "Member 'UFortHoagieVehicleConfigs::MinRotorSpeedForSkippingStartup' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorSpeedForStartupLift) == 0x0009C8, "Member 'UFortHoagieVehicleConfigs::RotorSpeedForStartupLift' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalLiftForceDecay) == 0x0009CC, "Member 'UFortHoagieVehicleConfigs::CriticalLiftForceDecay' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueMin) == 0x0009D0, "Member 'UFortHoagieVehicleConfigs::CriticalYawTorqueMin' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueMax) == 0x0009D4, "Member 'UFortHoagieVehicleConfigs::CriticalYawTorqueMax' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueRampDuration) == 0x0009D8, "Member 'UFortHoagieVehicleConfigs::CriticalYawTorqueRampDuration' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceRotationSpeed) == 0x0009DC, "Member 'UFortHoagieVehicleConfigs::RotorTraceRotationSpeed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceBoxSize) == 0x0009E0, "Member 'UFortHoagieVehicleConfigs::RotorTraceBoxSize' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceBoxHeight) == 0x0009E4, "Member 'UFortHoagieVehicleConfigs::RotorTraceBoxHeight' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCriticalFallForce) == 0x0009E8, "Member 'UFortHoagieVehicleConfigs::MaxCriticalFallForce' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostFOV) == 0x0009EC, "Member 'UFortHoagieVehicleConfigs::BoostFOV' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, GentleCrashTimeToExplode) == 0x0009F0, "Member 'UFortHoagieVehicleConfigs::GentleCrashTimeToExplode' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalTimeForGentleCrash) == 0x0009F4, "Member 'UFortHoagieVehicleConfigs::CriticalTimeForGentleCrash' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AutoLandingYawTorque) == 0x0009F8, "Member 'UFortHoagieVehicleConfigs::AutoLandingYawTorque' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinHeightForAutoLandingYawTorque) == 0x0009FC, "Member 'UFortHoagieVehicleConfigs::MinHeightForAutoLandingYawTorque' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinSpeedForScrapingBottom) == 0x000A00, "Member 'UFortHoagieVehicleConfigs::MinSpeedForScrapingBottom' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, FallDamageHeightBuffer) == 0x000A04, "Member 'UFortHoagieVehicleConfigs::FallDamageHeightBuffer' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, TimeBetweenRotorPlayerDamage) == 0x000A08, "Member 'UFortHoagieVehicleConfigs::TimeBetweenRotorPlayerDamage' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorMoveSpeedRequiredToUpdateTraceDirSqr) == 0x000A0C, "Member 'UFortHoagieVehicleConfigs::RotorMoveSpeedRequiredToUpdateTraceDirSqr' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, FoliageTraceRate) == 0x000A10, "Member 'UFortHoagieVehicleConfigs::FoliageTraceRate' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorWashTicksPerFrame) == 0x000A14, "Member 'UFortHoagieVehicleConfigs::RotorWashTicksPerFrame' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalHitRadius) == 0x000A18, "Member 'UFortHoagieVehicleConfigs::CriticalHitRadius' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AngleNormalUpForLockMovement) == 0x000A1C, "Member 'UFortHoagieVehicleConfigs::AngleNormalUpForLockMovement' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAutoLandingTime) == 0x000A20, "Member 'UFortHoagieVehicleConfigs::MaxAutoLandingTime' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, SpeedThresholdForCrashed) == 0x000A24, "Member 'UFortHoagieVehicleConfigs::SpeedThresholdForCrashed' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CritMultiplier) == 0x000A28, "Member 'UFortHoagieVehicleConfigs::CritMultiplier' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, AltitudeForSprings) == 0x000A2C, "Member 'UFortHoagieVehicleConfigs::AltitudeForSprings' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingTime) == 0x000A30, "Member 'UFortHoagieVehicleConfigs::MaxCrashingTime' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingScrapingTime) == 0x000A34, "Member 'UFortHoagieVehicleConfigs::MaxCrashingScrapingTime' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingTimeSpentNotMoving) == 0x000A38, "Member 'UFortHoagieVehicleConfigs::MaxCrashingTimeSpentNotMoving' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandscapeRotorImpulseMag) == 0x000A3C, "Member 'UFortHoagieVehicleConfigs::LandscapeRotorImpulseMag' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, HealthThresholdForLandscapeRotorImpulse) == 0x000A40, "Member 'UFortHoagieVehicleConfigs::HealthThresholdForLandscapeRotorImpulse' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxHeightBuffer) == 0x000A44, "Member 'UFortHoagieVehicleConfigs::MaxHeightBuffer' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, bImpulseOnOuterRotorHitLandscape) == 0x000A48, "Member 'UFortHoagieVehicleConfigs::bImpulseOnOuterRotorHitLandscape' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, bSkipRotorImpulses) == 0x000A49, "Member 'UFortHoagieVehicleConfigs::bSkipRotorImpulses' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, bEnableCVarScaling) == 0x000A4A, "Member 'UFortHoagieVehicleConfigs::bEnableCVarScaling' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, CVarScalingInterp) == 0x000A4C, "Member 'UFortHoagieVehicleConfigs::CVarScalingInterp' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, FoliageTraceBoxSize) == 0x000A50, "Member 'UFortHoagieVehicleConfigs::FoliageTraceBoxSize' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, WaterBoxSize) == 0x000A68, "Member 'UFortHoagieVehicleConfigs::WaterBoxSize' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, WaterBoxOffset) == 0x000A80, "Member 'UFortHoagieVehicleConfigs::WaterBoxOffset' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorOffsetFromActorLocationOnServer) == 0x000A98, "Member 'UFortHoagieVehicleConfigs::RotorOffsetFromActorLocationOnServer' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, bSkipContactRotations) == 0x000AB0, "Member 'UFortHoagieVehicleConfigs::bSkipContactRotations' has a wrong offset!");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAutoLandHeightWhenOutOfFuel) == 0x000AB8, "Member 'UFortHoagieVehicleConfigs::MaxAutoLandHeightWhenOutOfFuel' has a wrong offset!");

}
