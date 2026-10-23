#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EFootPlacementLockType : uint8
{
	Unlocked                                 = 0,
	PivotAroundBall                          = 1,
	PivotAroundAnkle                         = 2,
	LockRotation                             = 3,
	EFootPlacementLockType_MAX               = 4,
};

enum class EPelvisHeightMode : uint8
{
	AllLegs                                  = 0,
	AllPlantedFeet                           = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX                    = 3,
};

enum class EActorMovementCompensationMode : uint8
{
	ComponentSpace                           = 0,
	WorldSpace                               = 1,
	SuddenMotionOnly                         = 2,
	EActorMovementCompensationMode_MAX       = 3,
};

enum class EOffsetRootBoneMode : uint8
{
	Accumulate                               = 0,
	Interpolate                              = 1,
	Hold                                     = 2,
	Release                                  = 3,
	EOffsetRootBoneMode_MAX                  = 4,
};

struct FFootPlacementInterpolationSettings final
{
public:
	float                                         UnplantLinearStiffness;
	float                                         UnplantLinearDamping;
	float                                         UnplantAngularStiffness;
	float                                         UnplantAngularDamping;
	float                                         FloorLinearStiffness;
	float                                         FloorLinearDamping;
	float                                         FloorAngularStiffness;
	float                                         FloorAngularDamping;
	bool                                          bEnableFloorInterpolation;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(FFootPlacementInterpolationSettings) == 0x000004, "Wrong alignment on FFootPlacementInterpolationSettings");
static_assert(sizeof(FFootPlacementInterpolationSettings) == 0x000024, "Wrong size on FFootPlacementInterpolationSettings");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantLinearStiffness) == 0x000000, "Member 'FFootPlacementInterpolationSettings::UnplantLinearStiffness' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantLinearDamping) == 0x000004, "Member 'FFootPlacementInterpolationSettings::UnplantLinearDamping' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantAngularStiffness) == 0x000008, "Member 'FFootPlacementInterpolationSettings::UnplantAngularStiffness' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantAngularDamping) == 0x00000C, "Member 'FFootPlacementInterpolationSettings::UnplantAngularDamping' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorLinearStiffness) == 0x000010, "Member 'FFootPlacementInterpolationSettings::FloorLinearStiffness' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorLinearDamping) == 0x000014, "Member 'FFootPlacementInterpolationSettings::FloorLinearDamping' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorAngularStiffness) == 0x000018, "Member 'FFootPlacementInterpolationSettings::FloorAngularStiffness' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorAngularDamping) == 0x00001C, "Member 'FFootPlacementInterpolationSettings::FloorAngularDamping' has a wrong offset!");
static_assert(offsetof(FFootPlacementInterpolationSettings, bEnableFloorInterpolation) == 0x000020, "Member 'FFootPlacementInterpolationSettings::bEnableFloorInterpolation' has a wrong offset!");

struct FFootPlacementTraceSettings final
{
public:
	float                                         StartOffset;
	float                                         EndOffset;
	float                                         SweepRadius;
	ETraceTypeQuery                               ComplexTraceChannel;
	uint8                                         Pad_D[0x3];
	float                                         MaxGroundPenetration;
	float                                         SimpleCollisionInfluence;
	ETraceTypeQuery                               SimpleTraceChannel;
	bool                                          bEnabled;
	uint8                                         Pad_1A[0x2];
};
static_assert(alignof(FFootPlacementTraceSettings) == 0x000004, "Wrong alignment on FFootPlacementTraceSettings");
static_assert(sizeof(FFootPlacementTraceSettings) == 0x00001C, "Wrong size on FFootPlacementTraceSettings");
static_assert(offsetof(FFootPlacementTraceSettings, StartOffset) == 0x000000, "Member 'FFootPlacementTraceSettings::StartOffset' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, EndOffset) == 0x000004, "Member 'FFootPlacementTraceSettings::EndOffset' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, SweepRadius) == 0x000008, "Member 'FFootPlacementTraceSettings::SweepRadius' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, ComplexTraceChannel) == 0x00000C, "Member 'FFootPlacementTraceSettings::ComplexTraceChannel' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, MaxGroundPenetration) == 0x000010, "Member 'FFootPlacementTraceSettings::MaxGroundPenetration' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, SimpleCollisionInfluence) == 0x000014, "Member 'FFootPlacementTraceSettings::SimpleCollisionInfluence' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, SimpleTraceChannel) == 0x000018, "Member 'FFootPlacementTraceSettings::SimpleTraceChannel' has a wrong offset!");
static_assert(offsetof(FFootPlacementTraceSettings, bEnabled) == 0x000019, "Member 'FFootPlacementTraceSettings::bEnabled' has a wrong offset!");

