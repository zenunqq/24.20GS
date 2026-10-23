#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteAI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "RidingCodeRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance
{
public:
	struct FCachedAnimRelevancyData               IntoVehicleCachedData;
	struct FCachedAnimRelevancyData               OutOfVehicleCachedData;
	float                                         InTime;
	float                                         OutTime;
	float                                         BodyYawOffset;
	uint8                                         Pad_83C[0x4];
	struct FRotator                               BodyCounterRotation;
	float                                         BodyCounterRotationAlpha;
	bool                                          bIsReloading;
	bool                                          bIsTargeting;
	bool                                          bIsFiring;
	bool                                          bIsUsingConsumable;
	bool                                          bIsInAction;
	bool                                          bIsThrowConsumable;
	bool                                          bIsTargetingOrThrowingConsumable;
	bool                                          bIsTurningInPlace;
	bool                                          bIsRidingSprinting;
	bool                                          bIsRidingPetting;
	uint8                                         Pad_866[0x2];
	float                                         TurnInPlaceRotationSpeed;
	float                                         TurnInPlaceAngleDelta;
	bool                                          bIsRidingMovingBackward;
	bool                                          bIsSlopeSliding;
	uint8                                         Pad_872[0x2];
	float                                         SlopeSlidingPitch;
	float                                         SlopeSlidingRoll;
	float                                         RiderReferentialRidableYaw;
	float                                         AimYawDegreesCoverage;
	float                                         SmoothedAimYaw;
	bool                                          bJustEntered;
	bool                                          bIsRidableMoving;
	bool                                          bIsRideMode;
	uint8                                         Pad_88B[0x1];
	float                                         RidableVelocity;
	float                                         BodyYaw;
	float                                         BoostPlayRate;
	float                                         RidingMovePlayRate;
	float                                         FalseBlendTime;
	float                                         CombatToRideYaw;
	float                                         InPlaceYaw;
	float                                         HeadAOAlpha;
	uint8                                         Pad_8AC[0x4];
	struct FRotator                               MeleeTwistRot;
	bool                                          bIsDualWield;
	bool                                          bIsOneHandedDualWield;
	bool                                          bIsTwoHandedSword;
	bool                                          bShouldAdjustBodyTwistForMelee;
	uint8                                         Pad_8CC[0x4];
	struct FVector                                PlayerOffset;
	float                                         NoiseAlpha;
	bool                                          bIsLobsterBlockActive;
	uint8                                         Pad_8ED[0x3];
	float                                         SlopePitch;
	float                                         RiderHeightAdjustmentSpringConstant;
	float                                         MinSlopePitchForRiderHeightAdjustment;
	float                                         MaxSlopePitchForRiderHeightAdjustment;
	float                                         RiderHeightAdjustmentForMinSlopePitch;
	float                                         RiderHeightAdjustmentForMaxSlopePitch;
	float                                         PettingRotAlpha;
	uint8                                         Pad_90C[0x4];
	struct FRotator                               PettingRot;
	float                                         PettingPitchFactor;
	float                                         PettingRollFactor;
	struct FVector                                HandAttachLeft;
	struct FVector                                HandAttachRight;
	float                                         HandAttachAlpha;
	ERidingFootPhase                              FootPhase;
	bool                                          bIsFootPhase_FeetInAir;
	bool                                          bIsFootPhase_FrontFeetPlanted;
	bool                                          bIsFootPhase_BackFeetPlanted;
	bool                                          bIsFootPhase_LeftBackFeetForward;
	bool                                          bIsFootPhase_RightBackFeetForward;
	bool                                          bIsFootPhase_LeftPlantedRightPass;
	bool                                          bIsFootPhase_RightPlantedLeftPass;
	float                                         TurnInPlaceModulatedSpeed;
	bool                                          bIsTurnInPlaceAngleDeltaPositive;
	uint8                                         Pad_971[0x3];
	float                                         SlopeRoll;
	float                                         MovingVelocityLowerBound;
	float                                         JustEnteredDelayTimeSec;
	float                                         FalseBlendTime_Moving;
	float                                         FalseBlendTime_NotMoving;
	struct FVector                                PlayerOffsetMale;
	struct FVector                                PlayerOffsetFemale;
	struct FSoftObjectPath                        ScytheMontage;
	struct FSoftObjectPath                        BRSwordMontage;
	EFortWeaponCoreAnimation                      MeleeDualWieldCoreAnimation;
	uint8                                         Pad_9E9[0x7];
	struct FVector                                SlopePitchTraceStart;
	struct FVector                                SlopePitchTraceEnd;
	struct FVector                                HandAttachLocationLeftMale;
	struct FVector                                HandAttachLocationRightMale;
	struct FVector                                HandAttachLocationLeftFemale;
	struct FVector                                HandAttachLocationRightFemale;
	class FName                                   PlayerHandAttachLeft;
	class FName                                   PlayerHandAttachRight;
	class FName                                   DisableHandAttachCurveName;
	class FName                                   AllowRidingNoiseAdditiveCurveName;
	uint8                                         Pad_A90[0x30];

public:
	void BlueprintCollectRidableAnimBPData(const class UAnimInstance* RidableAnimInstance);
	void PlaceHandIKTargets();
	void SetFootPhase(const ERidingFootPhase InFootPhase);
	void UpdateBoostPlayRate();
	void UpdateSlopePitchForRiding();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleLayerAnimInstance_Riding">();
	}
	static class UFortVehicleLayerAnimInstance_Riding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVehicleLayerAnimInstance_Riding>();
	}
};
static_assert(alignof(UFortVehicleLayerAnimInstance_Riding) == 0x000010, "Wrong alignment on UFortVehicleLayerAnimInstance_Riding");
static_assert(sizeof(UFortVehicleLayerAnimInstance_Riding) == 0x000AC0, "Wrong size on UFortVehicleLayerAnimInstance_Riding");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, IntoVehicleCachedData) == 0x000808, "Member 'UFortVehicleLayerAnimInstance_Riding::IntoVehicleCachedData' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, OutOfVehicleCachedData) == 0x00081C, "Member 'UFortVehicleLayerAnimInstance_Riding::OutOfVehicleCachedData' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, InTime) == 0x000830, "Member 'UFortVehicleLayerAnimInstance_Riding::InTime' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, OutTime) == 0x000834, "Member 'UFortVehicleLayerAnimInstance_Riding::OutTime' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyYawOffset) == 0x000838, "Member 'UFortVehicleLayerAnimInstance_Riding::BodyYawOffset' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyCounterRotation) == 0x000840, "Member 'UFortVehicleLayerAnimInstance_Riding::BodyCounterRotation' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyCounterRotationAlpha) == 0x000858, "Member 'UFortVehicleLayerAnimInstance_Riding::BodyCounterRotationAlpha' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsReloading) == 0x00085C, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsReloading' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTargeting) == 0x00085D, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsTargeting' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFiring) == 0x00085E, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFiring' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsUsingConsumable) == 0x00085F, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsUsingConsumable' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsInAction) == 0x000860, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsInAction' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsThrowConsumable) == 0x000861, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsThrowConsumable' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTargetingOrThrowingConsumable) == 0x000862, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsTargetingOrThrowingConsumable' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTurningInPlace) == 0x000863, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsTurningInPlace' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingSprinting) == 0x000864, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsRidingSprinting' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingPetting) == 0x000865, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsRidingPetting' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceRotationSpeed) == 0x000868, "Member 'UFortVehicleLayerAnimInstance_Riding::TurnInPlaceRotationSpeed' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceAngleDelta) == 0x00086C, "Member 'UFortVehicleLayerAnimInstance_Riding::TurnInPlaceAngleDelta' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingMovingBackward) == 0x000870, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsRidingMovingBackward' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsSlopeSliding) == 0x000871, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsSlopeSliding' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeSlidingPitch) == 0x000874, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopeSlidingPitch' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeSlidingRoll) == 0x000878, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopeSlidingRoll' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderReferentialRidableYaw) == 0x00087C, "Member 'UFortVehicleLayerAnimInstance_Riding::RiderReferentialRidableYaw' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, AimYawDegreesCoverage) == 0x000880, "Member 'UFortVehicleLayerAnimInstance_Riding::AimYawDegreesCoverage' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SmoothedAimYaw) == 0x000884, "Member 'UFortVehicleLayerAnimInstance_Riding::SmoothedAimYaw' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bJustEntered) == 0x000888, "Member 'UFortVehicleLayerAnimInstance_Riding::bJustEntered' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidableMoving) == 0x000889, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsRidableMoving' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRideMode) == 0x00088A, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsRideMode' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RidableVelocity) == 0x00088C, "Member 'UFortVehicleLayerAnimInstance_Riding::RidableVelocity' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyYaw) == 0x000890, "Member 'UFortVehicleLayerAnimInstance_Riding::BodyYaw' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BoostPlayRate) == 0x000894, "Member 'UFortVehicleLayerAnimInstance_Riding::BoostPlayRate' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RidingMovePlayRate) == 0x000898, "Member 'UFortVehicleLayerAnimInstance_Riding::RidingMovePlayRate' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime) == 0x00089C, "Member 'UFortVehicleLayerAnimInstance_Riding::FalseBlendTime' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, CombatToRideYaw) == 0x0008A0, "Member 'UFortVehicleLayerAnimInstance_Riding::CombatToRideYaw' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, InPlaceYaw) == 0x0008A4, "Member 'UFortVehicleLayerAnimInstance_Riding::InPlaceYaw' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HeadAOAlpha) == 0x0008A8, "Member 'UFortVehicleLayerAnimInstance_Riding::HeadAOAlpha' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MeleeTwistRot) == 0x0008B0, "Member 'UFortVehicleLayerAnimInstance_Riding::MeleeTwistRot' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsDualWield) == 0x0008C8, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsDualWield' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsOneHandedDualWield) == 0x0008C9, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsOneHandedDualWield' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTwoHandedSword) == 0x0008CA, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsTwoHandedSword' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bShouldAdjustBodyTwistForMelee) == 0x0008CB, "Member 'UFortVehicleLayerAnimInstance_Riding::bShouldAdjustBodyTwistForMelee' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffset) == 0x0008D0, "Member 'UFortVehicleLayerAnimInstance_Riding::PlayerOffset' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, NoiseAlpha) == 0x0008E8, "Member 'UFortVehicleLayerAnimInstance_Riding::NoiseAlpha' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsLobsterBlockActive) == 0x0008EC, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsLobsterBlockActive' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitch) == 0x0008F0, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopePitch' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentSpringConstant) == 0x0008F4, "Member 'UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentSpringConstant' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MinSlopePitchForRiderHeightAdjustment) == 0x0008F8, "Member 'UFortVehicleLayerAnimInstance_Riding::MinSlopePitchForRiderHeightAdjustment' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MaxSlopePitchForRiderHeightAdjustment) == 0x0008FC, "Member 'UFortVehicleLayerAnimInstance_Riding::MaxSlopePitchForRiderHeightAdjustment' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentForMinSlopePitch) == 0x000900, "Member 'UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentForMinSlopePitch' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentForMaxSlopePitch) == 0x000904, "Member 'UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentForMaxSlopePitch' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRotAlpha) == 0x000908, "Member 'UFortVehicleLayerAnimInstance_Riding::PettingRotAlpha' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRot) == 0x000910, "Member 'UFortVehicleLayerAnimInstance_Riding::PettingRot' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingPitchFactor) == 0x000928, "Member 'UFortVehicleLayerAnimInstance_Riding::PettingPitchFactor' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRollFactor) == 0x00092C, "Member 'UFortVehicleLayerAnimInstance_Riding::PettingRollFactor' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLeft) == 0x000930, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachLeft' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachRight) == 0x000948, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachRight' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachAlpha) == 0x000960, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachAlpha' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FootPhase) == 0x000964, "Member 'UFortVehicleLayerAnimInstance_Riding::FootPhase' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_FeetInAir) == 0x000965, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_FeetInAir' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_FrontFeetPlanted) == 0x000966, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_FrontFeetPlanted' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_BackFeetPlanted) == 0x000967, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_BackFeetPlanted' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_LeftBackFeetForward) == 0x000968, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_LeftBackFeetForward' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_RightBackFeetForward) == 0x000969, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_RightBackFeetForward' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_LeftPlantedRightPass) == 0x00096A, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_LeftPlantedRightPass' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_RightPlantedLeftPass) == 0x00096B, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_RightPlantedLeftPass' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceModulatedSpeed) == 0x00096C, "Member 'UFortVehicleLayerAnimInstance_Riding::TurnInPlaceModulatedSpeed' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTurnInPlaceAngleDeltaPositive) == 0x000970, "Member 'UFortVehicleLayerAnimInstance_Riding::bIsTurnInPlaceAngleDeltaPositive' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeRoll) == 0x000974, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopeRoll' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MovingVelocityLowerBound) == 0x000978, "Member 'UFortVehicleLayerAnimInstance_Riding::MovingVelocityLowerBound' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, JustEnteredDelayTimeSec) == 0x00097C, "Member 'UFortVehicleLayerAnimInstance_Riding::JustEnteredDelayTimeSec' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime_Moving) == 0x000980, "Member 'UFortVehicleLayerAnimInstance_Riding::FalseBlendTime_Moving' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime_NotMoving) == 0x000984, "Member 'UFortVehicleLayerAnimInstance_Riding::FalseBlendTime_NotMoving' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffsetMale) == 0x000988, "Member 'UFortVehicleLayerAnimInstance_Riding::PlayerOffsetMale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffsetFemale) == 0x0009A0, "Member 'UFortVehicleLayerAnimInstance_Riding::PlayerOffsetFemale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, ScytheMontage) == 0x0009B8, "Member 'UFortVehicleLayerAnimInstance_Riding::ScytheMontage' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BRSwordMontage) == 0x0009D0, "Member 'UFortVehicleLayerAnimInstance_Riding::BRSwordMontage' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MeleeDualWieldCoreAnimation) == 0x0009E8, "Member 'UFortVehicleLayerAnimInstance_Riding::MeleeDualWieldCoreAnimation' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitchTraceStart) == 0x0009F0, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopePitchTraceStart' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitchTraceEnd) == 0x000A08, "Member 'UFortVehicleLayerAnimInstance_Riding::SlopePitchTraceEnd' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationLeftMale) == 0x000A20, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachLocationLeftMale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationRightMale) == 0x000A38, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachLocationRightMale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationLeftFemale) == 0x000A50, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachLocationLeftFemale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationRightFemale) == 0x000A68, "Member 'UFortVehicleLayerAnimInstance_Riding::HandAttachLocationRightFemale' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerHandAttachLeft) == 0x000A80, "Member 'UFortVehicleLayerAnimInstance_Riding::PlayerHandAttachLeft' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerHandAttachRight) == 0x000A84, "Member 'UFortVehicleLayerAnimInstance_Riding::PlayerHandAttachRight' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, DisableHandAttachCurveName) == 0x000A88, "Member 'UFortVehicleLayerAnimInstance_Riding::DisableHandAttachCurveName' has a wrong offset!");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, AllowRidingNoiseAdditiveCurveName) == 0x000A8C, "Member 'UFortVehicleLayerAnimInstance_Riding::AllowRidingNoiseAdditiveCurveName' has a wrong offset!");

