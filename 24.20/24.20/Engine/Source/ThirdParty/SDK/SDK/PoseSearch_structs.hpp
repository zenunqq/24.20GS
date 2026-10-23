#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EPoseSearchBooleanRequest : uint8
{
	FalseValue                               = 0,
	TrueValue                                = 1,
	Indifferent                              = 2,
	Num                                      = 3,
	Invalid                                  = 3,
	EPoseSearchBooleanRequest_MAX            = 4,
};

enum class EPoseSearchMode : uint32
{
	BruteForce                               = 0,
	PCAKDTree                                = 1,
	PCAKDTree_Validate                       = 2,
	PCAKDTree_Compare                        = 3,
	Num                                      = 4,
	Invalid                                  = 4,
	EPoseSearchMode_MAX                      = 5,
};

enum class EPoseSearchDataPreprocessor : uint32
{
	None                                     = 0,
	Normalize                                = 1,
	NormalizeOnlyByDeviation                 = 2,
	Num                                      = 3,
	Invalid                                  = 3,
	EPoseSearchDataPreprocessor_MAX          = 4,
};

enum class EPoseSearchPoseFlags : uint32
{
	None                                     = 0,
	BlockTransition                          = 1,
	EPoseSearchPoseFlags_MAX                 = 2,
};

enum class ESearchIndexAssetType : uint32
{
	Invalid                                  = 0,
	Sequence                                 = 1,
	BlendSpace                               = 2,
	ESearchIndexAssetType_MAX                = 3,
};

enum class EPoseSearchMirrorOption : uint32
{
	UnmirroredOnly                           = 0,
	MirroredOnly                             = 1,
	UnmirroredAndMirrored                    = 2,
	Num                                      = 3,
	Invalid                                  = 3,
	EPoseSearchMirrorOption_MAX              = 4,
};

enum class EPoseSearchPostSearchStatus : uint8
{
	Continue                                 = 0,
	Stop                                     = 1,
	EPoseSearchPostSearchStatus_MAX          = 2,
};

enum class EInputQueryPose : uint8
{
	UseCharacterPose                         = 0,
	UseContinuingPose                        = 1,
	UseInterpolatedContinuingPose            = 2,
	Num                                      = 3,
	Invalid                                  = 3,
	EInputQueryPose_MAX                      = 4,
};

enum class EHeadingAxis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	Num                                      = 3,
	Invalid                                  = 3,
	EHeadingAxis_MAX                         = 4,
};

enum class EPoseSearchBoneFlags : uint8
{
	Velocity                                 = 1,
	Position                                 = 2,
	Rotation                                 = 4,
	Phase                                    = 8,
	EPoseSearchBoneFlags_MAX                 = 9,
};

enum class EPoseSearchFeatureDomain : uint32
{
	Time                                     = 0,
	Distance                                 = 1,
	Num                                      = 2,
	Invalid                                  = 2,
	EPoseSearchFeatureDomain_MAX             = 3,
};

enum class EPoseSearchTrajectoryFlags : uint8
{
	Velocity                                 = 1,
	Position                                 = 2,
	VelocityDirection                        = 4,
	FacingDirection                          = 8,
	VelocityXY                               = 16,
	PositionXY                               = 32,
	VelocityDirectionXY                      = 64,
	FacingDirectionXY                        = 128,
	EPoseSearchTrajectoryFlags_MAX           = 129,
};

enum class EMotionMatchingFlags : uint8
{
	None                                     = 0,
	JumpedToPose                             = 1,
	JumpedToFollowUp                         = 2,
	EMotionMatchingFlags_MAX                 = 3,
};

struct alignas(0x08) FPoseSearchAnimPlayer final
{
public:
	uint8                                         Pad_0[0x1B0];
};
static_assert(alignof(FPoseSearchAnimPlayer) == 0x000008, "Wrong alignment on FPoseSearchAnimPlayer");
static_assert(sizeof(FPoseSearchAnimPlayer) == 0x0001B0, "Wrong size on FPoseSearchAnimPlayer");

struct FAnimNode_BlendStack final : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                         Pad_38[0x20];
};
static_assert(alignof(FAnimNode_BlendStack) == 0x000008, "Wrong alignment on FAnimNode_BlendStack");
static_assert(sizeof(FAnimNode_BlendStack) == 0x000058, "Wrong size on FAnimNode_BlendStack");

