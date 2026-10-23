#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MotorcycleRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UFortMotorcycleVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class AFortMotorcycleVehicle*                 MotorcycleVehicle;
	struct FRotator                               SwingArmRotation;
	bool                                          bIsInInventoryMode;
	uint8                                         Pad_611[0x7];
	class UFortPlayerAnimInstance_MotorcycleDriver* DriverAnimInstance;
	bool                                          bIsBikeParked;
	bool                                          bIsBikeOn;
	bool                                          bIsBikeStopping;
	bool                                          bIsReversing;
	float                                         TotalSpeed;
	bool                                          bIsSurfaceWater;
	uint8                                         Pad_629[0x3];
	float                                         AdditiveAlpha;
	bool                                          bIsRevving;
	uint8                                         Pad_631[0x3];
	float                                         AccelAlpha;
	bool                                          bIsThrottling;
	bool                                          bIsHonking;
	bool                                          bIsSoloJumpTrickOutro;
	bool                                          bIsJumpTrickNone;
	float                                         BrakeLeverAlpha;
	bool                                          bShouldExitFromLocomotion;
	bool                                          bStateRuleFromRevvingToThrottle;
	bool                                          bShouldPlayThrottleAnim;
	bool                                          bStateTransitionRuleToMovingLoop;
	bool                                          bEarlyOutFromMovingStart;
	bool                                          bShouldStop;
	bool                                          bShouldReverse;
	bool                                          bShouldReverseStop;
	bool                                          bShouldStopThrottling;
	bool                                          bIsFromJumpTrick;
	bool                                          bIsSoloJumpTrick;
	bool                                          bShouldJump;
	bool                                          bIsMoving;
	EFortMotorcycleAirTrickType                   AirTrickType;
	bool                                          bIsLandingInPlace;
	bool                                          bStateRuleFallingToMoving;
	float                                         JumpChargeFactor;
	float                                         ForwardSpeed;
	bool                                          bStoppie;
	bool                                          bIsBraking;
	bool                                          bShouldBrake;
	bool                                          bEarlyOutBrakingOutro;
	bool                                          bShouldJumpTrick;
	bool                                          bStateTransitionRuleToReverseLoop;
	bool                                          bIsReverseNoFeet;
	uint8                                         Pad_65F[0x1];

public:
	void CollectConditionsFromDriver();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMotorcycleVehicleAnimInstance">();
	}
	static class UFortMotorcycleVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMotorcycleVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortMotorcycleVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortMotorcycleVehicleAnimInstance");
static_assert(sizeof(UFortMotorcycleVehicleAnimInstance) == 0x000660, "Wrong size on UFortMotorcycleVehicleAnimInstance");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, MotorcycleVehicle) == 0x0005F0, "Member 'UFortMotorcycleVehicleAnimInstance::MotorcycleVehicle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, SwingArmRotation) == 0x0005F8, "Member 'UFortMotorcycleVehicleAnimInstance::SwingArmRotation' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsInInventoryMode) == 0x000610, "Member 'UFortMotorcycleVehicleAnimInstance::bIsInInventoryMode' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, DriverAnimInstance) == 0x000618, "Member 'UFortMotorcycleVehicleAnimInstance::DriverAnimInstance' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeParked) == 0x000620, "Member 'UFortMotorcycleVehicleAnimInstance::bIsBikeParked' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeOn) == 0x000621, "Member 'UFortMotorcycleVehicleAnimInstance::bIsBikeOn' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeStopping) == 0x000622, "Member 'UFortMotorcycleVehicleAnimInstance::bIsBikeStopping' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsReversing) == 0x000623, "Member 'UFortMotorcycleVehicleAnimInstance::bIsReversing' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, TotalSpeed) == 0x000624, "Member 'UFortMotorcycleVehicleAnimInstance::TotalSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSurfaceWater) == 0x000628, "Member 'UFortMotorcycleVehicleAnimInstance::bIsSurfaceWater' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AdditiveAlpha) == 0x00062C, "Member 'UFortMotorcycleVehicleAnimInstance::AdditiveAlpha' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsRevving) == 0x000630, "Member 'UFortMotorcycleVehicleAnimInstance::bIsRevving' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AccelAlpha) == 0x000634, "Member 'UFortMotorcycleVehicleAnimInstance::AccelAlpha' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsThrottling) == 0x000638, "Member 'UFortMotorcycleVehicleAnimInstance::bIsThrottling' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsHonking) == 0x000639, "Member 'UFortMotorcycleVehicleAnimInstance::bIsHonking' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSoloJumpTrickOutro) == 0x00063A, "Member 'UFortMotorcycleVehicleAnimInstance::bIsSoloJumpTrickOutro' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsJumpTrickNone) == 0x00063B, "Member 'UFortMotorcycleVehicleAnimInstance::bIsJumpTrickNone' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, BrakeLeverAlpha) == 0x00063C, "Member 'UFortMotorcycleVehicleAnimInstance::BrakeLeverAlpha' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldExitFromLocomotion) == 0x000640, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldExitFromLocomotion' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateRuleFromRevvingToThrottle) == 0x000641, "Member 'UFortMotorcycleVehicleAnimInstance::bStateRuleFromRevvingToThrottle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldPlayThrottleAnim) == 0x000642, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldPlayThrottleAnim' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateTransitionRuleToMovingLoop) == 0x000643, "Member 'UFortMotorcycleVehicleAnimInstance::bStateTransitionRuleToMovingLoop' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bEarlyOutFromMovingStart) == 0x000644, "Member 'UFortMotorcycleVehicleAnimInstance::bEarlyOutFromMovingStart' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldStop) == 0x000645, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldStop' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldReverse) == 0x000646, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldReverse' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldReverseStop) == 0x000647, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldReverseStop' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldStopThrottling) == 0x000648, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldStopThrottling' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsFromJumpTrick) == 0x000649, "Member 'UFortMotorcycleVehicleAnimInstance::bIsFromJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSoloJumpTrick) == 0x00064A, "Member 'UFortMotorcycleVehicleAnimInstance::bIsSoloJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldJump) == 0x00064B, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldJump' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsMoving) == 0x00064C, "Member 'UFortMotorcycleVehicleAnimInstance::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AirTrickType) == 0x00064D, "Member 'UFortMotorcycleVehicleAnimInstance::AirTrickType' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsLandingInPlace) == 0x00064E, "Member 'UFortMotorcycleVehicleAnimInstance::bIsLandingInPlace' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateRuleFallingToMoving) == 0x00064F, "Member 'UFortMotorcycleVehicleAnimInstance::bStateRuleFallingToMoving' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, JumpChargeFactor) == 0x000650, "Member 'UFortMotorcycleVehicleAnimInstance::JumpChargeFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, ForwardSpeed) == 0x000654, "Member 'UFortMotorcycleVehicleAnimInstance::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStoppie) == 0x000658, "Member 'UFortMotorcycleVehicleAnimInstance::bStoppie' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBraking) == 0x000659, "Member 'UFortMotorcycleVehicleAnimInstance::bIsBraking' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldBrake) == 0x00065A, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldBrake' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bEarlyOutBrakingOutro) == 0x00065B, "Member 'UFortMotorcycleVehicleAnimInstance::bEarlyOutBrakingOutro' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldJumpTrick) == 0x00065C, "Member 'UFortMotorcycleVehicleAnimInstance::bShouldJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateTransitionRuleToReverseLoop) == 0x00065D, "Member 'UFortMotorcycleVehicleAnimInstance::bStateTransitionRuleToReverseLoop' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsReverseNoFeet) == 0x00065E, "Member 'UFortMotorcycleVehicleAnimInstance::bIsReverseNoFeet' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UFortPlayerAnimInstance_MotorcycleRider : public UFortBaseLayerAnimInstance
{
public:
	class AFortMotorcycleVehicle*                 Motorcycle;
	class UFortMotorcycleVehicleAnimInstance*     MotorcycleAnimInstance;
	struct FFortAnimInput_Motorcycle              MotorcycleInput;
	uint8                                         Pad_4A4[0x4];
	class AFortPlayerPawn*                        FortPlayerPawn;
	struct FVector                                WorldVelocity;
	struct FVector                                LocalVelocity;
	float                                         RightHandIKAlpha;
	float                                         LeftHandIKAlpha;
	float                                         Speed2D;
	EFortCardinalDirection                        LocomotionCardinalDirection;
	EFortCardinalDirection                        PrePivotCardinalDirection;
	uint8                                         bShouldPlayJogPivotTransition : 1;
	uint8                                         bPivotTransitionDoOnceTriggered : 1;
	uint8                                         bIsJumping : 1;
	uint8                                         bIsReloading : 1;
	uint8                                         Pad_4EF[0x1];
	struct FRotator                               RiderCatchupRotation;
	uint8                                         Pad_508[0x8];
	float                                         RiderZDisplacement;
	float                                         RiderDisplacementDampUpFactor;
	float                                         RiderDisplacementDampDownFactor;
	float                                         RiderDisplacementLandingFallDistanceThreshold;
	float                                         RiderMinDisplacement;
	float                                         RiderMaxDisplacement;
	float                                         RiderDisplacementRampPerSecond;
	float                                         RiderRotationInterpSpeed;
	struct FFortAnimInput_VelocityImpact          VelocityImpact;
	struct FVector                                ImpactDisplacement;
	float                                         AbsSteerAngle;
	float                                         LeanAngle;
	float                                         FallDistanceValue;
	uint8                                         Pad_644[0x4];
	struct FVector                                FootTraceLocation;
	float                                         FootTraceSideOffset;
	float                                         MaxFootLocationDistance;
	bool                                          bHasFootTrace;
	bool                                          bInAir;
	bool                                          bIsInRollAngleThreshold;
	bool                                          bIsDriveStarting;
	uint8                                         Pad_66C[0x4];
	struct FVector                                LocalLeftOffset;
	struct FVector                                WorldPosLeft;
	struct FRotator                               LocalRotLeftOffset;
	struct FRotator                               WorldRotLeft;
	struct FVector                                LocalRightOffset;
	struct FVector                                WorldPosRight;
	struct FRotator                               LocalRotRightOffset;
	struct FRotator                               WorldRotRight;
	bool                                          bIsSteeringRotating;
	bool                                          bIsStopped;
	bool                                          bIsIdle;
	uint8                                         Pad_733[0x1];
	float                                         IdleSpeedKmh;
	bool                                          bIsSlowingDown;
	bool                                          bIsDrivingFast;
	bool                                          bIsTurningRightHard;
	bool                                          bIsTurningLeftHard;
	bool                                          bIsBraking;
	uint8                                         Pad_73D[0x1];
	bool                                          bIsBoosting;
	bool                                          bIsJumpTrick;
	float                                         JumpPlayRate;
	bool                                          bIsJumpFlipping;
	bool                                          bShouldEnableAO;
	bool                                          bIsBodyDragging;
	uint8                                         Pad_747[0x1];
	float                                         FallDistanceJumpingThreshold;
	float                                         FallDistanceJumpTrickThreshold;
	float                                         RollAngleThreshold;
	float                                         StartSpeedThreshold;
	float                                         SlowingSpeedThreshold;
	float                                         FastSpeedThreshold;
	float                                         BrakingDeltaThreshold;
	float                                         SteerHardAngleThreshold;
	float                                         GroundTraceUpOffset;
	float                                         GroundTraceLength;
	struct FVector2D                              JumpPlayRateInRange;
	struct FVector2D                              JumpPlayRateOutRange;
	float                                         JumpChargeFactor;
	bool                                          bIsChargingJump;
	bool                                          bIsMotorcycleJumping;
	bool                                          bMotorcycleLaunchedJump;
	bool                                          bWheelie;
	bool                                          bStoppie;
	EFortMotorcycleAirTrickType                   AirTrickType;
	bool                                          bIsJumpingAndNotRolling;
	bool                                          bIsOnGroundAndNotRolling;
	bool                                          bIsOnGroundAndBoosting;
	bool                                          bPlayPivotOnGroundAndNotBoosting;
	bool                                          bIsPowerSliding;
	uint8                                         Pad_79F[0x1];
	float                                         PowerSlideSteeringAngleThreshold;
	float                                         PowerSlideSpeedThreshold;
	uint8                                         Pad_7A8[0x8];
	struct FVector2D                              LandStartPosInRange;
	struct FVector2D                              LandStartPosOutRange;
	float                                         LandStartPosition;
	bool                                          bShouldPawnStandUp;
	bool                                          bIsSmoothingYaw;
	uint8                                         Pad_7D6[0x2];
	float                                         AimPitch;
	float                                         AimYaw;
	float                                         AimYawLastFrame;
	float                                         AimYawSmoothed;
	float                                         BodyAimYaw;
	float                                         NegativeBodyAimYaw;
	float                                         ForwardSpeed;
	float                                         PreviousForwardSpeed;
	float                                         TotalSpeed;
	bool                                          bIsReversing;
	bool                                          bIsMoving;
	bool                                          bIsInAir;
	bool                                          bIsUsingConsumable;
	struct FCachedAnimRelevancyData               IntroCachedTime;
	float                                         StoppieLandTime;
	bool                                          bShouldPlayHitReact;
	bool                                          bIsPlayingMontage;
	uint8                                         Pad_81A[0x2];
	float                                         VehiclePitch;
	float                                         VehicleRoll;
	uint8                                         Pad_824[0x4];
	struct FRotator                               MeleeTwistRot;
	bool                                          bStateTransitionRuleToMovingLoop;
	uint8                                         Pad_841[0x3];
	float                                         UpperBodyAdditiveAlpha;
	float                                         UpperBodyAdditiveStrength;
	float                                         MovingNoisePlayRate;
	bool                                          bIsFemale;
	uint8                                         Pad_851[0x7];

public:
	void AnimNotify_JumpEntered();
	void CalculateNoiseAlpha();
	void CollapsedAimYawSmoothed(float DeltaSeconds);
	void HandleCancelChargingJump();
	void HandleChargingJump(const float InJumpChargeFactor);
	void HandleFinishAirTrick();
	void HandleJump(const float InJumpChargeFactor);
	void HandleReleaseStoppie();
	void HandleReleaseWheelie();
	void HandleStartAirTrick(const EFortMotorcycleAirTrickType TrickType);
	void HandleStartChargingJump();
	void HandleStartStoppie();
	void HandleStartWheelie();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAnimInstance_MotorcycleRider">();
	}
	static class UFortPlayerAnimInstance_MotorcycleRider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAnimInstance_MotorcycleRider>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFortPlayerAnimInstance_MotorcycleRider) == 0x000010, "Wrong alignment on UFortPlayerAnimInstance_MotorcycleRider");
