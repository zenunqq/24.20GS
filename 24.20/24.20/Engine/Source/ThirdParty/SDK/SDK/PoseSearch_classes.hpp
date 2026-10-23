#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "PoseSearch_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UPoseSearchFeatureChannel : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	float                                         MinimumMeanDeviation;
	int32                                         ChannelIdx;
	int32                                         ChannelDataOffset;
	int32                                         ChannelCardinality;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchFeatureChannel">();
	}
	static class UPoseSearchFeatureChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchFeatureChannel>();
	}
};
static_assert(alignof(UPoseSearchFeatureChannel) == 0x000008, "Wrong alignment on UPoseSearchFeatureChannel");
static_assert(sizeof(UPoseSearchFeatureChannel) == 0x000040, "Wrong size on UPoseSearchFeatureChannel");
static_assert(offsetof(UPoseSearchFeatureChannel, MinimumMeanDeviation) == 0x000030, "Member 'UPoseSearchFeatureChannel::MinimumMeanDeviation' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel, ChannelIdx) == 0x000034, "Member 'UPoseSearchFeatureChannel::ChannelIdx' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel, ChannelDataOffset) == 0x000038, "Member 'UPoseSearchFeatureChannel::ChannelDataOffset' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel, ChannelCardinality) == 0x00003C, "Member 'UPoseSearchFeatureChannel::ChannelCardinality' has a wrong offset!");

class UPoseSearchSchema final : public UDataAsset
{
public:
	uint8                                         Pad_30[0x8];
	class USkeleton*                              Skeleton;
	int32                                         SampleRate;
	uint8                                         Pad_44[0x4];
	TArray<class UPoseSearchFeatureChannel*>      Channels;
	class UMirrorDataTable*                       MirrorDataTable;
	EPoseSearchDataPreprocessor                   DataPreprocessor;
	int32                                         SchemaCardinality;
	TArray<struct FBoneReference>                 BoneReferences;
	TArray<uint16>                                BoneIndices;
	TArray<uint16>                                BoneIndicesWithParents;
	float                                         ContinuingPoseCostBias;
	float                                         BaseCostBias;
	float                                         MirrorMismatchCostBias;
	uint8                                         Pad_A4[0x4];
	TArray<struct FPoseSearchSchemaColorPreset>   ColorPresets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchSchema">();
	}
	static class UPoseSearchSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchSchema>();
	}
};
static_assert(alignof(UPoseSearchSchema) == 0x000008, "Wrong alignment on UPoseSearchSchema");
static_assert(sizeof(UPoseSearchSchema) == 0x0000B8, "Wrong size on UPoseSearchSchema");
static_assert(offsetof(UPoseSearchSchema, Skeleton) == 0x000038, "Member 'UPoseSearchSchema::Skeleton' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, SampleRate) == 0x000040, "Member 'UPoseSearchSchema::SampleRate' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, Channels) == 0x000048, "Member 'UPoseSearchSchema::Channels' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, MirrorDataTable) == 0x000058, "Member 'UPoseSearchSchema::MirrorDataTable' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, DataPreprocessor) == 0x000060, "Member 'UPoseSearchSchema::DataPreprocessor' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, SchemaCardinality) == 0x000064, "Member 'UPoseSearchSchema::SchemaCardinality' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, BoneReferences) == 0x000068, "Member 'UPoseSearchSchema::BoneReferences' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, BoneIndices) == 0x000078, "Member 'UPoseSearchSchema::BoneIndices' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, BoneIndicesWithParents) == 0x000088, "Member 'UPoseSearchSchema::BoneIndicesWithParents' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, ContinuingPoseCostBias) == 0x000098, "Member 'UPoseSearchSchema::ContinuingPoseCostBias' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, BaseCostBias) == 0x00009C, "Member 'UPoseSearchSchema::BaseCostBias' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, MirrorMismatchCostBias) == 0x0000A0, "Member 'UPoseSearchSchema::MirrorMismatchCostBias' has a wrong offset!");
static_assert(offsetof(UPoseSearchSchema, ColorPresets) == 0x0000A8, "Member 'UPoseSearchSchema::ColorPresets' has a wrong offset!");