struct FMotionMatchingSettings final
{
public:
	float                                         BlendTime;
	int32                                         MaxActiveBlends;
	class UBlendProfile*                          BlendProfile;
	EAlphaBlendOption                             BlendOption;
	uint8                                         Pad_11[0x3];
	float                                         MirrorChangeBlendTime;
	float                                         PoseJumpThresholdTime;
	float                                         PoseReselectHistory;
	float                                         SearchThrottleTime;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FMotionMatchingSettings) == 0x000008, "Wrong alignment on FMotionMatchingSettings");
static_assert(sizeof(FMotionMatchingSettings) == 0x000028, "Wrong size on FMotionMatchingSettings");
static_assert(offsetof(FMotionMatchingSettings, BlendTime) == 0x000000, "Member 'FMotionMatchingSettings::BlendTime' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, MaxActiveBlends) == 0x000004, "Member 'FMotionMatchingSettings::MaxActiveBlends' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, BlendProfile) == 0x000008, "Member 'FMotionMatchingSettings::BlendProfile' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, BlendOption) == 0x000010, "Member 'FMotionMatchingSettings::BlendOption' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, MirrorChangeBlendTime) == 0x000014, "Member 'FMotionMatchingSettings::MirrorChangeBlendTime' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, PoseJumpThresholdTime) == 0x000018, "Member 'FMotionMatchingSettings::PoseJumpThresholdTime' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, PoseReselectHistory) == 0x00001C, "Member 'FMotionMatchingSettings::PoseReselectHistory' has a wrong offset!");
static_assert(offsetof(FMotionMatchingSettings, SearchThrottleTime) == 0x000020, "Member 'FMotionMatchingSettings::SearchThrottleTime' has a wrong offset!");

struct alignas(0x10) FAnimNode_MotionMatching final : public FAnimNode_AssetPlayerBase
{
public:
	struct FPoseLink                              Source;
	class UPoseSearchSearchableAsset*             Searchable;
	struct FGameplayTagContainer                  ActiveTagsContainer;
	struct FTrajectorySampleRange                 Trajectory;
	struct FMotionMatchingSettings                Settings;
	bool                                          bResetOnBecomingRelevant;
	bool                                          bForceInterrupt;
	uint8                                         Pad_B2[0x16E];
};
static_assert(alignof(FAnimNode_MotionMatching) == 0x000010, "Wrong alignment on FAnimNode_MotionMatching");
static_assert(sizeof(FAnimNode_MotionMatching) == 0x000220, "Wrong size on FAnimNode_MotionMatching");
static_assert(offsetof(FAnimNode_MotionMatching, Source) == 0x000038, "Member 'FAnimNode_MotionMatching::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, Searchable) == 0x000048, "Member 'FAnimNode_MotionMatching::Searchable' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, ActiveTagsContainer) == 0x000050, "Member 'FAnimNode_MotionMatching::ActiveTagsContainer' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, Trajectory) == 0x000070, "Member 'FAnimNode_MotionMatching::Trajectory' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, Settings) == 0x000088, "Member 'FAnimNode_MotionMatching::Settings' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, bResetOnBecomingRelevant) == 0x0000B0, "Member 'FAnimNode_MotionMatching::bResetOnBecomingRelevant' has a wrong offset!");
static_assert(offsetof(FAnimNode_MotionMatching, bForceInterrupt) == 0x0000B1, "Member 'FAnimNode_MotionMatching::bForceInterrupt' has a wrong offset!");

struct FAnimNode_PoseSearchHistoryCollector final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Source;
	int32                                         PoseCount;
	float                                         PoseDuration;
	bool                                          bUseRootMotion;
	uint8                                         Pad_29[0x27];
};
static_assert(alignof(FAnimNode_PoseSearchHistoryCollector) == 0x000008, "Wrong alignment on FAnimNode_PoseSearchHistoryCollector");
static_assert(sizeof(FAnimNode_PoseSearchHistoryCollector) == 0x000050, "Wrong size on FAnimNode_PoseSearchHistoryCollector");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector, Source) == 0x000010, "Member 'FAnimNode_PoseSearchHistoryCollector::Source' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector, PoseCount) == 0x000020, "Member 'FAnimNode_PoseSearchHistoryCollector::PoseCount' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector, PoseDuration) == 0x000024, "Member 'FAnimNode_PoseSearchHistoryCollector::PoseDuration' has a wrong offset!");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector, bUseRootMotion) == 0x000028, "Member 'FAnimNode_PoseSearchHistoryCollector::bUseRootMotion' has a wrong offset!");