static_assert(sizeof(UFortPlayerAnimInstance_MotorcycleRider) == 0x000860, "Wrong size on UFortPlayerAnimInstance_MotorcycleRider");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, Motorcycle) == 0x000440, "Member 'UFortPlayerAnimInstance_MotorcycleRider::Motorcycle' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MotorcycleAnimInstance) == 0x000448, "Member 'UFortPlayerAnimInstance_MotorcycleRider::MotorcycleAnimInstance' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MotorcycleInput) == 0x000450, "Member 'UFortPlayerAnimInstance_MotorcycleRider::MotorcycleInput' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FortPlayerPawn) == 0x0004A8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldVelocity) == 0x0004B0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::WorldVelocity' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalVelocity) == 0x0004C8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocalVelocity' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RightHandIKAlpha) == 0x0004E0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RightHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LeftHandIKAlpha) == 0x0004E4, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LeftHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, Speed2D) == 0x0004E8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::Speed2D' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocomotionCardinalDirection) == 0x0004EC, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocomotionCardinalDirection' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PrePivotCardinalDirection) == 0x0004ED, "Member 'UFortPlayerAnimInstance_MotorcycleRider::PrePivotCardinalDirection' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderCatchupRotation) == 0x0004F0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderCatchupRotation' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderZDisplacement) == 0x000510, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderZDisplacement' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementDampUpFactor) == 0x000514, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementDampUpFactor' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementDampDownFactor) == 0x000518, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementDampDownFactor' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementLandingFallDistanceThreshold) == 0x00051C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementLandingFallDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderMinDisplacement) == 0x000520, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderMinDisplacement' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderMaxDisplacement) == 0x000524, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderMaxDisplacement' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementRampPerSecond) == 0x000528, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementRampPerSecond' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderRotationInterpSpeed) == 0x00052C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RiderRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VelocityImpact) == 0x000530, "Member 'UFortPlayerAnimInstance_MotorcycleRider::VelocityImpact' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, ImpactDisplacement) == 0x000620, "Member 'UFortPlayerAnimInstance_MotorcycleRider::ImpactDisplacement' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AbsSteerAngle) == 0x000638, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AbsSteerAngle' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LeanAngle) == 0x00063C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LeanAngle' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceValue) == 0x000640, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FallDistanceValue' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FootTraceLocation) == 0x000648, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FootTraceLocation' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FootTraceSideOffset) == 0x000660, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FootTraceSideOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MaxFootLocationDistance) == 0x000664, "Member 'UFortPlayerAnimInstance_MotorcycleRider::MaxFootLocationDistance' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bHasFootTrace) == 0x000668, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bHasFootTrace' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bInAir) == 0x000669, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bInAir' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsInRollAngleThreshold) == 0x00066A, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsInRollAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsDriveStarting) == 0x00066B, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsDriveStarting' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalLeftOffset) == 0x000670, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocalLeftOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldPosLeft) == 0x000688, "Member 'UFortPlayerAnimInstance_MotorcycleRider::WorldPosLeft' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRotLeftOffset) == 0x0006A0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocalRotLeftOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldRotLeft) == 0x0006B8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::WorldRotLeft' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRightOffset) == 0x0006D0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocalRightOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldPosRight) == 0x0006E8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::WorldPosRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRotRightOffset) == 0x000700, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LocalRotRightOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldRotRight) == 0x000718, "Member 'UFortPlayerAnimInstance_MotorcycleRider::WorldRotRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSteeringRotating) == 0x000730, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsSteeringRotating' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsStopped) == 0x000731, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsStopped' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsIdle) == 0x000732, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsIdle' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, IdleSpeedKmh) == 0x000734, "Member 'UFortPlayerAnimInstance_MotorcycleRider::IdleSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSlowingDown) == 0x000738, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsSlowingDown' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsDrivingFast) == 0x000739, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsDrivingFast' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsTurningRightHard) == 0x00073A, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsTurningRightHard' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsTurningLeftHard) == 0x00073B, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsTurningLeftHard' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBraking) == 0x00073C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsBraking' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBoosting) == 0x00073E, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsBoosting' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpTrick) == 0x00073F, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRate) == 0x000740, "Member 'UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRate' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpFlipping) == 0x000744, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsJumpFlipping' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldEnableAO) == 0x000745, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bShouldEnableAO' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBodyDragging) == 0x000746, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsBodyDragging' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceJumpingThreshold) == 0x000748, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FallDistanceJumpingThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceJumpTrickThreshold) == 0x00074C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FallDistanceJumpTrickThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RollAngleThreshold) == 0x000750, "Member 'UFortPlayerAnimInstance_MotorcycleRider::RollAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, StartSpeedThreshold) == 0x000754, "Member 'UFortPlayerAnimInstance_MotorcycleRider::StartSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, SlowingSpeedThreshold) == 0x000758, "Member 'UFortPlayerAnimInstance_MotorcycleRider::SlowingSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FastSpeedThreshold) == 0x00075C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::FastSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, BrakingDeltaThreshold) == 0x000760, "Member 'UFortPlayerAnimInstance_MotorcycleRider::BrakingDeltaThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, SteerHardAngleThreshold) == 0x000764, "Member 'UFortPlayerAnimInstance_MotorcycleRider::SteerHardAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, GroundTraceUpOffset) == 0x000768, "Member 'UFortPlayerAnimInstance_MotorcycleRider::GroundTraceUpOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, GroundTraceLength) == 0x00076C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::GroundTraceLength' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRateInRange) == 0x000770, "Member 'UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRateInRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRateOutRange) == 0x000780, "Member 'UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRateOutRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpChargeFactor) == 0x000790, "Member 'UFortPlayerAnimInstance_MotorcycleRider::JumpChargeFactor' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsChargingJump) == 0x000794, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsChargingJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsMotorcycleJumping) == 0x000795, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsMotorcycleJumping' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bMotorcycleLaunchedJump) == 0x000796, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bMotorcycleLaunchedJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bWheelie) == 0x000797, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bWheelie' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bStoppie) == 0x000798, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bStoppie' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AirTrickType) == 0x000799, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AirTrickType' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpingAndNotRolling) == 0x00079A, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsJumpingAndNotRolling' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsOnGroundAndNotRolling) == 0x00079B, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsOnGroundAndNotRolling' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsOnGroundAndBoosting) == 0x00079C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsOnGroundAndBoosting' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bPlayPivotOnGroundAndNotBoosting) == 0x00079D, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bPlayPivotOnGroundAndNotBoosting' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsPowerSliding) == 0x00079E, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsPowerSliding' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PowerSlideSteeringAngleThreshold) == 0x0007A0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::PowerSlideSteeringAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PowerSlideSpeedThreshold) == 0x0007A4, "Member 'UFortPlayerAnimInstance_MotorcycleRider::PowerSlideSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosInRange) == 0x0007B0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LandStartPosInRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosOutRange) == 0x0007C0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LandStartPosOutRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosition) == 0x0007D0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::LandStartPosition' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldPawnStandUp) == 0x0007D4, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bShouldPawnStandUp' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSmoothingYaw) == 0x0007D5, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsSmoothingYaw' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimPitch) == 0x0007D8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AimPitch' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYaw) == 0x0007DC, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AimYaw' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYawLastFrame) == 0x0007E0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AimYawLastFrame' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYawSmoothed) == 0x0007E4, "Member 'UFortPlayerAnimInstance_MotorcycleRider::AimYawSmoothed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, BodyAimYaw) == 0x0007E8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::BodyAimYaw' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, NegativeBodyAimYaw) == 0x0007EC, "Member 'UFortPlayerAnimInstance_MotorcycleRider::NegativeBodyAimYaw' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, ForwardSpeed) == 0x0007F0, "Member 'UFortPlayerAnimInstance_MotorcycleRider::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PreviousForwardSpeed) == 0x0007F4, "Member 'UFortPlayerAnimInstance_MotorcycleRider::PreviousForwardSpeed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, TotalSpeed) == 0x0007F8, "Member 'UFortPlayerAnimInstance_MotorcycleRider::TotalSpeed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsReversing) == 0x0007FC, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsReversing' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsMoving) == 0x0007FD, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsInAir) == 0x0007FE, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsInAir' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsUsingConsumable) == 0x0007FF, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsUsingConsumable' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, IntroCachedTime) == 0x000800, "Member 'UFortPlayerAnimInstance_MotorcycleRider::IntroCachedTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, StoppieLandTime) == 0x000814, "Member 'UFortPlayerAnimInstance_MotorcycleRider::StoppieLandTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldPlayHitReact) == 0x000818, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bShouldPlayHitReact' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsPlayingMontage) == 0x000819, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsPlayingMontage' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VehiclePitch) == 0x00081C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::VehiclePitch' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VehicleRoll) == 0x000820, "Member 'UFortPlayerAnimInstance_MotorcycleRider::VehicleRoll' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MeleeTwistRot) == 0x000828, "Member 'UFortPlayerAnimInstance_MotorcycleRider::MeleeTwistRot' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bStateTransitionRuleToMovingLoop) == 0x000840, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bStateTransitionRuleToMovingLoop' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, UpperBodyAdditiveAlpha) == 0x000844, "Member 'UFortPlayerAnimInstance_MotorcycleRider::UpperBodyAdditiveAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, UpperBodyAdditiveStrength) == 0x000848, "Member 'UFortPlayerAnimInstance_MotorcycleRider::UpperBodyAdditiveStrength' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MovingNoisePlayRate) == 0x00084C, "Member 'UFortPlayerAnimInstance_MotorcycleRider::MovingNoisePlayRate' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsFemale) == 0x000850, "Member 'UFortPlayerAnimInstance_MotorcycleRider::bIsFemale' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UFortPlayerAnimInstance_MotorcycleDriver : public UFortPlayerAnimInstance_MotorcycleRider
{
public:
	bool                                          bHasMoved;
	uint8                                         Pad_859[0x3];
	float                                         SteeringRotation;
	bool                                          bIsInInventoryMode;
	bool                                          bShouldJump;
	bool                                          bShouldAllowHeadAO;
	uint8                                         Pad_863[0x1];
	float                                         FeetDragPlayRate;
	bool                                          bShouldJumpCharge;
	bool                                          bIsLandingInPlace;
	bool                                          bStateRuleFallingToMoving;
	bool                                          bShouldApplyChargingNoise;
	float                                         JumpTimer;
	bool                                          bShouldAllowJump;
	bool                                          bIsSurfaceWater;
	bool                                          bSlopeAlphaShouldIncrease;
	uint8                                         Pad_873[0x1];
	float                                         SlopeAlpha;
	bool                                          bHasPassenger;
	bool                                          bIsOneHandedDualWield;
	bool                                          bShouldApplyBodyTwistForMelee;
	bool                                          bIsMelee;
	bool                                          bIsRangedOrConsumable;
	bool                                          bShouldApplyFeetNoise;
	uint8                                         Pad_87E[0x2];
	float                                         CachedFallingStartTime;
	bool                                          bWasFalling;
	bool                                          bIsRevving;
	uint8                                         Pad_886[0x2];
	float                                         StoppieLeanAlpha;
	bool                                          bShouldPlayMovingJump;
	bool                                          bWasJumpTrickLeftOrRight;
	bool                                          bIsFromJumpTrick;
	bool                                          bShouldAllowMovingJumpLand;
	bool                                          bStateTransitionRuleToReverseLoop;
	bool                                          bIsReverseNoFeet;
	uint8                                         Pad_892[0x2];
	float                                         WalkSPlayRate;
	float                                         LeanSpeed;
	float                                         LeanAlpha;
	bool                                          bIsCombatTransition;
	bool                                          bShouldBrake;
	bool                                          bShouldExitFromLocomotion;
	bool                                          bEarlyOutBrakingOutro;
	bool                                          bIsRightInput;
	bool                                          bShouldPlayReverseOutro;
	bool                                          bShouldApplyHipSuspension;
	bool                                          bIsDefaultJumpTrick;
	bool                                          bIsLeftJumpTrick;
	bool                                          bIsRightJumpTrick;
	bool                                          bIsNoneJumpTrick;
	bool                                          bIsSoloJumpTrick;
	bool                                          bShouldExitFromDefaultJumpTrick;
	bool                                          bEarlyOutFromMoveStart;
	bool                                          bShouldStop;
	uint8                                         Pad_8AF[0x1];
	float                                         CachedTrickIntroTime;
	bool                                          bShouldPlayJumpTrickIntroLeft;
	bool                                          bShouldPlayJumpTrickIntroRight;
	bool                                          bStateRuleNeutralToJumpTrickLeft;
	bool                                          bStateRuleNeutralToJumpTrickRight;
	bool                                          bShouldJumpTrick;
	bool                                          bHasJumpChargeStarted;
	bool                                          bIsJumpTrickLanding;
	bool                                          bWasSoloJumping;
	bool                                          bWasStoppieLanding;
	uint8                                         Pad_8BD[0x3];
	float                                         UpperBodyBlendAlpha;
	float                                         StoredJumpTrickIntroPosition;
	float                                         JumpTrickIntroPosition;
	float                                         JumpChargeLegIKAlpha;
	struct FSoftObjectPath                        ScytheMontage;
	class FName                                   JumpTrickIntroPositionCurveName;
	struct FCachedAnimRelevancyData               FallStartCachedTime;
	struct FCachedAnimRelevancyData               TrickCachedTime;
	uint8                                         Pad_914[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAnimInstance_MotorcycleDriver">();
	}
	static class UFortPlayerAnimInstance_MotorcycleDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAnimInstance_MotorcycleDriver>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFortPlayerAnimInstance_MotorcycleDriver) == 0x000010, "Wrong alignment on UFortPlayerAnimInstance_MotorcycleDriver");
