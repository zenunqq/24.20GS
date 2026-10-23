#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "IrwinRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UFortAIFaunaAnimInstance : public UFortAIAnimInstance
{
public:
	float                                         AverageSpeed;
	float                                         AverageSpeedTimeFrame;
	bool                                          bHasValidAimTarget;
	uint8                                         Pad_579[0x3];
	float                                         AimTime;
	struct FVector                                AimTargetLocation;
	bool                                          bIsSurfaceSwimming;
	bool                                          bIsMovingOnGround;
	bool                                          bIsInTornado;
	uint8                                         Pad_59B[0x1];
	float                                         LookAtAlpha;
	float                                         MaxDistanceToPlayerForLookAt;
	float                                         LookAtTooFarFromPlayerTimeOut;
	bool                                          bDisableLookAtDuringMontage;
	uint8                                         Pad_5A9[0x3];
	class FName                                   DisableHeadTrackingCurveName;
	struct FRidingAnimationData                   RidingAnimationData;
	bool                                          bIsSlopeSliding;
	uint8                                         Pad_5C5[0x3];
	float                                         SlopeSlidingPitch;
	float                                         SlopeSlidingRoll;
	float                                         RidingMovePlayRate;
	bool                                          bJustGotPlayer;
	bool                                          bIsBoosting;
	bool                                          bIsTurningInPlace;
	uint8                                         Pad_5D7[0x1];
	float                                         TurnInPlaceRotationSpeed;
	float                                         TurnInPlaceAngleDelta;
	bool                                          bIsMovingBackwards;
	uint8                                         Pad_5E1[0x3];
	float                                         RiderReferentialYaw;
	float                                         BoostPlayRate;
	bool                                          bIsTurnInPlaceAngleDeltaPositive;
	bool                                          bPlayLandAdditive;
	uint8                                         Pad_5EE[0x2];
	float                                         BackwardVelocity;
	bool                                          bShouldPlayStopBackwards;
	uint8                                         Pad_5F5[0x3];
	float                                         SwimmingYaw;
	float                                         BackwardsPlayRate;
	float                                         BodyRoll;
	float                                         TurnAngleStored;
	bool                                          bWasTurningRight;
	ERidingFootPhase                              FootPhase;
	bool                                          bIsFootPhase_FeetInAir;
	bool                                          bIsFootPhase_FrontFeetPlanted;
	bool                                          bIsFootPhase_BackFeetPlanted;
	bool                                          bIsFootPhase_LeftBackFeetForward;
	bool                                          bIsFootPhase_RightBackFeetForward;
	bool                                          bIsFootPhase_LeftPlantedRightPass;
	bool                                          bIsFootPhase_RightPlantedLeftPass;
	uint8                                         Pad_611[0x7];
	struct FGameplayTagContainer                  SlipstreamTags;
	bool                                          bIsInSlipstream;
	uint8                                         Pad_639[0x7];
	struct FGameplayTagContainer                  SkydivingTags;
	bool                                          bMovementMode_Skydiving;
	uint8                                         Pad_661[0x7];
	struct FGameplayTagContainer                  SkytubingTags;
	bool                                          bGameplay_Status_Skytubing;
	bool                                          bIsAbducted;
	uint8                                         Pad_68A[0x6];
	struct FGameplayTagContainer                  TractorBeamTags;
	bool                                          bIsInTractorBeam;
	bool                                          bIsFloating;
	uint8                                         Pad_6B2[0x2];
	float                                         JustGotPlayerInitialDelaySec;
	uint8                                         Pad_6B8[0x18];

public:
	void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);
	void FinishFootPhaseStopUpdate();
	void UpdateBackwardsPlayRate();
	void UpdateBackwardVelocity();
	void UpdateBodyRoll();
	void UpdateBoostPlayRate();
	void UpdateFootPhaseStop();
	void UpdatePlayLandAdditive();
	void UpdateRidingMovePlayRate();
	void UpdateSwimmingYaw();
	void UpdateTurnAngleStored();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance">();
	}
	static class UFortAIFaunaAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance");