struct FPoseSearchExtrapolationParameters final
{
public:
	float                                         AngularSpeedThreshold;
	float                                         LinearSpeedThreshold;
	float                                         SampleTime;
};
static_assert(alignof(FPoseSearchExtrapolationParameters) == 0x000004, "Wrong alignment on FPoseSearchExtrapolationParameters");
static_assert(sizeof(FPoseSearchExtrapolationParameters) == 0x00000C, "Wrong size on FPoseSearchExtrapolationParameters");
static_assert(offsetof(FPoseSearchExtrapolationParameters, AngularSpeedThreshold) == 0x000000, "Member 'FPoseSearchExtrapolationParameters::AngularSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FPoseSearchExtrapolationParameters, LinearSpeedThreshold) == 0x000004, "Member 'FPoseSearchExtrapolationParameters::LinearSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FPoseSearchExtrapolationParameters, SampleTime) == 0x000008, "Member 'FPoseSearchExtrapolationParameters::SampleTime' has a wrong offset!");

struct FPoseSearchExcludeFromDatabaseParameters final
{
public:
	float                                         SequenceStartInterval;
	float                                         SequenceEndInterval;
};
static_assert(alignof(FPoseSearchExcludeFromDatabaseParameters) == 0x000004, "Wrong alignment on FPoseSearchExcludeFromDatabaseParameters");
static_assert(sizeof(FPoseSearchExcludeFromDatabaseParameters) == 0x000008, "Wrong size on FPoseSearchExcludeFromDatabaseParameters");
static_assert(offsetof(FPoseSearchExcludeFromDatabaseParameters, SequenceStartInterval) == 0x000000, "Member 'FPoseSearchExcludeFromDatabaseParameters::SequenceStartInterval' has a wrong offset!");
static_assert(offsetof(FPoseSearchExcludeFromDatabaseParameters, SequenceEndInterval) == 0x000004, "Member 'FPoseSearchExcludeFromDatabaseParameters::SequenceEndInterval' has a wrong offset!");

struct FPoseSearchSchemaColorPreset final
{
public:
	struct FLinearColor                           Query;
	struct FLinearColor                           Result;
};
static_assert(alignof(FPoseSearchSchemaColorPreset) == 0x000004, "Wrong alignment on FPoseSearchSchemaColorPreset");
static_assert(sizeof(FPoseSearchSchemaColorPreset) == 0x000020, "Wrong size on FPoseSearchSchemaColorPreset");
static_assert(offsetof(FPoseSearchSchemaColorPreset, Query) == 0x000000, "Member 'FPoseSearchSchemaColorPreset::Query' has a wrong offset!");
static_assert(offsetof(FPoseSearchSchemaColorPreset, Result) == 0x000010, "Member 'FPoseSearchSchemaColorPreset::Result' has a wrong offset!");

struct FPoseSearchPoseMetadata final
{
public:
	EPoseSearchPoseFlags                          Flags;
	float                                         CostAddend;
	float                                         ContinuingPoseCostAddend;
};
static_assert(alignof(FPoseSearchPoseMetadata) == 0x000004, "Wrong alignment on FPoseSearchPoseMetadata");
static_assert(sizeof(FPoseSearchPoseMetadata) == 0x00000C, "Wrong size on FPoseSearchPoseMetadata");
static_assert(offsetof(FPoseSearchPoseMetadata, Flags) == 0x000000, "Member 'FPoseSearchPoseMetadata::Flags' has a wrong offset!");
static_assert(offsetof(FPoseSearchPoseMetadata, CostAddend) == 0x000004, "Member 'FPoseSearchPoseMetadata::CostAddend' has a wrong offset!");
static_assert(offsetof(FPoseSearchPoseMetadata, ContinuingPoseCostAddend) == 0x000008, "Member 'FPoseSearchPoseMetadata::ContinuingPoseCostAddend' has a wrong offset!");

struct FPoseSearchIndexAsset final
{
public:
	ESearchIndexAssetType                         Type;
	int32                                         SourceAssetIdx;
	bool                                          bMirrored;
	uint8                                         Pad_9[0x7];
	struct FVector                                BlendParameters;
	struct FFloatInterval                         SamplingInterval;
	int32                                         FirstPoseIdx;
	int32                                         NumPoses;
};
static_assert(alignof(FPoseSearchIndexAsset) == 0x000008, "Wrong alignment on FPoseSearchIndexAsset");
static_assert(sizeof(FPoseSearchIndexAsset) == 0x000038, "Wrong size on FPoseSearchIndexAsset");
static_assert(offsetof(FPoseSearchIndexAsset, Type) == 0x000000, "Member 'FPoseSearchIndexAsset::Type' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, SourceAssetIdx) == 0x000004, "Member 'FPoseSearchIndexAsset::SourceAssetIdx' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, bMirrored) == 0x000008, "Member 'FPoseSearchIndexAsset::bMirrored' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, BlendParameters) == 0x000010, "Member 'FPoseSearchIndexAsset::BlendParameters' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, SamplingInterval) == 0x000028, "Member 'FPoseSearchIndexAsset::SamplingInterval' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, FirstPoseIdx) == 0x000030, "Member 'FPoseSearchIndexAsset::FirstPoseIdx' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndexAsset, NumPoses) == 0x000034, "Member 'FPoseSearchIndexAsset::NumPoses' has a wrong offset!");