class URidingCheatManager final : public UChildCheatManager
{
public:
	void RidingSetStaminaPercent(const float StaminaPercent);
	void StartRidingActor();
	void StopRidingActor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RidingCheatManager">();
	}
	static class URidingCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidingCheatManager>();
	}
};
static_assert(alignof(URidingCheatManager) == 0x000008, "Wrong alignment on URidingCheatManager");
static_assert(sizeof(URidingCheatManager) == 0x000028, "Wrong size on URidingCheatManager");

class URidableComponent : public UGameFrameworkComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TMulticastInlineDelegate<void(class URidableComponent* Ridable, class URiderComponent* Rider)> OnRiderStartedRiding;
	TMulticastInlineDelegate<void(class URidableComponent* Ridable, class URiderComponent* Rider)> OnRiderStoppedRiding;
	TSubclassOf<class UAnimInstance>              RiderAnimLayerOverlayClass;
	class FName                                   AttachSocket;
	uint8                                         Pad_D4[0x4];
	struct FVector                                AttachLocationOffset;
	struct FRotator                               AttachRotationOffset;
	class FName                                   ClientAttachGuideSocket;
	uint8                                         Pad_10C[0x4];
	struct FVector                                ClientAttachGuideLocationOffset;
	class FName                                   RidablePropAttachSocket;
	uint8                                         Pad_12C[0x4];
	struct FVector                                RidablePropAttachLocationOffset;
	struct FRotator                               RidablePropAttachRotationOffset;
	float                                         RidablePropAttachScale;
	float                                         RidablePropAttachRiderVerticalBuffer;
	struct FRidingAttachmentBoundsOverride        RiderPropAttachBoundsOverride;
	bool                                          bOverrideNoiseGeneration;
	uint8                                         Pad_1A1[0x3];
	struct FFortPlayerPawnAthenaMovementNoiseOverride RiderMovementNoiseOverride;
	struct FGameplayTag                           RidableTag;
	struct FGameplayTag                           EnergyDepletedTag;
	struct FDataTableRowHandle                    PlaylistTagBlacklistRowHandle;
	class URiderComponent*                        ActiveRider;
	class URiderComponent*                        LastRider;
	class USceneComponent*                        RidableProp;
	float                                         OriginalCapsuleRadius;
	float                                         OriginalCapsuleHalfHeight;
	float                                         RidingCapsuleRadius;
	float                                         RidingCapsuleHalfHeight;
	bool                                          bOriginalClientPositionSmoothingThrottlingSetting;
	uint8                                         Pad_1F1[0x7];
	struct FScalableFloat                         MaxHalfAimingAngle;
	TArray<struct FPrimaryFireAnimMontageAnimCoreTypeOverride> PrimaryFireMontageAnimCoreTypeOverrides;
	TArray<struct FPrimaryFireAnimMontageTagOverride> PrimaryFireMontageTagOverrides;
	struct FRidingPettingData                     PettingData;
	struct FTimerHandle                           RestoreCollisionHandle;
	uint8                                         Pad_350[0x10];
	bool                                          bIsSprinting;
	uint8                                         Pad_361[0x17];