struct FFootPlacementRootDefinition final
{
public:
	struct FBoneReference                         PelvisBone;
	struct FBoneReference                         IKRootBone;
};
static_assert(alignof(FFootPlacementRootDefinition) == 0x000004, "Wrong alignment on FFootPlacementRootDefinition");
static_assert(sizeof(FFootPlacementRootDefinition) == 0x000018, "Wrong size on FFootPlacementRootDefinition");
static_assert(offsetof(FFootPlacementRootDefinition, PelvisBone) == 0x000000, "Member 'FFootPlacementRootDefinition::PelvisBone' has a wrong offset!");
static_assert(offsetof(FFootPlacementRootDefinition, IKRootBone) == 0x00000C, "Member 'FFootPlacementRootDefinition::IKRootBone' has a wrong offset!");

struct FFootPlacementPelvisSettings final
{
public:
	float                                         MaxOffset;
	float                                         LinearStiffness;
	float                                         LinearDamping;
	float                                         HorizontalRebalancingWeight;
	float                                         MaxOffsetHorizontal;
	float                                         HeelLiftRatio;
	EPelvisHeightMode                             PelvisHeightMode;
	EActorMovementCompensationMode                ActorMovementCompensationMode;
	bool                                          bEnableInterpolation;
	uint8                                         Pad_1B[0x1];
};
static_assert(alignof(FFootPlacementPelvisSettings) == 0x000004, "Wrong alignment on FFootPlacementPelvisSettings");
static_assert(sizeof(FFootPlacementPelvisSettings) == 0x00001C, "Wrong size on FFootPlacementPelvisSettings");
static_assert(offsetof(FFootPlacementPelvisSettings, MaxOffset) == 0x000000, "Member 'FFootPlacementPelvisSettings::MaxOffset' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, LinearStiffness) == 0x000004, "Member 'FFootPlacementPelvisSettings::LinearStiffness' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, LinearDamping) == 0x000008, "Member 'FFootPlacementPelvisSettings::LinearDamping' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, HorizontalRebalancingWeight) == 0x00000C, "Member 'FFootPlacementPelvisSettings::HorizontalRebalancingWeight' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, MaxOffsetHorizontal) == 0x000010, "Member 'FFootPlacementPelvisSettings::MaxOffsetHorizontal' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, HeelLiftRatio) == 0x000014, "Member 'FFootPlacementPelvisSettings::HeelLiftRatio' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, PelvisHeightMode) == 0x000018, "Member 'FFootPlacementPelvisSettings::PelvisHeightMode' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, ActorMovementCompensationMode) == 0x000019, "Member 'FFootPlacementPelvisSettings::ActorMovementCompensationMode' has a wrong offset!");
static_assert(offsetof(FFootPlacementPelvisSettings, bEnableInterpolation) == 0x00001A, "Member 'FFootPlacementPelvisSettings::bEnableInterpolation' has a wrong offset!");

