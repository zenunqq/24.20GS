#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EIKRigGoalSpace : uint8
{
	Component                                = 0,
	Additive                                 = 1,
	World                                    = 2,
	EIKRigGoalSpace_MAX                      = 3,
};

enum class EIKRigGoalTransformSource : uint8
{
	Manual                                   = 0,
	Bone                                     = 1,
	ActorComponent                           = 2,
	EIKRigGoalTransformSource_MAX            = 3,
};

enum class ERetargetSourceOrTarget : uint8
{
	Source                                   = 0,
	Target                                   = 1,
	ERetargetSourceOrTarget_MAX              = 2,
};

enum class ERetargetTranslationMode : uint8
{
	None                                     = 0,
	GloballyScaled                           = 1,
	Absolute                                 = 2,
	ERetargetTranslationMode_MAX             = 3,
};

enum class ERetargetRotationMode : uint8
{
	Interpolated                             = 0,
	OneToOne                                 = 1,
	OneToOneReversed                         = 2,
	None                                     = 3,
	ERetargetRotationMode_MAX                = 4,
};

enum class EBasicAxis : uint32
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	NegX                                     = 3,
	NegY                                     = 4,
	NegZ                                     = 5,
	EBasicAxis_MAX                           = 6,
};

enum class EWarpingDirectionSource : uint32
{
	Goals                                    = 0,
	Chain                                    = 1,
	EWarpingDirectionSource_MAX              = 2,
};

struct FTargetChainFKSettings final
{
public:
	bool                                          EnableFK;
	ERetargetRotationMode                         RotationMode;
	uint8                                         Pad_2[0x2];
	float                                         RotationAlpha;
	ERetargetTranslationMode                      TranslationMode;
	uint8                                         Pad_9[0x3];
	float                                         TranslationAlpha;
	float                                         PoleVectorMatching;
	float                                         PoleVectorOffset;
};
static_assert(alignof(FTargetChainFKSettings) == 0x000004, "Wrong alignment on FTargetChainFKSettings");
static_assert(sizeof(FTargetChainFKSettings) == 0x000018, "Wrong size on FTargetChainFKSettings");
static_assert(offsetof(FTargetChainFKSettings, EnableFK) == 0x000000, "Member 'FTargetChainFKSettings::EnableFK' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, RotationMode) == 0x000001, "Member 'FTargetChainFKSettings::RotationMode' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, RotationAlpha) == 0x000004, "Member 'FTargetChainFKSettings::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, TranslationMode) == 0x000008, "Member 'FTargetChainFKSettings::TranslationMode' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, TranslationAlpha) == 0x00000C, "Member 'FTargetChainFKSettings::TranslationAlpha' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, PoleVectorMatching) == 0x000010, "Member 'FTargetChainFKSettings::PoleVectorMatching' has a wrong offset!");
static_assert(offsetof(FTargetChainFKSettings, PoleVectorOffset) == 0x000014, "Member 'FTargetChainFKSettings::PoleVectorOffset' has a wrong offset!");

struct FTargetChainIKSettings final
{
public:
	bool                                          EnableIK;
	uint8                                         Pad_1[0x3];
	float                                         BlendToSource;
	struct FVector                                BlendToSourceWeights;
	struct FVector                                StaticOffset;
	struct FVector                                StaticLocalOffset;
	struct FRotator                               StaticRotationOffset;
	float                                         ScaleVertical;
	float                                         Extension;
	bool                                          bAffectedByIKWarping;
	uint8                                         Pad_71[0x7];
};
static_assert(alignof(FTargetChainIKSettings) == 0x000008, "Wrong alignment on FTargetChainIKSettings");
static_assert(sizeof(FTargetChainIKSettings) == 0x000078, "Wrong size on FTargetChainIKSettings");
static_assert(offsetof(FTargetChainIKSettings, EnableIK) == 0x000000, "Member 'FTargetChainIKSettings::EnableIK' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, BlendToSource) == 0x000004, "Member 'FTargetChainIKSettings::BlendToSource' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, BlendToSourceWeights) == 0x000008, "Member 'FTargetChainIKSettings::BlendToSourceWeights' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, StaticOffset) == 0x000020, "Member 'FTargetChainIKSettings::StaticOffset' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, StaticLocalOffset) == 0x000038, "Member 'FTargetChainIKSettings::StaticLocalOffset' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, StaticRotationOffset) == 0x000050, "Member 'FTargetChainIKSettings::StaticRotationOffset' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, ScaleVertical) == 0x000068, "Member 'FTargetChainIKSettings::ScaleVertical' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, Extension) == 0x00006C, "Member 'FTargetChainIKSettings::Extension' has a wrong offset!");
static_assert(offsetof(FTargetChainIKSettings, bAffectedByIKWarping) == 0x000070, "Member 'FTargetChainIKSettings::bAffectedByIKWarping' has a wrong offset!");

