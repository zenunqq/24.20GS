#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "MeshNetwork_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

enum class EWarEffortFundingStationType : uint8
{
	Final                                    = 0,
	Tower                                    = 1,
	Choice                                   = 2,
	EWarEffortFundingStationType_MAX         = 3,
};

struct FWarEffortFundingOptionData final
{
public:
	struct FGameplayTag                           OptionTag;
	uint8                                         Pad_4[0x4];
	int64                                         CurrentFundingAmount;
};
static_assert(alignof(FWarEffortFundingOptionData) == 0x000008, "Wrong alignment on FWarEffortFundingOptionData");
static_assert(sizeof(FWarEffortFundingOptionData) == 0x000010, "Wrong size on FWarEffortFundingOptionData");
static_assert(offsetof(FWarEffortFundingOptionData, OptionTag) == 0x000000, "Member 'FWarEffortFundingOptionData::OptionTag' has a wrong offset!");
static_assert(offsetof(FWarEffortFundingOptionData, CurrentFundingAmount) == 0x000008, "Member 'FWarEffortFundingOptionData::CurrentFundingAmount' has a wrong offset!");

struct FWarEffortFundingChoiceData final
{
public:
	struct FWarEffortFundingOptionData            Option1;
	struct FWarEffortFundingOptionData            Option2;
	int64                                         TargetFundingAmount;
};
static_assert(alignof(FWarEffortFundingChoiceData) == 0x000008, "Wrong alignment on FWarEffortFundingChoiceData");
static_assert(sizeof(FWarEffortFundingChoiceData) == 0x000028, "Wrong size on FWarEffortFundingChoiceData");
static_assert(offsetof(FWarEffortFundingChoiceData, Option1) == 0x000000, "Member 'FWarEffortFundingChoiceData::Option1' has a wrong offset!");
static_assert(offsetof(FWarEffortFundingChoiceData, Option2) == 0x000010, "Member 'FWarEffortFundingChoiceData::Option2' has a wrong offset!");
static_assert(offsetof(FWarEffortFundingChoiceData, TargetFundingAmount) == 0x000020, "Member 'FWarEffortFundingChoiceData::TargetFundingAmount' has a wrong offset!");

struct FWarEffortIndexedFundingData final
{
public:
	TArray<int64>                                 CurrentFundingArray;
	int64                                         FinalFundingAmount;
	int64                                         TowerFundingAmount;
};
static_assert(alignof(FWarEffortIndexedFundingData) == 0x000008, "Wrong alignment on FWarEffortIndexedFundingData");
static_assert(sizeof(FWarEffortIndexedFundingData) == 0x000020, "Wrong size on FWarEffortIndexedFundingData");
static_assert(offsetof(FWarEffortIndexedFundingData, CurrentFundingArray) == 0x000000, "Member 'FWarEffortIndexedFundingData::CurrentFundingArray' has a wrong offset!");
static_assert(offsetof(FWarEffortIndexedFundingData, FinalFundingAmount) == 0x000010, "Member 'FWarEffortIndexedFundingData::FinalFundingAmount' has a wrong offset!");
static_assert(offsetof(FWarEffortIndexedFundingData, TowerFundingAmount) == 0x000018, "Member 'FWarEffortIndexedFundingData::TowerFundingAmount' has a wrong offset!");

struct FWarEffortFundingMetadata final : public FMeshMetaDataStruct
{
public:
	struct FWarEffortIndexedFundingData           IndexedFundingData;
	TArray<struct FWarEffortFundingChoiceData>    FundingChoices;
};
static_assert(alignof(FWarEffortFundingMetadata) == 0x000008, "Wrong alignment on FWarEffortFundingMetadata");
static_assert(sizeof(FWarEffortFundingMetadata) == 0x000030, "Wrong size on FWarEffortFundingMetadata");
static_assert(offsetof(FWarEffortFundingMetadata, IndexedFundingData) == 0x000000, "Member 'FWarEffortFundingMetadata::IndexedFundingData' has a wrong offset!");
static_assert(offsetof(FWarEffortFundingMetadata, FundingChoices) == 0x000020, "Member 'FWarEffortFundingMetadata::FundingChoices' has a wrong offset!");