struct FFootPlacemenLegDefinition final
{
public:
	struct FBoneReference                         FKFootBone;
	struct FBoneReference                         IKFootBone;
	struct FBoneReference                         BallBone;
	int32                                         NumBonesInLimb;
	class FName                                   SpeedCurveName;
	class FName                                   DisableLockCurveName;
};
static_assert(alignof(FFootPlacemenLegDefinition) == 0x000004, "Wrong alignment on FFootPlacemenLegDefinition");
static_assert(sizeof(FFootPlacemenLegDefinition) == 0x000030, "Wrong size on FFootPlacemenLegDefinition");
static_assert(offsetof(FFootPlacemenLegDefinition, FKFootBone) == 0x000000, "Member 'FFootPlacemenLegDefinition::FKFootBone' has a wrong offset!");
static_assert(offsetof(FFootPlacemenLegDefinition, IKFootBone) == 0x00000C, "Member 'FFootPlacemenLegDefinition::IKFootBone' has a wrong offset!");
static_assert(offsetof(FFootPlacemenLegDefinition, BallBone) == 0x000018, "Member 'FFootPlacemenLegDefinition::BallBone' has a wrong offset!");
static_assert(offsetof(FFootPlacemenLegDefinition, NumBonesInLimb) == 0x000024, "Member 'FFootPlacemenLegDefinition::NumBonesInLimb' has a wrong offset!");
static_assert(offsetof(FFootPlacemenLegDefinition, SpeedCurveName) == 0x000028, "Member 'FFootPlacemenLegDefinition::SpeedCurveName' has a wrong offset!");
static_assert(offsetof(FFootPlacemenLegDefinition, DisableLockCurveName) == 0x00002C, "Member 'FFootPlacemenLegDefinition::DisableLockCurveName' has a wrong offset!");

struct FFootPlacementPlantSettings final
{
public:
	float                                         SpeedThreshold;
	float                                         DistanceToGround;
	EFootPlacementLockType                        LockType;
	uint8                                         Pad_9[0x3];
	float                                         UnplantRadius;
	float                                         ReplantRadiusRatio;
	float                                         UnplantAngle;
	float                                         ReplantAngleRatio;
	float                                         MaxExtensionRatio;
	float                                         MinExtensionRatio;
	float                                         SeparatingDistance;
	float                                         UnalignmentSpeedThreshold;
	float                                         AnkleTwistReduction;
	bool                                          bAdjustHeelBeforePlanting;
	uint8                                         Pad_31[0x3];
};
static_assert(alignof(FFootPlacementPlantSettings) == 0x000004, "Wrong alignment on FFootPlacementPlantSettings");
static_assert(sizeof(FFootPlacementPlantSettings) == 0x000034, "Wrong size on FFootPlacementPlantSettings");
static_assert(offsetof(FFootPlacementPlantSettings, SpeedThreshold) == 0x000000, "Member 'FFootPlacementPlantSettings::SpeedThreshold' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, DistanceToGround) == 0x000004, "Member 'FFootPlacementPlantSettings::DistanceToGround' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, LockType) == 0x000008, "Member 'FFootPlacementPlantSettings::LockType' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, UnplantRadius) == 0x00000C, "Member 'FFootPlacementPlantSettings::UnplantRadius' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, ReplantRadiusRatio) == 0x000010, "Member 'FFootPlacementPlantSettings::ReplantRadiusRatio' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, UnplantAngle) == 0x000014, "Member 'FFootPlacementPlantSettings::UnplantAngle' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, ReplantAngleRatio) == 0x000018, "Member 'FFootPlacementPlantSettings::ReplantAngleRatio' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, MaxExtensionRatio) == 0x00001C, "Member 'FFootPlacementPlantSettings::MaxExtensionRatio' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, MinExtensionRatio) == 0x000020, "Member 'FFootPlacementPlantSettings::MinExtensionRatio' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, SeparatingDistance) == 0x000024, "Member 'FFootPlacementPlantSettings::SeparatingDistance' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, UnalignmentSpeedThreshold) == 0x000028, "Member 'FFootPlacementPlantSettings::UnalignmentSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, AnkleTwistReduction) == 0x00002C, "Member 'FFootPlacementPlantSettings::AnkleTwistReduction' has a wrong offset!");
static_assert(offsetof(FFootPlacementPlantSettings, bAdjustHeelBeforePlanting) == 0x000030, "Member 'FFootPlacementPlantSettings::bAdjustHeelBeforePlanting' has a wrong offset!");