struct FTargetChainSpeedPlantSettings final
{
public:
	bool                                          EnableSpeedPlanting;
	uint8                                         Pad_1[0x3];
	class FName                                   SpeedCurveName;
	float                                         SpeedThreshold;
	float                                         UnplantStiffness;
	float                                         UnplantCriticalDamping;
};
static_assert(alignof(FTargetChainSpeedPlantSettings) == 0x000004, "Wrong alignment on FTargetChainSpeedPlantSettings");
static_assert(sizeof(FTargetChainSpeedPlantSettings) == 0x000014, "Wrong size on FTargetChainSpeedPlantSettings");
static_assert(offsetof(FTargetChainSpeedPlantSettings, EnableSpeedPlanting) == 0x000000, "Member 'FTargetChainSpeedPlantSettings::EnableSpeedPlanting' has a wrong offset!");
static_assert(offsetof(FTargetChainSpeedPlantSettings, SpeedCurveName) == 0x000004, "Member 'FTargetChainSpeedPlantSettings::SpeedCurveName' has a wrong offset!");
static_assert(offsetof(FTargetChainSpeedPlantSettings, SpeedThreshold) == 0x000008, "Member 'FTargetChainSpeedPlantSettings::SpeedThreshold' has a wrong offset!");
static_assert(offsetof(FTargetChainSpeedPlantSettings, UnplantStiffness) == 0x00000C, "Member 'FTargetChainSpeedPlantSettings::UnplantStiffness' has a wrong offset!");
static_assert(offsetof(FTargetChainSpeedPlantSettings, UnplantCriticalDamping) == 0x000010, "Member 'FTargetChainSpeedPlantSettings::UnplantCriticalDamping' has a wrong offset!");

struct FTargetChainSettings final
{
public:
	struct FTargetChainFKSettings                 FK;
	struct FTargetChainIKSettings                 IK;
	struct FTargetChainSpeedPlantSettings         SpeedPlanting;
	uint8                                         Pad_A4[0x4];
};
static_assert(alignof(FTargetChainSettings) == 0x000008, "Wrong alignment on FTargetChainSettings");
static_assert(sizeof(FTargetChainSettings) == 0x0000A8, "Wrong size on FTargetChainSettings");
static_assert(offsetof(FTargetChainSettings, FK) == 0x000000, "Member 'FTargetChainSettings::FK' has a wrong offset!");
static_assert(offsetof(FTargetChainSettings, IK) == 0x000018, "Member 'FTargetChainSettings::IK' has a wrong offset!");
static_assert(offsetof(FTargetChainSettings, SpeedPlanting) == 0x000090, "Member 'FTargetChainSettings::SpeedPlanting' has a wrong offset!");