static_assert(sizeof(UFortPlayerAnimInstance_MotorcycleDriver) == 0x000920, "Wrong size on UFortPlayerAnimInstance_MotorcycleDriver");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasMoved) == 0x000858, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bHasMoved' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, SteeringRotation) == 0x00085C, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::SteeringRotation' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsInInventoryMode) == 0x000860, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsInInventoryMode' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJump) == 0x000861, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowHeadAO) == 0x000862, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowHeadAO' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, FeetDragPlayRate) == 0x000864, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::FeetDragPlayRate' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJumpCharge) == 0x000868, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldJumpCharge' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsLandingInPlace) == 0x000869, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsLandingInPlace' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleFallingToMoving) == 0x00086A, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleFallingToMoving' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyChargingNoise) == 0x00086B, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyChargingNoise' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTimer) == 0x00086C, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::JumpTimer' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowJump) == 0x000870, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsSurfaceWater) == 0x000871, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsSurfaceWater' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bSlopeAlphaShouldIncrease) == 0x000872, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bSlopeAlphaShouldIncrease' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, SlopeAlpha) == 0x000874, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::SlopeAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasPassenger) == 0x000878, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bHasPassenger' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsOneHandedDualWield) == 0x000879, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsOneHandedDualWield' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyBodyTwistForMelee) == 0x00087A, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyBodyTwistForMelee' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsMelee) == 0x00087B, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsMelee' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRangedOrConsumable) == 0x00087C, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsRangedOrConsumable' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyFeetNoise) == 0x00087D, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyFeetNoise' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, CachedFallingStartTime) == 0x000880, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::CachedFallingStartTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasFalling) == 0x000884, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bWasFalling' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRevving) == 0x000885, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsRevving' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, StoppieLeanAlpha) == 0x000888, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::StoppieLeanAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayMovingJump) == 0x00088C, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayMovingJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasJumpTrickLeftOrRight) == 0x00088D, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bWasJumpTrickLeftOrRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsFromJumpTrick) == 0x00088E, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsFromJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowMovingJumpLand) == 0x00088F, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowMovingJumpLand' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateTransitionRuleToReverseLoop) == 0x000890, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bStateTransitionRuleToReverseLoop' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsReverseNoFeet) == 0x000891, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsReverseNoFeet' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, WalkSPlayRate) == 0x000894, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::WalkSPlayRate' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, LeanSpeed) == 0x000898, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::LeanSpeed' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, LeanAlpha) == 0x00089C, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::LeanAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsCombatTransition) == 0x0008A0, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsCombatTransition' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldBrake) == 0x0008A1, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldBrake' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldExitFromLocomotion) == 0x0008A2, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldExitFromLocomotion' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bEarlyOutBrakingOutro) == 0x0008A3, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bEarlyOutBrakingOutro' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRightInput) == 0x0008A4, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsRightInput' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayReverseOutro) == 0x0008A5, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayReverseOutro' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyHipSuspension) == 0x0008A6, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyHipSuspension' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsDefaultJumpTrick) == 0x0008A7, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsDefaultJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsLeftJumpTrick) == 0x0008A8, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsLeftJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRightJumpTrick) == 0x0008A9, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsRightJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsNoneJumpTrick) == 0x0008AA, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsNoneJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsSoloJumpTrick) == 0x0008AB, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsSoloJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldExitFromDefaultJumpTrick) == 0x0008AC, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldExitFromDefaultJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bEarlyOutFromMoveStart) == 0x0008AD, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bEarlyOutFromMoveStart' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldStop) == 0x0008AE, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldStop' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, CachedTrickIntroTime) == 0x0008B0, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::CachedTrickIntroTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayJumpTrickIntroLeft) == 0x0008B4, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayJumpTrickIntroLeft' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayJumpTrickIntroRight) == 0x0008B5, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayJumpTrickIntroRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleNeutralToJumpTrickLeft) == 0x0008B6, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleNeutralToJumpTrickLeft' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleNeutralToJumpTrickRight) == 0x0008B7, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleNeutralToJumpTrickRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJumpTrick) == 0x0008B8, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bShouldJumpTrick' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasJumpChargeStarted) == 0x0008B9, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bHasJumpChargeStarted' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsJumpTrickLanding) == 0x0008BA, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bIsJumpTrickLanding' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasSoloJumping) == 0x0008BB, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bWasSoloJumping' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasStoppieLanding) == 0x0008BC, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::bWasStoppieLanding' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, UpperBodyBlendAlpha) == 0x0008C0, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::UpperBodyBlendAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, StoredJumpTrickIntroPosition) == 0x0008C4, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::StoredJumpTrickIntroPosition' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTrickIntroPosition) == 0x0008C8, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::JumpTrickIntroPosition' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpChargeLegIKAlpha) == 0x0008CC, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::JumpChargeLegIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, ScytheMontage) == 0x0008D0, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::ScytheMontage' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTrickIntroPositionCurveName) == 0x0008E8, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::JumpTrickIntroPositionCurveName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, FallStartCachedTime) == 0x0008EC, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::FallStartCachedTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, TrickCachedTime) == 0x000900, "Member 'UFortPlayerAnimInstance_MotorcycleDriver::TrickCachedTime' has a wrong offset!");