struct FPoseSearchIndex final
{
public:
	int32                                         NumPoses;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 Values;
	TArray<float>                                 PCAValues;
	uint8                                         Pad_28[0x18];
	TArray<float>                                 PCAProjectionMatrix;
	TArray<float>                                 Mean;
	TArray<float>                                 WeightsSqrt;
	TArray<struct FPoseSearchPoseMetadata>        PoseMetadata;
	class UPoseSearchSchema*                      Schema;
	TArray<struct FPoseSearchIndexAsset>          Assets;
	float                                         MinCostAddend;
	uint8                                         Pad_9C[0x4];
};
static_assert(alignof(FPoseSearchIndex) == 0x000008, "Wrong alignment on FPoseSearchIndex");
static_assert(sizeof(FPoseSearchIndex) == 0x0000A0, "Wrong size on FPoseSearchIndex");
static_assert(offsetof(FPoseSearchIndex, NumPoses) == 0x000000, "Member 'FPoseSearchIndex::NumPoses' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, Values) == 0x000008, "Member 'FPoseSearchIndex::Values' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, PCAValues) == 0x000018, "Member 'FPoseSearchIndex::PCAValues' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, PCAProjectionMatrix) == 0x000040, "Member 'FPoseSearchIndex::PCAProjectionMatrix' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, Mean) == 0x000050, "Member 'FPoseSearchIndex::Mean' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, WeightsSqrt) == 0x000060, "Member 'FPoseSearchIndex::WeightsSqrt' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, PoseMetadata) == 0x000070, "Member 'FPoseSearchIndex::PoseMetadata' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, Schema) == 0x000080, "Member 'FPoseSearchIndex::Schema' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, Assets) == 0x000088, "Member 'FPoseSearchIndex::Assets' has a wrong offset!");
static_assert(offsetof(FPoseSearchIndex, MinCostAddend) == 0x000098, "Member 'FPoseSearchIndex::MinCostAddend' has a wrong offset!");

struct alignas(0x08) FPoseSearchDatabaseAnimationAssetBase
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FPoseSearchDatabaseAnimationAssetBase) == 0x000008, "Wrong alignment on FPoseSearchDatabaseAnimationAssetBase");
static_assert(sizeof(FPoseSearchDatabaseAnimationAssetBase) == 0x000008, "Wrong size on FPoseSearchDatabaseAnimationAssetBase");