static_assert(sizeof(UFortAIFaunaAnimInstance) == 0x0006D0, "Wrong size on UFortAIFaunaAnimInstance");
static_assert(offsetof(UFortAIFaunaAnimInstance, AverageSpeed) == 0x000570, "Member 'UFortAIFaunaAnimInstance::AverageSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, AverageSpeedTimeFrame) == 0x000574, "Member 'UFortAIFaunaAnimInstance::AverageSpeedTimeFrame' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bHasValidAimTarget) == 0x000578, "Member 'UFortAIFaunaAnimInstance::bHasValidAimTarget' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, AimTime) == 0x00057C, "Member 'UFortAIFaunaAnimInstance::AimTime' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, AimTargetLocation) == 0x000580, "Member 'UFortAIFaunaAnimInstance::AimTargetLocation' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsSurfaceSwimming) == 0x000598, "Member 'UFortAIFaunaAnimInstance::bIsSurfaceSwimming' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsMovingOnGround) == 0x000599, "Member 'UFortAIFaunaAnimInstance::bIsMovingOnGround' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInTornado) == 0x00059A, "Member 'UFortAIFaunaAnimInstance::bIsInTornado' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, LookAtAlpha) == 0x00059C, "Member 'UFortAIFaunaAnimInstance::LookAtAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, MaxDistanceToPlayerForLookAt) == 0x0005A0, "Member 'UFortAIFaunaAnimInstance::MaxDistanceToPlayerForLookAt' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, LookAtTooFarFromPlayerTimeOut) == 0x0005A4, "Member 'UFortAIFaunaAnimInstance::LookAtTooFarFromPlayerTimeOut' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bDisableLookAtDuringMontage) == 0x0005A8, "Member 'UFortAIFaunaAnimInstance::bDisableLookAtDuringMontage' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, DisableHeadTrackingCurveName) == 0x0005AC, "Member 'UFortAIFaunaAnimInstance::DisableHeadTrackingCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, RidingAnimationData) == 0x0005B0, "Member 'UFortAIFaunaAnimInstance::RidingAnimationData' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsSlopeSliding) == 0x0005C4, "Member 'UFortAIFaunaAnimInstance::bIsSlopeSliding' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlopeSlidingPitch) == 0x0005C8, "Member 'UFortAIFaunaAnimInstance::SlopeSlidingPitch' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlopeSlidingRoll) == 0x0005CC, "Member 'UFortAIFaunaAnimInstance::SlopeSlidingRoll' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, RidingMovePlayRate) == 0x0005D0, "Member 'UFortAIFaunaAnimInstance::RidingMovePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bJustGotPlayer) == 0x0005D4, "Member 'UFortAIFaunaAnimInstance::bJustGotPlayer' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsBoosting) == 0x0005D5, "Member 'UFortAIFaunaAnimInstance::bIsBoosting' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsTurningInPlace) == 0x0005D6, "Member 'UFortAIFaunaAnimInstance::bIsTurningInPlace' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnInPlaceRotationSpeed) == 0x0005D8, "Member 'UFortAIFaunaAnimInstance::TurnInPlaceRotationSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnInPlaceAngleDelta) == 0x0005DC, "Member 'UFortAIFaunaAnimInstance::TurnInPlaceAngleDelta' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsMovingBackwards) == 0x0005E0, "Member 'UFortAIFaunaAnimInstance::bIsMovingBackwards' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, RiderReferentialYaw) == 0x0005E4, "Member 'UFortAIFaunaAnimInstance::RiderReferentialYaw' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, BoostPlayRate) == 0x0005E8, "Member 'UFortAIFaunaAnimInstance::BoostPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsTurnInPlaceAngleDeltaPositive) == 0x0005EC, "Member 'UFortAIFaunaAnimInstance::bIsTurnInPlaceAngleDeltaPositive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bPlayLandAdditive) == 0x0005ED, "Member 'UFortAIFaunaAnimInstance::bPlayLandAdditive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, BackwardVelocity) == 0x0005F0, "Member 'UFortAIFaunaAnimInstance::BackwardVelocity' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bShouldPlayStopBackwards) == 0x0005F4, "Member 'UFortAIFaunaAnimInstance::bShouldPlayStopBackwards' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SwimmingYaw) == 0x0005F8, "Member 'UFortAIFaunaAnimInstance::SwimmingYaw' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, BackwardsPlayRate) == 0x0005FC, "Member 'UFortAIFaunaAnimInstance::BackwardsPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, BodyRoll) == 0x000600, "Member 'UFortAIFaunaAnimInstance::BodyRoll' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnAngleStored) == 0x000604, "Member 'UFortAIFaunaAnimInstance::TurnAngleStored' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bWasTurningRight) == 0x000608, "Member 'UFortAIFaunaAnimInstance::bWasTurningRight' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, FootPhase) == 0x000609, "Member 'UFortAIFaunaAnimInstance::FootPhase' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_FeetInAir) == 0x00060A, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_FeetInAir' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_FrontFeetPlanted) == 0x00060B, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_FrontFeetPlanted' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_BackFeetPlanted) == 0x00060C, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_BackFeetPlanted' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_LeftBackFeetForward) == 0x00060D, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_LeftBackFeetForward' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_RightBackFeetForward) == 0x00060E, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_RightBackFeetForward' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_LeftPlantedRightPass) == 0x00060F, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_LeftPlantedRightPass' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_RightPlantedLeftPass) == 0x000610, "Member 'UFortAIFaunaAnimInstance::bIsFootPhase_RightPlantedLeftPass' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlipstreamTags) == 0x000618, "Member 'UFortAIFaunaAnimInstance::SlipstreamTags' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInSlipstream) == 0x000638, "Member 'UFortAIFaunaAnimInstance::bIsInSlipstream' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SkydivingTags) == 0x000640, "Member 'UFortAIFaunaAnimInstance::SkydivingTags' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bMovementMode_Skydiving) == 0x000660, "Member 'UFortAIFaunaAnimInstance::bMovementMode_Skydiving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, SkytubingTags) == 0x000668, "Member 'UFortAIFaunaAnimInstance::SkytubingTags' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bGameplay_Status_Skytubing) == 0x000688, "Member 'UFortAIFaunaAnimInstance::bGameplay_Status_Skytubing' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsAbducted) == 0x000689, "Member 'UFortAIFaunaAnimInstance::bIsAbducted' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, TractorBeamTags) == 0x000690, "Member 'UFortAIFaunaAnimInstance::TractorBeamTags' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInTractorBeam) == 0x0006B0, "Member 'UFortAIFaunaAnimInstance::bIsInTractorBeam' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFloating) == 0x0006B1, "Member 'UFortAIFaunaAnimInstance::bIsFloating' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance, JustGotPlayerInitialDelaySec) == 0x0006B4, "Member 'UFortAIFaunaAnimInstance::JustGotPlayerInitialDelaySec' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{
public:
	float                                         MovingPlayRate;
	float                                         LocomotionPoseAdditiveAlpha;
	bool                                          bEnableHeadTiltUpAdditive;
	bool                                          bTurnAngleIsNegative;
	uint8                                         Pad_6DA[0x2];
	class FName                                   DisableLocomotionAdditiveCurveName;
	class FName                                   InterruptibleCurveName;
	bool                                          bIsIdleShuffleTurn;
	uint8                                         Pad_6E5[0x3];
	float                                         IdleShuffleBodyBend;
	float                                         IdleShufflePlayRate;
	bool                                          bIdleShuffleTurnDirection;
	bool                                          bIsMoving;
	bool                                          bCanTransitionIdleToApex;
	bool                                          bCanTransitionIdleToMoving;
	bool                                          bCanTransitionMovingToIdle;
	bool                                          bCanTransitionLandToIdle;
	bool                                          bCanTransitionLandToJumpStart;
	bool                                          bCanTransitionJumpStartToApex;
	bool                                          bCanTransitionApexToFall;
	bool                                          bCanTransitionFallToLand;
	bool                                          bCanTransitionIdleTurnToIdle;
	bool                                          bCanTransitionLocomotionTurnToIdle;
	bool                                          bCanTransitionLocomotionTurnToMoving;
	bool                                          bCanTransitionIdleTurnToMoving;
	bool                                          bCanTransitionFallToMoving;
	bool                                          bCanTransitionFallToIdle;
	float                                         MovingPlayRate_SpeedThreshold;
	float                                         MovingPlayRate_SlowSpeedDivisor;
	float                                         MovingPlayRate_FastSpeedDivisor;
	float                                         MovingPlayRate_MinClamp;
	float                                         MovingPlayRate_MaxClamp;
	float                                         MovingPlayRate_InterpSpeed;
	float                                         LocomotionPoseAdditiveAlpha_InterpSpeed;
	float                                         EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier;
	float                                         EnableHeadTiltUpAdditive_ModOperand;
	float                                         InterruptibleCurveValue_LargeThreshold;
	float                                         InterruptibleCurveValue_TurnAngleThreshold;
	float                                         Speed_MovingThreshold;
	float                                         Speed_IdleThreshold;
	float                                         TurnAngle_LargeThreshold;
	float                                         Speed_RidingMovingThreshold;
	float                                         Speed_RidingIdleThreshold;
	float                                         IdleShuffleBodyBendMultiplier;
	float                                         IdleShuffleTurnThreshold;
	float                                         IdleShuffleTurnDirectionThreshold;
	float                                         IdleShufflePlayRateInRangeA;
	float                                         IdleShufflePlayRateInRangeB;
	float                                         IdleShufflePlayRateOutRangeA;
	float                                         IdleShufflePlayRateOutRangeB;
	float                                         MinSpeedSlowRidingMovePlayRate;
	float                                         SpeedSlowDivisorRidingMovePlayRate;
	struct FMapRangeClamped_Ranges                RidingMovePlayRate_Ranges;
	uint8                                         Pad_774[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Burt">();
	}
	static class UFortAIFaunaAnimInstance_Burt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Burt>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFortAIFaunaAnimInstance_Burt) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Burt");
