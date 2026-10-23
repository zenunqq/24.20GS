#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GrindRailRuntime_structs.hpp"
#include "GrindRailRuntime_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UBP_GrindingComponent_C final : public UFortPawnComponent_GrindRail
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class APlayerPawn_Athena_C*                   Player;
	class UCharacterMovementComponent*            MovementComponent;
	bool                                          Grinding;
	uint8                                         Pad_C69[0x3];
	float                                         Delta_Seconds;
	class UTacticalSprintEnergyComponent_C*       SprintComponent;
	struct FGameplayTag                           GC_Sprint;
	uint8                                         Pad_C7C[0x4];
	class USkeletalMeshComponent*                 PlayerMesh;
	bool                                          CurrentlyADS;
	uint8                                         Pad_C89[0x7];
	double                                        _new__CurrentSidewaysLeanBoostAmount;
	double                                        _new__GoalSidewaysLeanBoostAmount;
	double                                        CurrentMaxSpeed;
	bool                                          HitObstacle;
	bool                                          AnimLayerActive;
	bool                                          Turning;
	uint8                                         Pad_CAB[0x5];
	double                                        TurningAlpha;
	double                                        TurningDirection;
	double                                        LastRailSwitchTime;
	TMulticastInlineDelegate<void()>              JumpedOff;
	class ABGA_GrindRail_C*                       CurrentRail;
	double                                        MaximumAngleForSideJump;
	int32                                         SideJump_NumberOfNewLocationsToTry;
	uint8                                         Pad_CEC[0x4];
	double                                        SideJump_MinSpeedPercentToMaintain;
	double                                        SideJump_MaxSpeedWithoutAnchor;
	bool                                          DrawAnchorDebug;
	uint8                                         Pad_D01[0x7];
	double                                        SF_SpeedHardCap;
	float                                         SF_SprintingMaxSpeed;
	float                                         SF_BoosterMaxSpeed;
	float                                         SF_ShootingMaxSpeedMultiplier;
	float                                         SF_BaseMaxSpeed;
	float                                         SF_IncreasedMaxSpeedFromLeaningIntoTurn;
	uint8                                         Pad_D24[0x4];
	double                                        SF_SpeedForMinBaseAcceleration;
	double                                        SF_SpeedForMaxBaseAcceleration;
	double                                        SF_MinBaseAcceleration;
	double                                        SF_MaxBaseAcceleration;
	double                                        SF_BaseGoalSpeed;
	double                                        SF_MaxDragForSpeedSoftCap;
	double                                        SF_GravityForceWhenGoingUp;
	double                                        SF_GravityForceWhenGoingDown;
	double                                        SF_MinLeanAcceleration;
	double                                        SF_MaxLeanAcceleration;
	TArray<class ABuildingActor*>                 RailsIgnoredForMoving;
	double                                        SF_SpeedThresholdForTurn;
	double                                        SF_TimeToTurnAround;
	double                                        SF_SpeedForMaxLeanAcceleration;
	double                                        SF_SpeedForMinLeanAcceleration;
	double                                        SF_SprintingAcceleration;
	double                                        SF_Boosters_AccelerationOnSpeedUpBooster;
	double                                        SF_Boosters_SprintingAccelerationWhenOnSlowDownBooster;
	double                                        SF_Boosters_SlowDownBoostersDragMultiplier;
	double                                        SF_Boosters_SlowDownBoosterGoalSpeed;
	bool                                          SF_AccelerateByLeaningIntoTurns;
	uint8                                         Pad_DD1[0x7];
	double                                        SF_LeanIntoTurnsMaxAcceleration;
	double                                        SF_CurvatureForMaxLeanIntoTurnsAcceleration;
	double                                        SF_MinSpeedAfterBouncedOffRailCap;
	double                                        SF_SpeedMultiplierOnHitRailCap;
	struct FScalableFloat                         SF_Sprinting_EnergyToUsePerSecond;
	struct FScalableFloat                         SF_MinStartSpeed;
	struct FScalableFloat                         SF_MaxStartSpeed;
	struct FScalableFloat                         SF_LandingSpeedBoost;
	struct FScalableFloat                         SF_SameRailAnchoring_MaxForwardDistanceMultiplier;
	struct FScalableFloat                         SF_SameRailAnchoring_MaxAngle;
	struct FScalableFloat                         SF_InfluenceOfMomentumOnAnchorJump;
	struct FScalableFloat                         SF_NoAnchorJumpDistanceMultiplier;
	struct FScalableFloat                         SF_MinJumpOffSpeed;
	struct FScalableFloat                         SF_JumpHeight;
	struct FScalableFloat                         SF_JumpDistanceMultiplier;
	struct FScalableFloat                         SF_SpeedMultiplierWhenImpactedPlayer;
	double                                        SF_AngleForMaxSpeedIncreaseFromDownwardSlope;
	double                                        SF_MaxSpeedIncreaseFromDownwardSlope;
	float                                         SF_SideJump_HorizontalAngleMultiplier;
	float                                         SF_JumpModifierFromAccelerationVec;
	double                                        SF_MaxDistanceFromJumpGoalForSameRailAnchoring;
	double                                        SF_HorizontalRailJumpHeight;
	double                                        _new__SF_SidewaysLeanBoostReductionRate;
	double                                        _New__SF_BaseGoalDecelerationSpeed;
	double                                        _New__SF_FrictionWhenNotLeaning;
	class UAudioComponent*                        JumpOnAudio;
	class UForceFeedbackComponent*                ForceFeedback_Sprinting;
	double                                        LastJumpedTime;
	EGrindRailBoosterMode                         _new__PreviousBoosterMode;
	bool                                          _new__GenerallyAccelerating;
	uint8                                         Pad_1032[0x2];
	struct FGameplayTag                           GC_GenerallyAccelerating;
	struct FGameplayTagContainer                  BeginGrindBlockTags;
	struct FVector                                CameraLocationOnStartedGrinding;
	class AFortGrindRail*                         WaitingForCamera_SavedGrindRail;
	bool                                          WaitingForCamera;
	uint8                                         Pad_1079[0x7];
	class UCameraModifier_Grinding_C*             CameraModifier;
	bool                                          StartedGrindFromLand;
	uint8                                         Pad_1089[0x7];
	TMulticastInlineDelegate<void()>              OnFeetLanded;
	struct FScalableFloat                         SF_MinBounceOffPlayerSpeed;
	bool                                          IgnoreStaticPlacedBuilding;
	bool                                          UseNativizedGrindingIgnoreActors;