class UPoseSearchSearchableAsset : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchSearchableAsset">();
	}
	static class UPoseSearchSearchableAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchSearchableAsset>();
	}
};
static_assert(alignof(UPoseSearchSearchableAsset) == 0x000008, "Wrong alignment on UPoseSearchSearchableAsset");
static_assert(sizeof(UPoseSearchSearchableAsset) == 0x000030, "Wrong size on UPoseSearchSearchableAsset");

class UPoseSearchDatabase final : public UPoseSearchSearchableAsset
{
public:
	class UPoseSearchSchema*                      Schema;
	struct FPoseSearchExtrapolationParameters     ExtrapolationParameters;
	struct FPoseSearchExcludeFromDatabaseParameters ExcludeFromDatabaseParameters;
	uint8                                         Pad_4C[0x4];
	TArray<class UAnimSequence*>                  SimpleSequences;
	TArray<struct FPoseSearchDatabaseSequence>    Sequences;
	TArray<class UBlendSpace*>                    SimpleBlendSpaces;
	TArray<struct FPoseSearchDatabaseBlendSpace>  BlendSpaces;
	EPoseSearchMode                               PoseSearchMode;
	int32                                         NumberOfPrincipalComponents;
	int32                                         KDTreeMaxLeafSize;
	int32                                         KDTreeQueryNumNeighbors;
	bool                                          bSkipSearchIfPossible;
	uint8                                         Pad_A1[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchDatabase">();
	}
	static class UPoseSearchDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchDatabase>();
	}
};
static_assert(alignof(UPoseSearchDatabase) == 0x000008, "Wrong alignment on UPoseSearchDatabase");
static_assert(sizeof(UPoseSearchDatabase) == 0x0000B0, "Wrong size on UPoseSearchDatabase");
static_assert(offsetof(UPoseSearchDatabase, Schema) == 0x000030, "Member 'UPoseSearchDatabase::Schema' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, ExtrapolationParameters) == 0x000038, "Member 'UPoseSearchDatabase::ExtrapolationParameters' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, ExcludeFromDatabaseParameters) == 0x000044, "Member 'UPoseSearchDatabase::ExcludeFromDatabaseParameters' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, SimpleSequences) == 0x000050, "Member 'UPoseSearchDatabase::SimpleSequences' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, Sequences) == 0x000060, "Member 'UPoseSearchDatabase::Sequences' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, SimpleBlendSpaces) == 0x000070, "Member 'UPoseSearchDatabase::SimpleBlendSpaces' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, BlendSpaces) == 0x000080, "Member 'UPoseSearchDatabase::BlendSpaces' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, PoseSearchMode) == 0x000090, "Member 'UPoseSearchDatabase::PoseSearchMode' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, NumberOfPrincipalComponents) == 0x000094, "Member 'UPoseSearchDatabase::NumberOfPrincipalComponents' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, KDTreeMaxLeafSize) == 0x000098, "Member 'UPoseSearchDatabase::KDTreeMaxLeafSize' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, KDTreeQueryNumNeighbors) == 0x00009C, "Member 'UPoseSearchDatabase::KDTreeQueryNumNeighbors' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabase, bSkipSearchIfPossible) == 0x0000A0, "Member 'UPoseSearchDatabase::bSkipSearchIfPossible' has a wrong offset!");