static_assert(sizeof(UFortAIFaunaAnimInstance_Burt) == 0x000780, "Wrong size on UFortAIFaunaAnimInstance_Burt");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, LocomotionPoseAdditiveAlpha) == 0x0006D4, "Member 'UFortAIFaunaAnimInstance_Burt::LocomotionPoseAdditiveAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bEnableHeadTiltUpAdditive) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Burt::bEnableHeadTiltUpAdditive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bTurnAngleIsNegative) == 0x0006D9, "Member 'UFortAIFaunaAnimInstance_Burt::bTurnAngleIsNegative' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, DisableLocomotionAdditiveCurveName) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Burt::DisableLocomotionAdditiveCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveName) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Burt::InterruptibleCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIsIdleShuffleTurn) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Burt::bIsIdleShuffleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleBodyBend) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShuffleBodyBend' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRate) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIdleShuffleTurnDirection) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Burt::bIdleShuffleTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIsMoving) == 0x0006F1, "Member 'UFortAIFaunaAnimInstance_Burt::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleToApex) == 0x0006F2, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleToApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleToMoving) == 0x0006F3, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionMovingToIdle) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionMovingToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLandToIdle) == 0x0006F5, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionLandToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLandToJumpStart) == 0x0006F6, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionLandToJumpStart' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionJumpStartToApex) == 0x0006F7, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionJumpStartToApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionApexToFall) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionApexToFall' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToLand) == 0x0006F9, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToLand' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleTurnToIdle) == 0x0006FA, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleTurnToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLocomotionTurnToIdle) == 0x0006FB, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionLocomotionTurnToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLocomotionTurnToMoving) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionLocomotionTurnToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleTurnToMoving) == 0x0006FD, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleTurnToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToMoving) == 0x0006FE, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToIdle) == 0x0006FF, "Member 'UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_SpeedThreshold) == 0x000700, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_SlowSpeedDivisor) == 0x000704, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_SlowSpeedDivisor' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_FastSpeedDivisor) == 0x000708, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_FastSpeedDivisor' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_MinClamp) == 0x00070C, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_MinClamp' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_MaxClamp) == 0x000710, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_MaxClamp' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_InterpSpeed) == 0x000714, "Member 'UFortAIFaunaAnimInstance_Burt::MovingPlayRate_InterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, LocomotionPoseAdditiveAlpha_InterpSpeed) == 0x000718, "Member 'UFortAIFaunaAnimInstance_Burt::LocomotionPoseAdditiveAlpha_InterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier) == 0x00071C, "Member 'UFortAIFaunaAnimInstance_Burt::EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, EnableHeadTiltUpAdditive_ModOperand) == 0x000720, "Member 'UFortAIFaunaAnimInstance_Burt::EnableHeadTiltUpAdditive_ModOperand' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveValue_LargeThreshold) == 0x000724, "Member 'UFortAIFaunaAnimInstance_Burt::InterruptibleCurveValue_LargeThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveValue_TurnAngleThreshold) == 0x000728, "Member 'UFortAIFaunaAnimInstance_Burt::InterruptibleCurveValue_TurnAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_MovingThreshold) == 0x00072C, "Member 'UFortAIFaunaAnimInstance_Burt::Speed_MovingThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_IdleThreshold) == 0x000730, "Member 'UFortAIFaunaAnimInstance_Burt::Speed_IdleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, TurnAngle_LargeThreshold) == 0x000734, "Member 'UFortAIFaunaAnimInstance_Burt::TurnAngle_LargeThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_RidingMovingThreshold) == 0x000738, "Member 'UFortAIFaunaAnimInstance_Burt::Speed_RidingMovingThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_RidingIdleThreshold) == 0x00073C, "Member 'UFortAIFaunaAnimInstance_Burt::Speed_RidingIdleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleBodyBendMultiplier) == 0x000740, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShuffleBodyBendMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleTurnThreshold) == 0x000744, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShuffleTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleTurnDirectionThreshold) == 0x000748, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShuffleTurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateInRangeA) == 0x00074C, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateInRangeB) == 0x000750, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateOutRangeA) == 0x000754, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateOutRangeB) == 0x000758, "Member 'UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateOutRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MinSpeedSlowRidingMovePlayRate) == 0x00075C, "Member 'UFortAIFaunaAnimInstance_Burt::MinSpeedSlowRidingMovePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, SpeedSlowDivisorRidingMovePlayRate) == 0x000760, "Member 'UFortAIFaunaAnimInstance_Burt::SpeedSlowDivisorRidingMovePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, RidingMovePlayRate_Ranges) == 0x000764, "Member 'UFortAIFaunaAnimInstance_Burt::RidingMovePlayRate_Ranges' has a wrong offset!");

class UFortAIFaunaAnimInstance_Burt_Hitchhiker final : public UFortAIFaunaAnimInstance_Burt
{
public:
	bool                                          IsFloating;
	bool                                          IsInTractorBeam;
	bool                                          IsHitchhiked;
	uint8                                         Pad_77B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Burt_Hitchhiker">();
	}
	static class UFortAIFaunaAnimInstance_Burt_Hitchhiker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Burt_Hitchhiker>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Burt_Hitchhiker) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Burt_Hitchhiker");
static_assert(sizeof(UFortAIFaunaAnimInstance_Burt_Hitchhiker) == 0x000780, "Wrong size on UFortAIFaunaAnimInstance_Burt_Hitchhiker");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsFloating) == 0x000778, "Member 'UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsFloating' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsInTractorBeam) == 0x000779, "Member 'UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsInTractorBeam' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsHitchhiked) == 0x00077A, "Member 'UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsHitchhiked' has a wrong offset!");

class UFortAIFaunaAnimInstance_Crow final : public UFortAIFaunaAnimInstance
{
public:
	float                                         WingFlapPlayRate;
	bool                                          bIsDescending;
	bool                                          bIsGliding;
	bool                                          bIsFlying;
	bool                                          bIsFlyingSlow;
	bool                                          bIsLanding;
	uint8                                         Pad_6D9[0x3];
	float                                         WingFlapPlayRateInRangeA;
	float                                         WingFlapPlayRateInRangeB;
	float                                         WingFlapPlayRateOutRangeA;
	float                                         WingFlapPlayRateOutRangeB;
	float                                         ZVelocityDescendingThreshold;
	float                                         GlidingSpeedThreshold;
	float                                         FlyingSpeedThreshold;
	float                                         FlyingSlowSpeedThreshold;
	float                                         LandingSpeedThreshold;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Crow">();
	}
	static class UFortAIFaunaAnimInstance_Crow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Crow>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Crow) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Crow");