struct FTargetRootSettings final
{
public:
	float                                         RotationAlpha;
	float                                         TranslationAlpha;
	float                                         BlendToSource;
	uint8                                         Pad_C[0x4];
	struct FVector                                BlendToSourceWeights;
	float                                         ScaleHorizontal;
	float                                         ScaleVertical;
	struct FVector                                TranslationOffset;
	struct FRotator                               RotationOffset;
	float                                         AffectIKHorizontal;
	float                                         AffectIKVertical;
};
static_assert(alignof(FTargetRootSettings) == 0x000008, "Wrong alignment on FTargetRootSettings");
static_assert(sizeof(FTargetRootSettings) == 0x000068, "Wrong size on FTargetRootSettings");
static_assert(offsetof(FTargetRootSettings, RotationAlpha) == 0x000000, "Member 'FTargetRootSettings::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, TranslationAlpha) == 0x000004, "Member 'FTargetRootSettings::TranslationAlpha' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, BlendToSource) == 0x000008, "Member 'FTargetRootSettings::BlendToSource' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, BlendToSourceWeights) == 0x000010, "Member 'FTargetRootSettings::BlendToSourceWeights' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, ScaleHorizontal) == 0x000028, "Member 'FTargetRootSettings::ScaleHorizontal' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, ScaleVertical) == 0x00002C, "Member 'FTargetRootSettings::ScaleVertical' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, TranslationOffset) == 0x000030, "Member 'FTargetRootSettings::TranslationOffset' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, RotationOffset) == 0x000048, "Member 'FTargetRootSettings::RotationOffset' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, AffectIKHorizontal) == 0x000060, "Member 'FTargetRootSettings::AffectIKHorizontal' has a wrong offset!");
static_assert(offsetof(FTargetRootSettings, AffectIKVertical) == 0x000064, "Member 'FTargetRootSettings::AffectIKVertical' has a wrong offset!");

struct FRetargetGlobalSettings final
{
public:
	bool                                          bEnableRoot;
	bool                                          bEnableFK;
	bool                                          bEnableIK;
	bool                                          bWarping;
	EWarpingDirectionSource                       DirectionSource;
	EBasicAxis                                    ForwardDirection;
	class FName                                   DirectionChain;
	float                                         WarpForwards;
	float                                         SidewaysOffset;
	float                                         WarpSplay;
};
static_assert(alignof(FRetargetGlobalSettings) == 0x000004, "Wrong alignment on FRetargetGlobalSettings");
static_assert(sizeof(FRetargetGlobalSettings) == 0x00001C, "Wrong size on FRetargetGlobalSettings");
static_assert(offsetof(FRetargetGlobalSettings, bEnableRoot) == 0x000000, "Member 'FRetargetGlobalSettings::bEnableRoot' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, bEnableFK) == 0x000001, "Member 'FRetargetGlobalSettings::bEnableFK' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, bEnableIK) == 0x000002, "Member 'FRetargetGlobalSettings::bEnableIK' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, bWarping) == 0x000003, "Member 'FRetargetGlobalSettings::bWarping' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, DirectionSource) == 0x000004, "Member 'FRetargetGlobalSettings::DirectionSource' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, ForwardDirection) == 0x000008, "Member 'FRetargetGlobalSettings::ForwardDirection' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, DirectionChain) == 0x00000C, "Member 'FRetargetGlobalSettings::DirectionChain' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, WarpForwards) == 0x000010, "Member 'FRetargetGlobalSettings::WarpForwards' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, SidewaysOffset) == 0x000014, "Member 'FRetargetGlobalSettings::SidewaysOffset' has a wrong offset!");
static_assert(offsetof(FRetargetGlobalSettings, WarpSplay) == 0x000018, "Member 'FRetargetGlobalSettings::WarpSplay' has a wrong offset!");