struct alignas(0x10) FAnimNode_FootPlacement final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        PlantSpeedMode;
	uint8                                         Pad_C9[0x3];
	struct FBoneReference                         IKFootRootBone;
	struct FBoneReference                         PelvisBone;
	struct FFootPlacementPelvisSettings           PelvisSettings;
	TArray<struct FFootPlacemenLegDefinition>     LegDefinitions;
	struct FFootPlacementPlantSettings            PlantSettings;
	struct FFootPlacementInterpolationSettings    InterpolationSettings;
	struct FFootPlacementTraceSettings            TraceSettings;
	uint8                                         Pad_184[0x27C];
};
static_assert(alignof(FAnimNode_FootPlacement) == 0x000010, "Wrong alignment on FAnimNode_FootPlacement");
static_assert(sizeof(FAnimNode_FootPlacement) == 0x000400, "Wrong size on FAnimNode_FootPlacement");
static_assert(offsetof(FAnimNode_FootPlacement, PlantSpeedMode) == 0x0000C8, "Member 'FAnimNode_FootPlacement::PlantSpeedMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, IKFootRootBone) == 0x0000CC, "Member 'FAnimNode_FootPlacement::IKFootRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, PelvisBone) == 0x0000D8, "Member 'FAnimNode_FootPlacement::PelvisBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, PelvisSettings) == 0x0000E4, "Member 'FAnimNode_FootPlacement::PelvisSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, LegDefinitions) == 0x000100, "Member 'FAnimNode_FootPlacement::LegDefinitions' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, PlantSettings) == 0x000110, "Member 'FAnimNode_FootPlacement::PlantSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, InterpolationSettings) == 0x000144, "Member 'FAnimNode_FootPlacement::InterpolationSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_FootPlacement, TraceSettings) == 0x000168, "Member 'FAnimNode_FootPlacement::TraceSettings' has a wrong offset!");

struct alignas(0x10) FAnimNode_OffsetRootBone final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0xC8];
};
static_assert(alignof(FAnimNode_OffsetRootBone) == 0x000010, "Wrong alignment on FAnimNode_OffsetRootBone");
static_assert(sizeof(FAnimNode_OffsetRootBone) == 0x000190, "Wrong size on FAnimNode_OffsetRootBone");