static_assert(sizeof(UFortAIFaunaAnimInstance_Crow) == 0x000700, "Wrong size on UFortAIFaunaAnimInstance_Crow");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRate) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Crow::WingFlapPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsDescending) == 0x0006D4, "Member 'UFortAIFaunaAnimInstance_Crow::bIsDescending' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsGliding) == 0x0006D5, "Member 'UFortAIFaunaAnimInstance_Crow::bIsGliding' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsFlying) == 0x0006D6, "Member 'UFortAIFaunaAnimInstance_Crow::bIsFlying' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsFlyingSlow) == 0x0006D7, "Member 'UFortAIFaunaAnimInstance_Crow::bIsFlyingSlow' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsLanding) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Crow::bIsLanding' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateInRangeA) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateInRangeB) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateOutRangeA) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateOutRangeB) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateOutRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, ZVelocityDescendingThreshold) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Crow::ZVelocityDescendingThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, GlidingSpeedThreshold) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Crow::GlidingSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, FlyingSpeedThreshold) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Crow::FlyingSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, FlyingSlowSpeedThreshold) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Crow::FlyingSlowSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, LandingSpeedThreshold) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Crow::LandingSpeedThreshold' has a wrong offset!");

class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{
public:
	class AFortAIPawn*                            AIPawn;
	float                                         MeshScale;
	bool                                          bShouldPlayFullBodyInPlace;
	uint8                                         Pad_6DD[0x3];
	float                                         BlinkAlpha;
	float                                         WalkRunPlayRate;
	float                                         LocomotionPoseAdditiveAlpha;
	bool                                          bEnableSniffAdditive;
	bool                                          bEnableAlertAdditive;
	bool                                          bIdleStartTurn;
	bool                                          bLookAtAdditiveTurnAlpha;
	bool                                          bIsIdleShuffleTurn;
	uint8                                         Pad_6F1[0x3];
	float                                         IdleShuffleBodyBend;
	float                                         IdleShufflePlayRate;
	bool                                          bIdleShuffleTurnDirection;
	uint8                                         Pad_6FD[0x3];
	float                                         TurnInPlaceModulatedSpeed;
	float                                         MaxSpeedFullBodyInPlace;
	float                                         MinCurveValueFullBodyInPlace;
	float                                         LocomotionPoseAdditiveAlphaInterpRate;
	int32                                         SniffAdditiveFrequenceySeconds;
	int32                                         AlertAdditiveFrequenceySeconds;
	int32                                         PawnIDScale;
	class FName                                   ShouldPlayFullBodyInPlaceCurveName;
	class FName                                   BlinkAlphaCurveName;
	float                                         IdleStartTurnInterruptibleThreshold;
	float                                         IdleShuffleBodyBendMultiplier;
	float                                         IdleShuffleTurnThreshold;
	float                                         IdleShuffleTurnDirectionThreshold;
	float                                         LookAtAdditiveTurnAlphaThreshold;
	float                                         IdleShufflePlayRateInRangeA;
	float                                         IdleShufflePlayRateInRangeB;
	float                                         IdleShufflePlayRateOutRangeA;
	float                                         IdleShufflePlayRateOutRangeB;
	float                                         TurnInPlaceModulatedSpeedFactor;
	bool                                          bIsMovingOnGroundORIsSurfaceSwimming;
	bool                                          bStateRule_DefaultJump_ToJumpApex;
	bool                                          bStateRule_TurnIdle_Idle;
	bool                                          bStateRule_TurnIdle_Moving;
	bool                                          bStateRule_Moving_TurnIdle;
	bool                                          bStateRule_TurnMoving_Moving;
	bool                                          bStateRule_Moving_TurnMoving;
	bool                                          bStateRule_Idle_Moving;
	bool                                          bStateRule_Moving_Idle;
	bool                                          bStateRule_JumpLand_Idle;
	bool                                          bStateRule_JumpLand_Moving;
	bool                                          bStateRule_JumpStart_JumpApex;
	bool                                          bStateRule_Fall_Moving;
	bool                                          bStateRule_Fall_Idle;
	bool                                          bStateRule_SwimIdle_SwimLoco;
	bool                                          bStateRule_SwimLoco_SwimIdle;
	bool                                          bStateRule_SwimTurn_SwimIdle;
	bool                                          bStateRule_SwimTurn_SwimLoco;
	bool                                          bAnimRule_NegativeTurnAngle;
	uint8                                         Pad_75F[0x1];
	float                                         InterruptibleMaxCheck;
	float                                         SpeedStopTransition;
	float                                         SpeedIdleMoveTransition;
	float                                         SpeedMovingTurnIdleTransition;
	float                                         SpeedToMoveMin;
	float                                         SpeedToMoveMinWhileRiding;
	float                                         SpeedToMoveMinWhileAcceleratingAndRiding;
	float                                         StateTimeFromEndThreshold;
	float                                         SpeedIdleStartTurnThreshold;
	float                                         SpeedFallMovingThreshold;
	uint8                                         Pad_788[0x8];

public:
	float CalculateBlinkAlpha();
	float CalculateLocomotionPoseAlpha();
	float CalculateMeshScale();
	float CalculateWalkRunPlayRate();
	bool DetermineEnableAlertAdditive();
	bool DetermineEnableSniffAdditive();
	bool DetermineIdleStartTurn();
	bool DetermineShouldPlayFullBodyInPlace();
	void UpdateBlinkAlpha();
	void UpdateEnableAlertAdditive();
	void UpdateEnableSniffAdditive();
	void UpdateIdleStartTurn();
	void UpdateLocomotionPoseAlpha();
	void UpdateMeshScale();
	void UpdateMovingRates();
	void UpdateShouldPlayFullBodyInPlace();
	void UpdateStateVariables(const bool bAccelerating);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Grandma">();
	}
	static class UFortAIFaunaAnimInstance_Grandma* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Grandma>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Grandma) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Grandma");