public:
	void CheatSetStaminaPercent(const float StaminaPercent);
	void HandleRiderEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
	void HandleRiderStartedRiding(class URiderComponent* Rider);
	void HandleRiderStoppedRiding(class URiderComponent* Rider);
	void OnRep_ActiveRider();

	bool CanBePet(class URiderComponent* Rider) const;
	bool CanBeRiddenBP(class URiderComponent* Rider) const;
	bool CanRiderPlayEmote(const class URiderComponent* Rider) const;
	const struct FRidingPettingData GetPettingData() const;
	class USceneComponent* GetRidingAttachComponent() const;
	void GetRidingCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const;
	void GetRidingEmoteCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const;
	bool IsBeingRidden() const;
	bool IsFlying() const;
	bool IsSprinting() const;
	bool ShouldCameraFocusOnRidable(const class URiderComponent* Rider) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RidableComponent">();
	}
	static class URidableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidableComponent>();
	}
};
static_assert(alignof(URidableComponent) == 0x000008, "Wrong alignment on URidableComponent");
static_assert(sizeof(URidableComponent) == 0x000378, "Wrong size on URidableComponent");
static_assert(offsetof(URidableComponent, OnRiderStartedRiding) == 0x0000A8, "Member 'URidableComponent::OnRiderStartedRiding' has a wrong offset!");
static_assert(offsetof(URidableComponent, OnRiderStoppedRiding) == 0x0000B8, "Member 'URidableComponent::OnRiderStoppedRiding' has a wrong offset!");
static_assert(offsetof(URidableComponent, RiderAnimLayerOverlayClass) == 0x0000C8, "Member 'URidableComponent::RiderAnimLayerOverlayClass' has a wrong offset!");
static_assert(offsetof(URidableComponent, AttachSocket) == 0x0000D0, "Member 'URidableComponent::AttachSocket' has a wrong offset!");
static_assert(offsetof(URidableComponent, AttachLocationOffset) == 0x0000D8, "Member 'URidableComponent::AttachLocationOffset' has a wrong offset!");
static_assert(offsetof(URidableComponent, AttachRotationOffset) == 0x0000F0, "Member 'URidableComponent::AttachRotationOffset' has a wrong offset!");
static_assert(offsetof(URidableComponent, ClientAttachGuideSocket) == 0x000108, "Member 'URidableComponent::ClientAttachGuideSocket' has a wrong offset!");
static_assert(offsetof(URidableComponent, ClientAttachGuideLocationOffset) == 0x000110, "Member 'URidableComponent::ClientAttachGuideLocationOffset' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidablePropAttachSocket) == 0x000128, "Member 'URidableComponent::RidablePropAttachSocket' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidablePropAttachLocationOffset) == 0x000130, "Member 'URidableComponent::RidablePropAttachLocationOffset' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidablePropAttachRotationOffset) == 0x000148, "Member 'URidableComponent::RidablePropAttachRotationOffset' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidablePropAttachScale) == 0x000160, "Member 'URidableComponent::RidablePropAttachScale' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidablePropAttachRiderVerticalBuffer) == 0x000164, "Member 'URidableComponent::RidablePropAttachRiderVerticalBuffer' has a wrong offset!");
static_assert(offsetof(URidableComponent, RiderPropAttachBoundsOverride) == 0x000168, "Member 'URidableComponent::RiderPropAttachBoundsOverride' has a wrong offset!");
static_assert(offsetof(URidableComponent, bOverrideNoiseGeneration) == 0x0001A0, "Member 'URidableComponent::bOverrideNoiseGeneration' has a wrong offset!");
static_assert(offsetof(URidableComponent, RiderMovementNoiseOverride) == 0x0001A4, "Member 'URidableComponent::RiderMovementNoiseOverride' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidableTag) == 0x0001B0, "Member 'URidableComponent::RidableTag' has a wrong offset!");
static_assert(offsetof(URidableComponent, EnergyDepletedTag) == 0x0001B4, "Member 'URidableComponent::EnergyDepletedTag' has a wrong offset!");
static_assert(offsetof(URidableComponent, PlaylistTagBlacklistRowHandle) == 0x0001B8, "Member 'URidableComponent::PlaylistTagBlacklistRowHandle' has a wrong offset!");
static_assert(offsetof(URidableComponent, ActiveRider) == 0x0001C8, "Member 'URidableComponent::ActiveRider' has a wrong offset!");
static_assert(offsetof(URidableComponent, LastRider) == 0x0001D0, "Member 'URidableComponent::LastRider' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidableProp) == 0x0001D8, "Member 'URidableComponent::RidableProp' has a wrong offset!");
static_assert(offsetof(URidableComponent, OriginalCapsuleRadius) == 0x0001E0, "Member 'URidableComponent::OriginalCapsuleRadius' has a wrong offset!");
static_assert(offsetof(URidableComponent, OriginalCapsuleHalfHeight) == 0x0001E4, "Member 'URidableComponent::OriginalCapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidingCapsuleRadius) == 0x0001E8, "Member 'URidableComponent::RidingCapsuleRadius' has a wrong offset!");
static_assert(offsetof(URidableComponent, RidingCapsuleHalfHeight) == 0x0001EC, "Member 'URidableComponent::RidingCapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(URidableComponent, bOriginalClientPositionSmoothingThrottlingSetting) == 0x0001F0, "Member 'URidableComponent::bOriginalClientPositionSmoothingThrottlingSetting' has a wrong offset!");
static_assert(offsetof(URidableComponent, MaxHalfAimingAngle) == 0x0001F8, "Member 'URidableComponent::MaxHalfAimingAngle' has a wrong offset!");
static_assert(offsetof(URidableComponent, PrimaryFireMontageAnimCoreTypeOverrides) == 0x000220, "Member 'URidableComponent::PrimaryFireMontageAnimCoreTypeOverrides' has a wrong offset!");
static_assert(offsetof(URidableComponent, PrimaryFireMontageTagOverrides) == 0x000230, "Member 'URidableComponent::PrimaryFireMontageTagOverrides' has a wrong offset!");
static_assert(offsetof(URidableComponent, PettingData) == 0x000240, "Member 'URidableComponent::PettingData' has a wrong offset!");
static_assert(offsetof(URidableComponent, RestoreCollisionHandle) == 0x000348, "Member 'URidableComponent::RestoreCollisionHandle' has a wrong offset!");
static_assert(offsetof(URidableComponent, bIsSprinting) == 0x000360, "Member 'URidableComponent::bIsSprinting' has a wrong offset!");

class UControllableRidableComponent : public URidableComponent
{
public:
	bool                                          bIsControllable;
	bool                                          bHasAbility;
	uint8                                         Pad_37A[0x6];
	class FText                                   AbilityDisplayText;
	bool                                          bCanJump;
	bool                                          bAlwaysMoveForward;
	uint8                                         Pad_39A[0x2];
	float                                         ForwardMoveSpeedMultiplier;
	float                                         BackwardMoveSpeedMultiplier;
	float                                         SidewaysMoveRotationOffset;
	EFortMovementUrgency                          MovementUrgency;
	bool                                          bIsBeingControlled;
	uint8                                         Pad_3AA[0x1E];
	struct FRidableControlParams                  RidableControlParams;
	uint8                                         Pad_5A8[0x20];

public:
	void CancelBuildBar();
	void HandleAbilityHeld();
	void HandleAbilityStarted();
	void HandleAbilityStopped();
	void HandleCancelSprint(const bool bAbilityInputHeld, const bool bForceCancel);
	void HandleJumpHeld();
	void HandleJumpStarted();
	void HandleJumpStopped();
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_IsBeingControlled();
	void ServerDoJumpExit();

	bool CanBeControlled(class URiderComponent* Rider) const;
	bool CanStartSprinting() const;
	const class FText GetAbilityDisplayText() const;
	bool IsSprintToggleable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllableRidableComponent">();
	}
	static class UControllableRidableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllableRidableComponent>();
	}
};
static_assert(alignof(UControllableRidableComponent) == 0x000008, "Wrong alignment on UControllableRidableComponent");
static_assert(sizeof(UControllableRidableComponent) == 0x0005C8, "Wrong size on UControllableRidableComponent");
static_assert(offsetof(UControllableRidableComponent, bIsControllable) == 0x000378, "Member 'UControllableRidableComponent::bIsControllable' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, bHasAbility) == 0x000379, "Member 'UControllableRidableComponent::bHasAbility' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, AbilityDisplayText) == 0x000380, "Member 'UControllableRidableComponent::AbilityDisplayText' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, bCanJump) == 0x000398, "Member 'UControllableRidableComponent::bCanJump' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, bAlwaysMoveForward) == 0x000399, "Member 'UControllableRidableComponent::bAlwaysMoveForward' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, ForwardMoveSpeedMultiplier) == 0x00039C, "Member 'UControllableRidableComponent::ForwardMoveSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, BackwardMoveSpeedMultiplier) == 0x0003A0, "Member 'UControllableRidableComponent::BackwardMoveSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, SidewaysMoveRotationOffset) == 0x0003A4, "Member 'UControllableRidableComponent::SidewaysMoveRotationOffset' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, MovementUrgency) == 0x0003A8, "Member 'UControllableRidableComponent::MovementUrgency' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, bIsBeingControlled) == 0x0003A9, "Member 'UControllableRidableComponent::bIsBeingControlled' has a wrong offset!");
static_assert(offsetof(UControllableRidableComponent, RidableControlParams) == 0x0003C8, "Member 'UControllableRidableComponent::RidableControlParams' has a wrong offset!");