struct FPoseSearchDatabaseSequence final : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimSequence*                          Sequence;
	bool                                          bEnabled;
	uint8                                         Pad_11[0x3];
	struct FFloatInterval                         SamplingRange;
	EPoseSearchMirrorOption                       MirrorOption;
	class UAnimSequence*                          LeadInSequence;
	class UAnimSequence*                          FollowUpSequence;
};
static_assert(alignof(FPoseSearchDatabaseSequence) == 0x000008, "Wrong alignment on FPoseSearchDatabaseSequence");
static_assert(sizeof(FPoseSearchDatabaseSequence) == 0x000030, "Wrong size on FPoseSearchDatabaseSequence");
static_assert(offsetof(FPoseSearchDatabaseSequence, Sequence) == 0x000008, "Member 'FPoseSearchDatabaseSequence::Sequence' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSequence, bEnabled) == 0x000010, "Member 'FPoseSearchDatabaseSequence::bEnabled' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSequence, SamplingRange) == 0x000014, "Member 'FPoseSearchDatabaseSequence::SamplingRange' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSequence, MirrorOption) == 0x00001C, "Member 'FPoseSearchDatabaseSequence::MirrorOption' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSequence, LeadInSequence) == 0x000020, "Member 'FPoseSearchDatabaseSequence::LeadInSequence' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSequence, FollowUpSequence) == 0x000028, "Member 'FPoseSearchDatabaseSequence::FollowUpSequence' has a wrong offset!");

struct FPoseSearchDatabaseBlendSpace final : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UBlendSpace*                            BlendSpace;
	bool                                          bEnabled;
	uint8                                         Pad_11[0x3];
	EPoseSearchMirrorOption                       MirrorOption;
	bool                                          bUseGridForSampling;
	uint8                                         Pad_19[0x3];
	int32                                         NumberOfHorizontalSamples;
	int32                                         NumberOfVerticalSamples;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FPoseSearchDatabaseBlendSpace) == 0x000008, "Wrong alignment on FPoseSearchDatabaseBlendSpace");
static_assert(sizeof(FPoseSearchDatabaseBlendSpace) == 0x000028, "Wrong size on FPoseSearchDatabaseBlendSpace");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, BlendSpace) == 0x000008, "Member 'FPoseSearchDatabaseBlendSpace::BlendSpace' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, bEnabled) == 0x000010, "Member 'FPoseSearchDatabaseBlendSpace::bEnabled' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, MirrorOption) == 0x000014, "Member 'FPoseSearchDatabaseBlendSpace::MirrorOption' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, bUseGridForSampling) == 0x000018, "Member 'FPoseSearchDatabaseBlendSpace::bUseGridForSampling' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, NumberOfHorizontalSamples) == 0x00001C, "Member 'FPoseSearchDatabaseBlendSpace::NumberOfHorizontalSamples' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseBlendSpace, NumberOfVerticalSamples) == 0x000020, "Member 'FPoseSearchDatabaseBlendSpace::NumberOfVerticalSamples' has a wrong offset!");

struct FPoseSearchCost final
{
public:
	float                                         TotalCost;
};
static_assert(alignof(FPoseSearchCost) == 0x000004, "Wrong alignment on FPoseSearchCost");
static_assert(sizeof(FPoseSearchCost) == 0x000004, "Wrong size on FPoseSearchCost");
static_assert(offsetof(FPoseSearchCost, TotalCost) == 0x000000, "Member 'FPoseSearchCost::TotalCost' has a wrong offset!");

struct alignas(0x08) FPoseSearchFeatureVectorBuilder final
{
public:
	TWeakObjectPtr<class UPoseSearchSchema>       Schema;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FPoseSearchFeatureVectorBuilder) == 0x000008, "Wrong alignment on FPoseSearchFeatureVectorBuilder");
static_assert(sizeof(FPoseSearchFeatureVectorBuilder) == 0x000018, "Wrong size on FPoseSearchFeatureVectorBuilder");
static_assert(offsetof(FPoseSearchFeatureVectorBuilder, Schema) == 0x000000, "Member 'FPoseSearchFeatureVectorBuilder::Schema' has a wrong offset!");

struct FPoseSearchDatabaseSetEntry final
{
public:
	class UPoseSearchSearchableAsset*             Searchable;
	struct FGameplayTag                           tag;
	EPoseSearchPostSearchStatus                   PostSearchStatus;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FPoseSearchDatabaseSetEntry) == 0x000008, "Wrong alignment on FPoseSearchDatabaseSetEntry");