class UFortPlayerAnimInstance_MotorcyclePassenger final : public UFortPlayerAnimInstance_MotorcycleRider
{
public:
	class UFortPlayerAnimInstance_MotorcycleDriver* DriverAnimInstance;
	bool                                          bHasDriver;
	bool                                          bIsDriverJumping;
	bool                                          bIsDriverInventoryMode;
	bool                                          bIsSeatedAction;
	bool                                          bIsThrowingConsumable;
	bool                                          bEarlyOutStoppieOutro;
	uint8                                         Pad_866[0x2];
	float                                         RunForwardAlpha;
	bool                                          bAimFWD;
	bool                                          bAimBWD;
	bool                                          bAimLFT;
	bool                                          bAimRGT;
	float                                         AimFWDDeltaAngleDegrees;
	float                                         AimBWDDeltaAngleDegrees;
	float                                         AimLFTDeltaAngleDegrees;
	float                                         AimRGTDeltaAngleDegrees;
	bool                                          bShouldJump;
	bool                                          bShouldApplySlopeCorrection;
	bool                                          bShouldExitFromLocomotion;
	uint8                                         Pad_883[0x1];
	struct FCachedAnimRelevancyData               JumpIntroCachedTime;
	float                                         CachedJumpIntroTime;
	uint8                                         Pad_89C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAnimInstance_MotorcyclePassenger">();
	}
	static class UFortPlayerAnimInstance_MotorcyclePassenger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAnimInstance_MotorcyclePassenger>();
	}
};
static_assert(alignof(UFortPlayerAnimInstance_MotorcyclePassenger) == 0x000010, "Wrong alignment on UFortPlayerAnimInstance_MotorcyclePassenger");
static_assert(sizeof(UFortPlayerAnimInstance_MotorcyclePassenger) == 0x0008A0, "Wrong size on UFortPlayerAnimInstance_MotorcyclePassenger");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, DriverAnimInstance) == 0x000858, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::DriverAnimInstance' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bHasDriver) == 0x000860, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bHasDriver' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsDriverJumping) == 0x000861, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bIsDriverJumping' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsDriverInventoryMode) == 0x000862, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bIsDriverInventoryMode' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsSeatedAction) == 0x000863, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bIsSeatedAction' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsThrowingConsumable) == 0x000864, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bIsThrowingConsumable' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bEarlyOutStoppieOutro) == 0x000865, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bEarlyOutStoppieOutro' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, RunForwardAlpha) == 0x000868, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::RunForwardAlpha' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimFWD) == 0x00086C, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bAimFWD' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimBWD) == 0x00086D, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bAimBWD' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimLFT) == 0x00086E, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bAimLFT' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimRGT) == 0x00086F, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bAimRGT' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimFWDDeltaAngleDegrees) == 0x000870, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::AimFWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimBWDDeltaAngleDegrees) == 0x000874, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::AimBWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimLFTDeltaAngleDegrees) == 0x000878, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::AimLFTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimRGTDeltaAngleDegrees) == 0x00087C, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::AimRGTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldJump) == 0x000880, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bShouldJump' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldApplySlopeCorrection) == 0x000881, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bShouldApplySlopeCorrection' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldExitFromLocomotion) == 0x000882, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::bShouldExitFromLocomotion' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, JumpIntroCachedTime) == 0x000884, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::JumpIntroCachedTime' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, CachedJumpIntroTime) == 0x000898, "Member 'UFortPlayerAnimInstance_MotorcyclePassenger::CachedJumpIntroTime' has a wrong offset!");

class UFortCameraMode_Motorcycle final : public UFortCameraMode_AthenaVehicle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_Motorcycle">();
	}
	static class UFortCameraMode_Motorcycle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_Motorcycle>();
	}
};
static_assert(alignof(UFortCameraMode_Motorcycle) == 0x000010, "Wrong alignment on UFortCameraMode_Motorcycle");
static_assert(sizeof(UFortCameraMode_Motorcycle) == 0x001B30, "Wrong size on UFortCameraMode_Motorcycle");

