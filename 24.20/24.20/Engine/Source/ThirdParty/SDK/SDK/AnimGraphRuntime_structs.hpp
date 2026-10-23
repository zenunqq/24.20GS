#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimationCore_structs.hpp"

namespace SDK
{

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                               = 0,
	BMM_Replace                              = 1,
	BMM_Additive                             = 2,
	BMM_MAX                                  = 3,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                           = 0,
	EIT_Additive                             = 1,
	EIT_MAX                                  = 2,
};

enum class EEasingFuncType : uint8
{
	Linear                                   = 0,
	Sinusoidal                               = 1,
	Cubic                                    = 2,
	QuadraticInOut                           = 3,
	CubicInOut                               = 4,
	HermiteCubic                             = 5,
	QuarticInOut                             = 6,
	QuinticInOut                             = 7,
	CircularIn                               = 8,
	CircularOut                              = 9,
	CircularInOut                            = 10,
	ExpIn                                    = 11,
	ExpOut                                   = 12,
	ExpInOut                                 = 13,
	CustomCurve                              = 14,
	EEasingFuncType_MAX                      = 15,
};

enum class ERotationComponent : uint8
{
	EulerX                                   = 0,
	EulerY                                   = 1,
	EulerZ                                   = 2,
	QuaternionAngle                          = 3,
	SwingAngle                               = 4,
	TwistAngle                               = 5,
	ERotationComponent_MAX                   = 6,
};

enum class EBlendListTransitionType : uint8
{
	StandardBlend                            = 0,
	Inertialization                          = 1,
	EBlendListTransitionType_MAX             = 2,
};

enum class EAnimFunctionCallSite : uint32
{
	OnInitialize                             = 0,
	OnUpdate                                 = 1,
	OnBecomeRelevant                         = 2,
	OnEvaluate                               = 3,
	OnInitializePostRecursion                = 4,
	OnUpdatePostRecursion                    = 5,
	OnBecomeRelevantPostRecursion            = 6,
	OnEvaluatePostRecursion                  = 7,
	OnStartedBlendingOut                     = 8,
	OnStartedBlendingIn                      = 9,
	OnFinishedBlendingOut                    = 10,
	OnFinishedBlendingIn                     = 11,
	EAnimFunctionCallSite_MAX                = 12,
};

enum class ELayeredBoneBlendMode : uint8
{
	BranchFilter                             = 0,
	BlendMask                                = 1,
	ELayeredBoneBlendMode_MAX                = 2,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                                      = 0,
	Scale                                    = 1,
	Blend                                    = 2,
	WeightedMovingAverage                    = 3,
	RemapCurve                               = 4,
	EModifyCurveApplyMode_MAX                = 5,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                            = 0,
	SwingOnly                                = 1,
	Translation                              = 2,
	EPoseDriverType_MAX                      = 3,
};

enum class EPoseDriverSource : uint8
{
	Rotation                                 = 0,
	Translation                              = 1,
	EPoseDriverSource_MAX                    = 2,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                               = 0,
	DriveCurves                              = 1,
	EPoseDriverOutput_MAX                    = 2,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                            = 0,
	SnapshotPin                              = 1,
	ESnapshotSourceMode_MAX                  = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                                  = 0,
	StartPosition                            = 1,
	ExplicitTime                             = 2,
	ESequenceEvalReinit_MAX                  = 3,
};

enum class ESwapRootBone : uint8
{
	SwapRootBone_Component                   = 0,
	SwapRootBone_Actor                       = 1,
	SwapRootBone_None                        = 2,
	SwapRootBone_MAX                         = 3,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                                  = 0,
	Cone                                     = 1,
	AnimPhysAngularConstraintType_MAX        = 2,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                                     = 0,
	Limited                                  = 1,
	AnimPhysLinearConstraintType_MAX         = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                                = 0,
	Actor                                    = 1,
	World                                    = 2,
	RootRelative                             = 3,
	BoneRelative                             = 4,
	AnimPhysSimSpaceType_MAX                 = 5,
};

enum class ESphericalLimitType : uint8
{
	Inner                                    = 0,
	Outer                                    = 1,
	ESphericalLimitType_MAX                  = 2,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                               = 0,
	ReplaceComponent                         = 1,
	AddToRefPose                             = 2,
	EDrivenBoneModificationMode_MAX          = 3,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                                     = 0,
	MorphTarget                              = 1,
	MaterialParameter                        = 2,
	EDrivenDestinationMode_MAX               = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                                     = 0,
	Offset_RefPose                           = 1,
	EConstraintOffsetOption_MAX              = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                               = 0,
	Copy                                     = 1,
	CopyBoneDeltaMode_MAX                    = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                                   = 0,
	Cubic                                    = 1,
	Sinusoidal                               = 2,
	EaseInOutExponent2                       = 3,
	EaseInOutExponent3                       = 4,
	EaseInOutExponent4                       = 5,
	EaseInOutExponent5                       = 6,
	MAX                                      = 7,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                           = 0,
	WorldSpace                               = 1,
	BaseBoneSpace                            = 2,
	ESimulationSpace_MAX                     = 3,
};

enum class ESimulationTiming : uint8
{
	Default                                  = 0,
	Synchronous                              = 1,
	Deferred                                 = 2,
	ESimulationTiming_MAX                    = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue                  = 0,
	Distance                                 = 1,
	ChainLength                              = 2,
	EScaleChainInitialLength_MAX             = 3,
};

enum class ESplineBoneAxis : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	ESplineBoneAxis_MAX                      = 4,
};

enum class EWarpingEvaluationMode : uint8
{
	Manual                                   = 0,
	Graph                                    = 1,
	EWarpingEvaluationMode_MAX               = 2,
};

enum class EWarpingVectorMode : uint8
{
	ComponentSpaceVector                     = 0,
	ActorSpaceVector                         = 1,
	WorldSpaceVector                         = 2,
	IKFootRootLocalSpaceVector               = 3,
	EWarpingVectorMode_MAX                   = 4,
};

enum class ERBFSolverType : uint8
{
	Additive                                 = 0,
	Interpolative                            = 1,
	ERBFSolverType_MAX                       = 2,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                                 = 0,
	Exponential                              = 1,
	Linear                                   = 2,
	Cubic                                    = 3,
	Quintic                                  = 4,
	DefaultFunction                          = 5,
	ERBFFunctionType_MAX                     = 6,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                                = 0,
	Quaternion                               = 1,
	SwingAngle                               = 2,
	TwistAngle                               = 3,
	DefaultMethod                            = 4,
	ERBFDistanceMethod_MAX                   = 5,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne                    = 0,
	AlwaysNormalize                          = 1,
	NormalizeWithinMedian                    = 2,
	NoNormalization                          = 3,
	ERBFNormalizeMethod_MAX                  = 4,
};

struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
public:
	float                                         X;
	float                                         Y;
	class FName                                   GroupName;
	EAnimGroupRole                                GroupRole;
	uint8                                         Pad_1D[0x3];
	class UBlendSpace*                            BlendSpace;
	TArray<struct FPoseLink>                      SamplePoseLinks;
	uint8                                         Pad_38[0x28];
};
static_assert(alignof(FAnimNode_BlendSpaceGraphBase) == 0x000008, "Wrong alignment on FAnimNode_BlendSpaceGraphBase");
static_assert(sizeof(FAnimNode_BlendSpaceGraphBase) == 0x000060, "Wrong size on FAnimNode_BlendSpaceGraphBase");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, X) == 0x000010, "Member 'FAnimNode_BlendSpaceGraphBase::X' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, Y) == 0x000014, "Member 'FAnimNode_BlendSpaceGraphBase::Y' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, GroupName) == 0x000018, "Member 'FAnimNode_BlendSpaceGraphBase::GroupName' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, GroupRole) == 0x00001C, "Member 'FAnimNode_BlendSpaceGraphBase::GroupRole' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, BlendSpace) == 0x000020, "Member 'FAnimNode_BlendSpaceGraphBase::BlendSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, SamplePoseLinks) == 0x000028, "Member 'FAnimNode_BlendSpaceGraphBase::SamplePoseLinks' has a wrong offset!");

struct FAnimNode_RotationOffsetBlendSpaceGraph final : public FAnimNode_BlendSpaceGraphBase
{
public:
	struct FPoseLink                              BasePose;
	int32                                         LODThreshold;
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_FC[0x4];
	EAnimAlphaInputType                           AlphaInputType;
	bool                                          bAlphaBoolEnabled;
	uint8                                         Pad_102[0x6];
};
static_assert(alignof(FAnimNode_RotationOffsetBlendSpaceGraph) == 0x000008, "Wrong alignment on FAnimNode_RotationOffsetBlendSpaceGraph");
static_assert(sizeof(FAnimNode_RotationOffsetBlendSpaceGraph) == 0x000108, "Wrong size on FAnimNode_RotationOffsetBlendSpaceGraph");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, BasePose) == 0x000060, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, LODThreshold) == 0x000070, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, Alpha) == 0x000074, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBias) == 0x000078, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaBoolBlend) == 0x000080, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaCurveName) == 0x0000C8, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBiasClamp) == 0x0000CC, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::AlphaScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaInputType) == 0x000100, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, bAlphaBoolEnabled) == 0x000101, "Member 'FAnimNode_RotationOffsetBlendSpaceGraph::bAlphaBoolEnabled' has a wrong offset!");

struct FAnimNode_MeshSpaceRefPose final : public FAnimNode_Base
{
};
static_assert(alignof(FAnimNode_MeshSpaceRefPose) == 0x000008, "Wrong alignment on FAnimNode_MeshSpaceRefPose");
static_assert(sizeof(FAnimNode_MeshSpaceRefPose) == 0x000010, "Wrong size on FAnimNode_MeshSpaceRefPose");

struct FAnimNode_MirrorBase : public FAnimNode_Base
{
public:
	struct FPoseLink                              Source;
	uint8                                         Pad_20[0x28];
};
static_assert(alignof(FAnimNode_MirrorBase) == 0x000008, "Wrong alignment on FAnimNode_MirrorBase");
static_assert(sizeof(FAnimNode_MirrorBase) == 0x000048, "Wrong size on FAnimNode_MirrorBase");
static_assert(offsetof(FAnimNode_MirrorBase, Source) == 0x000010, "Member 'FAnimNode_MirrorBase::Source' has a wrong offset!");

struct FAnimNode_Mirror_Standalone final : public FAnimNode_MirrorBase
{
public:
	bool                                          bMirror;
	uint8                                         Pad_49[0x7];
	class UMirrorDataTable*                       MirrorDataTable;
	float                                         BlendTime;
	bool                                          bResetChild;
	bool                                          bBoneMirroring;
	bool                                          bCurveMirroring;
	bool                                          bAttributeMirroring;
};
static_assert(alignof(FAnimNode_Mirror_Standalone) == 0x000008, "Wrong alignment on FAnimNode_Mirror_Standalone");
static_assert(sizeof(FAnimNode_Mirror_Standalone) == 0x000060, "Wrong size on FAnimNode_Mirror_Standalone");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bMirror) == 0x000048, "Member 'FAnimNode_Mirror_Standalone::bMirror' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, MirrorDataTable) == 0x000050, "Member 'FAnimNode_Mirror_Standalone::MirrorDataTable' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, BlendTime) == 0x000058, "Member 'FAnimNode_Mirror_Standalone::BlendTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bResetChild) == 0x00005C, "Member 'FAnimNode_Mirror_Standalone::bResetChild' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bBoneMirroring) == 0x00005D, "Member 'FAnimNode_Mirror_Standalone::bBoneMirroring' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bCurveMirroring) == 0x00005E, "Member 'FAnimNode_Mirror_Standalone::bCurveMirroring' has a wrong offset!");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bAttributeMirroring) == 0x00005F, "Member 'FAnimNode_Mirror_Standalone::bAttributeMirroring' has a wrong offset!");

struct FAnimNode_BlendSpaceGraph final : public FAnimNode_BlendSpaceGraphBase
{
};
static_assert(alignof(FAnimNode_BlendSpaceGraph) == 0x000008, "Wrong alignment on FAnimNode_BlendSpaceGraph");
static_assert(sizeof(FAnimNode_BlendSpaceGraph) == 0x000060, "Wrong size on FAnimNode_BlendSpaceGraph");

struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink                ComponentPose;
	int32                                         LODThreshold;
	float                                         ActualAlpha;
	EAnimAlphaInputType                           AlphaInputType;
	bool                                          bAlphaBoolEnabled;
	uint8                                         Pad_2A[0x2];
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_B4[0x14];
};
static_assert(alignof(FAnimNode_SkeletalControlBase) == 0x000008, "Wrong alignment on FAnimNode_SkeletalControlBase");
static_assert(sizeof(FAnimNode_SkeletalControlBase) == 0x0000C8, "Wrong size on FAnimNode_SkeletalControlBase");
static_assert(offsetof(FAnimNode_SkeletalControlBase, ComponentPose) == 0x000010, "Member 'FAnimNode_SkeletalControlBase::ComponentPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, LODThreshold) == 0x000020, "Member 'FAnimNode_SkeletalControlBase::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, ActualAlpha) == 0x000024, "Member 'FAnimNode_SkeletalControlBase::ActualAlpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaInputType) == 0x000028, "Member 'FAnimNode_SkeletalControlBase::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, bAlphaBoolEnabled) == 0x000029, "Member 'FAnimNode_SkeletalControlBase::bAlphaBoolEnabled' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, Alpha) == 0x00002C, "Member 'FAnimNode_SkeletalControlBase::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias) == 0x000030, "Member 'FAnimNode_SkeletalControlBase::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaBoolBlend) == 0x000038, "Member 'FAnimNode_SkeletalControlBase::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaCurveName) == 0x000080, "Member 'FAnimNode_SkeletalControlBase::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp) == 0x000084, "Member 'FAnimNode_SkeletalControlBase::AlphaScaleBiasClamp' has a wrong offset!");

struct FAnimNode_ModifyBone final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToModify;
	uint8                                         Pad_D4[0x4];
	struct FVector                                Translation;
	struct FRotator                               Rotation;
	struct FVector                                Scale;
	EBoneModificationMode                         TranslationMode;
	EBoneModificationMode                         RotationMode;
	EBoneModificationMode                         ScaleMode;
	EBoneControlSpace                             TranslationSpace;
	EBoneControlSpace                             RotationSpace;
	EBoneControlSpace                             ScaleSpace;
	uint8                                         Pad_126[0x2];
};
static_assert(alignof(FAnimNode_ModifyBone) == 0x000008, "Wrong alignment on FAnimNode_ModifyBone");
static_assert(sizeof(FAnimNode_ModifyBone) == 0x000128, "Wrong size on FAnimNode_ModifyBone");
static_assert(offsetof(FAnimNode_ModifyBone, BoneToModify) == 0x0000C8, "Member 'FAnimNode_ModifyBone::BoneToModify' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, Translation) == 0x0000D8, "Member 'FAnimNode_ModifyBone::Translation' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, Rotation) == 0x0000F0, "Member 'FAnimNode_ModifyBone::Rotation' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, Scale) == 0x000108, "Member 'FAnimNode_ModifyBone::Scale' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, TranslationMode) == 0x000120, "Member 'FAnimNode_ModifyBone::TranslationMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, RotationMode) == 0x000121, "Member 'FAnimNode_ModifyBone::RotationMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, ScaleMode) == 0x000122, "Member 'FAnimNode_ModifyBone::ScaleMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, TranslationSpace) == 0x000123, "Member 'FAnimNode_ModifyBone::TranslationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, RotationSpace) == 0x000124, "Member 'FAnimNode_ModifyBone::RotationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyBone, ScaleSpace) == 0x000125, "Member 'FAnimNode_ModifyBone::ScaleSpace' has a wrong offset!");

struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                         Pad_38[0x8];
};
static_assert(alignof(FAnimNode_SequenceEvaluatorBase) == 0x000008, "Wrong alignment on FAnimNode_SequenceEvaluatorBase");
static_assert(sizeof(FAnimNode_SequenceEvaluatorBase) == 0x000040, "Wrong size on FAnimNode_SequenceEvaluatorBase");

struct FAnimNode_SequenceEvaluator_Standalone final : public FAnimNode_SequenceEvaluatorBase
{
public:
	class FName                                   GroupName;
	EAnimGroupRole                                GroupRole;
	EAnimSyncMethod                               Method;
	bool                                          bIgnoreForRelevancyTest;
	uint8                                         Pad_47[0x1];
	class UAnimSequenceBase*                      Sequence;
	float                                         ExplicitTime;
	bool                                          bShouldLoop;
	bool                                          bTeleportToExplicitTime;
	ESequenceEvalReinit                           ReinitializationBehavior;
	uint8                                         Pad_57[0x1];
	float                                         StartPosition;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FAnimNode_SequenceEvaluator_Standalone) == 0x000008, "Wrong alignment on FAnimNode_SequenceEvaluator_Standalone");
static_assert(sizeof(FAnimNode_SequenceEvaluator_Standalone) == 0x000060, "Wrong size on FAnimNode_SequenceEvaluator_Standalone");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, GroupName) == 0x000040, "Member 'FAnimNode_SequenceEvaluator_Standalone::GroupName' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, GroupRole) == 0x000044, "Member 'FAnimNode_SequenceEvaluator_Standalone::GroupRole' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, Method) == 0x000045, "Member 'FAnimNode_SequenceEvaluator_Standalone::Method' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bIgnoreForRelevancyTest) == 0x000046, "Member 'FAnimNode_SequenceEvaluator_Standalone::bIgnoreForRelevancyTest' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, Sequence) == 0x000048, "Member 'FAnimNode_SequenceEvaluator_Standalone::Sequence' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, ExplicitTime) == 0x000050, "Member 'FAnimNode_SequenceEvaluator_Standalone::ExplicitTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bShouldLoop) == 0x000054, "Member 'FAnimNode_SequenceEvaluator_Standalone::bShouldLoop' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bTeleportToExplicitTime) == 0x000055, "Member 'FAnimNode_SequenceEvaluator_Standalone::bTeleportToExplicitTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, ReinitializationBehavior) == 0x000056, "Member 'FAnimNode_SequenceEvaluator_Standalone::ReinitializationBehavior' has a wrong offset!");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, StartPosition) == 0x000058, "Member 'FAnimNode_SequenceEvaluator_Standalone::StartPosition' has a wrong offset!");

struct FAnimNode_BlendSpaceSampleResult final : public FAnimNode_Root
{
};
static_assert(alignof(FAnimNode_BlendSpaceSampleResult) == 0x000008, "Wrong alignment on FAnimNode_BlendSpaceSampleResult");
static_assert(sizeof(FAnimNode_BlendSpaceSampleResult) == 0x000020, "Wrong size on FAnimNode_BlendSpaceSampleResult");

struct FAnimNode_SequenceEvaluator final : public FAnimNode_SequenceEvaluatorBase
{
};
static_assert(alignof(FAnimNode_SequenceEvaluator) == 0x000008, "Wrong alignment on FAnimNode_SequenceEvaluator");
static_assert(sizeof(FAnimNode_SequenceEvaluator) == 0x000040, "Wrong size on FAnimNode_SequenceEvaluator");

struct FAnimNode_RefPose final : public FAnimNode_Base
{
};
static_assert(alignof(FAnimNode_RefPose) == 0x000008, "Wrong alignment on FAnimNode_RefPose");
static_assert(sizeof(FAnimNode_RefPose) == 0x000010, "Wrong size on FAnimNode_RefPose");

struct FAnimNode_RotationMultiplier final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         TargetBone;
	struct FBoneReference                         SourceBone;
	float                                         Multiplier;
	EBoneAxis                                     RotationAxisToRefer;
	bool                                          bIsAdditive;
	uint8                                         Pad_E6[0x2];
};
static_assert(alignof(FAnimNode_RotationMultiplier) == 0x000008, "Wrong alignment on FAnimNode_RotationMultiplier");
static_assert(sizeof(FAnimNode_RotationMultiplier) == 0x0000E8, "Wrong size on FAnimNode_RotationMultiplier");
static_assert(offsetof(FAnimNode_RotationMultiplier, TargetBone) == 0x0000C8, "Member 'FAnimNode_RotationMultiplier::TargetBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationMultiplier, SourceBone) == 0x0000D4, "Member 'FAnimNode_RotationMultiplier::SourceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationMultiplier, Multiplier) == 0x0000E0, "Member 'FAnimNode_RotationMultiplier::Multiplier' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer) == 0x0000E4, "Member 'FAnimNode_RotationMultiplier::RotationAxisToRefer' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationMultiplier, bIsAdditive) == 0x0000E5, "Member 'FAnimNode_RotationMultiplier::bIsAdditive' has a wrong offset!");

struct FRotationRetargetingInfo final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0xF];
	struct FTransform                             Source;
	struct FTransform                             Target;
	ERotationComponent                            RotationComponent;
	uint8                                         Pad_D1[0x7];
	struct FVector                                TwistAxis;
	bool                                          bUseAbsoluteAngle;
	uint8                                         Pad_F1[0x3];
	float                                         SourceMinimum;
	float                                         SourceMaximum;
	float                                         TargetMinimum;
	float                                         TargetMaximum;
	EEasingFuncType                               EasingType;
	uint8                                         Pad_105[0x3];
	struct FRuntimeFloatCurve                     CustomCurve;
	bool                                          bFlipEasing;
	uint8                                         Pad_191[0x3];
	float                                         EasingWeight;
	bool                                          bClamp;
	uint8                                         Pad_199[0x7];
};
static_assert(alignof(FRotationRetargetingInfo) == 0x000010, "Wrong alignment on FRotationRetargetingInfo");
static_assert(sizeof(FRotationRetargetingInfo) == 0x0001A0, "Wrong size on FRotationRetargetingInfo");
static_assert(offsetof(FRotationRetargetingInfo, bEnabled) == 0x000000, "Member 'FRotationRetargetingInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, Source) == 0x000010, "Member 'FRotationRetargetingInfo::Source' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, Target) == 0x000070, "Member 'FRotationRetargetingInfo::Target' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, RotationComponent) == 0x0000D0, "Member 'FRotationRetargetingInfo::RotationComponent' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, TwistAxis) == 0x0000D8, "Member 'FRotationRetargetingInfo::TwistAxis' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, bUseAbsoluteAngle) == 0x0000F0, "Member 'FRotationRetargetingInfo::bUseAbsoluteAngle' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, SourceMinimum) == 0x0000F4, "Member 'FRotationRetargetingInfo::SourceMinimum' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, SourceMaximum) == 0x0000F8, "Member 'FRotationRetargetingInfo::SourceMaximum' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, TargetMinimum) == 0x0000FC, "Member 'FRotationRetargetingInfo::TargetMinimum' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, TargetMaximum) == 0x000100, "Member 'FRotationRetargetingInfo::TargetMaximum' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, EasingType) == 0x000104, "Member 'FRotationRetargetingInfo::EasingType' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, CustomCurve) == 0x000108, "Member 'FRotationRetargetingInfo::CustomCurve' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, bFlipEasing) == 0x000190, "Member 'FRotationRetargetingInfo::bFlipEasing' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, EasingWeight) == 0x000194, "Member 'FRotationRetargetingInfo::EasingWeight' has a wrong offset!");
static_assert(offsetof(FRotationRetargetingInfo, bClamp) == 0x000198, "Member 'FRotationRetargetingInfo::bClamp' has a wrong offset!");

struct FPositionHistory final
{
public:
	TArray<struct FVector>                        Positions;
	float                                         Range;
	uint8                                         Pad_14[0x1C];
};
static_assert(alignof(FPositionHistory) == 0x000008, "Wrong alignment on FPositionHistory");
static_assert(sizeof(FPositionHistory) == 0x000030, "Wrong size on FPositionHistory");
static_assert(offsetof(FPositionHistory, Positions) == 0x000000, "Member 'FPositionHistory::Positions' has a wrong offset!");
static_assert(offsetof(FPositionHistory, Range) == 0x000010, "Member 'FPositionHistory::Range' has a wrong offset!");

struct FAnimPhysConstraintSetup final
{
public:
	EAnimPhysLinearConstraintType                 LinearXLimitType;
	EAnimPhysLinearConstraintType                 LinearYLimitType;
	EAnimPhysLinearConstraintType                 LinearZLimitType;
	uint8                                         Pad_3[0x5];
	struct FVector                                LinearAxesMin;
	struct FVector                                LinearAxesMax;
	EAnimPhysAngularConstraintType                AngularConstraintType;
	EAnimPhysTwistAxis                            TwistAxis;
	EAnimPhysTwistAxis                            AngularTargetAxis;
	uint8                                         Pad_3B[0x1];
	float                                         ConeAngle;
	struct FVector                                AngularLimitsMin;
	struct FVector                                AngularLimitsMax;
	struct FVector                                AngularTarget;
};
static_assert(alignof(FAnimPhysConstraintSetup) == 0x000008, "Wrong alignment on FAnimPhysConstraintSetup");
static_assert(sizeof(FAnimPhysConstraintSetup) == 0x000088, "Wrong size on FAnimPhysConstraintSetup");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearXLimitType) == 0x000000, "Member 'FAnimPhysConstraintSetup::LinearXLimitType' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearYLimitType) == 0x000001, "Member 'FAnimPhysConstraintSetup::LinearYLimitType' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearZLimitType) == 0x000002, "Member 'FAnimPhysConstraintSetup::LinearZLimitType' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMin) == 0x000008, "Member 'FAnimPhysConstraintSetup::LinearAxesMin' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMax) == 0x000020, "Member 'FAnimPhysConstraintSetup::LinearAxesMax' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularConstraintType) == 0x000038, "Member 'FAnimPhysConstraintSetup::AngularConstraintType' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, TwistAxis) == 0x000039, "Member 'FAnimPhysConstraintSetup::TwistAxis' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTargetAxis) == 0x00003A, "Member 'FAnimPhysConstraintSetup::AngularTargetAxis' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, ConeAngle) == 0x00003C, "Member 'FAnimPhysConstraintSetup::ConeAngle' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMin) == 0x000040, "Member 'FAnimPhysConstraintSetup::AngularLimitsMin' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMax) == 0x000058, "Member 'FAnimPhysConstraintSetup::AngularLimitsMax' has a wrong offset!");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTarget) == 0x000070, "Member 'FAnimPhysConstraintSetup::AngularTarget' has a wrong offset!");

struct FAnimationStateResultReference final : public FAnimNodeReference
{
};
static_assert(alignof(FAnimationStateResultReference) == 0x000008, "Wrong alignment on FAnimationStateResultReference");
static_assert(sizeof(FAnimationStateResultReference) == 0x000010, "Wrong size on FAnimationStateResultReference");

struct FAnimNode_BoneDrivenController final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         SourceBone;
	uint8                                         Pad_D4[0x4];
	class UCurveFloat*                            DrivingCurve;
	float                                         Multiplier;
	float                                         RangeMin;
	float                                         RangeMax;
	float                                         RemappedMin;
	float                                         RemappedMax;
	class FName                                   ParameterName;
	struct FBoneReference                         TargetBone;
	EDrivenDestinationMode                        DestinationMode;
	EDrivenBoneModificationMode                   ModificationMode;
	EComponentType                                SourceComponent;
	uint8                                         bUseRange : 1;
	uint8                                         bAffectTargetTranslationX : 1;
	uint8                                         bAffectTargetTranslationY : 1;
	uint8                                         bAffectTargetTranslationZ : 1;
	uint8                                         bAffectTargetRotationX : 1;
	uint8                                         bAffectTargetRotationY : 1;
	uint8                                         bAffectTargetRotationZ : 1;
	uint8                                         bAffectTargetScaleX : 1;
	uint8                                         bAffectTargetScaleY : 1;
	uint8                                         bAffectTargetScaleZ : 1;
	uint8                                         Pad_109[0x7];
};
static_assert(alignof(FAnimNode_BoneDrivenController) == 0x000008, "Wrong alignment on FAnimNode_BoneDrivenController");
static_assert(sizeof(FAnimNode_BoneDrivenController) == 0x000110, "Wrong size on FAnimNode_BoneDrivenController");
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceBone) == 0x0000C8, "Member 'FAnimNode_BoneDrivenController::SourceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, DrivingCurve) == 0x0000D8, "Member 'FAnimNode_BoneDrivenController::DrivingCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, Multiplier) == 0x0000E0, "Member 'FAnimNode_BoneDrivenController::Multiplier' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, RangeMin) == 0x0000E4, "Member 'FAnimNode_BoneDrivenController::RangeMin' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, RangeMax) == 0x0000E8, "Member 'FAnimNode_BoneDrivenController::RangeMax' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, RemappedMin) == 0x0000EC, "Member 'FAnimNode_BoneDrivenController::RemappedMin' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, RemappedMax) == 0x0000F0, "Member 'FAnimNode_BoneDrivenController::RemappedMax' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, ParameterName) == 0x0000F4, "Member 'FAnimNode_BoneDrivenController::ParameterName' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, TargetBone) == 0x0000F8, "Member 'FAnimNode_BoneDrivenController::TargetBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, DestinationMode) == 0x000104, "Member 'FAnimNode_BoneDrivenController::DestinationMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, ModificationMode) == 0x000105, "Member 'FAnimNode_BoneDrivenController::ModificationMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceComponent) == 0x000106, "Member 'FAnimNode_BoneDrivenController::SourceComponent' has a wrong offset!");

struct FAnimationStateMachineReference final : public FAnimNodeReference
{
};
static_assert(alignof(FAnimationStateMachineReference) == 0x000008, "Wrong alignment on FAnimationStateMachineReference");
static_assert(sizeof(FAnimationStateMachineReference) == 0x000010, "Wrong size on FAnimationStateMachineReference");

struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                         Pad_38[0x28];
	class UBlendSpace*                            PreviousBlendSpace;
};
static_assert(alignof(FAnimNode_BlendSpacePlayerBase) == 0x000008, "Wrong alignment on FAnimNode_BlendSpacePlayerBase");
static_assert(sizeof(FAnimNode_BlendSpacePlayerBase) == 0x000068, "Wrong size on FAnimNode_BlendSpacePlayerBase");
static_assert(offsetof(FAnimNode_BlendSpacePlayerBase, PreviousBlendSpace) == 0x000060, "Member 'FAnimNode_BlendSpacePlayerBase::PreviousBlendSpace' has a wrong offset!");

struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
public:
	class UBlendSpace*                            BlendSpace;
};
static_assert(alignof(FAnimNode_BlendSpacePlayer) == 0x000008, "Wrong alignment on FAnimNode_BlendSpacePlayer");
static_assert(sizeof(FAnimNode_BlendSpacePlayer) == 0x000070, "Wrong size on FAnimNode_BlendSpacePlayer");
static_assert(offsetof(FAnimNode_BlendSpacePlayer, BlendSpace) == 0x000068, "Member 'FAnimNode_BlendSpacePlayer::BlendSpace' has a wrong offset!");

struct FAnimNode_MakeDynamicAdditive final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Base;
	struct FPoseLink                              Additive;
	bool                                          bMeshSpaceAdditive;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FAnimNode_MakeDynamicAdditive) == 0x000008, "Wrong alignment on FAnimNode_MakeDynamicAdditive");
static_assert(sizeof(FAnimNode_MakeDynamicAdditive) == 0x000038, "Wrong size on FAnimNode_MakeDynamicAdditive");
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Base) == 0x000010, "Member 'FAnimNode_MakeDynamicAdditive::Base' has a wrong offset!");
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Additive) == 0x000020, "Member 'FAnimNode_MakeDynamicAdditive::Additive' has a wrong offset!");
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, bMeshSpaceAdditive) == 0x000030, "Member 'FAnimNode_MakeDynamicAdditive::bMeshSpaceAdditive' has a wrong offset!");