struct FRetargetProfile final
{
public:
	bool                                          bApplyTargetRetargetPose;
	uint8                                         Pad_1[0x3];
	class FName                                   TargetRetargetPoseName;
	bool                                          bApplySourceRetargetPose;
	uint8                                         Pad_9[0x3];
	class FName                                   SourceRetargetPoseName;
	bool                                          bApplyChainSettings;
	uint8                                         Pad_11[0x7];
	TMap<class FName, struct FTargetChainSettings> ChainSettings;
	bool                                          bApplyRootSettings;
	uint8                                         Pad_69[0x7];
	struct FTargetRootSettings                    RootSettings;
	bool                                          bApplyGlobalSettings;
	uint8                                         Pad_D9[0x3];
	struct FRetargetGlobalSettings                GlobalSettings;
};
static_assert(alignof(FRetargetProfile) == 0x000008, "Wrong alignment on FRetargetProfile");
static_assert(sizeof(FRetargetProfile) == 0x0000F8, "Wrong size on FRetargetProfile");
static_assert(offsetof(FRetargetProfile, bApplyTargetRetargetPose) == 0x000000, "Member 'FRetargetProfile::bApplyTargetRetargetPose' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, TargetRetargetPoseName) == 0x000004, "Member 'FRetargetProfile::TargetRetargetPoseName' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, bApplySourceRetargetPose) == 0x000008, "Member 'FRetargetProfile::bApplySourceRetargetPose' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, SourceRetargetPoseName) == 0x00000C, "Member 'FRetargetProfile::SourceRetargetPoseName' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, bApplyChainSettings) == 0x000010, "Member 'FRetargetProfile::bApplyChainSettings' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, ChainSettings) == 0x000018, "Member 'FRetargetProfile::ChainSettings' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, bApplyRootSettings) == 0x000068, "Member 'FRetargetProfile::bApplyRootSettings' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, RootSettings) == 0x000070, "Member 'FRetargetProfile::RootSettings' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, bApplyGlobalSettings) == 0x0000D8, "Member 'FRetargetProfile::bApplyGlobalSettings' has a wrong offset!");
static_assert(offsetof(FRetargetProfile, GlobalSettings) == 0x0000DC, "Member 'FRetargetProfile::GlobalSettings' has a wrong offset!");

struct FIKRigGoal final
{
public:
	class FName                                   Name;
	EIKRigGoalTransformSource                     TransformSource;
	uint8                                         Pad_5[0x3];
	struct FBoneReference                         SourceBone;
	uint8                                         Pad_14[0x4];
	struct FVector                                Position;
	struct FRotator                               Rotation;
	float                                         PositionAlpha;
	float                                         RotationAlpha;
	EIKRigGoalSpace                               PositionSpace;
	EIKRigGoalSpace                               RotationSpace;
	uint8                                         Pad_52[0x6];
	struct FVector                                FinalBlendedPosition;
	struct FQuat                                  FinalBlendedRotation;
};
static_assert(alignof(FIKRigGoal) == 0x000010, "Wrong alignment on FIKRigGoal");
static_assert(sizeof(FIKRigGoal) == 0x000090, "Wrong size on FIKRigGoal");
static_assert(offsetof(FIKRigGoal, Name) == 0x000000, "Member 'FIKRigGoal::Name' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, TransformSource) == 0x000004, "Member 'FIKRigGoal::TransformSource' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, SourceBone) == 0x000008, "Member 'FIKRigGoal::SourceBone' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, Position) == 0x000018, "Member 'FIKRigGoal::Position' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, Rotation) == 0x000030, "Member 'FIKRigGoal::Rotation' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, PositionAlpha) == 0x000048, "Member 'FIKRigGoal::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, RotationAlpha) == 0x00004C, "Member 'FIKRigGoal::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, PositionSpace) == 0x000050, "Member 'FIKRigGoal::PositionSpace' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, RotationSpace) == 0x000051, "Member 'FIKRigGoal::RotationSpace' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, FinalBlendedPosition) == 0x000058, "Member 'FIKRigGoal::FinalBlendedPosition' has a wrong offset!");
static_assert(offsetof(FIKRigGoal, FinalBlendedRotation) == 0x000070, "Member 'FIKRigGoal::FinalBlendedRotation' has a wrong offset!");