class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{
public:
	TMulticastInlineDelegate<void()>              OnStartChargingJumpDelegate;
	TMulticastInlineDelegate<void()>              OnCancelChargingJumpDelegate;
	TMulticastInlineDelegate<void(float JumpChargeFactor)> OnJumpDelegate;
	TMulticastInlineDelegate<void(float JumpChargeFactor)> OnChargingJumpDelegate;
	TMulticastInlineDelegate<void(EFortMotorcycleAirTrickType TrickType)> OnStartAirTrickDelegate;
	TMulticastInlineDelegate<void()>              OnFinishAirTrickDelegate;
	TMulticastInlineDelegate<void()>              OnStartWheelieDelegate;
	TMulticastInlineDelegate<void()>              OnReleaseWheelieDelegate;
	TMulticastInlineDelegate<void()>              OnLandWheelieDelegate;
	TMulticastInlineDelegate<void()>              OnFailWheelieDelegate;
	TMulticastInlineDelegate<void()>              OnStartStoppieDelegate;
	TMulticastInlineDelegate<void()>              OnReleaseStoppieDelegate;
	TMulticastInlineDelegate<void()>              OnLandStoppieDelegate;
	TMulticastInlineDelegate<void(bool IsInInventoryMode)> OnInventoryModeChangedDelegate;
	TMulticastInlineDelegate<void(bool bIsSuperSliding)> OnSuperSlidingChangedDelegate;
	TSubclassOf<class UFortCameraMode_AthenaVehicle> InventoryCameraModeClass;
	TSubclassOf<class UFortCameraMode_AthenaVehicle> InventoryCameraModeClassADS;
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;
	TSubclassOf<class UFortCameraMode>            PassengerCameraModeClassADS;
	class UFortMotorcycleVehicleConfigs*          FortMotorcycleVehicleConfigs;
	class FName                                   RearAxleSocket;
	uint8                                         Pad_1C44[0x4];
	TArray<struct FActionDefForUI>                ActionDefForUI;
	float                                         SwingArmRotation;
	uint8                                         Pad_1C5C[0x7C];
	TArray<int32>                                 BoostShapeIndices;
	bool                                          bIsBoostAttacking;
	uint8                                         Pad_1CE9[0xF];
	EFortMotorcycleAirTrickType                   CachedTrickType;
	bool                                          bHadPassengerAtTrickStart;
	uint8                                         Pad_1CFA[0x36];
	TArray<class FName>                           PassengerADSSockets;
	TArray<struct FVector>                        PassengerADSRelativeOffsets;
	class UNiagaraComponent*                      CachedNiagaraComponentRoadAndExhaust;
	class FString                                 RoadAndExhaustNiagaraComponentName;
	class FName                                   RoadAndExhaustVehicleSpeedName;
	class FName                                   RoadAndExhaustSlideDirectionName;
	float                                         RoadAndExhaustMinSpeedForDust;
	class FName                                   RoadAndExhaustDustRearName;
	class FName                                   RoadAndExhaustDustColorLerpName;
	float                                         RoadAndExhaustDustColorLerp;
	class FName                                   RoadAndExhaustDustAlphaMultiplierName;
	float                                         RoadAndExhaustDustAlphaMultiplier;
	class FName                                   RoadAndExhaustPeelOutColorIndexName;
	class FName                                   RoadAndExhaustPeelOutRearName;
	class FName                                   RoadAndExhaustIsPeelOutOnRoadName;
	class FName                                   RoadAndExhaustIsPeelOutOnRoadRewindName;
	class FName                                   RoadAndExhaustIsInAirName;
	struct FGameplayTag                           RoadAndExhaustCameraDirtGameplayCueTag;
	struct FGameplayTag                           RoadAndExhaustCameraWaterGameplayCueTag;
	uint8                                         Pad_1DA4[0x4];
	TArray<EPhysicalSurface>                      RoadAndExhaustSurfaceTypeArrayForFX;
	class ULegacyCameraShake*                     DriverCameraShakeInstance;
	class ULegacyCameraShake*                     AcceleratingCameraShakeInstance;
	uint8                                         Pad_1DC8[0x8];
	class FName                                   RoadAndExhaustHeadlightsName;
	class FName                                   RoadAndExhaustBrakelightsName;
	struct FScalableFloat                         DoorBashMinSpeed;
	struct FScalableFloat                         DoorBashMaxSpeed;
	struct FScalableFloat                         DoorBashForwardDistanceMin;
	struct FScalableFloat                         DoorBashForwardDistanceMax;
	struct FGameplayTag                           DoorBashGameplayCueTag;
	uint8                                         Pad_1E7C[0x4];
	TArray<EObjectTypeQuery>                      DoorBashCollisionTypesForDoor;
	TArray<EObjectTypeQuery>                      DoorBashCollisionTypesForPawn;
	struct FScalableFloat                         DoorBashSphereRadiusForPawnLaunch;
	struct FScalableFloat                         DoorBashScalarForPawnLaunch;
	struct FGameplayTag                           DoorBashPawnLaunchGameplayCueTag;
	uint8                                         Pad_1EF4[0x4];
	struct FGameplayTagQuery                      InventoryModeTagQuery;
	struct FGameplayTagContainer                  InputContextBlockedTags;
	uint8                                         Pad_1F60[0x20];

public:
	void BP_OnCancelChargingJump();
	void BP_OnChargingJump(const float JumpChargeFactor);
	void BP_OnFailWheelie();
	void BP_OnFinishAirTrick();
	void BP_OnJump(const float JumpChargeFactor);
	void BP_OnLandStoppie();
	void BP_OnLandWheelie();
	void BP_OnReleaseStoppie();
	void BP_OnReleaseWheelie();
	void BP_OnStartAirTrick(const EFortMotorcycleAirTrickType TrickType);
	void BP_OnStartChargingJump();
	void BP_OnStartStoppie();
	void BP_OnStartWheelie();
	void ChangeBoostAttackState(const bool bNewIsBoostAttacking);
	void OnInventoryModeToggled(bool bIsInInventoryMode);
	void OnPlayerWeaponChanged(class AFortWeapon* InNewWeapon, class AFortWeapon* InPrevWeapon);
	void OnRep_IsBoostAttacking();
	void ServerEjectAllPlayers();