struct FReferenceBoneFrame final
{
public:
	struct FBoneReference                         bone;
	uint8                                         Pad_C[0x4];
	struct FAxis                                  Axis;
};
static_assert(alignof(FReferenceBoneFrame) == 0x000008, "Wrong alignment on FReferenceBoneFrame");
static_assert(sizeof(FReferenceBoneFrame) == 0x000030, "Wrong size on FReferenceBoneFrame");
static_assert(offsetof(FReferenceBoneFrame, bone) == 0x000000, "Member 'FReferenceBoneFrame::bone' has a wrong offset!");
static_assert(offsetof(FReferenceBoneFrame, Axis) == 0x000010, "Member 'FReferenceBoneFrame::Axis' has a wrong offset!");

struct FAnimNode_TwistCorrectiveNode final : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                    BaseFrame;
	struct FReferenceBoneFrame                    TwistFrame;
	struct FAxis                                  TwistPlaneNormalAxis;
	float                                         RangeMax;
	float                                         RemappedMin;
	float                                         RemappedMax;
	struct FAnimCurveParam                        Curve;
	uint8                                         Pad_15C[0xC];
};
static_assert(alignof(FAnimNode_TwistCorrectiveNode) == 0x000008, "Wrong alignment on FAnimNode_TwistCorrectiveNode");
static_assert(sizeof(FAnimNode_TwistCorrectiveNode) == 0x000168, "Wrong size on FAnimNode_TwistCorrectiveNode");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame) == 0x0000C8, "Member 'FAnimNode_TwistCorrectiveNode::BaseFrame' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame) == 0x0000F8, "Member 'FAnimNode_TwistCorrectiveNode::TwistFrame' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis) == 0x000128, "Member 'FAnimNode_TwistCorrectiveNode::TwistPlaneNormalAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RangeMax) == 0x000148, "Member 'FAnimNode_TwistCorrectiveNode::RangeMax' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RemappedMin) == 0x00014C, "Member 'FAnimNode_TwistCorrectiveNode::RemappedMin' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RemappedMax) == 0x000150, "Member 'FAnimNode_TwistCorrectiveNode::RemappedMax' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, Curve) == 0x000154, "Member 'FAnimNode_TwistCorrectiveNode::Curve' has a wrong offset!");

struct alignas(0x10) FAnimNode_AimOffsetLookAt final : public FAnimNode_BlendSpacePlayer
{
public:
	uint8                                         Pad_70[0xC0];
	struct FPoseLink                              BasePose;
	int32                                         LODThreshold;
	class FName                                   SourceSocketName;
	class FName                                   PivotSocketName;
	uint8                                         Pad_14C[0x4];
	struct FVector                                LookAtLocation;
	struct FVector                                SocketAxis;
	float                                         Alpha;
	uint8                                         Pad_184[0x3C];
};
static_assert(alignof(FAnimNode_AimOffsetLookAt) == 0x000010, "Wrong alignment on FAnimNode_AimOffsetLookAt");
static_assert(sizeof(FAnimNode_AimOffsetLookAt) == 0x0001C0, "Wrong size on FAnimNode_AimOffsetLookAt");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, BasePose) == 0x000130, "Member 'FAnimNode_AimOffsetLookAt::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LODThreshold) == 0x000140, "Member 'FAnimNode_AimOffsetLookAt::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName) == 0x000144, "Member 'FAnimNode_AimOffsetLookAt::SourceSocketName' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName) == 0x000148, "Member 'FAnimNode_AimOffsetLookAt::PivotSocketName' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation) == 0x000150, "Member 'FAnimNode_AimOffsetLookAt::LookAtLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SocketAxis) == 0x000168, "Member 'FAnimNode_AimOffsetLookAt::SocketAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, Alpha) == 0x000180, "Member 'FAnimNode_AimOffsetLookAt::Alpha' has a wrong offset!");

struct FAnimPhysPlanarLimit final
{
public:
	struct FBoneReference                         DrivingBone;
	uint8                                         Pad_C[0x4];
	struct FTransform                             PlaneTransform;
};
static_assert(alignof(FAnimPhysPlanarLimit) == 0x000010, "Wrong alignment on FAnimPhysPlanarLimit");
static_assert(sizeof(FAnimPhysPlanarLimit) == 0x000070, "Wrong size on FAnimPhysPlanarLimit");
static_assert(offsetof(FAnimPhysPlanarLimit, DrivingBone) == 0x000000, "Member 'FAnimPhysPlanarLimit::DrivingBone' has a wrong offset!");
static_assert(offsetof(FAnimPhysPlanarLimit, PlaneTransform) == 0x000010, "Member 'FAnimPhysPlanarLimit::PlaneTransform' has a wrong offset!");

struct FAnimNode_ApplyAdditive final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Base;
	struct FPoseLink                              Additive;
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	int32                                         LODThreshold;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_BC[0x4];
	EAnimAlphaInputType                           AlphaInputType;
	bool                                          bAlphaBoolEnabled;
	uint8                                         Pad_C2[0x6];
};
static_assert(alignof(FAnimNode_ApplyAdditive) == 0x000008, "Wrong alignment on FAnimNode_ApplyAdditive");
static_assert(sizeof(FAnimNode_ApplyAdditive) == 0x0000C8, "Wrong size on FAnimNode_ApplyAdditive");
static_assert(offsetof(FAnimNode_ApplyAdditive, Base) == 0x000010, "Member 'FAnimNode_ApplyAdditive::Base' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, Additive) == 0x000020, "Member 'FAnimNode_ApplyAdditive::Additive' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, Alpha) == 0x000030, "Member 'FAnimNode_ApplyAdditive::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias) == 0x000034, "Member 'FAnimNode_ApplyAdditive::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, LODThreshold) == 0x00003C, "Member 'FAnimNode_ApplyAdditive::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaBoolBlend) == 0x000040, "Member 'FAnimNode_ApplyAdditive::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaCurveName) == 0x000088, "Member 'FAnimNode_ApplyAdditive::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBiasClamp) == 0x00008C, "Member 'FAnimNode_ApplyAdditive::AlphaScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaInputType) == 0x0000C0, "Member 'FAnimNode_ApplyAdditive::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyAdditive, bAlphaBoolEnabled) == 0x0000C1, "Member 'FAnimNode_ApplyAdditive::bAlphaBoolEnabled' has a wrong offset!");

struct FBlendBoneByChannelEntry final
{
public:
	struct FBoneReference                         SourceBone;
	struct FBoneReference                         TargetBone;
	bool                                          bBlendTranslation;
	bool                                          bBlendRotation;
	bool                                          bBlendScale;
	uint8                                         Pad_1B[0x1];
};
static_assert(alignof(FBlendBoneByChannelEntry) == 0x000004, "Wrong alignment on FBlendBoneByChannelEntry");
static_assert(sizeof(FBlendBoneByChannelEntry) == 0x00001C, "Wrong size on FBlendBoneByChannelEntry");
static_assert(offsetof(FBlendBoneByChannelEntry, SourceBone) == 0x000000, "Member 'FBlendBoneByChannelEntry::SourceBone' has a wrong offset!");
static_assert(offsetof(FBlendBoneByChannelEntry, TargetBone) == 0x00000C, "Member 'FBlendBoneByChannelEntry::TargetBone' has a wrong offset!");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendTranslation) == 0x000018, "Member 'FBlendBoneByChannelEntry::bBlendTranslation' has a wrong offset!");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendRotation) == 0x000019, "Member 'FBlendBoneByChannelEntry::bBlendRotation' has a wrong offset!");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendScale) == 0x00001A, "Member 'FBlendBoneByChannelEntry::bBlendScale' has a wrong offset!");

struct FAnimNode_BlendBoneByChannel final : public FAnimNode_Base
{
public:
	struct FPoseLink                              A;
	struct FPoseLink                              B;
	TArray<struct FBlendBoneByChannelEntry>       BoneDefinitions;
	uint8                                         Pad_40[0x10];
	float                                         Alpha;
	uint8                                         Pad_54[0x4];
	struct FInputScaleBias                        AlphaScaleBias;
	EBoneControlSpace                             TransformsSpace;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FAnimNode_BlendBoneByChannel) == 0x000008, "Wrong alignment on FAnimNode_BlendBoneByChannel");
static_assert(sizeof(FAnimNode_BlendBoneByChannel) == 0x000068, "Wrong size on FAnimNode_BlendBoneByChannel");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, A) == 0x000010, "Member 'FAnimNode_BlendBoneByChannel::A' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, B) == 0x000020, "Member 'FAnimNode_BlendBoneByChannel::B' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, BoneDefinitions) == 0x000030, "Member 'FAnimNode_BlendBoneByChannel::BoneDefinitions' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, Alpha) == 0x000050, "Member 'FAnimNode_BlendBoneByChannel::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, AlphaScaleBias) == 0x000058, "Member 'FAnimNode_BlendBoneByChannel::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, TransformsSpace) == 0x000060, "Member 'FAnimNode_BlendBoneByChannel::TransformsSpace' has a wrong offset!");

struct FAnimNode_ModifyCurve final : public FAnimNode_Base
{
public:
	struct FPoseLink                              SourcePose;
	TMap<class FName, float>                      CurveMap;
	TArray<float>                                 CurveValues;
	TArray<class FName>                           CurveNames;
	uint8                                         Pad_90[0x64];
	float                                         Alpha;
	EModifyCurveApplyMode                         ApplyMode;
	uint8                                         Pad_F9[0x7];
};
static_assert(alignof(FAnimNode_ModifyCurve) == 0x000008, "Wrong alignment on FAnimNode_ModifyCurve");
static_assert(sizeof(FAnimNode_ModifyCurve) == 0x000100, "Wrong size on FAnimNode_ModifyCurve");
static_assert(offsetof(FAnimNode_ModifyCurve, SourcePose) == 0x000010, "Member 'FAnimNode_ModifyCurve::SourcePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveMap) == 0x000020, "Member 'FAnimNode_ModifyCurve::CurveMap' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveValues) == 0x000070, "Member 'FAnimNode_ModifyCurve::CurveValues' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveNames) == 0x000080, "Member 'FAnimNode_ModifyCurve::CurveNames' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyCurve, Alpha) == 0x0000F4, "Member 'FAnimNode_ModifyCurve::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_ModifyCurve, ApplyMode) == 0x0000F8, "Member 'FAnimNode_ModifyCurve::ApplyMode' has a wrong offset!");

struct FWarpingVectorValue final
{
public:
	EWarpingVectorMode                            Mode;
	uint8                                         Pad_1[0x7];
	struct FVector                                Value;
};
static_assert(alignof(FWarpingVectorValue) == 0x000008, "Wrong alignment on FWarpingVectorValue");
static_assert(sizeof(FWarpingVectorValue) == 0x000020, "Wrong size on FWarpingVectorValue");
static_assert(offsetof(FWarpingVectorValue, Mode) == 0x000000, "Member 'FWarpingVectorValue::Mode' has a wrong offset!");
static_assert(offsetof(FWarpingVectorValue, Value) == 0x000008, "Member 'FWarpingVectorValue::Value' has a wrong offset!");

struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                      BlendPose;
	uint8                                         Pad_20[0x28];
};
static_assert(alignof(FAnimNode_BlendListBase) == 0x000008, "Wrong alignment on FAnimNode_BlendListBase");
static_assert(sizeof(FAnimNode_BlendListBase) == 0x000048, "Wrong size on FAnimNode_BlendListBase");
static_assert(offsetof(FAnimNode_BlendListBase, BlendPose) == 0x000010, "Member 'FAnimNode_BlendListBase::BlendPose' has a wrong offset!");

struct FAngularRangeLimit final
{
public:
	struct FVector                                LimitMin;
	struct FVector                                LimitMax;
	struct FBoneReference                         bone;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FAngularRangeLimit) == 0x000008, "Wrong alignment on FAngularRangeLimit");
static_assert(sizeof(FAngularRangeLimit) == 0x000040, "Wrong size on FAngularRangeLimit");
static_assert(offsetof(FAngularRangeLimit, LimitMin) == 0x000000, "Member 'FAngularRangeLimit::LimitMin' has a wrong offset!");
static_assert(offsetof(FAngularRangeLimit, LimitMax) == 0x000018, "Member 'FAngularRangeLimit::LimitMax' has a wrong offset!");
static_assert(offsetof(FAngularRangeLimit, bone) == 0x000030, "Member 'FAngularRangeLimit::bone' has a wrong offset!");

struct FAnimNode_BlendListByBool final : public FAnimNode_BlendListBase
{
};
static_assert(alignof(FAnimNode_BlendListByBool) == 0x000008, "Wrong alignment on FAnimNode_BlendListByBool");
static_assert(sizeof(FAnimNode_BlendListByBool) == 0x000048, "Wrong size on FAnimNode_BlendListByBool");

struct FAnimNode_BlendListByEnum final : public FAnimNode_BlendListBase
{
};
static_assert(alignof(FAnimNode_BlendListByEnum) == 0x000008, "Wrong alignment on FAnimNode_BlendListByEnum");
static_assert(sizeof(FAnimNode_BlendListByEnum) == 0x000048, "Wrong size on FAnimNode_BlendListByEnum");

struct FAnimNode_BlendListByInt final : public FAnimNode_BlendListBase
{
};
static_assert(alignof(FAnimNode_BlendListByInt) == 0x000008, "Wrong alignment on FAnimNode_BlendListByInt");
static_assert(sizeof(FAnimNode_BlendListByInt) == 0x000048, "Wrong size on FAnimNode_BlendListByInt");

struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                             PoseAsset;
	uint8                                         Pad_40[0x50];
};
static_assert(alignof(FAnimNode_PoseHandler) == 0x000008, "Wrong alignment on FAnimNode_PoseHandler");
static_assert(sizeof(FAnimNode_PoseHandler) == 0x000090, "Wrong size on FAnimNode_PoseHandler");
static_assert(offsetof(FAnimNode_PoseHandler, PoseAsset) == 0x000038, "Member 'FAnimNode_PoseHandler::PoseAsset' has a wrong offset!");