static_assert(sizeof(UFortAIFaunaAnimInstance_Grandma) == 0x000790, "Wrong size on UFortAIFaunaAnimInstance_Grandma");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, AIPawn) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Grandma::AIPawn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MeshScale) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Grandma::MeshScale' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bShouldPlayFullBodyInPlace) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Grandma::bShouldPlayFullBodyInPlace' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, BlinkAlpha) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Grandma::BlinkAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, WalkRunPlayRate) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Grandma::WalkRunPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LocomotionPoseAdditiveAlpha) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Grandma::LocomotionPoseAdditiveAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bEnableSniffAdditive) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Grandma::bEnableSniffAdditive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bEnableAlertAdditive) == 0x0006ED, "Member 'UFortAIFaunaAnimInstance_Grandma::bEnableAlertAdditive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIdleStartTurn) == 0x0006EE, "Member 'UFortAIFaunaAnimInstance_Grandma::bIdleStartTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bLookAtAdditiveTurnAlpha) == 0x0006EF, "Member 'UFortAIFaunaAnimInstance_Grandma::bLookAtAdditiveTurnAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIsIdleShuffleTurn) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Grandma::bIsIdleShuffleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleBodyBend) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShuffleBodyBend' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRate) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIdleShuffleTurnDirection) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Grandma::bIdleShuffleTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, TurnInPlaceModulatedSpeed) == 0x000700, "Member 'UFortAIFaunaAnimInstance_Grandma::TurnInPlaceModulatedSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MaxSpeedFullBodyInPlace) == 0x000704, "Member 'UFortAIFaunaAnimInstance_Grandma::MaxSpeedFullBodyInPlace' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MinCurveValueFullBodyInPlace) == 0x000708, "Member 'UFortAIFaunaAnimInstance_Grandma::MinCurveValueFullBodyInPlace' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LocomotionPoseAdditiveAlphaInterpRate) == 0x00070C, "Member 'UFortAIFaunaAnimInstance_Grandma::LocomotionPoseAdditiveAlphaInterpRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SniffAdditiveFrequenceySeconds) == 0x000710, "Member 'UFortAIFaunaAnimInstance_Grandma::SniffAdditiveFrequenceySeconds' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, AlertAdditiveFrequenceySeconds) == 0x000714, "Member 'UFortAIFaunaAnimInstance_Grandma::AlertAdditiveFrequenceySeconds' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, PawnIDScale) == 0x000718, "Member 'UFortAIFaunaAnimInstance_Grandma::PawnIDScale' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, ShouldPlayFullBodyInPlaceCurveName) == 0x00071C, "Member 'UFortAIFaunaAnimInstance_Grandma::ShouldPlayFullBodyInPlaceCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, BlinkAlphaCurveName) == 0x000720, "Member 'UFortAIFaunaAnimInstance_Grandma::BlinkAlphaCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleStartTurnInterruptibleThreshold) == 0x000724, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleStartTurnInterruptibleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleBodyBendMultiplier) == 0x000728, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShuffleBodyBendMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleTurnThreshold) == 0x00072C, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShuffleTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleTurnDirectionThreshold) == 0x000730, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShuffleTurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LookAtAdditiveTurnAlphaThreshold) == 0x000734, "Member 'UFortAIFaunaAnimInstance_Grandma::LookAtAdditiveTurnAlphaThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateInRangeA) == 0x000738, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateInRangeB) == 0x00073C, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateOutRangeA) == 0x000740, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateOutRangeB) == 0x000744, "Member 'UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateOutRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, TurnInPlaceModulatedSpeedFactor) == 0x000748, "Member 'UFortAIFaunaAnimInstance_Grandma::TurnInPlaceModulatedSpeedFactor' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIsMovingOnGroundORIsSurfaceSwimming) == 0x00074C, "Member 'UFortAIFaunaAnimInstance_Grandma::bIsMovingOnGroundORIsSurfaceSwimming' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_DefaultJump_ToJumpApex) == 0x00074D, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_DefaultJump_ToJumpApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnIdle_Idle) == 0x00074E, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnIdle_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnIdle_Moving) == 0x00074F, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnIdle_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_TurnIdle) == 0x000750, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_TurnIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnMoving_Moving) == 0x000751, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnMoving_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_TurnMoving) == 0x000752, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_TurnMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Idle_Moving) == 0x000753, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Idle_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_Idle) == 0x000754, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpLand_Idle) == 0x000755, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpLand_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpLand_Moving) == 0x000756, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpLand_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpStart_JumpApex) == 0x000757, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpStart_JumpApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Fall_Moving) == 0x000758, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Fall_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Fall_Idle) == 0x000759, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_Fall_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimIdle_SwimLoco) == 0x00075A, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimIdle_SwimLoco' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimLoco_SwimIdle) == 0x00075B, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimLoco_SwimIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimTurn_SwimIdle) == 0x00075C, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimTurn_SwimIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimTurn_SwimLoco) == 0x00075D, "Member 'UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimTurn_SwimLoco' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bAnimRule_NegativeTurnAngle) == 0x00075E, "Member 'UFortAIFaunaAnimInstance_Grandma::bAnimRule_NegativeTurnAngle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, InterruptibleMaxCheck) == 0x000760, "Member 'UFortAIFaunaAnimInstance_Grandma::InterruptibleMaxCheck' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedStopTransition) == 0x000764, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedStopTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedIdleMoveTransition) == 0x000768, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedIdleMoveTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedMovingTurnIdleTransition) == 0x00076C, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedMovingTurnIdleTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMin) == 0x000770, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMin' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMinWhileRiding) == 0x000774, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMinWhileRiding' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMinWhileAcceleratingAndRiding) == 0x000778, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMinWhileAcceleratingAndRiding' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, StateTimeFromEndThreshold) == 0x00077C, "Member 'UFortAIFaunaAnimInstance_Grandma::StateTimeFromEndThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedIdleStartTurnThreshold) == 0x000780, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedIdleStartTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedFallMovingThreshold) == 0x000784, "Member 'UFortAIFaunaAnimInstance_Grandma::SpeedFallMovingThreshold' has a wrong offset!");

class UFortAIFaunaAnimInstance_Grandma_Hitchhiker final : public UFortAIFaunaAnimInstance_Grandma
{
public:
	bool                                          bIsHitchhiked;
	bool                                          bIsGrandmaSprinting;
	uint8                                         Pad_792[0x2];
	float                                         SprintCheckSpeed;
	uint8                                         Pad_798[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Grandma_Hitchhiker">();
	}
	static class UFortAIFaunaAnimInstance_Grandma_Hitchhiker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Grandma_Hitchhiker>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Grandma_Hitchhiker");
static_assert(sizeof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker) == 0x0007A0, "Wrong size on UFortAIFaunaAnimInstance_Grandma_Hitchhiker");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, bIsHitchhiked) == 0x000790, "Member 'UFortAIFaunaAnimInstance_Grandma_Hitchhiker::bIsHitchhiked' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, bIsGrandmaSprinting) == 0x000791, "Member 'UFortAIFaunaAnimInstance_Grandma_Hitchhiker::bIsGrandmaSprinting' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, SprintCheckSpeed) == 0x000794, "Member 'UFortAIFaunaAnimInstance_Grandma_Hitchhiker::SprintCheckSpeed' has a wrong offset!");

class UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance
{
public:
	bool                                          bIsBeingHeld;
	bool                                          bIsBeingThrown;
	uint8                                         Pad_6D2[0x2];
	float                                         LowerBodyMaskAlpha;
	bool                                          bShouldExitJump;
	uint8                                         Pad_6D9[0x3];
	float                                         MovingPlayRate;
	bool                                          bShouldLean;
	uint8                                         Pad_6E1[0x3];
	float                                         LeanDirection;
	bool                                          bTurnAngleIsNegative;
	uint8                                         Pad_6E9[0x3];
	class FName                                   InterruptibleCurveName;
	bool                                          bIsIdleShuffleTurn;
	uint8                                         Pad_6F1[0x3];
	float                                         IdleShuffleBodyBend;
	float                                         IdleShufflePlayRate;
	bool                                          bIdleShuffleTurnDirection;
	bool                                          bCanTransitionIdleToIdleTurn;
	bool                                          bCanTransitionIdleToLocomotionTurn;
	bool                                          bCanTransitionIdleToMoving;
	bool                                          bCanTransitionIdleToJumpApex;
	bool                                          bCanTransitionMovingToIdle;
	bool                                          bCanTransitionJumpStartToJumpApex;
	bool                                          bCanTransitionJumpApexToJumpLoop;
	bool                                          bCanTransitionLocomotionTurnToIdle;
	bool                                          bCanTransitionLocomotionTurnToMoving;
	bool                                          bCanTransitionIdleTurnToMoving;
	bool                                          bCanTransitionIdleTurnToIdle;
	bool                                          bCanTransitionJumpLoopToJumpLand;
	bool                                          bCanTransitionIsBeingHeldToChickenChuck;
	uint8                                         Pad_70A[0x2];
	float                                         ShouldExitJump_SpeedThreshold;
	float                                         MovingPlayRate_SpeedThreshold;
	float                                         MovingPlayRate_SlowSpeedDivisor;
	float                                         MovingPlayRate_FastSpeedDivisor;
	float                                         MovingPlayRate_InterpSpeed;
	float                                         MovingPlayRate_MinClamp;
	float                                         MovingPlayRate_MaxClamp;
	float                                         LeanDirection_SpeedThreshold;
	float                                         ShouldLean_SpeedThreshold;
	float                                         InterruptibleCurveValue_LargeThreshold;
	float                                         Speed_MovingThreshold;
	float                                         Speed_IdleThreshold;
	float                                         IdleTurnTransition_SpeedThreshold;
	float                                         LocomotionTurnTransition_SpeedThreshold;
	float                                         IdleShuffleBodyBendMultiplier;
	float                                         IdleShuffleTurnThreshold;
	float                                         IdleShuffleTurnDirectionThreshold;
	float                                         IdleShufflePlayRateInRangeA;
	float                                         IdleShufflePlayRateInRangeB;
	float                                         IdleShufflePlayRateOutRangeA;
	float                                         IdleShufflePlayRateOutRangeB;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Nug">();
	}
	static class UFortAIFaunaAnimInstance_Nug* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Nug>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Nug) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Nug");
static_assert(sizeof(UFortAIFaunaAnimInstance_Nug) == 0x000760, "Wrong size on UFortAIFaunaAnimInstance_Nug");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsBeingHeld) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Nug::bIsBeingHeld' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsBeingThrown) == 0x0006D1, "Member 'UFortAIFaunaAnimInstance_Nug::bIsBeingThrown' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LowerBodyMaskAlpha) == 0x0006D4, "Member 'UFortAIFaunaAnimInstance_Nug::LowerBodyMaskAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bShouldExitJump) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Nug::bShouldExitJump' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bShouldLean) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Nug::bShouldLean' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LeanDirection) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Nug::LeanDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bTurnAngleIsNegative) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Nug::bTurnAngleIsNegative' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, InterruptibleCurveName) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Nug::InterruptibleCurveName' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsIdleShuffleTurn) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Nug::bIsIdleShuffleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleBodyBend) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShuffleBodyBend' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRate) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIdleShuffleTurnDirection) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Nug::bIdleShuffleTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToIdleTurn) == 0x0006FD, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToIdleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToLocomotionTurn) == 0x0006FE, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToLocomotionTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToMoving) == 0x0006FF, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToJumpApex) == 0x000700, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToJumpApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionMovingToIdle) == 0x000701, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionMovingToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpStartToJumpApex) == 0x000702, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpStartToJumpApex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpApexToJumpLoop) == 0x000703, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpApexToJumpLoop' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionLocomotionTurnToIdle) == 0x000704, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionLocomotionTurnToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionLocomotionTurnToMoving) == 0x000705, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionLocomotionTurnToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleTurnToMoving) == 0x000706, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleTurnToMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleTurnToIdle) == 0x000707, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleTurnToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpLoopToJumpLand) == 0x000708, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpLoopToJumpLand' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIsBeingHeldToChickenChuck) == 0x000709, "Member 'UFortAIFaunaAnimInstance_Nug::bCanTransitionIsBeingHeldToChickenChuck' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, ShouldExitJump_SpeedThreshold) == 0x00070C, "Member 'UFortAIFaunaAnimInstance_Nug::ShouldExitJump_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_SpeedThreshold) == 0x000710, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_SlowSpeedDivisor) == 0x000714, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_SlowSpeedDivisor' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_FastSpeedDivisor) == 0x000718, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_FastSpeedDivisor' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_InterpSpeed) == 0x00071C, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_InterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_MinClamp) == 0x000720, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_MinClamp' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_MaxClamp) == 0x000724, "Member 'UFortAIFaunaAnimInstance_Nug::MovingPlayRate_MaxClamp' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LeanDirection_SpeedThreshold) == 0x000728, "Member 'UFortAIFaunaAnimInstance_Nug::LeanDirection_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, ShouldLean_SpeedThreshold) == 0x00072C, "Member 'UFortAIFaunaAnimInstance_Nug::ShouldLean_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, InterruptibleCurveValue_LargeThreshold) == 0x000730, "Member 'UFortAIFaunaAnimInstance_Nug::InterruptibleCurveValue_LargeThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, Speed_MovingThreshold) == 0x000734, "Member 'UFortAIFaunaAnimInstance_Nug::Speed_MovingThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, Speed_IdleThreshold) == 0x000738, "Member 'UFortAIFaunaAnimInstance_Nug::Speed_IdleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleTurnTransition_SpeedThreshold) == 0x00073C, "Member 'UFortAIFaunaAnimInstance_Nug::IdleTurnTransition_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LocomotionTurnTransition_SpeedThreshold) == 0x000740, "Member 'UFortAIFaunaAnimInstance_Nug::LocomotionTurnTransition_SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleBodyBendMultiplier) == 0x000744, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShuffleBodyBendMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleTurnThreshold) == 0x000748, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShuffleTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleTurnDirectionThreshold) == 0x00074C, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShuffleTurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateInRangeA) == 0x000750, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateInRangeB) == 0x000754, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateOutRangeA) == 0x000758, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateOutRangeB) == 0x00075C, "Member 'UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateOutRangeB' has a wrong offset!");