struct FAnimNode_OrientationWarping final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        Mode;
	uint8                                         Pad_C9[0x3];
	float                                         OrientationAngle;
	float                                         LocomotionAngle;
	float                                         MinRootMotionSpeedThreshold;
	float                                         LocomotionAngleDeltaThreshold;
	uint8                                         Pad_DC[0x4];
	TArray<struct FBoneReference>                 SpineBones;
	struct FBoneReference                         IKFootRootBone;
	uint8                                         Pad_FC[0x4];
	TArray<struct FBoneReference>                 IKFootBones;
	EAxis                                         RotationAxis;
	uint8                                         Pad_111[0x3];
	float                                         DistributedBoneOrientationAlpha;
	float                                         RotationInterpSpeed;
	float                                         WarpingAlpha;
	float                                         OffsetAlpha;
	float                                         MaxOffsetAngle;
	uint8                                         Pad_128[0x70];
};
static_assert(alignof(FAnimNode_OrientationWarping) == 0x000008, "Wrong alignment on FAnimNode_OrientationWarping");
static_assert(sizeof(FAnimNode_OrientationWarping) == 0x000198, "Wrong size on FAnimNode_OrientationWarping");
static_assert(offsetof(FAnimNode_OrientationWarping, Mode) == 0x0000C8, "Member 'FAnimNode_OrientationWarping::Mode' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, OrientationAngle) == 0x0000CC, "Member 'FAnimNode_OrientationWarping::OrientationAngle' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, LocomotionAngle) == 0x0000D0, "Member 'FAnimNode_OrientationWarping::LocomotionAngle' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, MinRootMotionSpeedThreshold) == 0x0000D4, "Member 'FAnimNode_OrientationWarping::MinRootMotionSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, LocomotionAngleDeltaThreshold) == 0x0000D8, "Member 'FAnimNode_OrientationWarping::LocomotionAngleDeltaThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, SpineBones) == 0x0000E0, "Member 'FAnimNode_OrientationWarping::SpineBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootRootBone) == 0x0000F0, "Member 'FAnimNode_OrientationWarping::IKFootRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootBones) == 0x000100, "Member 'FAnimNode_OrientationWarping::IKFootBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, RotationAxis) == 0x000110, "Member 'FAnimNode_OrientationWarping::RotationAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, DistributedBoneOrientationAlpha) == 0x000114, "Member 'FAnimNode_OrientationWarping::DistributedBoneOrientationAlpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, RotationInterpSpeed) == 0x000118, "Member 'FAnimNode_OrientationWarping::RotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, WarpingAlpha) == 0x00011C, "Member 'FAnimNode_OrientationWarping::WarpingAlpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, OffsetAlpha) == 0x000120, "Member 'FAnimNode_OrientationWarping::OffsetAlpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_OrientationWarping, MaxOffsetAngle) == 0x000124, "Member 'FAnimNode_OrientationWarping::MaxOffsetAngle' has a wrong offset!");

struct FSlopeWarpingFootDefinition final
{
public:
	struct FBoneReference                         IKFootBone;
	struct FBoneReference                         FKFootBone;
	int32                                         NumBonesInLimb;
	float                                         FootSize;
};
static_assert(alignof(FSlopeWarpingFootDefinition) == 0x000004, "Wrong alignment on FSlopeWarpingFootDefinition");
static_assert(sizeof(FSlopeWarpingFootDefinition) == 0x000020, "Wrong size on FSlopeWarpingFootDefinition");
static_assert(offsetof(FSlopeWarpingFootDefinition, IKFootBone) == 0x000000, "Member 'FSlopeWarpingFootDefinition::IKFootBone' has a wrong offset!");
static_assert(offsetof(FSlopeWarpingFootDefinition, FKFootBone) == 0x00000C, "Member 'FSlopeWarpingFootDefinition::FKFootBone' has a wrong offset!");
static_assert(offsetof(FSlopeWarpingFootDefinition, NumBonesInLimb) == 0x000018, "Member 'FSlopeWarpingFootDefinition::NumBonesInLimb' has a wrong offset!");
static_assert(offsetof(FSlopeWarpingFootDefinition, FootSize) == 0x00001C, "Member 'FSlopeWarpingFootDefinition::FootSize' has a wrong offset!");

struct alignas(0x10) FSlopeWarpingFootData final
{
public:
	uint8                                         Pad_0[0xB0];
};
static_assert(alignof(FSlopeWarpingFootData) == 0x000010, "Wrong alignment on FSlopeWarpingFootData");
static_assert(sizeof(FSlopeWarpingFootData) == 0x0000B0, "Wrong size on FSlopeWarpingFootData");