struct FAnimNode_PoseByName final : public FAnimNode_PoseHandler
{
public:
	class FName                                   PoseName;
	float                                         PoseWeight;
	uint8                                         Pad_98[0x8];
};
static_assert(alignof(FAnimNode_PoseByName) == 0x000008, "Wrong alignment on FAnimNode_PoseByName");
static_assert(sizeof(FAnimNode_PoseByName) == 0x0000A0, "Wrong size on FAnimNode_PoseByName");
static_assert(offsetof(FAnimNode_PoseByName, PoseName) == 0x000090, "Member 'FAnimNode_PoseByName::PoseName' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseByName, PoseWeight) == 0x000094, "Member 'FAnimNode_PoseByName::PoseWeight' has a wrong offset!");

struct FRBFEntry
{
public:
	TArray<float>                                 Values;
};
static_assert(alignof(FRBFEntry) == 0x000008, "Wrong alignment on FRBFEntry");
static_assert(sizeof(FRBFEntry) == 0x000010, "Wrong size on FRBFEntry");
static_assert(offsetof(FRBFEntry, Values) == 0x000000, "Member 'FRBFEntry::Values' has a wrong offset!");

struct FRBFTarget final : public FRBFEntry
{
public:
	float                                         ScaleFactor;
	bool                                          bApplyCustomCurve;
	uint8                                         Pad_15[0x3];
	struct FRichCurve                             CustomCurve;
	ERBFDistanceMethod                            DistanceMethod;
	ERBFFunctionType                              FunctionType;
	uint8                                         Pad_9A[0x6];
};
static_assert(alignof(FRBFTarget) == 0x000008, "Wrong alignment on FRBFTarget");
static_assert(sizeof(FRBFTarget) == 0x0000A0, "Wrong size on FRBFTarget");
static_assert(offsetof(FRBFTarget, ScaleFactor) == 0x000010, "Member 'FRBFTarget::ScaleFactor' has a wrong offset!");
static_assert(offsetof(FRBFTarget, bApplyCustomCurve) == 0x000014, "Member 'FRBFTarget::bApplyCustomCurve' has a wrong offset!");
static_assert(offsetof(FRBFTarget, CustomCurve) == 0x000018, "Member 'FRBFTarget::CustomCurve' has a wrong offset!");
static_assert(offsetof(FRBFTarget, DistanceMethod) == 0x000098, "Member 'FRBFTarget::DistanceMethod' has a wrong offset!");
static_assert(offsetof(FRBFTarget, FunctionType) == 0x000099, "Member 'FRBFTarget::FunctionType' has a wrong offset!");

struct FAnimNode_BlendSpaceEvaluator final : public FAnimNode_BlendSpacePlayer
{
public:
	float                                         NormalizedTime;
	bool                                          bTeleportToNormalizedTime;
	uint8                                         Pad_75[0x3];
};
static_assert(alignof(FAnimNode_BlendSpaceEvaluator) == 0x000008, "Wrong alignment on FAnimNode_BlendSpaceEvaluator");
static_assert(sizeof(FAnimNode_BlendSpaceEvaluator) == 0x000078, "Wrong size on FAnimNode_BlendSpaceEvaluator");
static_assert(offsetof(FAnimNode_BlendSpaceEvaluator, NormalizedTime) == 0x000070, "Member 'FAnimNode_BlendSpaceEvaluator::NormalizedTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpaceEvaluator, bTeleportToNormalizedTime) == 0x000074, "Member 'FAnimNode_BlendSpaceEvaluator::bTeleportToNormalizedTime' has a wrong offset!");

struct FAnimNode_BlendSpacePlayer_Standalone final : public FAnimNode_BlendSpacePlayerBase
{
public:
	class FName                                   GroupName;
	EAnimGroupRole                                GroupRole;
	EAnimSyncMethod                               Method;
	bool                                          bIgnoreForRelevancyTest;
	uint8                                         Pad_6F[0x1];
	float                                         X;
	float                                         Y;
	float                                         PlayRate;
	bool                                          bLoop;
	bool                                          bResetPlayTimeWhenBlendSpaceChanges;
	uint8                                         Pad_7E[0x2];
	float                                         StartPosition;
	uint8                                         Pad_84[0x4];
	class UBlendSpace*                            BlendSpace;
};
static_assert(alignof(FAnimNode_BlendSpacePlayer_Standalone) == 0x000008, "Wrong alignment on FAnimNode_BlendSpacePlayer_Standalone");
static_assert(sizeof(FAnimNode_BlendSpacePlayer_Standalone) == 0x000090, "Wrong size on FAnimNode_BlendSpacePlayer_Standalone");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, GroupName) == 0x000068, "Member 'FAnimNode_BlendSpacePlayer_Standalone::GroupName' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, GroupRole) == 0x00006C, "Member 'FAnimNode_BlendSpacePlayer_Standalone::GroupRole' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, Method) == 0x00006D, "Member 'FAnimNode_BlendSpacePlayer_Standalone::Method' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bIgnoreForRelevancyTest) == 0x00006E, "Member 'FAnimNode_BlendSpacePlayer_Standalone::bIgnoreForRelevancyTest' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, X) == 0x000070, "Member 'FAnimNode_BlendSpacePlayer_Standalone::X' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, Y) == 0x000074, "Member 'FAnimNode_BlendSpacePlayer_Standalone::Y' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, PlayRate) == 0x000078, "Member 'FAnimNode_BlendSpacePlayer_Standalone::PlayRate' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bLoop) == 0x00007C, "Member 'FAnimNode_BlendSpacePlayer_Standalone::bLoop' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bResetPlayTimeWhenBlendSpaceChanges) == 0x00007D, "Member 'FAnimNode_BlendSpacePlayer_Standalone::bResetPlayTimeWhenBlendSpaceChanges' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, StartPosition) == 0x000080, "Member 'FAnimNode_BlendSpacePlayer_Standalone::StartPosition' has a wrong offset!");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, BlendSpace) == 0x000088, "Member 'FAnimNode_BlendSpacePlayer_Standalone::BlendSpace' has a wrong offset!");

struct FAnimNode_CallFunction final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Source;
	uint8                                         Pad_20[0x14];
	EAnimFunctionCallSite                         CallSite;
};
static_assert(alignof(FAnimNode_CallFunction) == 0x000008, "Wrong alignment on FAnimNode_CallFunction");
static_assert(sizeof(FAnimNode_CallFunction) == 0x000038, "Wrong size on FAnimNode_CallFunction");
static_assert(offsetof(FAnimNode_CallFunction, Source) == 0x000010, "Member 'FAnimNode_CallFunction::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_CallFunction, CallSite) == 0x000034, "Member 'FAnimNode_CallFunction::CallSite' has a wrong offset!");

struct FAnimNode_CopyPoseFromMesh final : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  SourceMeshComponent;
	uint8                                         bUseAttachedParent : 1;
	uint8                                         bCopyCurves : 1;
	bool                                          bCopyCustomAttributes;
	uint8                                         bUseMeshPose : 1;
	uint8                                         Pad_1B[0x1];
	class FName                                   RootBoneToCopy;
	uint8                                         Pad_20[0x1B0];
};
static_assert(alignof(FAnimNode_CopyPoseFromMesh) == 0x000008, "Wrong alignment on FAnimNode_CopyPoseFromMesh");
static_assert(sizeof(FAnimNode_CopyPoseFromMesh) == 0x0001D0, "Wrong size on FAnimNode_CopyPoseFromMesh");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, SourceMeshComponent) == 0x000010, "Member 'FAnimNode_CopyPoseFromMesh::SourceMeshComponent' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, bCopyCustomAttributes) == 0x000019, "Member 'FAnimNode_CopyPoseFromMesh::bCopyCustomAttributes' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, RootBoneToCopy) == 0x00001C, "Member 'FAnimNode_CopyPoseFromMesh::RootBoneToCopy' has a wrong offset!");

struct FAnimNode_CurveSource final : public FAnimNode_Base
{
public:
	struct FPoseLink                              SourcePose;
	class FName                                   SourceBinding;
	float                                         Alpha;
	TScriptInterface<class ICurveSourceInterface> CurveSource;
};
static_assert(alignof(FAnimNode_CurveSource) == 0x000008, "Wrong alignment on FAnimNode_CurveSource");
static_assert(sizeof(FAnimNode_CurveSource) == 0x000038, "Wrong size on FAnimNode_CurveSource");
static_assert(offsetof(FAnimNode_CurveSource, SourcePose) == 0x000010, "Member 'FAnimNode_CurveSource::SourcePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_CurveSource, SourceBinding) == 0x000020, "Member 'FAnimNode_CurveSource::SourceBinding' has a wrong offset!");
static_assert(offsetof(FAnimNode_CurveSource, Alpha) == 0x000024, "Member 'FAnimNode_CurveSource::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_CurveSource, CurveSource) == 0x000028, "Member 'FAnimNode_CurveSource::CurveSource' has a wrong offset!");

struct FAnimNode_LayeredBoneBlend final : public FAnimNode_Base
{
public:
	struct FPoseLink                              BasePose;
	TArray<struct FPoseLink>                      BlendPoses;
	ELayeredBoneBlendMode                         BlendMode;
	uint8                                         Pad_31[0x7];
	TArray<class UBlendProfile*>                  BlendMasks;
	TArray<struct FInputBlendPose>                LayerSetup;
	TArray<float>                                 BlendWeights;
	bool                                          bMeshSpaceRotationBlend;
	bool                                          bMeshSpaceScaleBlend;
	ECurveBlendOption                             CurveBlendOption;
	bool                                          bBlendRootMotionBasedOnRootBone;
	uint8                                         Pad_6C[0x4];
	int32                                         LODThreshold;
	uint8                                         Pad_74[0x4];
	TArray<struct FPerBoneBlendWeight>            PerBoneBlendWeights;
	struct FGuid                                  SkeletonGuid;
	struct FGuid                                  VirtualBoneGuid;
	uint8                                         Pad_A8[0x38];
};
static_assert(alignof(FAnimNode_LayeredBoneBlend) == 0x000008, "Wrong alignment on FAnimNode_LayeredBoneBlend");
static_assert(sizeof(FAnimNode_LayeredBoneBlend) == 0x0000E0, "Wrong size on FAnimNode_LayeredBoneBlend");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BasePose) == 0x000010, "Member 'FAnimNode_LayeredBoneBlend::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendPoses) == 0x000020, "Member 'FAnimNode_LayeredBoneBlend::BlendPoses' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendMode) == 0x000030, "Member 'FAnimNode_LayeredBoneBlend::BlendMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendMasks) == 0x000038, "Member 'FAnimNode_LayeredBoneBlend::BlendMasks' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LayerSetup) == 0x000048, "Member 'FAnimNode_LayeredBoneBlend::LayerSetup' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendWeights) == 0x000058, "Member 'FAnimNode_LayeredBoneBlend::BlendWeights' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bMeshSpaceRotationBlend) == 0x000068, "Member 'FAnimNode_LayeredBoneBlend::bMeshSpaceRotationBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bMeshSpaceScaleBlend) == 0x000069, "Member 'FAnimNode_LayeredBoneBlend::bMeshSpaceScaleBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption) == 0x00006A, "Member 'FAnimNode_LayeredBoneBlend::CurveBlendOption' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bBlendRootMotionBasedOnRootBone) == 0x00006B, "Member 'FAnimNode_LayeredBoneBlend::bBlendRootMotionBasedOnRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LODThreshold) == 0x000070, "Member 'FAnimNode_LayeredBoneBlend::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights) == 0x000078, "Member 'FAnimNode_LayeredBoneBlend::PerBoneBlendWeights' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid) == 0x000088, "Member 'FAnimNode_LayeredBoneBlend::SkeletonGuid' has a wrong offset!");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid) == 0x000098, "Member 'FAnimNode_LayeredBoneBlend::VirtualBoneGuid' has a wrong offset!");

struct FAnimNode_Mirror final : public FAnimNode_MirrorBase
{
};
static_assert(alignof(FAnimNode_Mirror) == 0x000008, "Wrong alignment on FAnimNode_Mirror");
static_assert(sizeof(FAnimNode_Mirror) == 0x000048, "Wrong size on FAnimNode_Mirror");

struct FAnimNode_MultiWayBlend final : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                      Poses;
	TArray<float>                                 DesiredAlphas;
	uint8                                         Pad_30[0x10];
	struct FInputScaleBias                        AlphaScaleBias;
	bool                                          bAdditiveNode;
	bool                                          bNormalizeAlpha;
	uint8                                         Pad_4A[0x6];
};
static_assert(alignof(FAnimNode_MultiWayBlend) == 0x000008, "Wrong alignment on FAnimNode_MultiWayBlend");
static_assert(sizeof(FAnimNode_MultiWayBlend) == 0x000050, "Wrong size on FAnimNode_MultiWayBlend");
static_assert(offsetof(FAnimNode_MultiWayBlend, Poses) == 0x000010, "Member 'FAnimNode_MultiWayBlend::Poses' has a wrong offset!");
static_assert(offsetof(FAnimNode_MultiWayBlend, DesiredAlphas) == 0x000020, "Member 'FAnimNode_MultiWayBlend::DesiredAlphas' has a wrong offset!");
static_assert(offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias) == 0x000040, "Member 'FAnimNode_MultiWayBlend::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_MultiWayBlend, bAdditiveNode) == 0x000048, "Member 'FAnimNode_MultiWayBlend::bAdditiveNode' has a wrong offset!");
static_assert(offsetof(FAnimNode_MultiWayBlend, bNormalizeAlpha) == 0x000049, "Member 'FAnimNode_MultiWayBlend::bNormalizeAlpha' has a wrong offset!");

struct FAnimNode_PoseBlendNode final : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                              SourcePose;
	EAlphaBlendOption                             BlendOption;
	uint8                                         Pad_A1[0x7];
	class UCurveFloat*                            CustomCurve;
};
static_assert(alignof(FAnimNode_PoseBlendNode) == 0x000008, "Wrong alignment on FAnimNode_PoseBlendNode");
static_assert(sizeof(FAnimNode_PoseBlendNode) == 0x0000B0, "Wrong size on FAnimNode_PoseBlendNode");
static_assert(offsetof(FAnimNode_PoseBlendNode, SourcePose) == 0x000090, "Member 'FAnimNode_PoseBlendNode::SourcePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseBlendNode, BlendOption) == 0x0000A0, "Member 'FAnimNode_PoseBlendNode::BlendOption' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseBlendNode, CustomCurve) == 0x0000A8, "Member 'FAnimNode_PoseBlendNode::CustomCurve' has a wrong offset!");

struct FPoseDriverTransform final
{
public:
	struct FVector                                TargetTranslation;
	struct FRotator                               TargetRotation;
};
static_assert(alignof(FPoseDriverTransform) == 0x000008, "Wrong alignment on FPoseDriverTransform");
static_assert(sizeof(FPoseDriverTransform) == 0x000030, "Wrong size on FPoseDriverTransform");
static_assert(offsetof(FPoseDriverTransform, TargetTranslation) == 0x000000, "Member 'FPoseDriverTransform::TargetTranslation' has a wrong offset!");
static_assert(offsetof(FPoseDriverTransform, TargetRotation) == 0x000018, "Member 'FPoseDriverTransform::TargetRotation' has a wrong offset!");

struct FPoseDriverTarget final
{
public:
	TArray<struct FPoseDriverTransform>           BoneTransforms;
	struct FRotator                               TargetRotation;
	float                                         TargetScale;
	ERBFDistanceMethod                            DistanceMethod;
	ERBFFunctionType                              FunctionType;
	bool                                          bApplyCustomCurve;
	uint8                                         Pad_2F[0x1];
	struct FRichCurve                             CustomCurve;
	class FName                                   DrivenName;
	uint8                                         Pad_B4[0x8];
	bool                                          bIsHidden;
	uint8                                         Pad_BD[0x3];
};
static_assert(alignof(FPoseDriverTarget) == 0x000008, "Wrong alignment on FPoseDriverTarget");
static_assert(sizeof(FPoseDriverTarget) == 0x0000C0, "Wrong size on FPoseDriverTarget");
static_assert(offsetof(FPoseDriverTarget, BoneTransforms) == 0x000000, "Member 'FPoseDriverTarget::BoneTransforms' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, TargetRotation) == 0x000010, "Member 'FPoseDriverTarget::TargetRotation' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, TargetScale) == 0x000028, "Member 'FPoseDriverTarget::TargetScale' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, DistanceMethod) == 0x00002C, "Member 'FPoseDriverTarget::DistanceMethod' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, FunctionType) == 0x00002D, "Member 'FPoseDriverTarget::FunctionType' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, bApplyCustomCurve) == 0x00002E, "Member 'FPoseDriverTarget::bApplyCustomCurve' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, CustomCurve) == 0x000030, "Member 'FPoseDriverTarget::CustomCurve' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, DrivenName) == 0x0000B0, "Member 'FPoseDriverTarget::DrivenName' has a wrong offset!");
static_assert(offsetof(FPoseDriverTarget, bIsHidden) == 0x0000BC, "Member 'FPoseDriverTarget::bIsHidden' has a wrong offset!");