class UPoseSearchSequenceMetaData final : public UAnimMetaData
{
public:
	class UPoseSearchSchema*                      Schema;
	struct FFloatInterval                         SamplingRange;
	struct FPoseSearchExtrapolationParameters     ExtrapolationParameters;
	uint8                                         Pad_44[0x4];
	struct FPoseSearchIndex                       SearchIndex;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchSequenceMetaData">();
	}
	static class UPoseSearchSequenceMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchSequenceMetaData>();
	}
};
static_assert(alignof(UPoseSearchSequenceMetaData) == 0x000008, "Wrong alignment on UPoseSearchSequenceMetaData");
static_assert(sizeof(UPoseSearchSequenceMetaData) == 0x0000E8, "Wrong size on UPoseSearchSequenceMetaData");
static_assert(offsetof(UPoseSearchSequenceMetaData, Schema) == 0x000028, "Member 'UPoseSearchSequenceMetaData::Schema' has a wrong offset!");
static_assert(offsetof(UPoseSearchSequenceMetaData, SamplingRange) == 0x000030, "Member 'UPoseSearchSequenceMetaData::SamplingRange' has a wrong offset!");
static_assert(offsetof(UPoseSearchSequenceMetaData, ExtrapolationParameters) == 0x000038, "Member 'UPoseSearchSequenceMetaData::ExtrapolationParameters' has a wrong offset!");
static_assert(offsetof(UPoseSearchSequenceMetaData, SearchIndex) == 0x000048, "Member 'UPoseSearchSequenceMetaData::SearchIndex' has a wrong offset!");

class UPoseSearchDatabaseSet final : public UPoseSearchSearchableAsset
{
public:
	TArray<struct FPoseSearchDatabaseSetEntry>    AssetsToSearch;
	bool                                          bEvaluateContinuingPoseFirst;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchDatabaseSet">();
	}
	static class UPoseSearchDatabaseSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchDatabaseSet>();
	}
};
static_assert(alignof(UPoseSearchDatabaseSet) == 0x000008, "Wrong alignment on UPoseSearchDatabaseSet");
static_assert(sizeof(UPoseSearchDatabaseSet) == 0x000048, "Wrong size on UPoseSearchDatabaseSet");
static_assert(offsetof(UPoseSearchDatabaseSet, AssetsToSearch) == 0x000030, "Member 'UPoseSearchDatabaseSet::AssetsToSearch' has a wrong offset!");
static_assert(offsetof(UPoseSearchDatabaseSet, bEvaluateContinuingPoseFirst) == 0x000040, "Member 'UPoseSearchDatabaseSet::bEvaluateContinuingPoseFirst' has a wrong offset!");

class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_PoseSearchBase">();
	}
	static class UAnimNotifyState_PoseSearchBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_PoseSearchBase>();
	}
};
static_assert(alignof(UAnimNotifyState_PoseSearchBase) == 0x000008, "Wrong alignment on UAnimNotifyState_PoseSearchBase");
static_assert(sizeof(UAnimNotifyState_PoseSearchBase) == 0x000030, "Wrong size on UAnimNotifyState_PoseSearchBase");

class UAnimNotifyState_PoseSearchExcludeFromDatabase final : public UAnimNotifyState_PoseSearchBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_PoseSearchExcludeFromDatabase">();
	}
	static class UAnimNotifyState_PoseSearchExcludeFromDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_PoseSearchExcludeFromDatabase>();
	}
};
static_assert(alignof(UAnimNotifyState_PoseSearchExcludeFromDatabase) == 0x000008, "Wrong alignment on UAnimNotifyState_PoseSearchExcludeFromDatabase");
static_assert(sizeof(UAnimNotifyState_PoseSearchExcludeFromDatabase) == 0x000030, "Wrong size on UAnimNotifyState_PoseSearchExcludeFromDatabase");

class UAnimNotifyState_PoseSearchBlockTransition final : public UAnimNotifyState_PoseSearchBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_PoseSearchBlockTransition">();
	}
	static class UAnimNotifyState_PoseSearchBlockTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_PoseSearchBlockTransition>();
	}
};
static_assert(alignof(UAnimNotifyState_PoseSearchBlockTransition) == 0x000008, "Wrong alignment on UAnimNotifyState_PoseSearchBlockTransition");
static_assert(sizeof(UAnimNotifyState_PoseSearchBlockTransition) == 0x000030, "Wrong size on UAnimNotifyState_PoseSearchBlockTransition");