static_assert(sizeof(FPoseSearchDatabaseSetEntry) == 0x000010, "Wrong size on FPoseSearchDatabaseSetEntry");
static_assert(offsetof(FPoseSearchDatabaseSetEntry, Searchable) == 0x000000, "Member 'FPoseSearchDatabaseSetEntry::Searchable' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSetEntry, tag) == 0x000008, "Member 'FPoseSearchDatabaseSetEntry::tag' has a wrong offset!");
static_assert(offsetof(FPoseSearchDatabaseSetEntry, PostSearchStatus) == 0x00000C, "Member 'FPoseSearchDatabaseSetEntry::PostSearchStatus' has a wrong offset!");

struct FPoseSearchDatabaseDerivedData final
{
public:
	struct FPoseSearchIndex                       SearchIndex;
};
static_assert(alignof(FPoseSearchDatabaseDerivedData) == 0x000008, "Wrong alignment on FPoseSearchDatabaseDerivedData");
static_assert(sizeof(FPoseSearchDatabaseDerivedData) == 0x0000A0, "Wrong size on FPoseSearchDatabaseDerivedData");
static_assert(offsetof(FPoseSearchDatabaseDerivedData, SearchIndex) == 0x000000, "Member 'FPoseSearchDatabaseDerivedData::SearchIndex' has a wrong offset!");

struct FPoseSearchBone final
{
public:
	struct FBoneReference                         Reference;
	int32                                         Flags;
	float                                         Weight;
	int32                                         ColorPresetIndex;
};
static_assert(alignof(FPoseSearchBone) == 0x000004, "Wrong alignment on FPoseSearchBone");
static_assert(sizeof(FPoseSearchBone) == 0x000018, "Wrong size on FPoseSearchBone");
static_assert(offsetof(FPoseSearchBone, Reference) == 0x000000, "Member 'FPoseSearchBone::Reference' has a wrong offset!");
static_assert(offsetof(FPoseSearchBone, Flags) == 0x00000C, "Member 'FPoseSearchBone::Flags' has a wrong offset!");
static_assert(offsetof(FPoseSearchBone, Weight) == 0x000010, "Member 'FPoseSearchBone::Weight' has a wrong offset!");
static_assert(offsetof(FPoseSearchBone, ColorPresetIndex) == 0x000014, "Member 'FPoseSearchBone::ColorPresetIndex' has a wrong offset!");

struct FPoseSearchTrajectorySample final
{
public:
	float                                         Offset;
	int32                                         Flags;
	float                                         Weight;
	int32                                         ColorPresetIndex;
};
static_assert(alignof(FPoseSearchTrajectorySample) == 0x000004, "Wrong alignment on FPoseSearchTrajectorySample");
static_assert(sizeof(FPoseSearchTrajectorySample) == 0x000010, "Wrong size on FPoseSearchTrajectorySample");
static_assert(offsetof(FPoseSearchTrajectorySample, Offset) == 0x000000, "Member 'FPoseSearchTrajectorySample::Offset' has a wrong offset!");
static_assert(offsetof(FPoseSearchTrajectorySample, Flags) == 0x000004, "Member 'FPoseSearchTrajectorySample::Flags' has a wrong offset!");
static_assert(offsetof(FPoseSearchTrajectorySample, Weight) == 0x000008, "Member 'FPoseSearchTrajectorySample::Weight' has a wrong offset!");
static_assert(offsetof(FPoseSearchTrajectorySample, ColorPresetIndex) == 0x00000C, "Member 'FPoseSearchTrajectorySample::ColorPresetIndex' has a wrong offset!");

struct FMotionMatchingState final
{
public:
	uint8                                         Pad_0[0x48];
	float                                         ElapsedPoseJumpTime;
	EMotionMatchingFlags                          Flags;
	uint8                                         Pad_4D[0x3];
	struct FTransform                             RootMotionTransformDelta;
	uint8                                         Pad_B0[0x50];
};
static_assert(alignof(FMotionMatchingState) == 0x000010, "Wrong alignment on FMotionMatchingState");
static_assert(sizeof(FMotionMatchingState) == 0x000100, "Wrong size on FMotionMatchingState");
static_assert(offsetof(FMotionMatchingState, ElapsedPoseJumpTime) == 0x000048, "Member 'FMotionMatchingState::ElapsedPoseJumpTime' has a wrong offset!");
static_assert(offsetof(FMotionMatchingState, Flags) == 0x00004C, "Member 'FMotionMatchingState::Flags' has a wrong offset!");
static_assert(offsetof(FMotionMatchingState, RootMotionTransformDelta) == 0x000050, "Member 'FMotionMatchingState::RootMotionTransformDelta' has a wrong offset!");

}