struct FRBFParams final
{
public:
	int32                                         TargetDimensions;
	ERBFSolverType                                SolverType;
	uint8                                         Pad_5[0x3];
	float                                         Radius;
	bool                                          bAutomaticRadius;
	ERBFFunctionType                              Function;
	ERBFDistanceMethod                            DistanceMethod;
	EBoneAxis                                     TwistAxis;
	float                                         WeightThreshold;
	ERBFNormalizeMethod                           NormalizeMethod;
	uint8                                         Pad_15[0x3];
	struct FVector                                MedianReference;
	float                                         MedianMin;
	float                                         MedianMax;
};
static_assert(alignof(FRBFParams) == 0x000008, "Wrong alignment on FRBFParams");
static_assert(sizeof(FRBFParams) == 0x000038, "Wrong size on FRBFParams");
static_assert(offsetof(FRBFParams, TargetDimensions) == 0x000000, "Member 'FRBFParams::TargetDimensions' has a wrong offset!");
static_assert(offsetof(FRBFParams, SolverType) == 0x000004, "Member 'FRBFParams::SolverType' has a wrong offset!");
static_assert(offsetof(FRBFParams, Radius) == 0x000008, "Member 'FRBFParams::Radius' has a wrong offset!");
static_assert(offsetof(FRBFParams, bAutomaticRadius) == 0x00000C, "Member 'FRBFParams::bAutomaticRadius' has a wrong offset!");
static_assert(offsetof(FRBFParams, Function) == 0x00000D, "Member 'FRBFParams::Function' has a wrong offset!");
static_assert(offsetof(FRBFParams, DistanceMethod) == 0x00000E, "Member 'FRBFParams::DistanceMethod' has a wrong offset!");
static_assert(offsetof(FRBFParams, TwistAxis) == 0x00000F, "Member 'FRBFParams::TwistAxis' has a wrong offset!");
static_assert(offsetof(FRBFParams, WeightThreshold) == 0x000010, "Member 'FRBFParams::WeightThreshold' has a wrong offset!");
static_assert(offsetof(FRBFParams, NormalizeMethod) == 0x000014, "Member 'FRBFParams::NormalizeMethod' has a wrong offset!");
static_assert(offsetof(FRBFParams, MedianReference) == 0x000018, "Member 'FRBFParams::MedianReference' has a wrong offset!");
static_assert(offsetof(FRBFParams, MedianMin) == 0x000030, "Member 'FRBFParams::MedianMin' has a wrong offset!");
static_assert(offsetof(FRBFParams, MedianMax) == 0x000034, "Member 'FRBFParams::MedianMax' has a wrong offset!");

struct FAnimNode_PoseDriver final : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                              SourcePose;
	TArray<struct FBoneReference>                 SourceBones;
	TArray<struct FBoneReference>                 OnlyDriveBones;
	TArray<struct FPoseDriverTarget>              PoseTargets;
	uint8                                         Pad_D0[0x30];
	struct FBoneReference                         EvalSpaceBone;
	bool                                          bEvalFromRefPose;
	uint8                                         Pad_10D[0x3];
	struct FRBFParams                             RBFParams;
	EPoseDriverSource                             DriveSource;
	EPoseDriverOutput                             DriveOutput;
	uint8                                         bOnlyDriveSelectedBones : 1;
	uint8                                         Pad_14B[0x1];
	int32                                         LODThreshold;
	uint8                                         Pad_150[0x30];
};
static_assert(alignof(FAnimNode_PoseDriver) == 0x000008, "Wrong alignment on FAnimNode_PoseDriver");
static_assert(sizeof(FAnimNode_PoseDriver) == 0x000180, "Wrong size on FAnimNode_PoseDriver");
static_assert(offsetof(FAnimNode_PoseDriver, SourcePose) == 0x000090, "Member 'FAnimNode_PoseDriver::SourcePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, SourceBones) == 0x0000A0, "Member 'FAnimNode_PoseDriver::SourceBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, OnlyDriveBones) == 0x0000B0, "Member 'FAnimNode_PoseDriver::OnlyDriveBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, PoseTargets) == 0x0000C0, "Member 'FAnimNode_PoseDriver::PoseTargets' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, EvalSpaceBone) == 0x000100, "Member 'FAnimNode_PoseDriver::EvalSpaceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, bEvalFromRefPose) == 0x00010C, "Member 'FAnimNode_PoseDriver::bEvalFromRefPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, RBFParams) == 0x000110, "Member 'FAnimNode_PoseDriver::RBFParams' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, DriveSource) == 0x000148, "Member 'FAnimNode_PoseDriver::DriveSource' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, DriveOutput) == 0x000149, "Member 'FAnimNode_PoseDriver::DriveOutput' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseDriver, LODThreshold) == 0x00014C, "Member 'FAnimNode_PoseDriver::LODThreshold' has a wrong offset!");

struct FAnimNode_PoseSnapshot final : public FAnimNode_Base
{
public:
	class FName                                   SnapshotName;
	uint8                                         Pad_14[0x4];
	struct FPoseSnapshot                          Snapshot;
	ESnapshotSourceMode                           Mode;
	uint8                                         Pad_49[0x37];
};
static_assert(alignof(FAnimNode_PoseSnapshot) == 0x000008, "Wrong alignment on FAnimNode_PoseSnapshot");
static_assert(sizeof(FAnimNode_PoseSnapshot) == 0x000080, "Wrong size on FAnimNode_PoseSnapshot");
static_assert(offsetof(FAnimNode_PoseSnapshot, SnapshotName) == 0x000010, "Member 'FAnimNode_PoseSnapshot::SnapshotName' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseSnapshot, Snapshot) == 0x000018, "Member 'FAnimNode_PoseSnapshot::Snapshot' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseSnapshot, Mode) == 0x000048, "Member 'FAnimNode_PoseSnapshot::Mode' has a wrong offset!");

struct FRandomPlayerSequenceEntry final
{
public:
	class UAnimSequence*                          Sequence;
	float                                         ChanceToPlay;
	int32                                         MinLoopCount;
	int32                                         MaxLoopCount;
	float                                         MinPlayRate;
	float                                         MaxPlayRate;
	uint8                                         Pad_1C[0x4];
	struct FAlphaBlend                            BlendIn;
};
static_assert(alignof(FRandomPlayerSequenceEntry) == 0x000008, "Wrong alignment on FRandomPlayerSequenceEntry");
static_assert(sizeof(FRandomPlayerSequenceEntry) == 0x000050, "Wrong size on FRandomPlayerSequenceEntry");
static_assert(offsetof(FRandomPlayerSequenceEntry, Sequence) == 0x000000, "Member 'FRandomPlayerSequenceEntry::Sequence' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, ChanceToPlay) == 0x000008, "Member 'FRandomPlayerSequenceEntry::ChanceToPlay' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, MinLoopCount) == 0x00000C, "Member 'FRandomPlayerSequenceEntry::MinLoopCount' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, MaxLoopCount) == 0x000010, "Member 'FRandomPlayerSequenceEntry::MaxLoopCount' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, MinPlayRate) == 0x000014, "Member 'FRandomPlayerSequenceEntry::MinPlayRate' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, MaxPlayRate) == 0x000018, "Member 'FRandomPlayerSequenceEntry::MaxPlayRate' has a wrong offset!");
static_assert(offsetof(FRandomPlayerSequenceEntry, BlendIn) == 0x000020, "Member 'FRandomPlayerSequenceEntry::BlendIn' has a wrong offset!");

struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
public:
	TArray<struct FRandomPlayerSequenceEntry>     Entries;
	uint8                                         Pad_20[0x50];
	float                                         BlendWeight;
	bool                                          bShuffleMode;
	uint8                                         Pad_75[0x3];
};
static_assert(alignof(FAnimNode_RandomPlayer) == 0x000008, "Wrong alignment on FAnimNode_RandomPlayer");
static_assert(sizeof(FAnimNode_RandomPlayer) == 0x000078, "Wrong size on FAnimNode_RandomPlayer");
static_assert(offsetof(FAnimNode_RandomPlayer, Entries) == 0x000010, "Member 'FAnimNode_RandomPlayer::Entries' has a wrong offset!");
static_assert(offsetof(FAnimNode_RandomPlayer, BlendWeight) == 0x000070, "Member 'FAnimNode_RandomPlayer::BlendWeight' has a wrong offset!");
static_assert(offsetof(FAnimNode_RandomPlayer, bShuffleMode) == 0x000074, "Member 'FAnimNode_RandomPlayer::bShuffleMode' has a wrong offset!");

struct FAnimNode_RotateRootBone final : public FAnimNode_Base
{
public:
	struct FPoseLink                              BasePose;
	float                                         Pitch;
	float                                         Yaw;
	struct FInputScaleBiasClamp                   PitchScaleBiasClamp;
	struct FInputScaleBiasClamp                   YawScaleBiasClamp;
	struct FRotator                               MeshToComponent;
	uint8                                         Pad_A0[0x8];
};
static_assert(alignof(FAnimNode_RotateRootBone) == 0x000008, "Wrong alignment on FAnimNode_RotateRootBone");
static_assert(sizeof(FAnimNode_RotateRootBone) == 0x0000A8, "Wrong size on FAnimNode_RotateRootBone");
static_assert(offsetof(FAnimNode_RotateRootBone, BasePose) == 0x000010, "Member 'FAnimNode_RotateRootBone::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotateRootBone, Pitch) == 0x000020, "Member 'FAnimNode_RotateRootBone::Pitch' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotateRootBone, Yaw) == 0x000024, "Member 'FAnimNode_RotateRootBone::Yaw' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotateRootBone, PitchScaleBiasClamp) == 0x000028, "Member 'FAnimNode_RotateRootBone::PitchScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotateRootBone, YawScaleBiasClamp) == 0x000058, "Member 'FAnimNode_RotateRootBone::YawScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotateRootBone, MeshToComponent) == 0x000088, "Member 'FAnimNode_RotateRootBone::MeshToComponent' has a wrong offset!");

struct FAnimNode_RotationOffsetBlendSpace final : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                              BasePose;
	int32                                         LODThreshold;
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_10C[0x4];
	EAnimAlphaInputType                           AlphaInputType;
	bool                                          bAlphaBoolEnabled;
	uint8                                         Pad_112[0x6];
};
static_assert(alignof(FAnimNode_RotationOffsetBlendSpace) == 0x000008, "Wrong alignment on FAnimNode_RotationOffsetBlendSpace");
static_assert(sizeof(FAnimNode_RotationOffsetBlendSpace) == 0x000118, "Wrong size on FAnimNode_RotationOffsetBlendSpace");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose) == 0x000070, "Member 'FAnimNode_RotationOffsetBlendSpace::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, LODThreshold) == 0x000080, "Member 'FAnimNode_RotationOffsetBlendSpace::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, Alpha) == 0x000084, "Member 'FAnimNode_RotationOffsetBlendSpace::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias) == 0x000088, "Member 'FAnimNode_RotationOffsetBlendSpace::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend) == 0x000090, "Member 'FAnimNode_RotationOffsetBlendSpace::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName) == 0x0000D8, "Member 'FAnimNode_RotationOffsetBlendSpace::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp) == 0x0000DC, "Member 'FAnimNode_RotationOffsetBlendSpace::AlphaScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaInputType) == 0x000110, "Member 'FAnimNode_RotationOffsetBlendSpace::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, bAlphaBoolEnabled) == 0x000111, "Member 'FAnimNode_RotationOffsetBlendSpace::bAlphaBoolEnabled' has a wrong offset!");

struct FAnimNode_Slot final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Source;
	class FName                                   SlotName;
	bool                                          bAlwaysUpdateSourcePose;
	uint8                                         Pad_25[0x23];
};
static_assert(alignof(FAnimNode_Slot) == 0x000008, "Wrong alignment on FAnimNode_Slot");
static_assert(sizeof(FAnimNode_Slot) == 0x000048, "Wrong size on FAnimNode_Slot");
static_assert(offsetof(FAnimNode_Slot, Source) == 0x000010, "Member 'FAnimNode_Slot::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_Slot, SlotName) == 0x000020, "Member 'FAnimNode_Slot::SlotName' has a wrong offset!");
static_assert(offsetof(FAnimNode_Slot, bAlwaysUpdateSourcePose) == 0x000024, "Member 'FAnimNode_Slot::bAlwaysUpdateSourcePose' has a wrong offset!");

struct FAnimNode_Sync final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Source;
	class FName                                   GroupName;
	EAnimGroupRole                                GroupRole;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(FAnimNode_Sync) == 0x000008, "Wrong alignment on FAnimNode_Sync");
static_assert(sizeof(FAnimNode_Sync) == 0x000028, "Wrong size on FAnimNode_Sync");
static_assert(offsetof(FAnimNode_Sync, Source) == 0x000010, "Member 'FAnimNode_Sync::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_Sync, GroupName) == 0x000020, "Member 'FAnimNode_Sync::GroupName' has a wrong offset!");
static_assert(offsetof(FAnimNode_Sync, GroupRole) == 0x000024, "Member 'FAnimNode_Sync::GroupRole' has a wrong offset!");

struct FAnimNode_TwoWayBlend final : public FAnimNode_Base
{
public:
	struct FPoseLink                              A;
	struct FPoseLink                              B;
	EAnimAlphaInputType                           AlphaInputType;
	uint8                                         bAlphaBoolEnabled : 1;
	uint8                                         BitPad_31_1 : 2;
	uint8                                         bResetChildOnActivation : 1;
	uint8                                         Pad_32[0x2];
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_BC[0x4];
};
static_assert(alignof(FAnimNode_TwoWayBlend) == 0x000008, "Wrong alignment on FAnimNode_TwoWayBlend");
static_assert(sizeof(FAnimNode_TwoWayBlend) == 0x0000C0, "Wrong size on FAnimNode_TwoWayBlend");
static_assert(offsetof(FAnimNode_TwoWayBlend, A) == 0x000010, "Member 'FAnimNode_TwoWayBlend::A' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, B) == 0x000020, "Member 'FAnimNode_TwoWayBlend::B' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaInputType) == 0x000030, "Member 'FAnimNode_TwoWayBlend::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, Alpha) == 0x000034, "Member 'FAnimNode_TwoWayBlend::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias) == 0x000038, "Member 'FAnimNode_TwoWayBlend::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaBoolBlend) == 0x000040, "Member 'FAnimNode_TwoWayBlend::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaCurveName) == 0x000088, "Member 'FAnimNode_TwoWayBlend::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp) == 0x00008C, "Member 'FAnimNode_TwoWayBlend::AlphaScaleBiasClamp' has a wrong offset!");

struct FAnimSequencerInstanceProxy final : public FAnimInstanceProxy
{
public:
	uint8                                         Pad_878[0x458];
};
static_assert(alignof(FAnimSequencerInstanceProxy) == 0x000010, "Wrong alignment on FAnimSequencerInstanceProxy");
static_assert(sizeof(FAnimSequencerInstanceProxy) == 0x000CD0, "Wrong size on FAnimSequencerInstanceProxy");

struct FBlendListBaseReference final : public FAnimNodeReference
{
};
static_assert(alignof(FBlendListBaseReference) == 0x000008, "Wrong alignment on FBlendListBaseReference");
static_assert(sizeof(FBlendListBaseReference) == 0x000010, "Wrong size on FBlendListBaseReference");

struct FBlendSpacePlayerReference final : public FAnimNodeReference
{
};
static_assert(alignof(FBlendSpacePlayerReference) == 0x000008, "Wrong alignment on FBlendSpacePlayerReference");
static_assert(sizeof(FBlendSpacePlayerReference) == 0x000010, "Wrong size on FBlendSpacePlayerReference");

struct FAnimPhysSphericalLimit final
{
public:
	struct FBoneReference                         DrivingBone;
	uint8                                         Pad_C[0x4];
	struct FVector                                SphereLocalOffset;
	float                                         LimitRadius;
	ESphericalLimitType                           LimitType;
	uint8                                         Pad_2D[0x3];
};
static_assert(alignof(FAnimPhysSphericalLimit) == 0x000008, "Wrong alignment on FAnimPhysSphericalLimit");
static_assert(sizeof(FAnimPhysSphericalLimit) == 0x000030, "Wrong size on FAnimPhysSphericalLimit");
static_assert(offsetof(FAnimPhysSphericalLimit, DrivingBone) == 0x000000, "Member 'FAnimPhysSphericalLimit::DrivingBone' has a wrong offset!");
static_assert(offsetof(FAnimPhysSphericalLimit, SphereLocalOffset) == 0x000010, "Member 'FAnimPhysSphericalLimit::SphereLocalOffset' has a wrong offset!");
static_assert(offsetof(FAnimPhysSphericalLimit, LimitRadius) == 0x000028, "Member 'FAnimPhysSphericalLimit::LimitRadius' has a wrong offset!");
static_assert(offsetof(FAnimPhysSphericalLimit, LimitType) == 0x00002C, "Member 'FAnimPhysSphericalLimit::LimitType' has a wrong offset!");