class UAnimNotifyState_PoseSearchModifyCost final : public UAnimNotifyState_PoseSearchBase
{
public:
	float                                         CostAddend;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_PoseSearchModifyCost">();
	}
	static class UAnimNotifyState_PoseSearchModifyCost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_PoseSearchModifyCost>();
	}
};
static_assert(alignof(UAnimNotifyState_PoseSearchModifyCost) == 0x000008, "Wrong alignment on UAnimNotifyState_PoseSearchModifyCost");
static_assert(sizeof(UAnimNotifyState_PoseSearchModifyCost) == 0x000038, "Wrong size on UAnimNotifyState_PoseSearchModifyCost");
static_assert(offsetof(UAnimNotifyState_PoseSearchModifyCost, CostAddend) == 0x000030, "Member 'UAnimNotifyState_PoseSearchModifyCost::CostAddend' has a wrong offset!");

class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias final : public UAnimNotifyState_PoseSearchBase
{
public:
	float                                         CostAddend;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias">();
	}
	static class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>();
	}
};
static_assert(alignof(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias) == 0x000008, "Wrong alignment on UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias");
static_assert(sizeof(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias) == 0x000038, "Wrong size on UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias");
static_assert(offsetof(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, CostAddend) == 0x000030, "Member 'UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::CostAddend' has a wrong offset!");

class UPoseSearchFeatureChannel_Position final : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                         bone;
	float                                         Weight;
	float                                         SampleTimeOffset;
	int8                                          SchemaBoneIdx;
	uint8                                         Pad_55[0x3];
	int32                                         ColorPresetIndex;
	EInputQueryPose                               InputQueryPose;
	bool                                          bUseSampleTimeOffsetRootBone;
	uint8                                         Pad_5E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchFeatureChannel_Position">();
	}
	static class UPoseSearchFeatureChannel_Position* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchFeatureChannel_Position>();
	}
};
static_assert(alignof(UPoseSearchFeatureChannel_Position) == 0x000008, "Wrong alignment on UPoseSearchFeatureChannel_Position");
static_assert(sizeof(UPoseSearchFeatureChannel_Position) == 0x000060, "Wrong size on UPoseSearchFeatureChannel_Position");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, bone) == 0x000040, "Member 'UPoseSearchFeatureChannel_Position::bone' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, Weight) == 0x00004C, "Member 'UPoseSearchFeatureChannel_Position::Weight' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SampleTimeOffset) == 0x000050, "Member 'UPoseSearchFeatureChannel_Position::SampleTimeOffset' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SchemaBoneIdx) == 0x000054, "Member 'UPoseSearchFeatureChannel_Position::SchemaBoneIdx' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, ColorPresetIndex) == 0x000058, "Member 'UPoseSearchFeatureChannel_Position::ColorPresetIndex' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, InputQueryPose) == 0x00005C, "Member 'UPoseSearchFeatureChannel_Position::InputQueryPose' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, bUseSampleTimeOffsetRootBone) == 0x00005D, "Member 'UPoseSearchFeatureChannel_Position::bUseSampleTimeOffsetRootBone' has a wrong offset!");