class UFortAIFaunaAnimInstance_Nug_Hitchhiker final : public UFortAIFaunaAnimInstance_Nug
{
public:
	bool                                          bIsSwimming;
	bool                                          bIsHitchhiked;
	uint8                                         Pad_762[0xE];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Nug_Hitchhiker">();
	}
	static class UFortAIFaunaAnimInstance_Nug_Hitchhiker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Nug_Hitchhiker>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Nug_Hitchhiker) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Nug_Hitchhiker");
static_assert(sizeof(UFortAIFaunaAnimInstance_Nug_Hitchhiker) == 0x000770, "Wrong size on UFortAIFaunaAnimInstance_Nug_Hitchhiker");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug_Hitchhiker, bIsSwimming) == 0x000760, "Member 'UFortAIFaunaAnimInstance_Nug_Hitchhiker::bIsSwimming' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug_Hitchhiker, bIsHitchhiked) == 0x000761, "Member 'UFortAIFaunaAnimInstance_Nug_Hitchhiker::bIsHitchhiked' has a wrong offset!");

class UFortAIFaunaAnimInstance_Robert final : public UFortAIFaunaAnimInstance
{
public:
	uint8                                         Pad_6D0[0x8];
	class AFortAIPawn*                            AIPawn;
	bool                                          bIdleStartTurn;
	bool                                          bEnableHeadTiltDownAdditive;
	bool                                          bIsFullBodyInPlace;
	uint8                                         Pad_6E3[0x1];
	float                                         LocomotionPoseAdditiveAlpha;
	bool                                          bIsIdleShuffleTurn;
	uint8                                         Pad_6E9[0x3];
	float                                         IdleShuffleBodyBend;
	float                                         IdleShufflePlayRate;
	bool                                          bIdleShuffleTurnDirection;
	bool                                          bLookAtAdditiveTurnAlpha;
	bool                                          bTurnDirection;
	uint8                                         Pad_6F7[0x1];
	int32                                         PawnIDScale;
	int32                                         HeadTiltDownAdditiveFrequenceySeconds;
	float                                         ForceFullBodyTransition;
	float                                         LocomotionPoseAdditiveAlphaInterpRate;
	float                                         IdleStartTurnInterruptibleThreshold;
	float                                         LookAtAlphaThreshold;
	float                                         SpeedMovingThreshold;
	float                                         TurnDirectionThreshold;
	float                                         IdleShuffleBodyBendMultiplier;
	float                                         IdleShuffleTurnThreshold;
	float                                         IdleShuffleTurnDirectionThreshold;
	float                                         IdleShufflePlayRateInRangeA;
	float                                         IdleShufflePlayRateInRangeB;
	float                                         IdleShufflePlayRateOutRangeA;
	float                                         IdleShufflePlayRateOutRangeB;
	bool                                          bStateRule_TurnIdle_Idle;
	bool                                          bStateRule_Idle_TurnIdle;
	bool                                          bStateRule_TurnIdle_Moving;
	bool                                          bStateRule_TurnMoving_TurnIdle;
	bool                                          bStateRule_Idle_Moving;
	bool                                          bStateRule_Moving_Idle;
	bool                                          bStateRule_TurnMoving_Moving;
	bool                                          bStateRule_Moving_TurnMoving;
	bool                                          bStateRule_Swimming_Fall;
	bool                                          bStateRule_Land_Idle;
	bool                                          bStateRule_JumpStart_Apex;
	bool                                          bStateRule_Fall_Idle;
	bool                                          bStateRule_Fall_Moving;
	bool                                          bStateRule_SwimIdle_SwimLoco;
	bool                                          bStateRule_SwimLoco_SwimIdle;
	bool                                          bStateRule_SwimTurn_SwimIdle;
	bool                                          bStateRule_SwimTurn_SwimLoco;
	bool                                          bAnimRule_NegativeTurnAngle;
	bool                                          bIsAccelerating2D;
	uint8                                         Pad_747[0x1];
	float                                         InterruptibleMaxCheck;
	float                                         SpeedStopTransition;
	float                                         SpeedIdleMoveTransition;
	float                                         SpeedToMoveMin;
	float                                         StateTimeFromEndThreshold;
	uint8                                         Pad_75C[0x4];

public:
	float CalculateLocomotionPoseAdditiveAlpha();
	bool DetermineEnableHeadTiltDownAdditive();
	bool DetermineIdleStartTurn();
	bool DetermineIsFullBodyInPlace();
	void UpdateEnableHeadTiltDownAdditive();
	void UpdateIdleStartTurn();
	void UpdateIsFullBodyInPlace();
	void UpdateLocomotionPoseAdditiveAlpha();
	void UpdateStateVariables();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Robert">();
	}
	static class UFortAIFaunaAnimInstance_Robert* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Robert>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Robert) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Robert");