struct FAnimNode_SlopeWarping final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0x18];
	struct FBoneReference                         IKFootRootBone;
	struct FBoneReference                         PelvisBone;
	TArray<struct FSlopeWarpingFootDefinition>    FeetDefinitions;
	TArray<struct FSlopeWarpingFootData>          FeetData;
	struct FVectorRK4SpringInterpolator           PelvisOffsetInterpolator;
	uint8                                         Pad_120[0x58];
	struct FVector                                GravityDir;
	struct FVector                                CustomFloorOffset;
	float                                         CachedDeltaTime;
	uint8                                         Pad_1AC[0x4];
	struct FVector                                TargetFloorNormalWorldSpace;
	struct FVectorRK4SpringInterpolator           FloorNormalInterpolator;
	uint8                                         Pad_1D0[0x58];
	struct FVector                                TargetFloorOffsetLocalSpace;
	struct FVectorRK4SpringInterpolator           FloorOffsetInterpolator;
	uint8                                         Pad_248[0x58];
	float                                         MaxStepHeight;
	uint8                                         bKeepMeshInsideOfCapsule : 1;
	uint8                                         bPullPelvisDown : 1;
	uint8                                         bUseCustomFloorOffset : 1;
	uint8                                         bWasOnGround : 1;
	uint8                                         bShowDebug : 1;
	uint8                                         bFloorSmoothingInitialized : 1;
	uint8                                         Pad_2A5[0x3];
	struct FVector                                ActorLocation;
	struct FVector                                GravityDirCompSpace;
};
static_assert(alignof(FAnimNode_SlopeWarping) == 0x000008, "Wrong alignment on FAnimNode_SlopeWarping");
static_assert(sizeof(FAnimNode_SlopeWarping) == 0x0002D8, "Wrong size on FAnimNode_SlopeWarping");
static_assert(offsetof(FAnimNode_SlopeWarping, IKFootRootBone) == 0x0000E0, "Member 'FAnimNode_SlopeWarping::IKFootRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisBone) == 0x0000EC, "Member 'FAnimNode_SlopeWarping::PelvisBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, FeetDefinitions) == 0x0000F8, "Member 'FAnimNode_SlopeWarping::FeetDefinitions' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, FeetData) == 0x000108, "Member 'FAnimNode_SlopeWarping::FeetData' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisOffsetInterpolator) == 0x000118, "Member 'FAnimNode_SlopeWarping::PelvisOffsetInterpolator' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDir) == 0x000178, "Member 'FAnimNode_SlopeWarping::GravityDir' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, CustomFloorOffset) == 0x000190, "Member 'FAnimNode_SlopeWarping::CustomFloorOffset' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, CachedDeltaTime) == 0x0001A8, "Member 'FAnimNode_SlopeWarping::CachedDeltaTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorNormalWorldSpace) == 0x0001B0, "Member 'FAnimNode_SlopeWarping::TargetFloorNormalWorldSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, FloorNormalInterpolator) == 0x0001C8, "Member 'FAnimNode_SlopeWarping::FloorNormalInterpolator' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorOffsetLocalSpace) == 0x000228, "Member 'FAnimNode_SlopeWarping::TargetFloorOffsetLocalSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, FloorOffsetInterpolator) == 0x000240, "Member 'FAnimNode_SlopeWarping::FloorOffsetInterpolator' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, MaxStepHeight) == 0x0002A0, "Member 'FAnimNode_SlopeWarping::MaxStepHeight' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, ActorLocation) == 0x0002A8, "Member 'FAnimNode_SlopeWarping::ActorLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDirCompSpace) == 0x0002C0, "Member 'FAnimNode_SlopeWarping::GravityDirCompSpace' has a wrong offset!");

struct FStrideWarpingFootDefinition final
{
public:
	struct FBoneReference                         IKFootBone;
	struct FBoneReference                         FKFootBone;
	struct FBoneReference                         ThighBone;
};
static_assert(alignof(FStrideWarpingFootDefinition) == 0x000004, "Wrong alignment on FStrideWarpingFootDefinition");
static_assert(sizeof(FStrideWarpingFootDefinition) == 0x000024, "Wrong size on FStrideWarpingFootDefinition");
static_assert(offsetof(FStrideWarpingFootDefinition, IKFootBone) == 0x000000, "Member 'FStrideWarpingFootDefinition::IKFootBone' has a wrong offset!");
static_assert(offsetof(FStrideWarpingFootDefinition, FKFootBone) == 0x00000C, "Member 'FStrideWarpingFootDefinition::FKFootBone' has a wrong offset!");
static_assert(offsetof(FStrideWarpingFootDefinition, ThighBone) == 0x000018, "Member 'FStrideWarpingFootDefinition::ThighBone' has a wrong offset!");