struct FAnimPhysBodyDefinition final
{
public:
	struct FBoneReference                         BoundBone;
	uint8                                         Pad_C[0x4];
	struct FVector                                BoxExtents;
	struct FVector                                LocalJointOffset;
	struct FAnimPhysConstraintSetup               ConstraintSetup;
	EAnimPhysCollisionType                        CollisionType;
	uint8                                         Pad_C9[0x3];
	float                                         SphereCollisionRadius;
};
static_assert(alignof(FAnimPhysBodyDefinition) == 0x000008, "Wrong alignment on FAnimPhysBodyDefinition");
static_assert(sizeof(FAnimPhysBodyDefinition) == 0x0000D0, "Wrong size on FAnimPhysBodyDefinition");
static_assert(offsetof(FAnimPhysBodyDefinition, BoundBone) == 0x000000, "Member 'FAnimPhysBodyDefinition::BoundBone' has a wrong offset!");
static_assert(offsetof(FAnimPhysBodyDefinition, BoxExtents) == 0x000010, "Member 'FAnimPhysBodyDefinition::BoxExtents' has a wrong offset!");
static_assert(offsetof(FAnimPhysBodyDefinition, LocalJointOffset) == 0x000028, "Member 'FAnimPhysBodyDefinition::LocalJointOffset' has a wrong offset!");
static_assert(offsetof(FAnimPhysBodyDefinition, ConstraintSetup) == 0x000040, "Member 'FAnimPhysBodyDefinition::ConstraintSetup' has a wrong offset!");
static_assert(offsetof(FAnimPhysBodyDefinition, CollisionType) == 0x0000C8, "Member 'FAnimPhysBodyDefinition::CollisionType' has a wrong offset!");
static_assert(offsetof(FAnimPhysBodyDefinition, SphereCollisionRadius) == 0x0000CC, "Member 'FAnimPhysBodyDefinition::SphereCollisionRadius' has a wrong offset!");

struct FAnimNode_AnimDynamics final : public FAnimNode_SkeletalControlBase
{
public:
	float                                         LinearDampingOverride;
	float                                         AngularDampingOverride;
	uint8                                         Pad_D0[0xC0];
	struct FBoneReference                         RelativeSpaceBone;
	struct FBoneReference                         BoundBone;
	struct FBoneReference                         ChainEnd;
	uint8                                         Pad_1B4[0x4];
	TArray<struct FAnimPhysBodyDefinition>        PhysicsBodyDefinitions;
	float                                         GravityScale;
	uint8                                         Pad_1CC[0x4];
	struct FVector                                GravityOverride;
	float                                         LinearSpringConstant;
	float                                         AngularSpringConstant;
	float                                         WindScale;
	uint8                                         Pad_1F4[0x4];
	struct FVector                                ComponentLinearAccScale;
	struct FVector                                ComponentLinearVelScale;
	struct FVector                                ComponentAppliedLinearAccClamp;
	float                                         AngularBiasOverride;
	int32                                         NumSolverIterationsPreUpdate;
	int32                                         NumSolverIterationsPostUpdate;
	uint8                                         Pad_24C[0x4];
	TArray<struct FAnimPhysSphericalLimit>        SphericalLimits;
	struct FVector                                ExternalForce;
	TArray<struct FAnimPhysPlanarLimit>           PlanarLimits;
	EAnimPhysSimSpaceType                         SimulationSpace;
	uint8                                         Pad_289[0x2];
	uint8                                         bUseSphericalLimits : 1;
	uint8                                         bUsePlanarLimit : 1;
	uint8                                         bDoUpdate : 1;
	uint8                                         bDoEval : 1;
	uint8                                         bOverrideLinearDamping : 1;
	uint8                                         bOverrideAngularBias : 1;
	uint8                                         bOverrideAngularDamping : 1;
	uint8                                         bEnableWind : 1;
	uint8                                         BitPad_28C_0 : 1;
	uint8                                         bUseGravityOverride : 1;
	uint8                                         bGravityOverrideInSimSpace : 1;
	uint8                                         bLinearSpring : 1;
	uint8                                         bAngularSpring : 1;
	uint8                                         bChain : 1;
	uint8                                         Pad_28D[0x3];
	struct FRotationRetargetingInfo               RetargetingSettings;
	uint8                                         Pad_430[0xE0];
};
static_assert(alignof(FAnimNode_AnimDynamics) == 0x000010, "Wrong alignment on FAnimNode_AnimDynamics");
static_assert(sizeof(FAnimNode_AnimDynamics) == 0x000510, "Wrong size on FAnimNode_AnimDynamics");
static_assert(offsetof(FAnimNode_AnimDynamics, LinearDampingOverride) == 0x0000C8, "Member 'FAnimNode_AnimDynamics::LinearDampingOverride' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularDampingOverride) == 0x0000CC, "Member 'FAnimNode_AnimDynamics::AngularDampingOverride' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone) == 0x000190, "Member 'FAnimNode_AnimDynamics::RelativeSpaceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, BoundBone) == 0x00019C, "Member 'FAnimNode_AnimDynamics::BoundBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, ChainEnd) == 0x0001A8, "Member 'FAnimNode_AnimDynamics::ChainEnd' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, PhysicsBodyDefinitions) == 0x0001B8, "Member 'FAnimNode_AnimDynamics::PhysicsBodyDefinitions' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, GravityScale) == 0x0001C8, "Member 'FAnimNode_AnimDynamics::GravityScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, GravityOverride) == 0x0001D0, "Member 'FAnimNode_AnimDynamics::GravityOverride' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, LinearSpringConstant) == 0x0001E8, "Member 'FAnimNode_AnimDynamics::LinearSpringConstant' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularSpringConstant) == 0x0001EC, "Member 'FAnimNode_AnimDynamics::AngularSpringConstant' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, WindScale) == 0x0001F0, "Member 'FAnimNode_AnimDynamics::WindScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearAccScale) == 0x0001F8, "Member 'FAnimNode_AnimDynamics::ComponentLinearAccScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearVelScale) == 0x000210, "Member 'FAnimNode_AnimDynamics::ComponentLinearVelScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp) == 0x000228, "Member 'FAnimNode_AnimDynamics::ComponentAppliedLinearAccClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularBiasOverride) == 0x000240, "Member 'FAnimNode_AnimDynamics::AngularBiasOverride' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate) == 0x000244, "Member 'FAnimNode_AnimDynamics::NumSolverIterationsPreUpdate' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate) == 0x000248, "Member 'FAnimNode_AnimDynamics::NumSolverIterationsPostUpdate' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, SphericalLimits) == 0x000250, "Member 'FAnimNode_AnimDynamics::SphericalLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, ExternalForce) == 0x000260, "Member 'FAnimNode_AnimDynamics::ExternalForce' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, PlanarLimits) == 0x000278, "Member 'FAnimNode_AnimDynamics::PlanarLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, SimulationSpace) == 0x000288, "Member 'FAnimNode_AnimDynamics::SimulationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_AnimDynamics, RetargetingSettings) == 0x000290, "Member 'FAnimNode_AnimDynamics::RetargetingSettings' has a wrong offset!");

struct FAnimNode_ApplyLimits final : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>             AngularRangeLimits;
	TArray<struct FVector>                        AngularOffsets;
};
static_assert(alignof(FAnimNode_ApplyLimits) == 0x000008, "Wrong alignment on FAnimNode_ApplyLimits");
static_assert(sizeof(FAnimNode_ApplyLimits) == 0x0000E8, "Wrong size on FAnimNode_ApplyLimits");
static_assert(offsetof(FAnimNode_ApplyLimits, AngularRangeLimits) == 0x0000C8, "Member 'FAnimNode_ApplyLimits::AngularRangeLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_ApplyLimits, AngularOffsets) == 0x0000D8, "Member 'FAnimNode_ApplyLimits::AngularOffsets' has a wrong offset!");

struct FAnimNode_CCDIK final : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                                EffectorLocation;
	EBoneControlSpace                             EffectorLocationSpace;
	uint8                                         Pad_E1[0xF];
	struct FBoneSocketTarget                      EffectorTarget;
	struct FBoneReference                         TipBone;
	struct FBoneReference                         RootBone;
	float                                         Precision;
	int32                                         MaxIterations;
	bool                                          bStartFromTail;
	bool                                          bEnableRotationLimit;
	uint8                                         Pad_192[0x6];
	TArray<float>                                 RotationLimitPerJoints;
	uint8                                         Pad_1A8[0x8];
};
static_assert(alignof(FAnimNode_CCDIK) == 0x000010, "Wrong alignment on FAnimNode_CCDIK");
static_assert(sizeof(FAnimNode_CCDIK) == 0x0001B0, "Wrong size on FAnimNode_CCDIK");
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocation) == 0x0000C8, "Member 'FAnimNode_CCDIK::EffectorLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocationSpace) == 0x0000E0, "Member 'FAnimNode_CCDIK::EffectorLocationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, EffectorTarget) == 0x0000F0, "Member 'FAnimNode_CCDIK::EffectorTarget' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, TipBone) == 0x000170, "Member 'FAnimNode_CCDIK::TipBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, RootBone) == 0x00017C, "Member 'FAnimNode_CCDIK::RootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, Precision) == 0x000188, "Member 'FAnimNode_CCDIK::Precision' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, MaxIterations) == 0x00018C, "Member 'FAnimNode_CCDIK::MaxIterations' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, bStartFromTail) == 0x000190, "Member 'FAnimNode_CCDIK::bStartFromTail' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, bEnableRotationLimit) == 0x000191, "Member 'FAnimNode_CCDIK::bEnableRotationLimit' has a wrong offset!");
static_assert(offsetof(FAnimNode_CCDIK, RotationLimitPerJoints) == 0x000198, "Member 'FAnimNode_CCDIK::RotationLimitPerJoints' has a wrong offset!");

struct FConstraint final
{
public:
	struct FBoneReference                         TargetBone;
	EConstraintOffsetOption                       OffsetOption;
	ETransformConstraintType                      TransformType;
	struct FFilterOptionPerAxis                   PerAxis;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FConstraint) == 0x000004, "Wrong alignment on FConstraint");
static_assert(sizeof(FConstraint) == 0x000018, "Wrong size on FConstraint");
static_assert(offsetof(FConstraint, TargetBone) == 0x000000, "Member 'FConstraint::TargetBone' has a wrong offset!");
static_assert(offsetof(FConstraint, OffsetOption) == 0x00000C, "Member 'FConstraint::OffsetOption' has a wrong offset!");
static_assert(offsetof(FConstraint, TransformType) == 0x00000D, "Member 'FConstraint::TransformType' has a wrong offset!");
static_assert(offsetof(FConstraint, PerAxis) == 0x00000E, "Member 'FConstraint::PerAxis' has a wrong offset!");

struct FAnimNode_Constraint final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToModify;
	uint8                                         Pad_D4[0x4];
	TArray<struct FConstraint>                    ConstraintSetup;
	TArray<float>                                 ConstraintWeights;
	uint8                                         Pad_F8[0x10];
};
static_assert(alignof(FAnimNode_Constraint) == 0x000008, "Wrong alignment on FAnimNode_Constraint");
static_assert(sizeof(FAnimNode_Constraint) == 0x000108, "Wrong size on FAnimNode_Constraint");
static_assert(offsetof(FAnimNode_Constraint, BoneToModify) == 0x0000C8, "Member 'FAnimNode_Constraint::BoneToModify' has a wrong offset!");
static_assert(offsetof(FAnimNode_Constraint, ConstraintSetup) == 0x0000D8, "Member 'FAnimNode_Constraint::ConstraintSetup' has a wrong offset!");
static_assert(offsetof(FAnimNode_Constraint, ConstraintWeights) == 0x0000E8, "Member 'FAnimNode_Constraint::ConstraintWeights' has a wrong offset!");

struct FAnimNode_CopyBone final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         SourceBone;
	struct FBoneReference                         TargetBone;
	bool                                          bCopyTranslation;
	bool                                          bCopyRotation;
	bool                                          bCopyScale;
	EBoneControlSpace                             ControlSpace;
	uint8                                         Pad_E4[0x4];
};
static_assert(alignof(FAnimNode_CopyBone) == 0x000008, "Wrong alignment on FAnimNode_CopyBone");
static_assert(sizeof(FAnimNode_CopyBone) == 0x0000E8, "Wrong size on FAnimNode_CopyBone");
static_assert(offsetof(FAnimNode_CopyBone, SourceBone) == 0x0000C8, "Member 'FAnimNode_CopyBone::SourceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBone, TargetBone) == 0x0000D4, "Member 'FAnimNode_CopyBone::TargetBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBone, bCopyTranslation) == 0x0000E0, "Member 'FAnimNode_CopyBone::bCopyTranslation' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBone, bCopyRotation) == 0x0000E1, "Member 'FAnimNode_CopyBone::bCopyRotation' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBone, bCopyScale) == 0x0000E2, "Member 'FAnimNode_CopyBone::bCopyScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBone, ControlSpace) == 0x0000E3, "Member 'FAnimNode_CopyBone::ControlSpace' has a wrong offset!");

struct FAnimNode_CopyBoneDelta final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         SourceBone;
	struct FBoneReference                         TargetBone;
	bool                                          bCopyTranslation;
	bool                                          bCopyRotation;
	bool                                          bCopyScale;
	ECopyBoneDeltaMode                            CopyMode;
	float                                         TranslationMultiplier;
	float                                         RotationMultiplier;
	float                                         ScaleMultiplier;
};
static_assert(alignof(FAnimNode_CopyBoneDelta) == 0x000008, "Wrong alignment on FAnimNode_CopyBoneDelta");
static_assert(sizeof(FAnimNode_CopyBoneDelta) == 0x0000F0, "Wrong size on FAnimNode_CopyBoneDelta");
static_assert(offsetof(FAnimNode_CopyBoneDelta, SourceBone) == 0x0000C8, "Member 'FAnimNode_CopyBoneDelta::SourceBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, TargetBone) == 0x0000D4, "Member 'FAnimNode_CopyBoneDelta::TargetBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyTranslation) == 0x0000E0, "Member 'FAnimNode_CopyBoneDelta::bCopyTranslation' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyRotation) == 0x0000E1, "Member 'FAnimNode_CopyBoneDelta::bCopyRotation' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyScale) == 0x0000E2, "Member 'FAnimNode_CopyBoneDelta::bCopyScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, CopyMode) == 0x0000E3, "Member 'FAnimNode_CopyBoneDelta::CopyMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, TranslationMultiplier) == 0x0000E4, "Member 'FAnimNode_CopyBoneDelta::TranslationMultiplier' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, RotationMultiplier) == 0x0000E8, "Member 'FAnimNode_CopyBoneDelta::RotationMultiplier' has a wrong offset!");
static_assert(offsetof(FAnimNode_CopyBoneDelta, ScaleMultiplier) == 0x0000EC, "Member 'FAnimNode_CopyBoneDelta::ScaleMultiplier' has a wrong offset!");