class URiderComponent : public UFortPawnOverrideComponent
{
public:
	TMulticastInlineDelegate<void(class URiderComponent* Rider, class URidableComponent* Ridable)> OnStartedRiding;
	TMulticastInlineDelegate<void(class URiderComponent* Rider, class URidableComponent* Ridable)> OnStoppedRiding;
	TSubclassOf<class UFortCameraMode_Riding>     RidingCameraModeClass;
	TSubclassOf<class UFortCameraMode_Riding>     RidingSprintCameraModeClass;
	float                                         RidingCameraModeBlendTime;
	uint8                                         Pad_DC[0x4];
	struct FInterpOffset                          TargetingAdditionalViewTargetSpaceViewOffset;
	TSubclassOf<class USceneComponent>            RiderPropClass;
	TSubclassOf<class USceneComponent>            RidablePropClass;
	struct FVector                                RiderPropAttachLocationOffset;
	struct FRotator                               RiderPropAttachRotationOffset;
	float                                         RiderPropAttachScale;
	class FName                                   RiderPropAttachSocket;
	bool                                          bUseClientAttachGuideSocket;
	uint8                                         Pad_139[0x7];
	struct FVector                                RiderPropAttachSoftBounds;
	float                                         RiderPropAttachSoftBoundsScalar;
	uint8                                         Pad_15C[0x4];
	struct FVector                                RiderPropAttachHardBounds;
	float                                         RiderPropAttachSoftBoundsTargetingScalar;
	float                                         RiderPropAttachHardBoundsTargetingScalar;
	float                                         RiderPropAttachVerticalBufferTargetingScalar;
	float                                         RidingExitHoldTime;
	struct FScalableFloat                         TimeBeforeReenteringRiding;
	struct FGameplayTag                           RidingExitStartedEventTag;
	struct FGameplayTag                           RidingExitStoppedEventTag;
	class UFXSystemAsset*                         ConnectorFXAsset;
	class FName                                   ConnectorPropSourceMeshParameterName;
	class FName                                   ConnectorPropTargetMeshParameterName;
	float                                         SimulatedSmoothedRotationSpeed;
	uint8                                         Pad_1CC[0x4];
	struct FGameplayTagContainer                  ExcludedEmoteTags;
	uint8                                         Pad_1F0[0x8];
	class URidableComponent*                      ActiveRidable;
	class URidableComponent*                      LastRidable;
	class USceneComponent*                        RiderProp;
	class UFXSystemComponent*                     ConnectorProp;
	struct FVector                                PropAttachSeparation;
	struct FVector                                AdditionalAttachOffset;
	struct FVector                                SoftBoundsAttachmentOffset;
	struct FVector                                HardBoundsAttachmentOffset;
	struct FDataTableRowHandle                    PlaylistTagBlacklistRowHandle;
	class UFortInputComponent*                    RiderInputComponent;
	struct FGameplayTagContainer                  PendingFailedEmoteErrorTags;
	struct FRiderDismountLaunchVelocity           ExitLaunchVelocity;
	struct FRiderDismountLaunchVelocity           JumpExitLaunchVelocity;
	uint8                                         Pad_400[0x8];
	struct FRidingAnalyticsData_Stopped           ActiveAnaltyicsData;
	struct FVector                                RidableLocationLastFrame;
	uint8                                         Pad_4B0[0x8];
	struct FTimerHandle                           RestoreCollisionHandle;
	struct FRidableControlRuntimeData             RidableControlRuntimeData;
	uint8                                         bIsSprintingReplay : 1;
	uint8                                         Pad_501[0x3];
	TWeakObjectPtr<class AFortPlayerController>   ClampedController;
	bool                                          bIsPetting;
	uint8                                         Pad_50D[0x3];
	struct FScalableFloat                         RidingCapsuleHalfHeight;
	struct FScalableFloat                         RidingCapsuleRadius;
	uint8                                         Pad_560[0x10];
	struct FCollisionProfileName                  CollisionProfileName;
	uint8                                         Pad_574[0x4];
	struct FScalableFloat                         TraceRadius;
	struct FScalableFloat                         TraceLength;
	uint8                                         Pad_5C8[0x80];

public:
	void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);
	void ClientNotifyEmoteFailure(const struct FGameplayTagContainer& ErrorTags);
	void HandleActorEndPlayWhileRiding(class AActor* Actor, EEndPlayReason EndPlayReason);
	void HandleDBNOWhileRiding();
	void HandleDeferredExitVelocity(const struct FVector& ExitVelocity);
	void HandleGamepadRidingExitReleased();
	void HandleOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void HandlePawnDiedWhileRiding(class AFortPawn* DeadPawn);
	void HandlePawnTeleported(class AFortPawn* TeleportedPawn);
	void HandleRidableFound(const struct FHitResult& HitResult);
	void HandleRiderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleRiderTakenDamage(class AActor* DamageOnOwnerPawnDamageddActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleRidingExitPressed();
	void HandleRidingExitReleased();
	void HandleStartedRiding(class URidableComponent* Ridable);
	void HandleStoppedRiding(class URidableComponent* Ridable);
	void OnMovementModeChanged(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRep_ActiveRidable();
	void OnRep_IsSprintingReplay();
	void OnRep_RidableControlRuntimeUpdated();
	void ServerRidingExit();
	bool StartRidingActor(class AActor* TargetActor);
	bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit);

	bool IsRidingActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RiderComponent">();
	}
	static class URiderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URiderComponent>();
	}
};
static_assert(alignof(URiderComponent) == 0x000008, "Wrong alignment on URiderComponent");
static_assert(sizeof(URiderComponent) == 0x000648, "Wrong size on URiderComponent");
static_assert(offsetof(URiderComponent, OnStartedRiding) == 0x0000A8, "Member 'URiderComponent::OnStartedRiding' has a wrong offset!");
static_assert(offsetof(URiderComponent, OnStoppedRiding) == 0x0000B8, "Member 'URiderComponent::OnStoppedRiding' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingCameraModeClass) == 0x0000C8, "Member 'URiderComponent::RidingCameraModeClass' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingSprintCameraModeClass) == 0x0000D0, "Member 'URiderComponent::RidingSprintCameraModeClass' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingCameraModeBlendTime) == 0x0000D8, "Member 'URiderComponent::RidingCameraModeBlendTime' has a wrong offset!");
static_assert(offsetof(URiderComponent, TargetingAdditionalViewTargetSpaceViewOffset) == 0x0000E0, "Member 'URiderComponent::TargetingAdditionalViewTargetSpaceViewOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropClass) == 0x0000F0, "Member 'URiderComponent::RiderPropClass' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidablePropClass) == 0x0000F8, "Member 'URiderComponent::RidablePropClass' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachLocationOffset) == 0x000100, "Member 'URiderComponent::RiderPropAttachLocationOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachRotationOffset) == 0x000118, "Member 'URiderComponent::RiderPropAttachRotationOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachScale) == 0x000130, "Member 'URiderComponent::RiderPropAttachScale' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachSocket) == 0x000134, "Member 'URiderComponent::RiderPropAttachSocket' has a wrong offset!");
static_assert(offsetof(URiderComponent, bUseClientAttachGuideSocket) == 0x000138, "Member 'URiderComponent::bUseClientAttachGuideSocket' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBounds) == 0x000140, "Member 'URiderComponent::RiderPropAttachSoftBounds' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBoundsScalar) == 0x000158, "Member 'URiderComponent::RiderPropAttachSoftBoundsScalar' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachHardBounds) == 0x000160, "Member 'URiderComponent::RiderPropAttachHardBounds' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBoundsTargetingScalar) == 0x000178, "Member 'URiderComponent::RiderPropAttachSoftBoundsTargetingScalar' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachHardBoundsTargetingScalar) == 0x00017C, "Member 'URiderComponent::RiderPropAttachHardBoundsTargetingScalar' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderPropAttachVerticalBufferTargetingScalar) == 0x000180, "Member 'URiderComponent::RiderPropAttachVerticalBufferTargetingScalar' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingExitHoldTime) == 0x000184, "Member 'URiderComponent::RidingExitHoldTime' has a wrong offset!");
static_assert(offsetof(URiderComponent, TimeBeforeReenteringRiding) == 0x000188, "Member 'URiderComponent::TimeBeforeReenteringRiding' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingExitStartedEventTag) == 0x0001B0, "Member 'URiderComponent::RidingExitStartedEventTag' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingExitStoppedEventTag) == 0x0001B4, "Member 'URiderComponent::RidingExitStoppedEventTag' has a wrong offset!");
static_assert(offsetof(URiderComponent, ConnectorFXAsset) == 0x0001B8, "Member 'URiderComponent::ConnectorFXAsset' has a wrong offset!");
static_assert(offsetof(URiderComponent, ConnectorPropSourceMeshParameterName) == 0x0001C0, "Member 'URiderComponent::ConnectorPropSourceMeshParameterName' has a wrong offset!");
static_assert(offsetof(URiderComponent, ConnectorPropTargetMeshParameterName) == 0x0001C4, "Member 'URiderComponent::ConnectorPropTargetMeshParameterName' has a wrong offset!");
static_assert(offsetof(URiderComponent, SimulatedSmoothedRotationSpeed) == 0x0001C8, "Member 'URiderComponent::SimulatedSmoothedRotationSpeed' has a wrong offset!");
static_assert(offsetof(URiderComponent, ExcludedEmoteTags) == 0x0001D0, "Member 'URiderComponent::ExcludedEmoteTags' has a wrong offset!");
static_assert(offsetof(URiderComponent, ActiveRidable) == 0x0001F8, "Member 'URiderComponent::ActiveRidable' has a wrong offset!");
static_assert(offsetof(URiderComponent, LastRidable) == 0x000200, "Member 'URiderComponent::LastRidable' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderProp) == 0x000208, "Member 'URiderComponent::RiderProp' has a wrong offset!");
static_assert(offsetof(URiderComponent, ConnectorProp) == 0x000210, "Member 'URiderComponent::ConnectorProp' has a wrong offset!");
static_assert(offsetof(URiderComponent, PropAttachSeparation) == 0x000218, "Member 'URiderComponent::PropAttachSeparation' has a wrong offset!");
static_assert(offsetof(URiderComponent, AdditionalAttachOffset) == 0x000230, "Member 'URiderComponent::AdditionalAttachOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, SoftBoundsAttachmentOffset) == 0x000248, "Member 'URiderComponent::SoftBoundsAttachmentOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, HardBoundsAttachmentOffset) == 0x000260, "Member 'URiderComponent::HardBoundsAttachmentOffset' has a wrong offset!");
static_assert(offsetof(URiderComponent, PlaylistTagBlacklistRowHandle) == 0x000278, "Member 'URiderComponent::PlaylistTagBlacklistRowHandle' has a wrong offset!");
static_assert(offsetof(URiderComponent, RiderInputComponent) == 0x000288, "Member 'URiderComponent::RiderInputComponent' has a wrong offset!");
static_assert(offsetof(URiderComponent, PendingFailedEmoteErrorTags) == 0x000290, "Member 'URiderComponent::PendingFailedEmoteErrorTags' has a wrong offset!");
static_assert(offsetof(URiderComponent, ExitLaunchVelocity) == 0x0002B0, "Member 'URiderComponent::ExitLaunchVelocity' has a wrong offset!");
static_assert(offsetof(URiderComponent, JumpExitLaunchVelocity) == 0x000358, "Member 'URiderComponent::JumpExitLaunchVelocity' has a wrong offset!");
static_assert(offsetof(URiderComponent, ActiveAnaltyicsData) == 0x000408, "Member 'URiderComponent::ActiveAnaltyicsData' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidableLocationLastFrame) == 0x000498, "Member 'URiderComponent::RidableLocationLastFrame' has a wrong offset!");
static_assert(offsetof(URiderComponent, RestoreCollisionHandle) == 0x0004B8, "Member 'URiderComponent::RestoreCollisionHandle' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidableControlRuntimeData) == 0x0004C0, "Member 'URiderComponent::RidableControlRuntimeData' has a wrong offset!");
static_assert(offsetof(URiderComponent, ClampedController) == 0x000504, "Member 'URiderComponent::ClampedController' has a wrong offset!");
static_assert(offsetof(URiderComponent, bIsPetting) == 0x00050C, "Member 'URiderComponent::bIsPetting' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingCapsuleHalfHeight) == 0x000510, "Member 'URiderComponent::RidingCapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(URiderComponent, RidingCapsuleRadius) == 0x000538, "Member 'URiderComponent::RidingCapsuleRadius' has a wrong offset!");
static_assert(offsetof(URiderComponent, CollisionProfileName) == 0x000570, "Member 'URiderComponent::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(URiderComponent, TraceRadius) == 0x000578, "Member 'URiderComponent::TraceRadius' has a wrong offset!");
static_assert(offsetof(URiderComponent, TraceLength) == 0x0005A0, "Member 'URiderComponent::TraceLength' has a wrong offset!");

class UControllingRiderComponent : public URiderComponent
{
public:
	bool                                          bCanControlRidable;
	bool                                          bIsControllingRidable;
	ERidingControlInputStyle                      ControlInputStyle;
	uint8                                         Pad_64B[0xD];
	struct FRidingControlInputState               ReplicatedControlInputState;
	struct FRidingControlInputStateReliable       ReplicatedControlInputStateReliable;
	struct FRidingControlInputStateUnreliable     ReplicatedControlInputStateUnreliable;
	uint8                                         Pad_667[0x1];
	class UFortInputComponent*                    ControllingRiderInputComponent;
	uint8                                         Pad_670[0x10];
	float                                         AutoRunDoubleTapTimestamp;
	bool                                          bCanBePet;
	uint8                                         Pad_685[0x3];

public:
	void ControllingActor_OnJumpInput(bool bPressed);
	void ControllingActor_OnMoveForward(float Val);
	void ControllingActor_OnMoveRight(float Val);
	void HandleGamepadRidingAbilityPressed();
	void HandlePettingAbilityPressed();
	void HandleRequestPettingStart();
	void HandleRequestPettingStop();
	void HandleRidingAbilityPressed();
	void HandleRidingAbilityReleased();
	void HandleSpotActorOrPettingAbilityPressed();
	void HandleSpotActorOrPettingAbilityReleased();
	void OnRep_ControlInputReliable();
	void OnRep_ControlInputUnreliable();
	void OnRep_IsControllingRidable();
	void OnSprintCanceled();
	void ReloadPressed();
	void ServerCancelPetting();
	void ServerUpdateControlInputStateReliable(const struct FRidingControlInputStateReliable& InputState);
	void ServerUpdateControlInputStateUnreliable(const struct FRidingControlInputStateUnreliable& InputState);
	void UpdateFromInput(float DeltaTime, const struct FRidingControlInputState& InputState);

	const struct FRidingControlInputState GetControlInputState() const;
	bool IsTryingToMove(float Tolerance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllingRiderComponent">();
	}
	static class UControllingRiderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllingRiderComponent>();
	}
};
static_assert(alignof(UControllingRiderComponent) == 0x000008, "Wrong alignment on UControllingRiderComponent");
static_assert(sizeof(UControllingRiderComponent) == 0x000688, "Wrong size on UControllingRiderComponent");
static_assert(offsetof(UControllingRiderComponent, bCanControlRidable) == 0x000648, "Member 'UControllingRiderComponent::bCanControlRidable' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, bIsControllingRidable) == 0x000649, "Member 'UControllingRiderComponent::bIsControllingRidable' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, ControlInputStyle) == 0x00064A, "Member 'UControllingRiderComponent::ControlInputStyle' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputState) == 0x000658, "Member 'UControllingRiderComponent::ReplicatedControlInputState' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputStateReliable) == 0x000664, "Member 'UControllingRiderComponent::ReplicatedControlInputStateReliable' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputStateUnreliable) == 0x000665, "Member 'UControllingRiderComponent::ReplicatedControlInputStateUnreliable' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, ControllingRiderInputComponent) == 0x000668, "Member 'UControllingRiderComponent::ControllingRiderInputComponent' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, AutoRunDoubleTapTimestamp) == 0x000680, "Member 'UControllingRiderComponent::AutoRunDoubleTapTimestamp' has a wrong offset!");
static_assert(offsetof(UControllingRiderComponent, bCanBePet) == 0x000684, "Member 'UControllingRiderComponent::bCanBePet' has a wrong offset!");

class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{
public:
	struct FVector                                OriginOffset;
	uint8                                         Pad_1B30[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_Riding">();
	}
	static class UFortCameraMode_Riding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_Riding>();
	}
};
static_assert(alignof(UFortCameraMode_Riding) == 0x000010, "Wrong alignment on UFortCameraMode_Riding");
static_assert(sizeof(UFortCameraMode_Riding) == 0x001B40, "Wrong size on UFortCameraMode_Riding");
static_assert(offsetof(UFortCameraMode_Riding, OriginOffset) == 0x001B18, "Member 'UFortCameraMode_Riding::OriginOffset' has a wrong offset!");

class ARidingGameStateMutator final : public AFortAthenaMutator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RidingGameStateMutator">();
	}
	static class ARidingGameStateMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARidingGameStateMutator>();
	}
};
static_assert(alignof(ARidingGameStateMutator) == 0x000008, "Wrong alignment on ARidingGameStateMutator");
static_assert(sizeof(ARidingGameStateMutator) == 0x000330, "Wrong size on ARidingGameStateMutator");