struct FAnimNode_StrideWarping final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        Mode;
	uint8                                         Pad_C9[0x7];
	struct FVector                                StrideDirection;
	float                                         StrideScale;
	float                                         LocomotionSpeed;
	float                                         MinRootMotionSpeedThreshold;
	struct FBoneReference                         PelvisBone;
	struct FBoneReference                         IKFootRootBone;
	uint8                                         Pad_10C[0x4];
	TArray<struct FStrideWarpingFootDefinition>   FootDefinitions;
	struct FInputClampConstants                   StrideScaleModifier;
	uint8                                         Pad_134[0x4];
	struct FWarpingVectorValue                    FloorNormalDirection;
	struct FWarpingVectorValue                    GravityDirection;
	struct FIKFootPelvisPullDownSolver            PelvisIKFootSolver;
	bool                                          bOrientStrideDirectionUsingFloorNormal;
	bool                                          bCompensateIKUsingFKThighRotation;
	bool                                          bClampIKUsingFKLimits;
	uint8                                         Pad_1EB[0x45];
};
static_assert(alignof(FAnimNode_StrideWarping) == 0x000008, "Wrong alignment on FAnimNode_StrideWarping");
static_assert(sizeof(FAnimNode_StrideWarping) == 0x000230, "Wrong size on FAnimNode_StrideWarping");
static_assert(offsetof(FAnimNode_StrideWarping, Mode) == 0x0000C8, "Member 'FAnimNode_StrideWarping::Mode' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, StrideDirection) == 0x0000D0, "Member 'FAnimNode_StrideWarping::StrideDirection' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, StrideScale) == 0x0000E8, "Member 'FAnimNode_StrideWarping::StrideScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, LocomotionSpeed) == 0x0000EC, "Member 'FAnimNode_StrideWarping::LocomotionSpeed' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, MinRootMotionSpeedThreshold) == 0x0000F0, "Member 'FAnimNode_StrideWarping::MinRootMotionSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, PelvisBone) == 0x0000F4, "Member 'FAnimNode_StrideWarping::PelvisBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, IKFootRootBone) == 0x000100, "Member 'FAnimNode_StrideWarping::IKFootRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, FootDefinitions) == 0x000110, "Member 'FAnimNode_StrideWarping::FootDefinitions' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, StrideScaleModifier) == 0x000120, "Member 'FAnimNode_StrideWarping::StrideScaleModifier' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, FloorNormalDirection) == 0x000138, "Member 'FAnimNode_StrideWarping::FloorNormalDirection' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, GravityDirection) == 0x000158, "Member 'FAnimNode_StrideWarping::GravityDirection' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, PelvisIKFootSolver) == 0x000178, "Member 'FAnimNode_StrideWarping::PelvisIKFootSolver' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, bOrientStrideDirectionUsingFloorNormal) == 0x0001E8, "Member 'FAnimNode_StrideWarping::bOrientStrideDirectionUsingFloorNormal' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, bCompensateIKUsingFKThighRotation) == 0x0001E9, "Member 'FAnimNode_StrideWarping::bCompensateIKUsingFKThighRotation' has a wrong offset!");
static_assert(offsetof(FAnimNode_StrideWarping, bClampIKUsingFKLimits) == 0x0001EA, "Member 'FAnimNode_StrideWarping::bClampIKUsingFKLimits' has a wrong offset!");

}