struct FAnimNode_Fabrik final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0x8];
	struct FTransform                             EffectorTransform;
	struct FBoneSocketTarget                      EffectorTarget;
	struct FBoneReference                         TipBone;
	struct FBoneReference                         RootBone;
	float                                         Precision;
	int32                                         MaxIterations;
	EBoneControlSpace                             EffectorTransformSpace;
	EBoneRotationSource                           EffectorRotationSource;
	uint8                                         Pad_1D2[0xE];
};
static_assert(alignof(FAnimNode_Fabrik) == 0x000010, "Wrong alignment on FAnimNode_Fabrik");
static_assert(sizeof(FAnimNode_Fabrik) == 0x0001E0, "Wrong size on FAnimNode_Fabrik");
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransform) == 0x0000D0, "Member 'FAnimNode_Fabrik::EffectorTransform' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, EffectorTarget) == 0x000130, "Member 'FAnimNode_Fabrik::EffectorTarget' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, TipBone) == 0x0001B0, "Member 'FAnimNode_Fabrik::TipBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, RootBone) == 0x0001BC, "Member 'FAnimNode_Fabrik::RootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, Precision) == 0x0001C8, "Member 'FAnimNode_Fabrik::Precision' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, MaxIterations) == 0x0001CC, "Member 'FAnimNode_Fabrik::MaxIterations' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransformSpace) == 0x0001D0, "Member 'FAnimNode_Fabrik::EffectorTransformSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_Fabrik, EffectorRotationSource) == 0x0001D1, "Member 'FAnimNode_Fabrik::EffectorRotationSource' has a wrong offset!");

struct FAnimNode_HandIKRetargeting final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         RightHandFK;
	struct FBoneReference                         LeftHandFK;
	struct FBoneReference                         RightHandIK;
	struct FBoneReference                         LeftHandIK;
	TArray<struct FBoneReference>                 IKBonesToMove;
	float                                         HandFKWeight;
	uint8                                         Pad_10C[0x4];
};
static_assert(alignof(FAnimNode_HandIKRetargeting) == 0x000008, "Wrong alignment on FAnimNode_HandIKRetargeting");
static_assert(sizeof(FAnimNode_HandIKRetargeting) == 0x000110, "Wrong size on FAnimNode_HandIKRetargeting");
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandFK) == 0x0000C8, "Member 'FAnimNode_HandIKRetargeting::RightHandFK' has a wrong offset!");
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandFK) == 0x0000D4, "Member 'FAnimNode_HandIKRetargeting::LeftHandFK' has a wrong offset!");
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandIK) == 0x0000E0, "Member 'FAnimNode_HandIKRetargeting::RightHandIK' has a wrong offset!");
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandIK) == 0x0000EC, "Member 'FAnimNode_HandIKRetargeting::LeftHandIK' has a wrong offset!");
static_assert(offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove) == 0x0000F8, "Member 'FAnimNode_HandIKRetargeting::IKBonesToMove' has a wrong offset!");
static_assert(offsetof(FAnimNode_HandIKRetargeting, HandFKWeight) == 0x000108, "Member 'FAnimNode_HandIKRetargeting::HandFKWeight' has a wrong offset!");

struct alignas(0x08) FIKChainLink final
{
public:
	uint8                                         Pad_0[0x70];
};
static_assert(alignof(FIKChainLink) == 0x000008, "Wrong alignment on FIKChainLink");
static_assert(sizeof(FIKChainLink) == 0x000070, "Wrong size on FIKChainLink");

struct alignas(0x08) FIKChain final
{
public:
	uint8                                         Pad_0[0x48];
};
static_assert(alignof(FIKChain) == 0x000008, "Wrong alignment on FIKChain");
static_assert(sizeof(FIKChain) == 0x000048, "Wrong size on FIKChain");

struct FAnimLegIKDefinition final
{
public:
	struct FBoneReference                         IKFootBone;
	struct FBoneReference                         FKFootBone;
	int32                                         NumBonesInLimb;
	float                                         MinRotationAngle;
	EAxis                                         FootBoneForwardAxis;
	EAxis                                         HingeRotationAxis;
	bool                                          bEnableRotationLimit;
	bool                                          bEnableKneeTwistCorrection;
};
static_assert(alignof(FAnimLegIKDefinition) == 0x000004, "Wrong alignment on FAnimLegIKDefinition");
static_assert(sizeof(FAnimLegIKDefinition) == 0x000024, "Wrong size on FAnimLegIKDefinition");
static_assert(offsetof(FAnimLegIKDefinition, IKFootBone) == 0x000000, "Member 'FAnimLegIKDefinition::IKFootBone' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, FKFootBone) == 0x00000C, "Member 'FAnimLegIKDefinition::FKFootBone' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, NumBonesInLimb) == 0x000018, "Member 'FAnimLegIKDefinition::NumBonesInLimb' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, MinRotationAngle) == 0x00001C, "Member 'FAnimLegIKDefinition::MinRotationAngle' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, FootBoneForwardAxis) == 0x000020, "Member 'FAnimLegIKDefinition::FootBoneForwardAxis' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, HingeRotationAxis) == 0x000021, "Member 'FAnimLegIKDefinition::HingeRotationAxis' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, bEnableRotationLimit) == 0x000022, "Member 'FAnimLegIKDefinition::bEnableRotationLimit' has a wrong offset!");
static_assert(offsetof(FAnimLegIKDefinition, bEnableKneeTwistCorrection) == 0x000023, "Member 'FAnimLegIKDefinition::bEnableKneeTwistCorrection' has a wrong offset!");

struct alignas(0x10) FAnimLegIKData final
{
public:
	uint8                                         Pad_0[0xE0];
};
static_assert(alignof(FAnimLegIKData) == 0x000010, "Wrong alignment on FAnimLegIKData");
static_assert(sizeof(FAnimLegIKData) == 0x0000E0, "Wrong size on FAnimLegIKData");

struct FAnimNode_LegIK final : public FAnimNode_SkeletalControlBase
{
public:
	float                                         ReachPrecision;
	int32                                         MaxIterations;
	TArray<struct FAnimLegIKDefinition>           LegsDefinition;
	uint8                                         Pad_E0[0x18];
};
static_assert(alignof(FAnimNode_LegIK) == 0x000008, "Wrong alignment on FAnimNode_LegIK");
static_assert(sizeof(FAnimNode_LegIK) == 0x0000F8, "Wrong size on FAnimNode_LegIK");
static_assert(offsetof(FAnimNode_LegIK, ReachPrecision) == 0x0000C8, "Member 'FAnimNode_LegIK::ReachPrecision' has a wrong offset!");
static_assert(offsetof(FAnimNode_LegIK, MaxIterations) == 0x0000CC, "Member 'FAnimNode_LegIK::MaxIterations' has a wrong offset!");
static_assert(offsetof(FAnimNode_LegIK, LegsDefinition) == 0x0000D0, "Member 'FAnimNode_LegIK::LegsDefinition' has a wrong offset!");

#pragma pack(push, 0x1)
struct alignas(0x10) FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToModify;
	uint8                                         Pad_D4[0xC];
	struct FBoneSocketTarget                      LookAtTarget;
	struct FVector                                LookAtLocation;
	struct FAxis                                  LookAt_Axis;
	bool                                          bUseLookUpAxis;
	EInterpolationBlend                           InterpolationType;
	uint8                                         Pad_19A[0x6];
	struct FAxis                                  LookUp_Axis;
	float                                         LookAtClamp;
	float                                         InterpolationTime;
	float                                         InterpolationTriggerThreashold;
	uint8                                         Pad_1CC[0x6C];
};
#pragma pack(pop)
static_assert(alignof(FAnimNode_LookAt) == 0x000010, "Wrong alignment on FAnimNode_LookAt");
static_assert(sizeof(FAnimNode_LookAt) == 0x000240, "Wrong size on FAnimNode_LookAt");
static_assert(offsetof(FAnimNode_LookAt, BoneToModify) == 0x0000C8, "Member 'FAnimNode_LookAt::BoneToModify' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, LookAtTarget) == 0x0000E0, "Member 'FAnimNode_LookAt::LookAtTarget' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, LookAtLocation) == 0x000160, "Member 'FAnimNode_LookAt::LookAtLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, LookAt_Axis) == 0x000178, "Member 'FAnimNode_LookAt::LookAt_Axis' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, bUseLookUpAxis) == 0x000198, "Member 'FAnimNode_LookAt::bUseLookUpAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, InterpolationType) == 0x000199, "Member 'FAnimNode_LookAt::InterpolationType' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, LookUp_Axis) == 0x0001A0, "Member 'FAnimNode_LookAt::LookUp_Axis' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, LookAtClamp) == 0x0001C0, "Member 'FAnimNode_LookAt::LookAtClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, InterpolationTime) == 0x0001C4, "Member 'FAnimNode_LookAt::InterpolationTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_LookAt, InterpolationTriggerThreashold) == 0x0001C8, "Member 'FAnimNode_LookAt::InterpolationTriggerThreashold' has a wrong offset!");

struct FAnimNode_ObserveBone final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToObserve;
	EBoneControlSpace                             DisplaySpace;
	bool                                          bRelativeToRefPose;
	uint8                                         Pad_D6[0x2];
	struct FVector                                Translation;
	struct FRotator                               Rotation;
	struct FVector                                Scale;
};
static_assert(alignof(FAnimNode_ObserveBone) == 0x000008, "Wrong alignment on FAnimNode_ObserveBone");
static_assert(sizeof(FAnimNode_ObserveBone) == 0x000120, "Wrong size on FAnimNode_ObserveBone");
static_assert(offsetof(FAnimNode_ObserveBone, BoneToObserve) == 0x0000C8, "Member 'FAnimNode_ObserveBone::BoneToObserve' has a wrong offset!");
static_assert(offsetof(FAnimNode_ObserveBone, DisplaySpace) == 0x0000D4, "Member 'FAnimNode_ObserveBone::DisplaySpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_ObserveBone, bRelativeToRefPose) == 0x0000D5, "Member 'FAnimNode_ObserveBone::bRelativeToRefPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_ObserveBone, Translation) == 0x0000D8, "Member 'FAnimNode_ObserveBone::Translation' has a wrong offset!");
static_assert(offsetof(FAnimNode_ObserveBone, Rotation) == 0x0000F0, "Member 'FAnimNode_ObserveBone::Rotation' has a wrong offset!");
static_assert(offsetof(FAnimNode_ObserveBone, Scale) == 0x000108, "Member 'FAnimNode_ObserveBone::Scale' has a wrong offset!");

struct FAnimNode_ResetRoot final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0x10];
};
static_assert(alignof(FAnimNode_ResetRoot) == 0x000008, "Wrong alignment on FAnimNode_ResetRoot");
static_assert(sizeof(FAnimNode_ResetRoot) == 0x0000D8, "Wrong size on FAnimNode_ResetRoot");

struct FSimSpaceSettings final
{
public:
	float                                         WorldAlpha;
	float                                         VelocityScaleZ;
	float                                         MaxLinearVelocity;
	float                                         MaxAngularVelocity;
	float                                         MaxLinearAcceleration;
	float                                         MaxAngularAcceleration;
	float                                         ExternalLinearDrag;
	uint8                                         Pad_1C[0x4];
	struct FVector                                ExternalLinearDragV;
	struct FVector                                ExternalLinearVelocity;
	struct FVector                                ExternalAngularVelocity;
};
static_assert(alignof(FSimSpaceSettings) == 0x000008, "Wrong alignment on FSimSpaceSettings");
static_assert(sizeof(FSimSpaceSettings) == 0x000068, "Wrong size on FSimSpaceSettings");
static_assert(offsetof(FSimSpaceSettings, WorldAlpha) == 0x000000, "Member 'FSimSpaceSettings::WorldAlpha' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, VelocityScaleZ) == 0x000004, "Member 'FSimSpaceSettings::VelocityScaleZ' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, MaxLinearVelocity) == 0x000008, "Member 'FSimSpaceSettings::MaxLinearVelocity' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, MaxAngularVelocity) == 0x00000C, "Member 'FSimSpaceSettings::MaxAngularVelocity' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, MaxLinearAcceleration) == 0x000010, "Member 'FSimSpaceSettings::MaxLinearAcceleration' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, MaxAngularAcceleration) == 0x000014, "Member 'FSimSpaceSettings::MaxAngularAcceleration' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDrag) == 0x000018, "Member 'FSimSpaceSettings::ExternalLinearDrag' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDragV) == 0x000020, "Member 'FSimSpaceSettings::ExternalLinearDragV' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, ExternalLinearVelocity) == 0x000038, "Member 'FSimSpaceSettings::ExternalLinearVelocity' has a wrong offset!");
static_assert(offsetof(FSimSpaceSettings, ExternalAngularVelocity) == 0x000050, "Member 'FSimSpaceSettings::ExternalAngularVelocity' has a wrong offset!");

struct alignas(0x10) FAnimNode_RigidBody final : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                          OverridePhysicsAsset;
	uint8                                         Pad_D0[0x128];
	struct FVector                                OverrideWorldGravity;
	struct FVector                                ExternalForce;
	struct FVector                                ComponentLinearAccScale;
	struct FVector                                ComponentLinearVelScale;
	struct FVector                                ComponentAppliedLinearAccClamp;
	struct FSimSpaceSettings                      SimSpaceSettings;
	float                                         CachedBoundsScale;
	struct FBoneReference                         BaseBoneRef;
	ECollisionChannel                             OverlapChannel;
	ESimulationSpace                              SimulationSpace;
	bool                                          bForceDisableCollisionBetweenConstraintBodies;
	bool                                          bUseExternalClothCollision;
	uint8                                         Pad_2EC[0x1];
	uint8                                         bEnableWorldGeometry : 1;
	uint8                                         bOverrideWorldGravity : 1;
	uint8                                         bTransferBoneVelocities : 1;
	uint8                                         bFreezeIncomingPoseOnStart : 1;
	uint8                                         bClampLinearTranslationLimitToRefPose : 1;
	uint8                                         Pad_2EE[0x2];
	float                                         WorldSpaceMinimumScale;
	float                                         EvaluationResetTime;
	uint8                                         Pad_2F8[0x1];
	ESimulationTiming                             SimulationTiming;
	uint8                                         Pad_2FA[0x696];
};
static_assert(alignof(FAnimNode_RigidBody) == 0x000010, "Wrong alignment on FAnimNode_RigidBody");
static_assert(sizeof(FAnimNode_RigidBody) == 0x000990, "Wrong size on FAnimNode_RigidBody");
static_assert(offsetof(FAnimNode_RigidBody, OverridePhysicsAsset) == 0x0000C8, "Member 'FAnimNode_RigidBody::OverridePhysicsAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, OverrideWorldGravity) == 0x0001F8, "Member 'FAnimNode_RigidBody::OverrideWorldGravity' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, ExternalForce) == 0x000210, "Member 'FAnimNode_RigidBody::ExternalForce' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearAccScale) == 0x000228, "Member 'FAnimNode_RigidBody::ComponentLinearAccScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearVelScale) == 0x000240, "Member 'FAnimNode_RigidBody::ComponentLinearVelScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp) == 0x000258, "Member 'FAnimNode_RigidBody::ComponentAppliedLinearAccClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, SimSpaceSettings) == 0x000270, "Member 'FAnimNode_RigidBody::SimSpaceSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, CachedBoundsScale) == 0x0002D8, "Member 'FAnimNode_RigidBody::CachedBoundsScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, BaseBoneRef) == 0x0002DC, "Member 'FAnimNode_RigidBody::BaseBoneRef' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, OverlapChannel) == 0x0002E8, "Member 'FAnimNode_RigidBody::OverlapChannel' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, SimulationSpace) == 0x0002E9, "Member 'FAnimNode_RigidBody::SimulationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, bForceDisableCollisionBetweenConstraintBodies) == 0x0002EA, "Member 'FAnimNode_RigidBody::bForceDisableCollisionBetweenConstraintBodies' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, bUseExternalClothCollision) == 0x0002EB, "Member 'FAnimNode_RigidBody::bUseExternalClothCollision' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, WorldSpaceMinimumScale) == 0x0002F0, "Member 'FAnimNode_RigidBody::WorldSpaceMinimumScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, EvaluationResetTime) == 0x0002F4, "Member 'FAnimNode_RigidBody::EvaluationResetTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_RigidBody, SimulationTiming) == 0x0002F9, "Member 'FAnimNode_RigidBody::SimulationTiming' has a wrong offset!");