public:
	void AddCameraModifier();
	void AddMoveIgnoreActors();
	void ADSPressed();
	void ADSReleased();
	void AllowAnotherImpactEffect();
	void Anchor_Forward_Jump(const struct FVector& Planned_Velocity_Without_Jump, const struct FVector& AnchoredJumpDir, struct FVector* NewVelocity, bool* Anchored);
	void AnchorJump(struct FVector* New_Velocity, bool* Anchored);
	void CacheGrindRailActor();
	void CalculateVelocity(const float DeltaTime, const bool bReplayingMovement, struct FVector* OutVelocity);
	bool Can_Begin_Grinding_From_Land();
	bool CanBeginGrinding();
	void Change_Sprint_State(bool New);
	void CheckForTryingToJumpStraight(const struct FVector& PotentialAnchorPoint, const struct FVector& JumpTravelVector, bool* CancelAnchor);
	void ClearMoveIgnoreActors();
	void Dismount();
	void EndGrindingBP();
	void ExecuteUbergraph_BP_GrindingComponent(int32 EntryPoint);
	void Get_Rail_Jump_To_Location_Horizontal(class ABGA_GrindRail_C* InputPin, double VelMagnitude, const struct FVector& TriggerLocation, const struct FVector& DirectionToCheckAgainst, bool* Valid_Angle, struct FVector* Location, double* DistanceOnNewRail, double* TheDirectionSign);
	struct FVector GetLeanVectorInWorldSpace();
	void Handle_Player_Landed(const struct FHitResult& Hit);
	void HandleBoosterModeChanged(EGrindRailBoosterMode PreviousBoosterMode);
	void HandleGrindFinishedAfterJumping();
	void HandleGrindingBegun();
	void HandleGrindingEnded();
	void HandleGrindingEndedFromReplication();
	void HandleHitWhenGrinding(const struct FHitResult& Hit);
	void HandleJumpOffEnd();
	void HandleRailJump();
	void HandleSprintingStateChanged(bool bNewIsSprinting);
	bool IsOnSlowDownBooster();
	void Jumpoff(const struct FVector& JumpVelocity);
	void JumpOffEnd();
	void LinkAnimLayer();
	void OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);
	void OnEnergyCompletelyDrained(class UFortComponent_Energy* EnergyComponent);
	void OnFeetLand();
	void PlayJumpOnSound(bool PlayAudio);
	void Rail_Jump();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveCameraModifier();
	void SprintPressed();
	void SprintReleased();
	void StartedFastBoosting();
	void StartedSlowBoosting();
	void StoppedFastBoosting();
	void StoppedSlowBoosting();
	void StopSprinting();
	void WentDBNO();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrindingComponent_C">();
	}
	static class UBP_GrindingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GrindingComponent_C>();
	}
};
static_assert(alignof(UBP_GrindingComponent_C) == 0x000008, "Wrong alignment on UBP_GrindingComponent_C");
static_assert(sizeof(UBP_GrindingComponent_C) == 0x0010D0, "Wrong size on UBP_GrindingComponent_C");
static_assert(offsetof(UBP_GrindingComponent_C, UberGraphFrame) == 0x000C50, "Member 'UBP_GrindingComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, Player) == 0x000C58, "Member 'UBP_GrindingComponent_C::Player' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, MovementComponent) == 0x000C60, "Member 'UBP_GrindingComponent_C::MovementComponent' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, Grinding) == 0x000C68, "Member 'UBP_GrindingComponent_C::Grinding' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, Delta_Seconds) == 0x000C6C, "Member 'UBP_GrindingComponent_C::Delta_Seconds' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SprintComponent) == 0x000C70, "Member 'UBP_GrindingComponent_C::SprintComponent' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, GC_Sprint) == 0x000C78, "Member 'UBP_GrindingComponent_C::GC_Sprint' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, PlayerMesh) == 0x000C80, "Member 'UBP_GrindingComponent_C::PlayerMesh' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, CurrentlyADS) == 0x000C88, "Member 'UBP_GrindingComponent_C::CurrentlyADS' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _new__CurrentSidewaysLeanBoostAmount) == 0x000C90, "Member 'UBP_GrindingComponent_C::_new__CurrentSidewaysLeanBoostAmount' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _new__GoalSidewaysLeanBoostAmount) == 0x000C98, "Member 'UBP_GrindingComponent_C::_new__GoalSidewaysLeanBoostAmount' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, CurrentMaxSpeed) == 0x000CA0, "Member 'UBP_GrindingComponent_C::CurrentMaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, HitObstacle) == 0x000CA8, "Member 'UBP_GrindingComponent_C::HitObstacle' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, AnimLayerActive) == 0x000CA9, "Member 'UBP_GrindingComponent_C::AnimLayerActive' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, Turning) == 0x000CAA, "Member 'UBP_GrindingComponent_C::Turning' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, TurningAlpha) == 0x000CB0, "Member 'UBP_GrindingComponent_C::TurningAlpha' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, TurningDirection) == 0x000CB8, "Member 'UBP_GrindingComponent_C::TurningDirection' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, LastRailSwitchTime) == 0x000CC0, "Member 'UBP_GrindingComponent_C::LastRailSwitchTime' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, JumpedOff) == 0x000CC8, "Member 'UBP_GrindingComponent_C::JumpedOff' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, CurrentRail) == 0x000CD8, "Member 'UBP_GrindingComponent_C::CurrentRail' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, MaximumAngleForSideJump) == 0x000CE0, "Member 'UBP_GrindingComponent_C::MaximumAngleForSideJump' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SideJump_NumberOfNewLocationsToTry) == 0x000CE8, "Member 'UBP_GrindingComponent_C::SideJump_NumberOfNewLocationsToTry' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SideJump_MinSpeedPercentToMaintain) == 0x000CF0, "Member 'UBP_GrindingComponent_C::SideJump_MinSpeedPercentToMaintain' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SideJump_MaxSpeedWithoutAnchor) == 0x000CF8, "Member 'UBP_GrindingComponent_C::SideJump_MaxSpeedWithoutAnchor' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, DrawAnchorDebug) == 0x000D00, "Member 'UBP_GrindingComponent_C::DrawAnchorDebug' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedHardCap) == 0x000D08, "Member 'UBP_GrindingComponent_C::SF_SpeedHardCap' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SprintingMaxSpeed) == 0x000D10, "Member 'UBP_GrindingComponent_C::SF_SprintingMaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_BoosterMaxSpeed) == 0x000D14, "Member 'UBP_GrindingComponent_C::SF_BoosterMaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_ShootingMaxSpeedMultiplier) == 0x000D18, "Member 'UBP_GrindingComponent_C::SF_ShootingMaxSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_BaseMaxSpeed) == 0x000D1C, "Member 'UBP_GrindingComponent_C::SF_BaseMaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_IncreasedMaxSpeedFromLeaningIntoTurn) == 0x000D20, "Member 'UBP_GrindingComponent_C::SF_IncreasedMaxSpeedFromLeaningIntoTurn' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedForMinBaseAcceleration) == 0x000D28, "Member 'UBP_GrindingComponent_C::SF_SpeedForMinBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedForMaxBaseAcceleration) == 0x000D30, "Member 'UBP_GrindingComponent_C::SF_SpeedForMaxBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinBaseAcceleration) == 0x000D38, "Member 'UBP_GrindingComponent_C::SF_MinBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxBaseAcceleration) == 0x000D40, "Member 'UBP_GrindingComponent_C::SF_MaxBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_BaseGoalSpeed) == 0x000D48, "Member 'UBP_GrindingComponent_C::SF_BaseGoalSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxDragForSpeedSoftCap) == 0x000D50, "Member 'UBP_GrindingComponent_C::SF_MaxDragForSpeedSoftCap' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_GravityForceWhenGoingUp) == 0x000D58, "Member 'UBP_GrindingComponent_C::SF_GravityForceWhenGoingUp' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_GravityForceWhenGoingDown) == 0x000D60, "Member 'UBP_GrindingComponent_C::SF_GravityForceWhenGoingDown' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinLeanAcceleration) == 0x000D68, "Member 'UBP_GrindingComponent_C::SF_MinLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxLeanAcceleration) == 0x000D70, "Member 'UBP_GrindingComponent_C::SF_MaxLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, RailsIgnoredForMoving) == 0x000D78, "Member 'UBP_GrindingComponent_C::RailsIgnoredForMoving' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedThresholdForTurn) == 0x000D88, "Member 'UBP_GrindingComponent_C::SF_SpeedThresholdForTurn' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_TimeToTurnAround) == 0x000D90, "Member 'UBP_GrindingComponent_C::SF_TimeToTurnAround' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedForMaxLeanAcceleration) == 0x000D98, "Member 'UBP_GrindingComponent_C::SF_SpeedForMaxLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedForMinLeanAcceleration) == 0x000DA0, "Member 'UBP_GrindingComponent_C::SF_SpeedForMinLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SprintingAcceleration) == 0x000DA8, "Member 'UBP_GrindingComponent_C::SF_SprintingAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_Boosters_AccelerationOnSpeedUpBooster) == 0x000DB0, "Member 'UBP_GrindingComponent_C::SF_Boosters_AccelerationOnSpeedUpBooster' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_Boosters_SprintingAccelerationWhenOnSlowDownBooster) == 0x000DB8, "Member 'UBP_GrindingComponent_C::SF_Boosters_SprintingAccelerationWhenOnSlowDownBooster' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_Boosters_SlowDownBoostersDragMultiplier) == 0x000DC0, "Member 'UBP_GrindingComponent_C::SF_Boosters_SlowDownBoostersDragMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_Boosters_SlowDownBoosterGoalSpeed) == 0x000DC8, "Member 'UBP_GrindingComponent_C::SF_Boosters_SlowDownBoosterGoalSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_AccelerateByLeaningIntoTurns) == 0x000DD0, "Member 'UBP_GrindingComponent_C::SF_AccelerateByLeaningIntoTurns' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_LeanIntoTurnsMaxAcceleration) == 0x000DD8, "Member 'UBP_GrindingComponent_C::SF_LeanIntoTurnsMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_CurvatureForMaxLeanIntoTurnsAcceleration) == 0x000DE0, "Member 'UBP_GrindingComponent_C::SF_CurvatureForMaxLeanIntoTurnsAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinSpeedAfterBouncedOffRailCap) == 0x000DE8, "Member 'UBP_GrindingComponent_C::SF_MinSpeedAfterBouncedOffRailCap' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedMultiplierOnHitRailCap) == 0x000DF0, "Member 'UBP_GrindingComponent_C::SF_SpeedMultiplierOnHitRailCap' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_Sprinting_EnergyToUsePerSecond) == 0x000DF8, "Member 'UBP_GrindingComponent_C::SF_Sprinting_EnergyToUsePerSecond' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinStartSpeed) == 0x000E20, "Member 'UBP_GrindingComponent_C::SF_MinStartSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxStartSpeed) == 0x000E48, "Member 'UBP_GrindingComponent_C::SF_MaxStartSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_LandingSpeedBoost) == 0x000E70, "Member 'UBP_GrindingComponent_C::SF_LandingSpeedBoost' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SameRailAnchoring_MaxForwardDistanceMultiplier) == 0x000E98, "Member 'UBP_GrindingComponent_C::SF_SameRailAnchoring_MaxForwardDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SameRailAnchoring_MaxAngle) == 0x000EC0, "Member 'UBP_GrindingComponent_C::SF_SameRailAnchoring_MaxAngle' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_InfluenceOfMomentumOnAnchorJump) == 0x000EE8, "Member 'UBP_GrindingComponent_C::SF_InfluenceOfMomentumOnAnchorJump' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_NoAnchorJumpDistanceMultiplier) == 0x000F10, "Member 'UBP_GrindingComponent_C::SF_NoAnchorJumpDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinJumpOffSpeed) == 0x000F38, "Member 'UBP_GrindingComponent_C::SF_MinJumpOffSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_JumpHeight) == 0x000F60, "Member 'UBP_GrindingComponent_C::SF_JumpHeight' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_JumpDistanceMultiplier) == 0x000F88, "Member 'UBP_GrindingComponent_C::SF_JumpDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SpeedMultiplierWhenImpactedPlayer) == 0x000FB0, "Member 'UBP_GrindingComponent_C::SF_SpeedMultiplierWhenImpactedPlayer' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_AngleForMaxSpeedIncreaseFromDownwardSlope) == 0x000FD8, "Member 'UBP_GrindingComponent_C::SF_AngleForMaxSpeedIncreaseFromDownwardSlope' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxSpeedIncreaseFromDownwardSlope) == 0x000FE0, "Member 'UBP_GrindingComponent_C::SF_MaxSpeedIncreaseFromDownwardSlope' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_SideJump_HorizontalAngleMultiplier) == 0x000FE8, "Member 'UBP_GrindingComponent_C::SF_SideJump_HorizontalAngleMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_JumpModifierFromAccelerationVec) == 0x000FEC, "Member 'UBP_GrindingComponent_C::SF_JumpModifierFromAccelerationVec' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MaxDistanceFromJumpGoalForSameRailAnchoring) == 0x000FF0, "Member 'UBP_GrindingComponent_C::SF_MaxDistanceFromJumpGoalForSameRailAnchoring' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_HorizontalRailJumpHeight) == 0x000FF8, "Member 'UBP_GrindingComponent_C::SF_HorizontalRailJumpHeight' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _new__SF_SidewaysLeanBoostReductionRate) == 0x001000, "Member 'UBP_GrindingComponent_C::_new__SF_SidewaysLeanBoostReductionRate' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _New__SF_BaseGoalDecelerationSpeed) == 0x001008, "Member 'UBP_GrindingComponent_C::_New__SF_BaseGoalDecelerationSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _New__SF_FrictionWhenNotLeaning) == 0x001010, "Member 'UBP_GrindingComponent_C::_New__SF_FrictionWhenNotLeaning' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, JumpOnAudio) == 0x001018, "Member 'UBP_GrindingComponent_C::JumpOnAudio' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, ForceFeedback_Sprinting) == 0x001020, "Member 'UBP_GrindingComponent_C::ForceFeedback_Sprinting' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, LastJumpedTime) == 0x001028, "Member 'UBP_GrindingComponent_C::LastJumpedTime' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _new__PreviousBoosterMode) == 0x001030, "Member 'UBP_GrindingComponent_C::_new__PreviousBoosterMode' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, _new__GenerallyAccelerating) == 0x001031, "Member 'UBP_GrindingComponent_C::_new__GenerallyAccelerating' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, GC_GenerallyAccelerating) == 0x001034, "Member 'UBP_GrindingComponent_C::GC_GenerallyAccelerating' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, BeginGrindBlockTags) == 0x001038, "Member 'UBP_GrindingComponent_C::BeginGrindBlockTags' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, CameraLocationOnStartedGrinding) == 0x001058, "Member 'UBP_GrindingComponent_C::CameraLocationOnStartedGrinding' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, WaitingForCamera_SavedGrindRail) == 0x001070, "Member 'UBP_GrindingComponent_C::WaitingForCamera_SavedGrindRail' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, WaitingForCamera) == 0x001078, "Member 'UBP_GrindingComponent_C::WaitingForCamera' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, CameraModifier) == 0x001080, "Member 'UBP_GrindingComponent_C::CameraModifier' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, StartedGrindFromLand) == 0x001088, "Member 'UBP_GrindingComponent_C::StartedGrindFromLand' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, OnFeetLanded) == 0x001090, "Member 'UBP_GrindingComponent_C::OnFeetLanded' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, SF_MinBounceOffPlayerSpeed) == 0x0010A0, "Member 'UBP_GrindingComponent_C::SF_MinBounceOffPlayerSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, IgnoreStaticPlacedBuilding) == 0x0010C8, "Member 'UBP_GrindingComponent_C::IgnoreStaticPlacedBuilding' has a wrong offset!");
static_assert(offsetof(UBP_GrindingComponent_C, UseNativizedGrindingIgnoreActors) == 0x0010C9, "Member 'UBP_GrindingComponent_C::UseNativizedGrindingIgnoreActors' has a wrong offset!");

}