struct FCubeMovement_CorruptionGenerationSplinePointData final
{
public:
	struct FTransform                             SplinePointTransform;
	float                                         SplinePercentComplete;
	uint8                                         Pad_64[0xC];
};
static_assert(alignof(FCubeMovement_CorruptionGenerationSplinePointData) == 0x000010, "Wrong alignment on FCubeMovement_CorruptionGenerationSplinePointData");
static_assert(sizeof(FCubeMovement_CorruptionGenerationSplinePointData) == 0x000070, "Wrong size on FCubeMovement_CorruptionGenerationSplinePointData");
static_assert(offsetof(FCubeMovement_CorruptionGenerationSplinePointData, SplinePointTransform) == 0x000000, "Member 'FCubeMovement_CorruptionGenerationSplinePointData::SplinePointTransform' has a wrong offset!");
static_assert(offsetof(FCubeMovement_CorruptionGenerationSplinePointData, SplinePercentComplete) == 0x000060, "Member 'FCubeMovement_CorruptionGenerationSplinePointData::SplinePercentComplete' has a wrong offset!");

struct FCubeMovement_CorruptionGenerationTravelerData final
{
public:
	TArray<struct FCubeMovement_CorruptionGenerationSplinePointData> SplinePointData;
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;
};
static_assert(alignof(FCubeMovement_CorruptionGenerationTravelerData) == 0x000008, "Wrong alignment on FCubeMovement_CorruptionGenerationTravelerData");
static_assert(sizeof(FCubeMovement_CorruptionGenerationTravelerData) == 0x000018, "Wrong size on FCubeMovement_CorruptionGenerationTravelerData");
static_assert(offsetof(FCubeMovement_CorruptionGenerationTravelerData, SplinePointData) == 0x000000, "Member 'FCubeMovement_CorruptionGenerationTravelerData::SplinePointData' has a wrong offset!");
static_assert(offsetof(FCubeMovement_CorruptionGenerationTravelerData, PathTraveler) == 0x000010, "Member 'FCubeMovement_CorruptionGenerationTravelerData::PathTraveler' has a wrong offset!");

struct FCubeMovement_CorruptionGenerationData final
{
public:
	TArray<struct FCubeMovement_CorruptionGenerationTravelerData> TravelerData;
};
static_assert(alignof(FCubeMovement_CorruptionGenerationData) == 0x000008, "Wrong alignment on FCubeMovement_CorruptionGenerationData");
static_assert(sizeof(FCubeMovement_CorruptionGenerationData) == 0x000010, "Wrong size on FCubeMovement_CorruptionGenerationData");
static_assert(offsetof(FCubeMovement_CorruptionGenerationData, TravelerData) == 0x000000, "Member 'FCubeMovement_CorruptionGenerationData::TravelerData' has a wrong offset!");

struct FCorruptionCalendarEventData final
{
public:
	class FString                                 EventName;
	float                                         StartPercent;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FCorruptionCalendarEventData) == 0x000008, "Wrong alignment on FCorruptionCalendarEventData");
static_assert(sizeof(FCorruptionCalendarEventData) == 0x000018, "Wrong size on FCorruptionCalendarEventData");
static_assert(offsetof(FCorruptionCalendarEventData, EventName) == 0x000000, "Member 'FCorruptionCalendarEventData::EventName' has a wrong offset!");
static_assert(offsetof(FCorruptionCalendarEventData, StartPercent) == 0x000010, "Member 'FCorruptionCalendarEventData::StartPercent' has a wrong offset!");

struct FCorruptionPauseEvent final
{
public:
	class FString                                 EventName;
	float                                         PercentDurationToPause;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FCorruptionPauseEvent) == 0x000008, "Wrong alignment on FCorruptionPauseEvent");