struct FAnimNode_IKRig final : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                              Source;
	class UIKRigDefinition*                       RigDefinitionAsset;
	TArray<struct FIKRigGoal>                     Goals;
	bool                                          bStartFromRefPose;
	EAnimAlphaInputType                           AlphaInputType;
	bool                                          bAlphaBoolEnabled;
	uint8                                         Pad_83[0x1];
	float                                         Alpha;
	struct FInputScaleBias                        AlphaScaleBias;
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;
	class FName                                   AlphaCurveName;
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;
	uint8                                         Pad_10C[0x4];
	class UIKRigProcessor*                        IKRigProcessor;
	uint8                                         Pad_118[0xC0];
	float                                         ActualAlpha;
	uint8                                         Pad_1DC[0x4];
};
static_assert(alignof(FAnimNode_IKRig) == 0x000008, "Wrong alignment on FAnimNode_IKRig");
static_assert(sizeof(FAnimNode_IKRig) == 0x0001E0, "Wrong size on FAnimNode_IKRig");
static_assert(offsetof(FAnimNode_IKRig, Source) == 0x000058, "Member 'FAnimNode_IKRig::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, RigDefinitionAsset) == 0x000068, "Member 'FAnimNode_IKRig::RigDefinitionAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, Goals) == 0x000070, "Member 'FAnimNode_IKRig::Goals' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, bStartFromRefPose) == 0x000080, "Member 'FAnimNode_IKRig::bStartFromRefPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, AlphaInputType) == 0x000081, "Member 'FAnimNode_IKRig::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, bAlphaBoolEnabled) == 0x000082, "Member 'FAnimNode_IKRig::bAlphaBoolEnabled' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, Alpha) == 0x000084, "Member 'FAnimNode_IKRig::Alpha' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBias) == 0x000088, "Member 'FAnimNode_IKRig::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, AlphaBoolBlend) == 0x000090, "Member 'FAnimNode_IKRig::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, AlphaCurveName) == 0x0000D8, "Member 'FAnimNode_IKRig::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBiasClamp) == 0x0000DC, "Member 'FAnimNode_IKRig::AlphaScaleBiasClamp' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, IKRigProcessor) == 0x000110, "Member 'FAnimNode_IKRig::IKRigProcessor' has a wrong offset!");
static_assert(offsetof(FAnimNode_IKRig, ActualAlpha) == 0x0001D8, "Member 'FAnimNode_IKRig::ActualAlpha' has a wrong offset!");

struct FAnimNode_RetargetPoseFromMesh final : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  SourceMeshComponent;
	bool                                          bUseAttachedParent;
	uint8                                         Pad_19[0x7];
	class UIKRetargeter*                          IKRetargeterAsset;
	struct FRetargetProfile                       CustomRetargetProfile;
	bool                                          bSuppressWarnings;
	bool                                          bCopyCurves;
	uint8                                         Pad_122[0x6];
	class UIKRetargetProcessor*                   Processor;
	uint8                                         Pad_130[0x118];
};
static_assert(alignof(FAnimNode_RetargetPoseFromMesh) == 0x000008, "Wrong alignment on FAnimNode_RetargetPoseFromMesh");
static_assert(sizeof(FAnimNode_RetargetPoseFromMesh) == 0x000248, "Wrong size on FAnimNode_RetargetPoseFromMesh");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, SourceMeshComponent) == 0x000010, "Member 'FAnimNode_RetargetPoseFromMesh::SourceMeshComponent' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bUseAttachedParent) == 0x000018, "Member 'FAnimNode_RetargetPoseFromMesh::bUseAttachedParent' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, IKRetargeterAsset) == 0x000020, "Member 'FAnimNode_RetargetPoseFromMesh::IKRetargeterAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, CustomRetargetProfile) == 0x000028, "Member 'FAnimNode_RetargetPoseFromMesh::CustomRetargetProfile' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bSuppressWarnings) == 0x000120, "Member 'FAnimNode_RetargetPoseFromMesh::bSuppressWarnings' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bCopyCurves) == 0x000121, "Member 'FAnimNode_RetargetPoseFromMesh::bCopyCurves' has a wrong offset!");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, Processor) == 0x000128, "Member 'FAnimNode_RetargetPoseFromMesh::Processor' has a wrong offset!");

struct alignas(0x08) FIKRigGoalContainer final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FIKRigGoalContainer) == 0x000008, "Wrong alignment on FIKRigGoalContainer");
static_assert(sizeof(FIKRigGoalContainer) == 0x000010, "Wrong size on FIKRigGoalContainer");