	struct FVector GetAverageSpringNormal() const;
	float GetLeanAngleDegrees() const;
	EPhysicalSurface GetSurfaceTypeVehicleOn() const;
	bool IsInInventoryMode() const;
	bool IsPowerSliding() const;
	bool IsSuperSliding() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMotorcycleVehicle">();
	}
	static class AFortMotorcycleVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortMotorcycleVehicle>();
	}
};
static_assert(alignof(AFortMotorcycleVehicle) == 0x000010, "Wrong alignment on AFortMotorcycleVehicle");
static_assert(sizeof(AFortMotorcycleVehicle) == 0x001F80, "Wrong size on AFortMotorcycleVehicle");
static_assert(offsetof(AFortMotorcycleVehicle, OnStartChargingJumpDelegate) == 0x001B28, "Member 'AFortMotorcycleVehicle::OnStartChargingJumpDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnCancelChargingJumpDelegate) == 0x001B38, "Member 'AFortMotorcycleVehicle::OnCancelChargingJumpDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnJumpDelegate) == 0x001B48, "Member 'AFortMotorcycleVehicle::OnJumpDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnChargingJumpDelegate) == 0x001B58, "Member 'AFortMotorcycleVehicle::OnChargingJumpDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnStartAirTrickDelegate) == 0x001B68, "Member 'AFortMotorcycleVehicle::OnStartAirTrickDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnFinishAirTrickDelegate) == 0x001B78, "Member 'AFortMotorcycleVehicle::OnFinishAirTrickDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnStartWheelieDelegate) == 0x001B88, "Member 'AFortMotorcycleVehicle::OnStartWheelieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnReleaseWheelieDelegate) == 0x001B98, "Member 'AFortMotorcycleVehicle::OnReleaseWheelieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnLandWheelieDelegate) == 0x001BA8, "Member 'AFortMotorcycleVehicle::OnLandWheelieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnFailWheelieDelegate) == 0x001BB8, "Member 'AFortMotorcycleVehicle::OnFailWheelieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnStartStoppieDelegate) == 0x001BC8, "Member 'AFortMotorcycleVehicle::OnStartStoppieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnReleaseStoppieDelegate) == 0x001BD8, "Member 'AFortMotorcycleVehicle::OnReleaseStoppieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnLandStoppieDelegate) == 0x001BE8, "Member 'AFortMotorcycleVehicle::OnLandStoppieDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnInventoryModeChangedDelegate) == 0x001BF8, "Member 'AFortMotorcycleVehicle::OnInventoryModeChangedDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, OnSuperSlidingChangedDelegate) == 0x001C08, "Member 'AFortMotorcycleVehicle::OnSuperSlidingChangedDelegate' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, InventoryCameraModeClass) == 0x001C18, "Member 'AFortMotorcycleVehicle::InventoryCameraModeClass' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, InventoryCameraModeClassADS) == 0x001C20, "Member 'AFortMotorcycleVehicle::InventoryCameraModeClassADS' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, PassengerCameraModeClass) == 0x001C28, "Member 'AFortMotorcycleVehicle::PassengerCameraModeClass' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, PassengerCameraModeClassADS) == 0x001C30, "Member 'AFortMotorcycleVehicle::PassengerCameraModeClassADS' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, FortMotorcycleVehicleConfigs) == 0x001C38, "Member 'AFortMotorcycleVehicle::FortMotorcycleVehicleConfigs' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RearAxleSocket) == 0x001C40, "Member 'AFortMotorcycleVehicle::RearAxleSocket' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, ActionDefForUI) == 0x001C48, "Member 'AFortMotorcycleVehicle::ActionDefForUI' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, SwingArmRotation) == 0x001C58, "Member 'AFortMotorcycleVehicle::SwingArmRotation' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, BoostShapeIndices) == 0x001CD8, "Member 'AFortMotorcycleVehicle::BoostShapeIndices' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, bIsBoostAttacking) == 0x001CE8, "Member 'AFortMotorcycleVehicle::bIsBoostAttacking' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, CachedTrickType) == 0x001CF8, "Member 'AFortMotorcycleVehicle::CachedTrickType' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, bHadPassengerAtTrickStart) == 0x001CF9, "Member 'AFortMotorcycleVehicle::bHadPassengerAtTrickStart' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, PassengerADSSockets) == 0x001D30, "Member 'AFortMotorcycleVehicle::PassengerADSSockets' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, PassengerADSRelativeOffsets) == 0x001D40, "Member 'AFortMotorcycleVehicle::PassengerADSRelativeOffsets' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, CachedNiagaraComponentRoadAndExhaust) == 0x001D50, "Member 'AFortMotorcycleVehicle::CachedNiagaraComponentRoadAndExhaust' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustNiagaraComponentName) == 0x001D58, "Member 'AFortMotorcycleVehicle::RoadAndExhaustNiagaraComponentName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustVehicleSpeedName) == 0x001D68, "Member 'AFortMotorcycleVehicle::RoadAndExhaustVehicleSpeedName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustSlideDirectionName) == 0x001D6C, "Member 'AFortMotorcycleVehicle::RoadAndExhaustSlideDirectionName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustMinSpeedForDust) == 0x001D70, "Member 'AFortMotorcycleVehicle::RoadAndExhaustMinSpeedForDust' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustDustRearName) == 0x001D74, "Member 'AFortMotorcycleVehicle::RoadAndExhaustDustRearName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustDustColorLerpName) == 0x001D78, "Member 'AFortMotorcycleVehicle::RoadAndExhaustDustColorLerpName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustDustColorLerp) == 0x001D7C, "Member 'AFortMotorcycleVehicle::RoadAndExhaustDustColorLerp' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustDustAlphaMultiplierName) == 0x001D80, "Member 'AFortMotorcycleVehicle::RoadAndExhaustDustAlphaMultiplierName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustDustAlphaMultiplier) == 0x001D84, "Member 'AFortMotorcycleVehicle::RoadAndExhaustDustAlphaMultiplier' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustPeelOutColorIndexName) == 0x001D88, "Member 'AFortMotorcycleVehicle::RoadAndExhaustPeelOutColorIndexName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustPeelOutRearName) == 0x001D8C, "Member 'AFortMotorcycleVehicle::RoadAndExhaustPeelOutRearName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustIsPeelOutOnRoadName) == 0x001D90, "Member 'AFortMotorcycleVehicle::RoadAndExhaustIsPeelOutOnRoadName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustIsPeelOutOnRoadRewindName) == 0x001D94, "Member 'AFortMotorcycleVehicle::RoadAndExhaustIsPeelOutOnRoadRewindName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustIsInAirName) == 0x001D98, "Member 'AFortMotorcycleVehicle::RoadAndExhaustIsInAirName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustCameraDirtGameplayCueTag) == 0x001D9C, "Member 'AFortMotorcycleVehicle::RoadAndExhaustCameraDirtGameplayCueTag' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustCameraWaterGameplayCueTag) == 0x001DA0, "Member 'AFortMotorcycleVehicle::RoadAndExhaustCameraWaterGameplayCueTag' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustSurfaceTypeArrayForFX) == 0x001DA8, "Member 'AFortMotorcycleVehicle::RoadAndExhaustSurfaceTypeArrayForFX' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DriverCameraShakeInstance) == 0x001DB8, "Member 'AFortMotorcycleVehicle::DriverCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, AcceleratingCameraShakeInstance) == 0x001DC0, "Member 'AFortMotorcycleVehicle::AcceleratingCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustHeadlightsName) == 0x001DD0, "Member 'AFortMotorcycleVehicle::RoadAndExhaustHeadlightsName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, RoadAndExhaustBrakelightsName) == 0x001DD4, "Member 'AFortMotorcycleVehicle::RoadAndExhaustBrakelightsName' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashMinSpeed) == 0x001DD8, "Member 'AFortMotorcycleVehicle::DoorBashMinSpeed' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashMaxSpeed) == 0x001E00, "Member 'AFortMotorcycleVehicle::DoorBashMaxSpeed' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashForwardDistanceMin) == 0x001E28, "Member 'AFortMotorcycleVehicle::DoorBashForwardDistanceMin' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashForwardDistanceMax) == 0x001E50, "Member 'AFortMotorcycleVehicle::DoorBashForwardDistanceMax' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashGameplayCueTag) == 0x001E78, "Member 'AFortMotorcycleVehicle::DoorBashGameplayCueTag' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashCollisionTypesForDoor) == 0x001E80, "Member 'AFortMotorcycleVehicle::DoorBashCollisionTypesForDoor' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashCollisionTypesForPawn) == 0x001E90, "Member 'AFortMotorcycleVehicle::DoorBashCollisionTypesForPawn' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashSphereRadiusForPawnLaunch) == 0x001EA0, "Member 'AFortMotorcycleVehicle::DoorBashSphereRadiusForPawnLaunch' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashScalarForPawnLaunch) == 0x001EC8, "Member 'AFortMotorcycleVehicle::DoorBashScalarForPawnLaunch' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, DoorBashPawnLaunchGameplayCueTag) == 0x001EF0, "Member 'AFortMotorcycleVehicle::DoorBashPawnLaunchGameplayCueTag' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, InventoryModeTagQuery) == 0x001EF8, "Member 'AFortMotorcycleVehicle::InventoryModeTagQuery' has a wrong offset!");
static_assert(offsetof(AFortMotorcycleVehicle, InputContextBlockedTags) == 0x001F40, "Member 'AFortMotorcycleVehicle::InputContextBlockedTags' has a wrong offset!");