class URidingAnalytics final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RidingAnalytics">();
	}
	static class URidingAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidingAnalytics>();
	}
};
static_assert(alignof(URidingAnalytics) == 0x000008, "Wrong alignment on URidingAnalytics");
static_assert(sizeof(URidingAnalytics) == 0x000028, "Wrong size on URidingAnalytics");

class UFortAthenaPettingWildlifeTelemetryData final : public UFortAthenaAITelemetryData
{
public:
	int32                                         PetCount;
	uint8                                         Pad_2C[0x4];

public:
	void OnPetted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPettingWildlifeTelemetryData">();
	}
	static class UFortAthenaPettingWildlifeTelemetryData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaPettingWildlifeTelemetryData>();
	}
};
static_assert(alignof(UFortAthenaPettingWildlifeTelemetryData) == 0x000008, "Wrong alignment on UFortAthenaPettingWildlifeTelemetryData");
static_assert(sizeof(UFortAthenaPettingWildlifeTelemetryData) == 0x000030, "Wrong size on UFortAthenaPettingWildlifeTelemetryData");
static_assert(offsetof(UFortAthenaPettingWildlifeTelemetryData, PetCount) == 0x000028, "Member 'UFortAthenaPettingWildlifeTelemetryData::PetCount' has a wrong offset!");

}