struct FBoneChain final
{
public:
	class FName                                   ChainName;
	struct FBoneReference                         StartBone;
	struct FBoneReference                         EndBone;
	class FName                                   IKGoalName;
};
static_assert(alignof(FBoneChain) == 0x000004, "Wrong alignment on FBoneChain");
static_assert(sizeof(FBoneChain) == 0x000020, "Wrong size on FBoneChain");
static_assert(offsetof(FBoneChain, ChainName) == 0x000000, "Member 'FBoneChain::ChainName' has a wrong offset!");
static_assert(offsetof(FBoneChain, StartBone) == 0x000004, "Member 'FBoneChain::StartBone' has a wrong offset!");
static_assert(offsetof(FBoneChain, EndBone) == 0x000010, "Member 'FBoneChain::EndBone' has a wrong offset!");
static_assert(offsetof(FBoneChain, IKGoalName) == 0x00001C, "Member 'FBoneChain::IKGoalName' has a wrong offset!");

struct FRetargetDefinition final
{
public:
	class FName                                   RootBone;
	uint8                                         Pad_4[0x4];
	TArray<struct FBoneChain>                     BoneChains;
};
static_assert(alignof(FRetargetDefinition) == 0x000008, "Wrong alignment on FRetargetDefinition");
static_assert(sizeof(FRetargetDefinition) == 0x000018, "Wrong size on FRetargetDefinition");
static_assert(offsetof(FRetargetDefinition, RootBone) == 0x000000, "Member 'FRetargetDefinition::RootBone' has a wrong offset!");
static_assert(offsetof(FRetargetDefinition, BoneChains) == 0x000008, "Member 'FRetargetDefinition::BoneChains' has a wrong offset!");

struct alignas(0x04) FGoalBone final
{
public:
	uint8                                         Pad_0[0xC];
};
static_assert(alignof(FGoalBone) == 0x000004, "Wrong alignment on FGoalBone");
static_assert(sizeof(FGoalBone) == 0x00000C, "Wrong size on FGoalBone");

struct alignas(0x08) FIKRigInputSkeleton final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FIKRigInputSkeleton) == 0x000008, "Wrong alignment on FIKRigInputSkeleton");
static_assert(sizeof(FIKRigInputSkeleton) == 0x000038, "Wrong size on FIKRigInputSkeleton");

struct FIKRigSkeleton final
{
public:
	TArray<class FName>                           BoneNames;
	TArray<int32>                                 ParentIndices;
	TArray<class FName>                           ExcludedBones;
	TArray<struct FTransform>                     CurrentPoseGlobal;
	TArray<struct FTransform>                     CurrentPoseLocal;
	TArray<struct FTransform>                     RefPoseGlobal;
	uint8                                         Pad_60[0x10];
};
static_assert(alignof(FIKRigSkeleton) == 0x000008, "Wrong alignment on FIKRigSkeleton");
static_assert(sizeof(FIKRigSkeleton) == 0x000070, "Wrong size on FIKRigSkeleton");
static_assert(offsetof(FIKRigSkeleton, BoneNames) == 0x000000, "Member 'FIKRigSkeleton::BoneNames' has a wrong offset!");
static_assert(offsetof(FIKRigSkeleton, ParentIndices) == 0x000010, "Member 'FIKRigSkeleton::ParentIndices' has a wrong offset!");
static_assert(offsetof(FIKRigSkeleton, ExcludedBones) == 0x000020, "Member 'FIKRigSkeleton::ExcludedBones' has a wrong offset!");
static_assert(offsetof(FIKRigSkeleton, CurrentPoseGlobal) == 0x000030, "Member 'FIKRigSkeleton::CurrentPoseGlobal' has a wrong offset!");
static_assert(offsetof(FIKRigSkeleton, CurrentPoseLocal) == 0x000040, "Member 'FIKRigSkeleton::CurrentPoseLocal' has a wrong offset!");
static_assert(offsetof(FIKRigSkeleton, RefPoseGlobal) == 0x000050, "Member 'FIKRigSkeleton::RefPoseGlobal' has a wrong offset!");