static_assert(sizeof(FCorruptionPauseEvent) == 0x000018, "Wrong size on FCorruptionPauseEvent");
static_assert(offsetof(FCorruptionPauseEvent, EventName) == 0x000000, "Member 'FCorruptionPauseEvent::EventName' has a wrong offset!");
static_assert(offsetof(FCorruptionPauseEvent, PercentDurationToPause) == 0x000010, "Member 'FCorruptionPauseEvent::PercentDurationToPause' has a wrong offset!");

struct FTravelerStepCorruptionOverrideData final
{
public:
	TMap<class FString, float>                    PointGroupStepPercentOverrides;
};
static_assert(alignof(FTravelerStepCorruptionOverrideData) == 0x000008, "Wrong alignment on FTravelerStepCorruptionOverrideData");
static_assert(sizeof(FTravelerStepCorruptionOverrideData) == 0x000050, "Wrong size on FTravelerStepCorruptionOverrideData");
static_assert(offsetof(FTravelerStepCorruptionOverrideData, PointGroupStepPercentOverrides) == 0x000000, "Member 'FTravelerStepCorruptionOverrideData::PointGroupStepPercentOverrides' has a wrong offset!");

struct FWarEffortMutatorChoiceData final
{
public:
	struct FGameplayTag                           FundingTag;
	uint8                                         Pad_4[0x4];
	TArray<TSoftObjectPtr<class UFortItemDefinition>> SoftRefsToLoad;
	TMap<class FName, struct FScalableFloat>      LootTableMods;
};
static_assert(alignof(FWarEffortMutatorChoiceData) == 0x000008, "Wrong alignment on FWarEffortMutatorChoiceData");
static_assert(sizeof(FWarEffortMutatorChoiceData) == 0x000068, "Wrong size on FWarEffortMutatorChoiceData");
static_assert(offsetof(FWarEffortMutatorChoiceData, FundingTag) == 0x000000, "Member 'FWarEffortMutatorChoiceData::FundingTag' has a wrong offset!");
static_assert(offsetof(FWarEffortMutatorChoiceData, SoftRefsToLoad) == 0x000008, "Member 'FWarEffortMutatorChoiceData::SoftRefsToLoad' has a wrong offset!");
static_assert(offsetof(FWarEffortMutatorChoiceData, LootTableMods) == 0x000018, "Member 'FWarEffortMutatorChoiceData::LootTableMods' has a wrong offset!");

struct FWarEffortMutatorMetadata final : public FMeshMetaDataStruct
{
public:
	TArray<struct FGameplayTag>                   ActiveFundedItems;
	TArray<struct FGameplayTag>                   ActiveTryBeforeYouBuyItems;
};
static_assert(alignof(FWarEffortMutatorMetadata) == 0x000008, "Wrong alignment on FWarEffortMutatorMetadata");
static_assert(sizeof(FWarEffortMutatorMetadata) == 0x000020, "Wrong size on FWarEffortMutatorMetadata");
static_assert(offsetof(FWarEffortMutatorMetadata, ActiveFundedItems) == 0x000000, "Member 'FWarEffortMutatorMetadata::ActiveFundedItems' has a wrong offset!");
static_assert(offsetof(FWarEffortMutatorMetadata, ActiveTryBeforeYouBuyItems) == 0x000010, "Member 'FWarEffortMutatorMetadata::ActiveTryBeforeYouBuyItems' has a wrong offset!");

struct FWarEffortFundingData final
{
public:
	struct FGameplayTag                           FundingTag;
	float                                         FundedPercent;
};
static_assert(alignof(FWarEffortFundingData) == 0x000004, "Wrong alignment on FWarEffortFundingData");
static_assert(sizeof(FWarEffortFundingData) == 0x000008, "Wrong size on FWarEffortFundingData");
static_assert(offsetof(FWarEffortFundingData, FundingTag) == 0x000000, "Member 'FWarEffortFundingData::FundingTag' has a wrong offset!");
static_assert(offsetof(FWarEffortFundingData, FundedPercent) == 0x000004, "Member 'FWarEffortFundingData::FundedPercent' has a wrong offset!");

}