struct FAnimNode_ScaleChainLength final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;
	float                                         DefaultChainLength;
	struct FBoneReference                         ChainStartBone;
	struct FBoneReference                         ChainEndBone;
	uint8                                         Pad_3C[0x4];
	struct FVector                                TargetLocation;
	float                                         Alpha;
	uint8                                         Pad_5C[0x4];
	struct FInputScaleBias                        AlphaScaleBias;
	EScaleChainInitialLength                      ChainInitialLength;
	uint8                                         Pad_69[0x17];
};
static_assert(alignof(FAnimNode_ScaleChainLength) == 0x000008, "Wrong alignment on FAnimNode_ScaleChainLength");
static_assert(sizeof(FAnimNode_ScaleChainLength) == 0x000080, "Wrong size on FAnimNode_ScaleChainLength");
static_assert(offsetof(FAnimNode_ScaleChainLength, InputPose) == 0x000010, "Member 'FAnimNode_ScaleChainLength::InputPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, DefaultChainLength) == 0x000020, "Member 'FAnimNode_ScaleChainLength::DefaultChainLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainStartBone) == 0x000024, "Member 'FAnimNode_ScaleChainLength::ChainStartBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainEndBone) == 0x000030, "Member 'FAnimNode_ScaleChainLength::ChainEndBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, TargetLocation) == 0x000040, "Member 'FAnimNode_ScaleChainLength::TargetLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, Alpha) == 0x000058, "Member 'FAnimNode_ScaleChainLength::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias) == 0x000060, "Member 'FAnimNode_ScaleChainLength::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainInitialLength) == 0x000068, "Member 'FAnimNode_ScaleChainLength::ChainInitialLength' has a wrong offset!");

struct FSplineIKCachedBoneData final
{
public:
	struct FBoneReference                         bone;
	int32                                         RefSkeletonIndex;
};
static_assert(alignof(FSplineIKCachedBoneData) == 0x000004, "Wrong alignment on FSplineIKCachedBoneData");
static_assert(sizeof(FSplineIKCachedBoneData) == 0x000010, "Wrong size on FSplineIKCachedBoneData");
static_assert(offsetof(FSplineIKCachedBoneData, bone) == 0x000000, "Member 'FSplineIKCachedBoneData::bone' has a wrong offset!");
static_assert(offsetof(FSplineIKCachedBoneData, RefSkeletonIndex) == 0x00000C, "Member 'FSplineIKCachedBoneData::RefSkeletonIndex' has a wrong offset!");

struct FAnimNode_SplineIK final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         StartBone;
	struct FBoneReference                         EndBone;
	ESplineBoneAxis                               BoneAxis;
	bool                                          bAutoCalculateSpline;
	uint8                                         Pad_E2[0x2];
	int32                                         PointCount;
	TArray<struct FTransform>                     ControlPoints;
	float                                         Roll;
	float                                         TwistStart;
	float                                         TwistEnd;
	uint8                                         Pad_104[0x4];
	struct FAlphaBlend                            TwistBlend;
	float                                         Stretch;
	float                                         Offset;
	uint8                                         Pad_140[0x128];
};
static_assert(alignof(FAnimNode_SplineIK) == 0x000008, "Wrong alignment on FAnimNode_SplineIK");
static_assert(sizeof(FAnimNode_SplineIK) == 0x000268, "Wrong size on FAnimNode_SplineIK");
static_assert(offsetof(FAnimNode_SplineIK, StartBone) == 0x0000C8, "Member 'FAnimNode_SplineIK::StartBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, EndBone) == 0x0000D4, "Member 'FAnimNode_SplineIK::EndBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, BoneAxis) == 0x0000E0, "Member 'FAnimNode_SplineIK::BoneAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, bAutoCalculateSpline) == 0x0000E1, "Member 'FAnimNode_SplineIK::bAutoCalculateSpline' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, PointCount) == 0x0000E4, "Member 'FAnimNode_SplineIK::PointCount' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, ControlPoints) == 0x0000E8, "Member 'FAnimNode_SplineIK::ControlPoints' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, Roll) == 0x0000F8, "Member 'FAnimNode_SplineIK::Roll' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, TwistStart) == 0x0000FC, "Member 'FAnimNode_SplineIK::TwistStart' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, TwistEnd) == 0x000100, "Member 'FAnimNode_SplineIK::TwistEnd' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, TwistBlend) == 0x000108, "Member 'FAnimNode_SplineIK::TwistBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, Stretch) == 0x000138, "Member 'FAnimNode_SplineIK::Stretch' has a wrong offset!");
static_assert(offsetof(FAnimNode_SplineIK, Offset) == 0x00013C, "Member 'FAnimNode_SplineIK::Offset' has a wrong offset!");

struct FAnimNode_SpringBone final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         SpringBone;
	float                                         MaxDisplacement;
	float                                         SpringStiffness;
	float                                         SpringDamping;
	float                                         ErrorResetThresh;
	uint8                                         Pad_E4[0x70];
	uint8                                         bLimitDisplacement : 1;
	uint8                                         bTranslateX : 1;
	uint8                                         bTranslateY : 1;
	uint8                                         bTranslateZ : 1;
	uint8                                         bRotateX : 1;
	uint8                                         bRotateY : 1;
	uint8                                         bRotateZ : 1;
	uint8                                         Pad_155[0x3];
};
static_assert(alignof(FAnimNode_SpringBone) == 0x000008, "Wrong alignment on FAnimNode_SpringBone");
static_assert(sizeof(FAnimNode_SpringBone) == 0x000158, "Wrong size on FAnimNode_SpringBone");
static_assert(offsetof(FAnimNode_SpringBone, SpringBone) == 0x0000C8, "Member 'FAnimNode_SpringBone::SpringBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SpringBone, MaxDisplacement) == 0x0000D4, "Member 'FAnimNode_SpringBone::MaxDisplacement' has a wrong offset!");
static_assert(offsetof(FAnimNode_SpringBone, SpringStiffness) == 0x0000D8, "Member 'FAnimNode_SpringBone::SpringStiffness' has a wrong offset!");
static_assert(offsetof(FAnimNode_SpringBone, SpringDamping) == 0x0000DC, "Member 'FAnimNode_SpringBone::SpringDamping' has a wrong offset!");
static_assert(offsetof(FAnimNode_SpringBone, ErrorResetThresh) == 0x0000E0, "Member 'FAnimNode_SpringBone::ErrorResetThresh' has a wrong offset!");

struct FRotationLimit final
{
public:
	struct FVector                                LimitMin;
	struct FVector                                LimitMax;
};
static_assert(alignof(FRotationLimit) == 0x000008, "Wrong alignment on FRotationLimit");
static_assert(sizeof(FRotationLimit) == 0x000030, "Wrong size on FRotationLimit");
static_assert(offsetof(FRotationLimit, LimitMin) == 0x000000, "Member 'FRotationLimit::LimitMin' has a wrong offset!");
static_assert(offsetof(FRotationLimit, LimitMax) == 0x000018, "Member 'FRotationLimit::LimitMax' has a wrong offset!");

struct alignas(0x10) FAnimNode_Trail final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0x68];
	struct FBoneReference                         TrailBone;
	int32                                         ChainLength;
	EAxis                                         ChainBoneAxis;
	uint8                                         bInvertChainBoneAxis : 1;
	uint8                                         bLimitStretch : 1;
	uint8                                         bLimitRotation : 1;
	uint8                                         bUsePlanarLimit : 1;
	uint8                                         bActorSpaceFakeVel : 1;
	uint8                                         bReorientParentToChild : 1;
	uint8                                         Pad_142[0x2];
	float                                         MaxDeltaTime;
	float                                         RelaxationSpeedScale;
	uint8                                         Pad_14C[0x4];
	struct FRuntimeFloatCurve                     TrailRelaxationSpeed;
	struct FInputScaleBiasClamp                   RelaxationSpeedScaleInputProcessor;
	TArray<struct FRotationLimit>                 RotationLimits;
	TArray<struct FVector>                        RotationOffsets;
	TArray<struct FAnimPhysPlanarLimit>           PlanarLimits;
	float                                         StretchLimit;
	uint8                                         Pad_23C[0x4];
	struct FVector                                FakeVelocity;
	struct FBoneReference                         BaseJoint;
	float                                         LastBoneRotationAnimAlphaBlend;
	uint8                                         Pad_268[0x38];
};
static_assert(alignof(FAnimNode_Trail) == 0x000010, "Wrong alignment on FAnimNode_Trail");
static_assert(sizeof(FAnimNode_Trail) == 0x0002A0, "Wrong size on FAnimNode_Trail");
static_assert(offsetof(FAnimNode_Trail, TrailBone) == 0x000130, "Member 'FAnimNode_Trail::TrailBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, ChainLength) == 0x00013C, "Member 'FAnimNode_Trail::ChainLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, ChainBoneAxis) == 0x000140, "Member 'FAnimNode_Trail::ChainBoneAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, MaxDeltaTime) == 0x000144, "Member 'FAnimNode_Trail::MaxDeltaTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScale) == 0x000148, "Member 'FAnimNode_Trail::RelaxationSpeedScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, TrailRelaxationSpeed) == 0x000150, "Member 'FAnimNode_Trail::TrailRelaxationSpeed' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor) == 0x0001D8, "Member 'FAnimNode_Trail::RelaxationSpeedScaleInputProcessor' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, RotationLimits) == 0x000208, "Member 'FAnimNode_Trail::RotationLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, RotationOffsets) == 0x000218, "Member 'FAnimNode_Trail::RotationOffsets' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, PlanarLimits) == 0x000228, "Member 'FAnimNode_Trail::PlanarLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, StretchLimit) == 0x000238, "Member 'FAnimNode_Trail::StretchLimit' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, FakeVelocity) == 0x000240, "Member 'FAnimNode_Trail::FakeVelocity' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, BaseJoint) == 0x000258, "Member 'FAnimNode_Trail::BaseJoint' has a wrong offset!");
static_assert(offsetof(FAnimNode_Trail, LastBoneRotationAnimAlphaBlend) == 0x000264, "Member 'FAnimNode_Trail::LastBoneRotationAnimAlphaBlend' has a wrong offset!");

struct FAnimNode_TwoBoneIK final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         IKBone;
	float                                         StartStretchRatio;
	float                                         MaxStretchScale;
	uint8                                         Pad_DC[0x4];
	struct FVector                                EffectorLocation;
	uint8                                         Pad_F8[0x8];
	struct FBoneSocketTarget                      EffectorTarget;
	struct FVector                                JointTargetLocation;
	uint8                                         Pad_198[0x8];
	struct FBoneSocketTarget                      JointTarget;
	struct FAxis                                  TwistAxis;
	EBoneControlSpace                             EffectorLocationSpace;
	EBoneControlSpace                             JointTargetLocationSpace;
	uint8                                         bAllowStretching : 1;
	uint8                                         bTakeRotationFromEffectorSpace : 1;
	uint8                                         bMaintainEffectorRelRot : 1;
	uint8                                         bAllowTwist : 1;
	uint8                                         Pad_243[0xD];
};
static_assert(alignof(FAnimNode_TwoBoneIK) == 0x000010, "Wrong alignment on FAnimNode_TwoBoneIK");
static_assert(sizeof(FAnimNode_TwoBoneIK) == 0x000250, "Wrong size on FAnimNode_TwoBoneIK");
static_assert(offsetof(FAnimNode_TwoBoneIK, IKBone) == 0x0000C8, "Member 'FAnimNode_TwoBoneIK::IKBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, StartStretchRatio) == 0x0000D4, "Member 'FAnimNode_TwoBoneIK::StartStretchRatio' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, MaxStretchScale) == 0x0000D8, "Member 'FAnimNode_TwoBoneIK::MaxStretchScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocation) == 0x0000E0, "Member 'FAnimNode_TwoBoneIK::EffectorLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorTarget) == 0x000100, "Member 'FAnimNode_TwoBoneIK::EffectorTarget' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocation) == 0x000180, "Member 'FAnimNode_TwoBoneIK::JointTargetLocation' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTarget) == 0x0001A0, "Member 'FAnimNode_TwoBoneIK::JointTarget' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, TwistAxis) == 0x000220, "Member 'FAnimNode_TwoBoneIK::TwistAxis' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace) == 0x000240, "Member 'FAnimNode_TwoBoneIK::EffectorLocationSpace' has a wrong offset!");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace) == 0x000241, "Member 'FAnimNode_TwoBoneIK::JointTargetLocationSpace' has a wrong offset!");

struct alignas(0x08) FIKFootPelvisPullDownSolver final
{
public:
	struct FVectorRK4SpringInterpolator           PelvisAdjustmentInterp;
	uint8                                         Pad_8[0x58];
	float                                         PelvisAdjustmentInterpAlpha;
	float                                         PelvisAdjustmentMaxDistance;
	float                                         PelvisAdjustmentErrorTolerance;
	int32                                         PelvisAdjustmentMaxIter;
};
static_assert(alignof(FIKFootPelvisPullDownSolver) == 0x000008, "Wrong alignment on FIKFootPelvisPullDownSolver");
static_assert(sizeof(FIKFootPelvisPullDownSolver) == 0x000070, "Wrong size on FIKFootPelvisPullDownSolver");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterp) == 0x000000, "Member 'FIKFootPelvisPullDownSolver::PelvisAdjustmentInterp' has a wrong offset!");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterpAlpha) == 0x000060, "Member 'FIKFootPelvisPullDownSolver::PelvisAdjustmentInterpAlpha' has a wrong offset!");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxDistance) == 0x000064, "Member 'FIKFootPelvisPullDownSolver::PelvisAdjustmentMaxDistance' has a wrong offset!");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentErrorTolerance) == 0x000068, "Member 'FIKFootPelvisPullDownSolver::PelvisAdjustmentErrorTolerance' has a wrong offset!");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxIter) == 0x00006C, "Member 'FIKFootPelvisPullDownSolver::PelvisAdjustmentMaxIter' has a wrong offset!");

struct FLayeredBoneBlendReference final : public FAnimNodeReference
{
};
static_assert(alignof(FLayeredBoneBlendReference) == 0x000008, "Wrong alignment on FLayeredBoneBlendReference");
static_assert(sizeof(FLayeredBoneBlendReference) == 0x000010, "Wrong size on FLayeredBoneBlendReference");

struct FLinkedAnimGraphReference final : public FAnimNodeReference
{
};
static_assert(alignof(FLinkedAnimGraphReference) == 0x000008, "Wrong alignment on FLinkedAnimGraphReference");
static_assert(sizeof(FLinkedAnimGraphReference) == 0x000010, "Wrong size on FLinkedAnimGraphReference");

struct FSequenceEvaluatorReference final : public FAnimNodeReference
{
};
static_assert(alignof(FSequenceEvaluatorReference) == 0x000008, "Wrong alignment on FSequenceEvaluatorReference");
static_assert(sizeof(FSequenceEvaluatorReference) == 0x000010, "Wrong size on FSequenceEvaluatorReference");

struct FSequencePlayerReference final : public FAnimNodeReference
{
};
static_assert(alignof(FSequencePlayerReference) == 0x000008, "Wrong alignment on FSequencePlayerReference");
static_assert(sizeof(FSequencePlayerReference) == 0x000010, "Wrong size on FSequencePlayerReference");

struct FSkeletalControlReference final : public FAnimNodeReference
{
};
static_assert(alignof(FSkeletalControlReference) == 0x000008, "Wrong alignment on FSkeletalControlReference");
static_assert(sizeof(FSkeletalControlReference) == 0x000010, "Wrong size on FSkeletalControlReference");

struct FAnimNode_StateResult final : public FAnimNode_Root
{
};
static_assert(alignof(FAnimNode_StateResult) == 0x000008, "Wrong alignment on FAnimNode_StateResult");
static_assert(sizeof(FAnimNode_StateResult) == 0x000020, "Wrong size on FAnimNode_StateResult");

}