class UPoseSearchFeatureChannel_Heading final : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                         bone;
	float                                         Weight;
	float                                         SampleTimeOffset;
	EHeadingAxis                                  HeadingAxis;
	int8                                          SchemaBoneIdx;
	uint8                                         Pad_56[0x2];
	int32                                         ColorPresetIndex;
	EInputQueryPose                               InputQueryPose;
	bool                                          bUseSampleTimeOffsetRootBone;
	uint8                                         Pad_5E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchFeatureChannel_Heading">();
	}
	static class UPoseSearchFeatureChannel_Heading* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchFeatureChannel_Heading>();
	}
};
static_assert(alignof(UPoseSearchFeatureChannel_Heading) == 0x000008, "Wrong alignment on UPoseSearchFeatureChannel_Heading");
static_assert(sizeof(UPoseSearchFeatureChannel_Heading) == 0x000060, "Wrong size on UPoseSearchFeatureChannel_Heading");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, bone) == 0x000040, "Member 'UPoseSearchFeatureChannel_Heading::bone' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, Weight) == 0x00004C, "Member 'UPoseSearchFeatureChannel_Heading::Weight' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SampleTimeOffset) == 0x000050, "Member 'UPoseSearchFeatureChannel_Heading::SampleTimeOffset' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, HeadingAxis) == 0x000054, "Member 'UPoseSearchFeatureChannel_Heading::HeadingAxis' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SchemaBoneIdx) == 0x000055, "Member 'UPoseSearchFeatureChannel_Heading::SchemaBoneIdx' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, ColorPresetIndex) == 0x000058, "Member 'UPoseSearchFeatureChannel_Heading::ColorPresetIndex' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, InputQueryPose) == 0x00005C, "Member 'UPoseSearchFeatureChannel_Heading::InputQueryPose' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, bUseSampleTimeOffsetRootBone) == 0x00005D, "Member 'UPoseSearchFeatureChannel_Heading::bUseSampleTimeOffsetRootBone' has a wrong offset!");

class UPoseSearchFeatureChannel_Pose final : public UPoseSearchFeatureChannel
{
public:
	float                                         Weight;
	uint8                                         Pad_44[0x4];
	TArray<struct FPoseSearchBone>                SampledBones;
	TArray<float>                                 SampleTimes;
	TArray<int8>                                  SchemaBoneIdx;
	EInputQueryPose                               InputQueryPose;
	uint8                                         Pad_79[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchFeatureChannel_Pose">();
	}
	static class UPoseSearchFeatureChannel_Pose* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchFeatureChannel_Pose>();
	}
};
static_assert(alignof(UPoseSearchFeatureChannel_Pose) == 0x000008, "Wrong alignment on UPoseSearchFeatureChannel_Pose");
static_assert(sizeof(UPoseSearchFeatureChannel_Pose) == 0x000080, "Wrong size on UPoseSearchFeatureChannel_Pose");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, Weight) == 0x000040, "Member 'UPoseSearchFeatureChannel_Pose::Weight' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SampledBones) == 0x000048, "Member 'UPoseSearchFeatureChannel_Pose::SampledBones' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SampleTimes) == 0x000058, "Member 'UPoseSearchFeatureChannel_Pose::SampleTimes' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SchemaBoneIdx) == 0x000068, "Member 'UPoseSearchFeatureChannel_Pose::SchemaBoneIdx' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, InputQueryPose) == 0x000078, "Member 'UPoseSearchFeatureChannel_Pose::InputQueryPose' has a wrong offset!");

class UPoseSearchFeatureChannel_Trajectory final : public UPoseSearchFeatureChannel
{
public:
	EPoseSearchFeatureDomain                      Domain;
	float                                         Weight;
	TArray<struct FPoseSearchTrajectorySample>    Samples;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchFeatureChannel_Trajectory">();
	}
	static class UPoseSearchFeatureChannel_Trajectory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchFeatureChannel_Trajectory>();
	}
};
static_assert(alignof(UPoseSearchFeatureChannel_Trajectory) == 0x000008, "Wrong alignment on UPoseSearchFeatureChannel_Trajectory");
static_assert(sizeof(UPoseSearchFeatureChannel_Trajectory) == 0x000058, "Wrong size on UPoseSearchFeatureChannel_Trajectory");
static_assert(offsetof(UPoseSearchFeatureChannel_Trajectory, Domain) == 0x000040, "Member 'UPoseSearchFeatureChannel_Trajectory::Domain' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Trajectory, Weight) == 0x000044, "Member 'UPoseSearchFeatureChannel_Trajectory::Weight' has a wrong offset!");
static_assert(offsetof(UPoseSearchFeatureChannel_Trajectory, Samples) == 0x000048, "Member 'UPoseSearchFeatureChannel_Trajectory::Samples' has a wrong offset!");

}