class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	TArray<struct FMotorcycleWheel>               Wheels;
	float                                         SpringInterpDamp;
	float                                         WheelieSpringInterpDamp;
	float                                         WallPushStiff;
	float                                         WallPushDamp;
	struct FVector                                WallPushXTraceOffset;
	float                                         WallPushForwardTraceLengthScale;
	float                                         WallPushBackTraceLengthScale;
	float                                         WallPushRightTraceLength;
	uint8                                         Pad_8EC[0x4];
	struct FVector                                WallPushRightTraceOffset;
	struct FVector                                WallPushRearRightTraceOffset;
	float                                         WallPushAngle;
	bool                                          bUseWallPushTracesForWalls;
	bool                                          bUseWallPushRearSideTracesForWalls;
	uint8                                         Pad_926[0x2];
	float                                         MaxJumpChargeTime;
	float                                         MinChargeJumpForce;
	float                                         MaxChargeJumpForce;
	float                                         MinJumpForwardAngle;
	float                                         MaxJumpForwardAngle;
	uint8                                         Pad_93C[0x4];
	struct FVector                                JumpForceMinCOMOffset;
	struct FVector                                JumpForceMaxCOMOffset;
	float                                         JumpChargeGraceTimeSeconds;
	float                                         JumpGraceTimeSeconds;
	float                                         LeanAngleScale;
	float                                         LeanStiff;
	float                                         LeanDamp;
	float                                         LeanStrength;
	float                                         SlideCatchupForceTime;
	float                                         SlideCatchupSpeed;
	float                                         SlideCatchupPushForce;
	float                                         AutoAirPitchAngle;
	float                                         MinSteeringAngleForModifiedFriction;
	float                                         MinSpeedForModifiedFriction;
	float                                         MinSteeringAngleToConsiderTractionLost;
	float                                         FrictionRatioToConsiderTractionLost;
	float                                         WheeliePitchStiffMin;
	float                                         WheeliePitchStiffMax;
	float                                         WheeliePitchDampMin;
	float                                         WheeliePitchDampMax;
	float                                         WheeliePitchAngleMin;
	float                                         WheeliePitchAngleMax;
	float                                         StoppiePitchAngle;
	float                                         StoppiePitchStiff;
	float                                         StoppiePitchDamp;
	float                                         WheelieRampSeconds;
	float                                         WheelieFailPitchAngle;
	float                                         WheelieRecoveryRate;
	float                                         WheelieFailRecoveryRate;
	float                                         WheelieMinStartSpeed;
	float                                         StoppieMinStopSpeed;
	float                                         WheelieSteerFactor;
	float                                         StoppieSteerFactor;
	float                                         WheelieSteerAlphaThreshold;
	float                                         WheelieStoppieMaxLeanAllowedToInitiate;
	float                                         WheelieGroundBufferTime;
	float                                         StoppieGroundBufferTime;
	float                                         WheelieSpringLengthExponent;
	float                                         WheelieWheelOffsetLerpMultiplier;
	float                                         WheelieBrakeFactor;
	float                                         StoppieTurnInPlaceSpeed;
	float                                         StoppieTurnInPlaceSpeedIce;
	float                                         StoppieTurnInPlaceSpeedMud;
	float                                         MinSpeedKmhForMaxStoppie;
	float                                         StoppieTurnAngleExponent;
	float                                         StoppieMaxTurnAngle;
	float                                         WheelieTireTractionMultiplier_Min;
	float                                         WheelieCameraMinStraightFactor;
	float                                         MaxLeanAccel;
	float                                         CruiseControlForwardAlpha;
	float                                         InventoryModeSpeedKmh;
	float                                         CruiseControlDisengageSpeedKmh;
	bool                                          bPowerSlideIsSuperSlide;
	uint8                                         Pad_A39[0x3];
	float                                         PowerSlideFrontFrictionMultiplier;
	float                                         PowerSlideRearFrictionMultiplier;
	float                                         PowerSlideRoadFrontFrictionMultiplier;
	float                                         PowerSlideRoadRearFrictionMultiplier;
	float                                         PowerSlideDirtFrontFrictionMultiplier;
	float                                         PowerSlideDirtRearFrictionMultiplier;
	float                                         PowerSlideGrassFrontFrictionMultiplier;
	float                                         PowerSlideGrassRearFrictionMultiplier;
	float                                         PowerSlideSnowFrontFrictionMultiplier;
	float                                         PowerSlideSnowRearFrictionMultiplier;
	float                                         PowerSlideIceFrontFrictionMultiplier;
	float                                         PowerSlideIceRearFrictionMultiplier;
	float                                         PowerSlideMudFrontFrictionMultiplier;
	float                                         PowerSlideMudRearFrictionMultiplier;
	float                                         PowerSlideFactor;
	float                                         PowerSlideDampFactor;
	float                                         FrictionDampFactor;
	float                                         PowerSlideLeanAngleScale;
	float                                         SuperSlideLeanAngle;
	float                                         SuperSlideMinStartYawSpeedDegrees;
	float                                         SuperSlideMinStartSpeedKmh;
	float                                         SuperSlideMaxEndSpeedKmh;
	float                                         PowerslideInputWindow;
	float                                         ShootingMinSpeedSteeringAngle;
	float                                         ShootingMaxSpeedSteeringAngle;
	float                                         InventoryModeCameraYawConstraint;
	float                                         BoostTopSpeedMultiplier;
	float                                         BoostPushForceMultiplier;
	float                                         BoostMinPushForce;
	float                                         BoostSteeringMultiplier;
	bool                                          bPlayHolsterAnimsOnClient;
	uint8                                         Pad_AB5[0x3];
	float                                         FrontWheelSteeringFactor;
	float                                         FrontWheelRotationAcceleration;
	float                                         PassengerInventoryCooldown;
	float                                         DriverInventoryCooldown;
	TSet<class FName>                             BoostAttackShapes;
	float                                         CameraAssistStrengthMax;
	float                                         CameraAssistStrengthMin;
	float                                         CameraAssistStrengthRecovery;
	float                                         CameraAssistInterpSpeed;
	float                                         AirTrickIncrementInterval;
	float                                         AirTrickFeedStartTime;
	float                                         AirTrickPitchMultiplier;
	float                                         AirTrickYawMultiplier;
	bool                                          bAllowAirTrickNeutral;
	bool                                          bAllowAirTrickRight;
	bool                                          bAllowAirTrickLeft;
	uint8                                         Pad_B3B[0x1];
	float                                         PoppedTireTractionScalar_Front;
	float                                         PoppedTireTractionScalar_Rear;
	float                                         PoppedTireTractionScalar_Both;
	struct FScalableFloat                         TopSpeedKmh;
	uint8                                         Pad_B70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMotorcycleVehicleConfigs">();
	}
	static class UFortMotorcycleVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMotorcycleVehicleConfigs>();
	}
};
static_assert(alignof(UFortMotorcycleVehicleConfigs) == 0x000008, "Wrong alignment on UFortMotorcycleVehicleConfigs");
static_assert(sizeof(UFortMotorcycleVehicleConfigs) == 0x000B78, "Wrong size on UFortMotorcycleVehicleConfigs");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, Wheels) == 0x0008A8, "Member 'UFortMotorcycleVehicleConfigs::Wheels' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SpringInterpDamp) == 0x0008B8, "Member 'UFortMotorcycleVehicleConfigs::SpringInterpDamp' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSpringInterpDamp) == 0x0008BC, "Member 'UFortMotorcycleVehicleConfigs::WheelieSpringInterpDamp' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushStiff) == 0x0008C0, "Member 'UFortMotorcycleVehicleConfigs::WallPushStiff' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushDamp) == 0x0008C4, "Member 'UFortMotorcycleVehicleConfigs::WallPushDamp' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushXTraceOffset) == 0x0008C8, "Member 'UFortMotorcycleVehicleConfigs::WallPushXTraceOffset' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushForwardTraceLengthScale) == 0x0008E0, "Member 'UFortMotorcycleVehicleConfigs::WallPushForwardTraceLengthScale' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushBackTraceLengthScale) == 0x0008E4, "Member 'UFortMotorcycleVehicleConfigs::WallPushBackTraceLengthScale' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRightTraceLength) == 0x0008E8, "Member 'UFortMotorcycleVehicleConfigs::WallPushRightTraceLength' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRightTraceOffset) == 0x0008F0, "Member 'UFortMotorcycleVehicleConfigs::WallPushRightTraceOffset' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRearRightTraceOffset) == 0x000908, "Member 'UFortMotorcycleVehicleConfigs::WallPushRearRightTraceOffset' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushAngle) == 0x000920, "Member 'UFortMotorcycleVehicleConfigs::WallPushAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bUseWallPushTracesForWalls) == 0x000924, "Member 'UFortMotorcycleVehicleConfigs::bUseWallPushTracesForWalls' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bUseWallPushRearSideTracesForWalls) == 0x000925, "Member 'UFortMotorcycleVehicleConfigs::bUseWallPushRearSideTracesForWalls' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxJumpChargeTime) == 0x000928, "Member 'UFortMotorcycleVehicleConfigs::MaxJumpChargeTime' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinChargeJumpForce) == 0x00092C, "Member 'UFortMotorcycleVehicleConfigs::MinChargeJumpForce' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxChargeJumpForce) == 0x000930, "Member 'UFortMotorcycleVehicleConfigs::MaxChargeJumpForce' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinJumpForwardAngle) == 0x000934, "Member 'UFortMotorcycleVehicleConfigs::MinJumpForwardAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxJumpForwardAngle) == 0x000938, "Member 'UFortMotorcycleVehicleConfigs::MaxJumpForwardAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpForceMinCOMOffset) == 0x000940, "Member 'UFortMotorcycleVehicleConfigs::JumpForceMinCOMOffset' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpForceMaxCOMOffset) == 0x000958, "Member 'UFortMotorcycleVehicleConfigs::JumpForceMaxCOMOffset' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpChargeGraceTimeSeconds) == 0x000970, "Member 'UFortMotorcycleVehicleConfigs::JumpChargeGraceTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpGraceTimeSeconds) == 0x000974, "Member 'UFortMotorcycleVehicleConfigs::JumpGraceTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanAngleScale) == 0x000978, "Member 'UFortMotorcycleVehicleConfigs::LeanAngleScale' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanStiff) == 0x00097C, "Member 'UFortMotorcycleVehicleConfigs::LeanStiff' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanDamp) == 0x000980, "Member 'UFortMotorcycleVehicleConfigs::LeanDamp' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanStrength) == 0x000984, "Member 'UFortMotorcycleVehicleConfigs::LeanStrength' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupForceTime) == 0x000988, "Member 'UFortMotorcycleVehicleConfigs::SlideCatchupForceTime' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupSpeed) == 0x00098C, "Member 'UFortMotorcycleVehicleConfigs::SlideCatchupSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupPushForce) == 0x000990, "Member 'UFortMotorcycleVehicleConfigs::SlideCatchupPushForce' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AutoAirPitchAngle) == 0x000994, "Member 'UFortMotorcycleVehicleConfigs::AutoAirPitchAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSteeringAngleForModifiedFriction) == 0x000998, "Member 'UFortMotorcycleVehicleConfigs::MinSteeringAngleForModifiedFriction' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSpeedForModifiedFriction) == 0x00099C, "Member 'UFortMotorcycleVehicleConfigs::MinSpeedForModifiedFriction' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSteeringAngleToConsiderTractionLost) == 0x0009A0, "Member 'UFortMotorcycleVehicleConfigs::MinSteeringAngleToConsiderTractionLost' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrictionRatioToConsiderTractionLost) == 0x0009A4, "Member 'UFortMotorcycleVehicleConfigs::FrictionRatioToConsiderTractionLost' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchStiffMin) == 0x0009A8, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchStiffMin' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchStiffMax) == 0x0009AC, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchStiffMax' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchDampMin) == 0x0009B0, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchDampMin' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchDampMax) == 0x0009B4, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchDampMax' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchAngleMin) == 0x0009B8, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchAngleMin' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchAngleMax) == 0x0009BC, "Member 'UFortMotorcycleVehicleConfigs::WheeliePitchAngleMax' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchAngle) == 0x0009C0, "Member 'UFortMotorcycleVehicleConfigs::StoppiePitchAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchStiff) == 0x0009C4, "Member 'UFortMotorcycleVehicleConfigs::StoppiePitchStiff' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchDamp) == 0x0009C8, "Member 'UFortMotorcycleVehicleConfigs::StoppiePitchDamp' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieRampSeconds) == 0x0009CC, "Member 'UFortMotorcycleVehicleConfigs::WheelieRampSeconds' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieFailPitchAngle) == 0x0009D0, "Member 'UFortMotorcycleVehicleConfigs::WheelieFailPitchAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieRecoveryRate) == 0x0009D4, "Member 'UFortMotorcycleVehicleConfigs::WheelieRecoveryRate' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieFailRecoveryRate) == 0x0009D8, "Member 'UFortMotorcycleVehicleConfigs::WheelieFailRecoveryRate' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieMinStartSpeed) == 0x0009DC, "Member 'UFortMotorcycleVehicleConfigs::WheelieMinStartSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieMinStopSpeed) == 0x0009E0, "Member 'UFortMotorcycleVehicleConfigs::StoppieMinStopSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSteerFactor) == 0x0009E4, "Member 'UFortMotorcycleVehicleConfigs::WheelieSteerFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieSteerFactor) == 0x0009E8, "Member 'UFortMotorcycleVehicleConfigs::StoppieSteerFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSteerAlphaThreshold) == 0x0009EC, "Member 'UFortMotorcycleVehicleConfigs::WheelieSteerAlphaThreshold' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieStoppieMaxLeanAllowedToInitiate) == 0x0009F0, "Member 'UFortMotorcycleVehicleConfigs::WheelieStoppieMaxLeanAllowedToInitiate' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieGroundBufferTime) == 0x0009F4, "Member 'UFortMotorcycleVehicleConfigs::WheelieGroundBufferTime' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieGroundBufferTime) == 0x0009F8, "Member 'UFortMotorcycleVehicleConfigs::StoppieGroundBufferTime' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSpringLengthExponent) == 0x0009FC, "Member 'UFortMotorcycleVehicleConfigs::WheelieSpringLengthExponent' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieWheelOffsetLerpMultiplier) == 0x000A00, "Member 'UFortMotorcycleVehicleConfigs::WheelieWheelOffsetLerpMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieBrakeFactor) == 0x000A04, "Member 'UFortMotorcycleVehicleConfigs::WheelieBrakeFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeed) == 0x000A08, "Member 'UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeedIce) == 0x000A0C, "Member 'UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeedIce' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeedMud) == 0x000A10, "Member 'UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeedMud' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSpeedKmhForMaxStoppie) == 0x000A14, "Member 'UFortMotorcycleVehicleConfigs::MinSpeedKmhForMaxStoppie' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnAngleExponent) == 0x000A18, "Member 'UFortMotorcycleVehicleConfigs::StoppieTurnAngleExponent' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieMaxTurnAngle) == 0x000A1C, "Member 'UFortMotorcycleVehicleConfigs::StoppieMaxTurnAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieTireTractionMultiplier_Min) == 0x000A20, "Member 'UFortMotorcycleVehicleConfigs::WheelieTireTractionMultiplier_Min' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieCameraMinStraightFactor) == 0x000A24, "Member 'UFortMotorcycleVehicleConfigs::WheelieCameraMinStraightFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxLeanAccel) == 0x000A28, "Member 'UFortMotorcycleVehicleConfigs::MaxLeanAccel' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CruiseControlForwardAlpha) == 0x000A2C, "Member 'UFortMotorcycleVehicleConfigs::CruiseControlForwardAlpha' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, InventoryModeSpeedKmh) == 0x000A30, "Member 'UFortMotorcycleVehicleConfigs::InventoryModeSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CruiseControlDisengageSpeedKmh) == 0x000A34, "Member 'UFortMotorcycleVehicleConfigs::CruiseControlDisengageSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bPowerSlideIsSuperSlide) == 0x000A38, "Member 'UFortMotorcycleVehicleConfigs::bPowerSlideIsSuperSlide' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideFrontFrictionMultiplier) == 0x000A3C, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRearFrictionMultiplier) == 0x000A40, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRoadFrontFrictionMultiplier) == 0x000A44, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideRoadFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRoadRearFrictionMultiplier) == 0x000A48, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideRoadRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDirtFrontFrictionMultiplier) == 0x000A4C, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideDirtFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDirtRearFrictionMultiplier) == 0x000A50, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideDirtRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideGrassFrontFrictionMultiplier) == 0x000A54, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideGrassFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideGrassRearFrictionMultiplier) == 0x000A58, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideGrassRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideSnowFrontFrictionMultiplier) == 0x000A5C, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideSnowFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideSnowRearFrictionMultiplier) == 0x000A60, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideSnowRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideIceFrontFrictionMultiplier) == 0x000A64, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideIceFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideIceRearFrictionMultiplier) == 0x000A68, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideIceRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideMudFrontFrictionMultiplier) == 0x000A6C, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideMudFrontFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideMudRearFrictionMultiplier) == 0x000A70, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideMudRearFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideFactor) == 0x000A74, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDampFactor) == 0x000A78, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideDampFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrictionDampFactor) == 0x000A7C, "Member 'UFortMotorcycleVehicleConfigs::FrictionDampFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideLeanAngleScale) == 0x000A80, "Member 'UFortMotorcycleVehicleConfigs::PowerSlideLeanAngleScale' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideLeanAngle) == 0x000A84, "Member 'UFortMotorcycleVehicleConfigs::SuperSlideLeanAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMinStartYawSpeedDegrees) == 0x000A88, "Member 'UFortMotorcycleVehicleConfigs::SuperSlideMinStartYawSpeedDegrees' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMinStartSpeedKmh) == 0x000A8C, "Member 'UFortMotorcycleVehicleConfigs::SuperSlideMinStartSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMaxEndSpeedKmh) == 0x000A90, "Member 'UFortMotorcycleVehicleConfigs::SuperSlideMaxEndSpeedKmh' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerslideInputWindow) == 0x000A94, "Member 'UFortMotorcycleVehicleConfigs::PowerslideInputWindow' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, ShootingMinSpeedSteeringAngle) == 0x000A98, "Member 'UFortMotorcycleVehicleConfigs::ShootingMinSpeedSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, ShootingMaxSpeedSteeringAngle) == 0x000A9C, "Member 'UFortMotorcycleVehicleConfigs::ShootingMaxSpeedSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, InventoryModeCameraYawConstraint) == 0x000AA0, "Member 'UFortMotorcycleVehicleConfigs::InventoryModeCameraYawConstraint' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostTopSpeedMultiplier) == 0x000AA4, "Member 'UFortMotorcycleVehicleConfigs::BoostTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostPushForceMultiplier) == 0x000AA8, "Member 'UFortMotorcycleVehicleConfigs::BoostPushForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostMinPushForce) == 0x000AAC, "Member 'UFortMotorcycleVehicleConfigs::BoostMinPushForce' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostSteeringMultiplier) == 0x000AB0, "Member 'UFortMotorcycleVehicleConfigs::BoostSteeringMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bPlayHolsterAnimsOnClient) == 0x000AB4, "Member 'UFortMotorcycleVehicleConfigs::bPlayHolsterAnimsOnClient' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrontWheelSteeringFactor) == 0x000AB8, "Member 'UFortMotorcycleVehicleConfigs::FrontWheelSteeringFactor' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrontWheelRotationAcceleration) == 0x000ABC, "Member 'UFortMotorcycleVehicleConfigs::FrontWheelRotationAcceleration' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PassengerInventoryCooldown) == 0x000AC0, "Member 'UFortMotorcycleVehicleConfigs::PassengerInventoryCooldown' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, DriverInventoryCooldown) == 0x000AC4, "Member 'UFortMotorcycleVehicleConfigs::DriverInventoryCooldown' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostAttackShapes) == 0x000AC8, "Member 'UFortMotorcycleVehicleConfigs::BoostAttackShapes' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthMax) == 0x000B18, "Member 'UFortMotorcycleVehicleConfigs::CameraAssistStrengthMax' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthMin) == 0x000B1C, "Member 'UFortMotorcycleVehicleConfigs::CameraAssistStrengthMin' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthRecovery) == 0x000B20, "Member 'UFortMotorcycleVehicleConfigs::CameraAssistStrengthRecovery' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistInterpSpeed) == 0x000B24, "Member 'UFortMotorcycleVehicleConfigs::CameraAssistInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickIncrementInterval) == 0x000B28, "Member 'UFortMotorcycleVehicleConfigs::AirTrickIncrementInterval' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickFeedStartTime) == 0x000B2C, "Member 'UFortMotorcycleVehicleConfigs::AirTrickFeedStartTime' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickPitchMultiplier) == 0x000B30, "Member 'UFortMotorcycleVehicleConfigs::AirTrickPitchMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickYawMultiplier) == 0x000B34, "Member 'UFortMotorcycleVehicleConfigs::AirTrickYawMultiplier' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickNeutral) == 0x000B38, "Member 'UFortMotorcycleVehicleConfigs::bAllowAirTrickNeutral' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickRight) == 0x000B39, "Member 'UFortMotorcycleVehicleConfigs::bAllowAirTrickRight' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickLeft) == 0x000B3A, "Member 'UFortMotorcycleVehicleConfigs::bAllowAirTrickLeft' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Front) == 0x000B3C, "Member 'UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Front' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Rear) == 0x000B40, "Member 'UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Rear' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Both) == 0x000B44, "Member 'UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Both' has a wrong offset!");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, TopSpeedKmh) == 0x000B48, "Member 'UFortMotorcycleVehicleConfigs::TopSpeedKmh' has a wrong offset!");

}