struct FRetargetChainMap final
{
public:
	class FName                                   SourceChain;
	class FName                                   TargetChain;
};
static_assert(alignof(FRetargetChainMap) == 0x000004, "Wrong alignment on FRetargetChainMap");
static_assert(sizeof(FRetargetChainMap) == 0x000008, "Wrong size on FRetargetChainMap");
static_assert(offsetof(FRetargetChainMap, SourceChain) == 0x000000, "Member 'FRetargetChainMap::SourceChain' has a wrong offset!");
static_assert(offsetof(FRetargetChainMap, TargetChain) == 0x000004, "Member 'FRetargetChainMap::TargetChain' has a wrong offset!");

struct FIKRetargetPose final
{
public:
	struct FVector                                RootTranslationOffset;
	TMap<class FName, struct FQuat>               BoneRotationOffsets;
};
static_assert(alignof(FIKRetargetPose) == 0x000008, "Wrong alignment on FIKRetargetPose");
static_assert(sizeof(FIKRetargetPose) == 0x000068, "Wrong size on FIKRetargetPose");
static_assert(offsetof(FIKRetargetPose, RootTranslationOffset) == 0x000000, "Member 'FIKRetargetPose::RootTranslationOffset' has a wrong offset!");
static_assert(offsetof(FIKRetargetPose, BoneRotationOffsets) == 0x000018, "Member 'FIKRetargetPose::BoneRotationOffsets' has a wrong offset!");

struct FLimbSolverSettings final
{
public:
	float                                         ReachPrecision;
	EAxis                                         HingeRotationAxis;
	uint8                                         Pad_5[0x3];
	int32                                         MaxIterations;
	bool                                          bEnableLimit;
	uint8                                         Pad_D[0x3];
	float                                         MinRotationAngle;
	bool                                          bAveragePull;
	uint8                                         Pad_15[0x3];
	float                                         PullDistribution;
	float                                         ReachStepAlpha;
	bool                                          bEnableTwistCorrection;
	EAxis                                         EndBoneForwardAxis;
	uint8                                         Pad_22[0x2];
};
static_assert(alignof(FLimbSolverSettings) == 0x000004, "Wrong alignment on FLimbSolverSettings");
static_assert(sizeof(FLimbSolverSettings) == 0x000024, "Wrong size on FLimbSolverSettings");
static_assert(offsetof(FLimbSolverSettings, ReachPrecision) == 0x000000, "Member 'FLimbSolverSettings::ReachPrecision' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, HingeRotationAxis) == 0x000004, "Member 'FLimbSolverSettings::HingeRotationAxis' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, MaxIterations) == 0x000008, "Member 'FLimbSolverSettings::MaxIterations' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, bEnableLimit) == 0x00000C, "Member 'FLimbSolverSettings::bEnableLimit' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, MinRotationAngle) == 0x000010, "Member 'FLimbSolverSettings::MinRotationAngle' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, bAveragePull) == 0x000014, "Member 'FLimbSolverSettings::bAveragePull' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, PullDistribution) == 0x000018, "Member 'FLimbSolverSettings::PullDistribution' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, ReachStepAlpha) == 0x00001C, "Member 'FLimbSolverSettings::ReachStepAlpha' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, bEnableTwistCorrection) == 0x000020, "Member 'FLimbSolverSettings::bEnableTwistCorrection' has a wrong offset!");
static_assert(offsetof(FLimbSolverSettings, EndBoneForwardAxis) == 0x000021, "Member 'FLimbSolverSettings::EndBoneForwardAxis' has a wrong offset!");

struct alignas(0x08) FLimbLink final
{
public:
	uint8                                         Pad_0[0x68];
};
static_assert(alignof(FLimbLink) == 0x000008, "Wrong alignment on FLimbLink");
static_assert(sizeof(FLimbLink) == 0x000068, "Wrong size on FLimbLink");

struct alignas(0x08) FLimbSolver final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FLimbSolver) == 0x000008, "Wrong alignment on FLimbSolver");
static_assert(sizeof(FLimbSolver) == 0x000018, "Wrong size on FLimbSolver");

}