static_assert(sizeof(UFortAIFaunaAnimInstance_Robert) == 0x000760, "Wrong size on UFortAIFaunaAnimInstance_Robert");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AIPawn) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Robert::AIPawn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIdleStartTurn) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Robert::bIdleStartTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bEnableHeadTiltDownAdditive) == 0x0006E1, "Member 'UFortAIFaunaAnimInstance_Robert::bEnableHeadTiltDownAdditive' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsFullBodyInPlace) == 0x0006E2, "Member 'UFortAIFaunaAnimInstance_Robert::bIsFullBodyInPlace' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPoseAdditiveAlpha) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Robert::LocomotionPoseAdditiveAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsIdleShuffleTurn) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Robert::bIsIdleShuffleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleBodyBend) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShuffleBodyBend' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRate) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIdleShuffleTurnDirection) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Robert::bIdleShuffleTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bLookAtAdditiveTurnAlpha) == 0x0006F5, "Member 'UFortAIFaunaAnimInstance_Robert::bLookAtAdditiveTurnAlpha' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bTurnDirection) == 0x0006F6, "Member 'UFortAIFaunaAnimInstance_Robert::bTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, PawnIDScale) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Robert::PawnIDScale' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HeadTiltDownAdditiveFrequenceySeconds) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Robert::HeadTiltDownAdditiveFrequenceySeconds' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, ForceFullBodyTransition) == 0x000700, "Member 'UFortAIFaunaAnimInstance_Robert::ForceFullBodyTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPoseAdditiveAlphaInterpRate) == 0x000704, "Member 'UFortAIFaunaAnimInstance_Robert::LocomotionPoseAdditiveAlphaInterpRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleStartTurnInterruptibleThreshold) == 0x000708, "Member 'UFortAIFaunaAnimInstance_Robert::IdleStartTurnInterruptibleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LookAtAlphaThreshold) == 0x00070C, "Member 'UFortAIFaunaAnimInstance_Robert::LookAtAlphaThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedMovingThreshold) == 0x000710, "Member 'UFortAIFaunaAnimInstance_Robert::SpeedMovingThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, TurnDirectionThreshold) == 0x000714, "Member 'UFortAIFaunaAnimInstance_Robert::TurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleBodyBendMultiplier) == 0x000718, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShuffleBodyBendMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleTurnThreshold) == 0x00071C, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShuffleTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleTurnDirectionThreshold) == 0x000720, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShuffleTurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateInRangeA) == 0x000724, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateInRangeB) == 0x000728, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateOutRangeA) == 0x00072C, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateOutRangeB) == 0x000730, "Member 'UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateOutRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_TurnIdle_Idle) == 0x000734, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_TurnIdle_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Idle_TurnIdle) == 0x000735, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Idle_TurnIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_TurnIdle_Moving) == 0x000736, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_TurnIdle_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_TurnMoving_TurnIdle) == 0x000737, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_TurnMoving_TurnIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Idle_Moving) == 0x000738, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Idle_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Moving_Idle) == 0x000739, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Moving_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_TurnMoving_Moving) == 0x00073A, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_TurnMoving_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Moving_TurnMoving) == 0x00073B, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Moving_TurnMoving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Swimming_Fall) == 0x00073C, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Swimming_Fall' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Land_Idle) == 0x00073D, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Land_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_JumpStart_Apex) == 0x00073E, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_JumpStart_Apex' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Fall_Idle) == 0x00073F, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Fall_Idle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Fall_Moving) == 0x000740, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_Fall_Moving' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_SwimIdle_SwimLoco) == 0x000741, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_SwimIdle_SwimLoco' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_SwimLoco_SwimIdle) == 0x000742, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_SwimLoco_SwimIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_SwimTurn_SwimIdle) == 0x000743, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_SwimTurn_SwimIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_SwimTurn_SwimLoco) == 0x000744, "Member 'UFortAIFaunaAnimInstance_Robert::bStateRule_SwimTurn_SwimLoco' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bAnimRule_NegativeTurnAngle) == 0x000745, "Member 'UFortAIFaunaAnimInstance_Robert::bAnimRule_NegativeTurnAngle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsAccelerating2D) == 0x000746, "Member 'UFortAIFaunaAnimInstance_Robert::bIsAccelerating2D' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, InterruptibleMaxCheck) == 0x000748, "Member 'UFortAIFaunaAnimInstance_Robert::InterruptibleMaxCheck' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedStopTransition) == 0x00074C, "Member 'UFortAIFaunaAnimInstance_Robert::SpeedStopTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedIdleMoveTransition) == 0x000750, "Member 'UFortAIFaunaAnimInstance_Robert::SpeedIdleMoveTransition' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedToMoveMin) == 0x000754, "Member 'UFortAIFaunaAnimInstance_Robert::SpeedToMoveMin' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, StateTimeFromEndThreshold) == 0x000758, "Member 'UFortAIFaunaAnimInstance_Robert::StateTimeFromEndThreshold' has a wrong offset!");

class UFortAIFaunaAnimInstance_Smackie final : public UFortAIFaunaAnimInstance
{
public:
	bool                                          bIsIdleShuffleTurn;
	uint8                                         Pad_6D1[0x3];
	float                                         IdleShuffleBodyBend;
	float                                         IdleShufflePlayRate;
	bool                                          bIdleShuffleTurnDirection;
	bool                                          bCanTransitionIdleToHop;
	bool                                          bCanTransitionHopToIdle;
	bool                                          bCanTransitionFallToIdle;
	bool                                          bCanTransitionFallToHop;
	uint8                                         Pad_6E1[0x3];
	float                                         SpeedThreshold;
	float                                         IdleShuffleBodyBendMultiplier;
	float                                         IdleShuffleTurnThreshold;
	float                                         IdleShuffleTurnDirectionThreshold;
	float                                         IdleShufflePlayRateInRangeA;
	float                                         IdleShufflePlayRateInRangeB;
	float                                         IdleShufflePlayRateOutRangeA;
	float                                         IdleShufflePlayRateOutRangeB;
	uint8                                         Pad_704[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Smackie">();
	}
	static class UFortAIFaunaAnimInstance_Smackie* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Smackie>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Smackie) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Smackie");
static_assert(sizeof(UFortAIFaunaAnimInstance_Smackie) == 0x000710, "Wrong size on UFortAIFaunaAnimInstance_Smackie");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bIsIdleShuffleTurn) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Smackie::bIsIdleShuffleTurn' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleBodyBend) == 0x0006D4, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShuffleBodyBend' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRate) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bIdleShuffleTurnDirection) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Smackie::bIdleShuffleTurnDirection' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionIdleToHop) == 0x0006DD, "Member 'UFortAIFaunaAnimInstance_Smackie::bCanTransitionIdleToHop' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionHopToIdle) == 0x0006DE, "Member 'UFortAIFaunaAnimInstance_Smackie::bCanTransitionHopToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionFallToIdle) == 0x0006DF, "Member 'UFortAIFaunaAnimInstance_Smackie::bCanTransitionFallToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionFallToHop) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Smackie::bCanTransitionFallToHop' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, SpeedThreshold) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Smackie::SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleBodyBendMultiplier) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShuffleBodyBendMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleTurnThreshold) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShuffleTurnThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleTurnDirectionThreshold) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShuffleTurnDirectionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateInRangeA) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateInRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateInRangeB) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateInRangeB' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateOutRangeA) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateOutRangeA' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateOutRangeB) == 0x000700, "Member 'UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateOutRangeB' has a wrong offset!");

class UFortAIFaunaLayerAnimInstance final : public UFortBaseLayerAnimInstance
{
public:
	class UAnimInstance*                          MainAnimBP;
	uint8                                         Pad_448[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaLayerAnimInstance">();
	}
	static class UFortAIFaunaLayerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaLayerAnimInstance>();
	}
};
static_assert(alignof(UFortAIFaunaLayerAnimInstance) == 0x000010, "Wrong alignment on UFortAIFaunaLayerAnimInstance");
static_assert(sizeof(UFortAIFaunaLayerAnimInstance) == 0x000450, "Wrong size on UFortAIFaunaLayerAnimInstance");
static_assert(offsetof(UFortAIFaunaLayerAnimInstance, MainAnimBP) == 0x000440, "Member 'UFortAIFaunaLayerAnimInstance::MainAnimBP' has a wrong offset!");

}
