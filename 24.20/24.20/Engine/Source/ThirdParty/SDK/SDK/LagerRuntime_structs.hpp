#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "WorldConditions_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AIModule_structs.hpp"
#include "FortniteVersion_structs.hpp"

namespace SDK
{

enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8
{
	Lifetime                                 = 0,
	Concurrent                               = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionBehavior : uint8
{
	IsActive                                 = 0,
	Ratio                                    = 1,
	ELivingWorldCalendarEventConditionBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8
{
	Less                                     = 0,
	LessOrEqual                              = 1,
	Greater                                  = 2,
	GreaterOrEqual                           = 3,
	InBetween                                = 4,
	ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5,
};

enum class EFortAthenaLivingWorldEventRuntimeDeactivationReason : uint8
{
	None                                     = 0,
	NoValidEventData                         = 1,
	RandomDeactivation                       = 2,
	CalendarEvent                            = 3,
	MatchedPrefabAndNormalActor              = 4,
	ActorDescDoesntMatchAnySpawnerData       = 5,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX = 6,
};

struct FFortLivingWorldConfigOverride final
{
public:
	TSoftObjectPtr<class UWorld>                  SourceWorld;
	struct FGameplayTagContainer                  PlaylistTag;
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig;
	struct FFortReleaseVersion                    StartVersion;
	struct FFortReleaseVersion                    EndVersion;
};
static_assert(alignof(FFortLivingWorldConfigOverride) == 0x000008, "Wrong alignment on FFortLivingWorldConfigOverride");
static_assert(sizeof(FFortLivingWorldConfigOverride) == 0x000078, "Wrong size on FFortLivingWorldConfigOverride");
static_assert(offsetof(FFortLivingWorldConfigOverride, SourceWorld) == 0x000000, "Member 'FFortLivingWorldConfigOverride::SourceWorld' has a wrong offset!");
static_assert(offsetof(FFortLivingWorldConfigOverride, PlaylistTag) == 0x000028, "Member 'FFortLivingWorldConfigOverride::PlaylistTag' has a wrong offset!");
static_assert(offsetof(FFortLivingWorldConfigOverride, LagerConfig) == 0x000048, "Member 'FFortLivingWorldConfigOverride::LagerConfig' has a wrong offset!");
static_assert(offsetof(FFortLivingWorldConfigOverride, StartVersion) == 0x000070, "Member 'FFortLivingWorldConfigOverride::StartVersion' has a wrong offset!");
static_assert(offsetof(FFortLivingWorldConfigOverride, EndVersion) == 0x000074, "Member 'FFortLivingWorldConfigOverride::EndVersion' has a wrong offset!");

struct FFortAthenaLivingWorldEventTagDensityRegistration final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	struct FScalableFloat                         Range;
	struct FScalableFloat                         DensityValue;
};
static_assert(alignof(FFortAthenaLivingWorldEventTagDensityRegistration) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldEventTagDensityRegistration");
static_assert(sizeof(FFortAthenaLivingWorldEventTagDensityRegistration) == 0x000058, "Wrong size on FFortAthenaLivingWorldEventTagDensityRegistration");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, tag) == 0x000000, "Member 'FFortAthenaLivingWorldEventTagDensityRegistration::tag' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, Range) == 0x000008, "Member 'FFortAthenaLivingWorldEventTagDensityRegistration::Range' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, DensityValue) == 0x000030, "Member 'FFortAthenaLivingWorldEventTagDensityRegistration::DensityValue' has a wrong offset!");

struct FFortAthenaLivingWorldActorSpawnDescription
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;
	TSoftClassPtr<class UClass>                   SpawnerData;
	struct FGameplayTagQuery                      SpawnerDataTagQuery;
	struct FScalableFloat                         ActorDensityValue;
	struct FScalableFloat                         DensityComputationRangeOverride;
	TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations;
	bool                                          bPreloadOnClient;
	uint8                                         Pad_F9[0x7];
};
static_assert(alignof(FFortAthenaLivingWorldActorSpawnDescription) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldActorSpawnDescription");
static_assert(sizeof(FFortAthenaLivingWorldActorSpawnDescription) == 0x000100, "Wrong size on FFortAthenaLivingWorldActorSpawnDescription");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, ActorClass) == 0x000000, "Member 'FFortAthenaLivingWorldActorSpawnDescription::ActorClass' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, SpawnerData) == 0x000028, "Member 'FFortAthenaLivingWorldActorSpawnDescription::SpawnerData' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, SpawnerDataTagQuery) == 0x000050, "Member 'FFortAthenaLivingWorldActorSpawnDescription::SpawnerDataTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, ActorDensityValue) == 0x000098, "Member 'FFortAthenaLivingWorldActorSpawnDescription::ActorDensityValue' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, DensityComputationRangeOverride) == 0x0000C0, "Member 'FFortAthenaLivingWorldActorSpawnDescription::DensityComputationRangeOverride' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, TagDensityRegistrations) == 0x0000E8, "Member 'FFortAthenaLivingWorldActorSpawnDescription::TagDensityRegistrations' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, bPreloadOnClient) == 0x0000F8, "Member 'FFortAthenaLivingWorldActorSpawnDescription::bPreloadOnClient' has a wrong offset!");

struct FFortAthenaLivingWorldPrefabActorSpawnerData final
{
public:
	struct FGuid                                  ActorSpawnerGuid;
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription;
};
static_assert(alignof(FFortAthenaLivingWorldPrefabActorSpawnerData) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldPrefabActorSpawnerData");
static_assert(sizeof(FFortAthenaLivingWorldPrefabActorSpawnerData) == 0x000110, "Wrong size on FFortAthenaLivingWorldPrefabActorSpawnerData");
static_assert(offsetof(FFortAthenaLivingWorldPrefabActorSpawnerData, ActorSpawnerGuid) == 0x000000, "Member 'FFortAthenaLivingWorldPrefabActorSpawnerData::ActorSpawnerGuid' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPrefabActorSpawnerData, ActorDescription) == 0x000010, "Member 'FFortAthenaLivingWorldPrefabActorSpawnerData::ActorDescription' has a wrong offset!");

struct FFortAthenaLivingWorldPlayerTracker final
{
public:
	TSet<class AFortAthenaAIBotController*>       TrackedBotControllers;
	TArray<class AFortPlayerPawn*>                TrackedPlayerPawns;
	TArray<class AController*>                    TrackedPlayerControllers;
	uint8                                         Pad_70[0x40];
};
static_assert(alignof(FFortAthenaLivingWorldPlayerTracker) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldPlayerTracker");
static_assert(sizeof(FFortAthenaLivingWorldPlayerTracker) == 0x0000B0, "Wrong size on FFortAthenaLivingWorldPlayerTracker");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedBotControllers) == 0x000000, "Member 'FFortAthenaLivingWorldPlayerTracker::TrackedBotControllers' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedPlayerPawns) == 0x000050, "Member 'FFortAthenaLivingWorldPlayerTracker::TrackedPlayerPawns' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedPlayerControllers) == 0x000060, "Member 'FFortAthenaLivingWorldPlayerTracker::TrackedPlayerControllers' has a wrong offset!");

struct alignas(0x08) FFortAthenaLivingWorldPointProviderFilterRules final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FFortAthenaLivingWorldPointProviderFilterRules) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldPointProviderFilterRules");
static_assert(sizeof(FFortAthenaLivingWorldPointProviderFilterRules) == 0x000030, "Wrong size on FFortAthenaLivingWorldPointProviderFilterRules");

struct FFortAthenaLivingWorldCondition_TrackedPlayerPresence final : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef          ActorRef;
	struct FScalableFloat                         MinDistanceToPlayer;
	struct FScalableFloat                         MaxDistanceToPlayer;
};
static_assert(alignof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldCondition_TrackedPlayerPresence");
static_assert(sizeof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence) == 0x000068, "Wrong size on FFortAthenaLivingWorldCondition_TrackedPlayerPresence");
static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, ActorRef) == 0x000010, "Member 'FFortAthenaLivingWorldCondition_TrackedPlayerPresence::ActorRef' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, MinDistanceToPlayer) == 0x000018, "Member 'FFortAthenaLivingWorldCondition_TrackedPlayerPresence::MinDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, MaxDistanceToPlayer) == 0x000040, "Member 'FFortAthenaLivingWorldCondition_TrackedPlayerPresence::MaxDistanceToPlayer' has a wrong offset!");

struct FFortAthenaLivingWorldCategoryTableData final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	TSoftObjectPtr<class UDataTable>              CategoryTable;
	struct FScalableFloat                         IsEnabled;
};
static_assert(alignof(FFortAthenaLivingWorldCategoryTableData) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldCategoryTableData");
static_assert(sizeof(FFortAthenaLivingWorldCategoryTableData) == 0x000058, "Wrong size on FFortAthenaLivingWorldCategoryTableData");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, Name) == 0x000000, "Member 'FFortAthenaLivingWorldCategoryTableData::Name' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, CategoryTable) == 0x000008, "Member 'FFortAthenaLivingWorldCategoryTableData::CategoryTable' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, IsEnabled) == 0x000030, "Member 'FFortAthenaLivingWorldCategoryTableData::IsEnabled' has a wrong offset!");

struct FFortAthenaLivingWorldConditionContainer final
{
public:
	class UObject*                                Owner;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FFortAthenaLivingWorldConditionContainer) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldConditionContainer");
static_assert(sizeof(FFortAthenaLivingWorldConditionContainer) == 0x000018, "Wrong size on FFortAthenaLivingWorldConditionContainer");
static_assert(offsetof(FFortAthenaLivingWorldConditionContainer, Owner) == 0x000000, "Member 'FFortAthenaLivingWorldConditionContainer::Owner' has a wrong offset!");

struct FFortAthenaLivingWorldPointProviderSpawnLimiter final
{
public:
	uint8                                         Pad_0[0x8];
	ELivingWorldPointProviderSpawnLimiterBehavior Behavior;
	uint8                                         Pad_9[0x7];
	struct FScalableFloat                         MaxNumberOfSpawn;
	struct FScalableFloat                         MaxNumberOfEventInstance;
	bool                                          bResetLimitWhenEnabling;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FFortAthenaLivingWorldPointProviderSpawnLimiter) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldPointProviderSpawnLimiter");
static_assert(sizeof(FFortAthenaLivingWorldPointProviderSpawnLimiter) == 0x000068, "Wrong size on FFortAthenaLivingWorldPointProviderSpawnLimiter");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, Behavior) == 0x000008, "Member 'FFortAthenaLivingWorldPointProviderSpawnLimiter::Behavior' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, MaxNumberOfSpawn) == 0x000010, "Member 'FFortAthenaLivingWorldPointProviderSpawnLimiter::MaxNumberOfSpawn' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, MaxNumberOfEventInstance) == 0x000038, "Member 'FFortAthenaLivingWorldPointProviderSpawnLimiter::MaxNumberOfEventInstance' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, bResetLimitWhenEnabling) == 0x000060, "Member 'FFortAthenaLivingWorldPointProviderSpawnLimiter::bResetLimitWhenEnabling' has a wrong offset!");

struct FFortAthenaLivingWorldDensityCondition final : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef          ActorRef;
	struct FGameplayTag                           tag;
	uint8                                         Pad_1C[0x4];
	struct FScalableFloat                         Distance;
	struct FScalableFloat                         MaxDensity;
	struct FScalableFloat                         MinDensity;
};
static_assert(alignof(FFortAthenaLivingWorldDensityCondition) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldDensityCondition");
static_assert(sizeof(FFortAthenaLivingWorldDensityCondition) == 0x000098, "Wrong size on FFortAthenaLivingWorldDensityCondition");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, ActorRef) == 0x000010, "Member 'FFortAthenaLivingWorldDensityCondition::ActorRef' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, tag) == 0x000018, "Member 'FFortAthenaLivingWorldDensityCondition::tag' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, Distance) == 0x000020, "Member 'FFortAthenaLivingWorldDensityCondition::Distance' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, MaxDensity) == 0x000048, "Member 'FFortAthenaLivingWorldDensityCondition::MaxDensity' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, MinDensity) == 0x000070, "Member 'FFortAthenaLivingWorldDensityCondition::MinDensity' has a wrong offset!");

struct FFortAthenaLivingWorldDespawnCondition final
{
public:
	struct FWorldConditionQueryDefinition         DespawnWorldCondition;
	float                                         TimeAsCandidateBeforeDespawn;
	float                                         TimeAsCandidateBeforeDespawnDeviation;
};
static_assert(alignof(FFortAthenaLivingWorldDespawnCondition) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldDespawnCondition");
static_assert(sizeof(FFortAthenaLivingWorldDespawnCondition) == 0x000020, "Wrong size on FFortAthenaLivingWorldDespawnCondition");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, DespawnWorldCondition) == 0x000000, "Member 'FFortAthenaLivingWorldDespawnCondition::DespawnWorldCondition' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, TimeAsCandidateBeforeDespawn) == 0x000018, "Member 'FFortAthenaLivingWorldDespawnCondition::TimeAsCandidateBeforeDespawn' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, TimeAsCandidateBeforeDespawnDeviation) == 0x00001C, "Member 'FFortAthenaLivingWorldDespawnCondition::TimeAsCandidateBeforeDespawnDeviation' has a wrong offset!");

struct alignas(0x08) FFortAthenaLinearEncounterPlayerParticipationData final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FFortAthenaLinearEncounterPlayerParticipationData) == 0x000008, "Wrong alignment on FFortAthenaLinearEncounterPlayerParticipationData");
static_assert(sizeof(FFortAthenaLinearEncounterPlayerParticipationData) == 0x000040, "Wrong size on FFortAthenaLinearEncounterPlayerParticipationData");

struct FFortAthenaLivingWorldActorUpdateHandler final
{
public:
	class UFortAthenaLivingWorldManager*          LivingWorldManager;
	uint8                                         Pad_8[0xA8];
};
static_assert(alignof(FFortAthenaLivingWorldActorUpdateHandler) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldActorUpdateHandler");
static_assert(sizeof(FFortAthenaLivingWorldActorUpdateHandler) == 0x0000B0, "Wrong size on FFortAthenaLivingWorldActorUpdateHandler");
static_assert(offsetof(FFortAthenaLivingWorldActorUpdateHandler, LivingWorldManager) == 0x000000, "Member 'FFortAthenaLivingWorldActorUpdateHandler::LivingWorldManager' has a wrong offset!");

struct FFortLivingWorldEventTableVariation final
{
public:
	TSoftObjectPtr<class UDataTable>              EventTableVariation;
	struct FScalableFloat                         VariationWeight;
};
static_assert(alignof(FFortLivingWorldEventTableVariation) == 0x000008, "Wrong alignment on FFortLivingWorldEventTableVariation");
static_assert(sizeof(FFortLivingWorldEventTableVariation) == 0x000050, "Wrong size on FFortLivingWorldEventTableVariation");
static_assert(offsetof(FFortLivingWorldEventTableVariation, EventTableVariation) == 0x000000, "Member 'FFortLivingWorldEventTableVariation::EventTableVariation' has a wrong offset!");
static_assert(offsetof(FFortLivingWorldEventTableVariation, VariationWeight) == 0x000028, "Member 'FFortLivingWorldEventTableVariation::VariationWeight' has a wrong offset!");

struct FFortAthenaLivingWorldCategory final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UDataTable>              EventTable;
	TArray<struct FFortLivingWorldEventTableVariation> EventTableVariations;
	int32                                         MaxCount;
	int32                                         MaxSpawnedCount;
	int32                                         EventInstanceMaxCount;
	int32                                         EventInstanceMaxSpawnedCount;
	struct FWorldConditionQueryDefinition         CanSpawnCondition;
	float                                         Priority;
	bool                                          bExcludeFromGlobalAIBudget;
	uint8                                         Pad_6D[0x3];
	struct FGameplayTagQuery                      RequirePlaylistTagQuery;
	TArray<TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>> Encounters;
	struct FScalableFloat                         IsEnabled;
};
static_assert(alignof(FFortAthenaLivingWorldCategory) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldCategory");
static_assert(sizeof(FFortAthenaLivingWorldCategory) == 0x0000F0, "Wrong size on FFortAthenaLivingWorldCategory");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventTable) == 0x000008, "Member 'FFortAthenaLivingWorldCategory::EventTable' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventTableVariations) == 0x000030, "Member 'FFortAthenaLivingWorldCategory::EventTableVariations' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, MaxCount) == 0x000040, "Member 'FFortAthenaLivingWorldCategory::MaxCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, MaxSpawnedCount) == 0x000044, "Member 'FFortAthenaLivingWorldCategory::MaxSpawnedCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventInstanceMaxCount) == 0x000048, "Member 'FFortAthenaLivingWorldCategory::EventInstanceMaxCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventInstanceMaxSpawnedCount) == 0x00004C, "Member 'FFortAthenaLivingWorldCategory::EventInstanceMaxSpawnedCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, CanSpawnCondition) == 0x000050, "Member 'FFortAthenaLivingWorldCategory::CanSpawnCondition' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, Priority) == 0x000068, "Member 'FFortAthenaLivingWorldCategory::Priority' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, bExcludeFromGlobalAIBudget) == 0x00006C, "Member 'FFortAthenaLivingWorldCategory::bExcludeFromGlobalAIBudget' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, RequirePlaylistTagQuery) == 0x000070, "Member 'FFortAthenaLivingWorldCategory::RequirePlaylistTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, Encounters) == 0x0000B8, "Member 'FFortAthenaLivingWorldCategory::Encounters' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldCategory, IsEnabled) == 0x0000C8, "Member 'FFortAthenaLivingWorldCategory::IsEnabled' has a wrong offset!");

struct FFortAthenaLivingWorldTagDensityGridData final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	struct FScalableFloat                         GridCellSize;
};
static_assert(alignof(FFortAthenaLivingWorldTagDensityGridData) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldTagDensityGridData");
static_assert(sizeof(FFortAthenaLivingWorldTagDensityGridData) == 0x000030, "Wrong size on FFortAthenaLivingWorldTagDensityGridData");
static_assert(offsetof(FFortAthenaLivingWorldTagDensityGridData, tag) == 0x000000, "Member 'FFortAthenaLivingWorldTagDensityGridData::tag' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldTagDensityGridData, GridCellSize) == 0x000008, "Member 'FFortAthenaLivingWorldTagDensityGridData::GridCellSize' has a wrong offset!");

struct FFortAthenaActorDensityDebugInfo final
{
public:
	class FString                                 ActorName;
	struct FVector                                ActorPosition;
	struct FIntVector                             MinCellIndex;
	struct FIntVector                             MaxCellIndex;
	float                                         DensityValue;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(FFortAthenaActorDensityDebugInfo) == 0x000008, "Wrong alignment on FFortAthenaActorDensityDebugInfo");
static_assert(sizeof(FFortAthenaActorDensityDebugInfo) == 0x000048, "Wrong size on FFortAthenaActorDensityDebugInfo");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, ActorName) == 0x000000, "Member 'FFortAthenaActorDensityDebugInfo::ActorName' has a wrong offset!");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, ActorPosition) == 0x000010, "Member 'FFortAthenaActorDensityDebugInfo::ActorPosition' has a wrong offset!");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, MinCellIndex) == 0x000028, "Member 'FFortAthenaActorDensityDebugInfo::MinCellIndex' has a wrong offset!");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, MaxCellIndex) == 0x000034, "Member 'FFortAthenaActorDensityDebugInfo::MaxCellIndex' has a wrong offset!");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, DensityValue) == 0x000040, "Member 'FFortAthenaActorDensityDebugInfo::DensityValue' has a wrong offset!");

struct FFortAthenaLivingWorldDensityGrid final : public FFortSpatialGrid
{
public:
	uint8                                         Pad_C0[0x98];
};
static_assert(alignof(FFortAthenaLivingWorldDensityGrid) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldDensityGrid");
static_assert(sizeof(FFortAthenaLivingWorldDensityGrid) == 0x000158, "Wrong size on FFortAthenaLivingWorldDensityGrid");

struct FFortAthenaLivingWorldEncounterStage final
{
public:
	TSoftObjectPtr<class UDataTable>              EventTable;
	struct FScalableFloat                         MaximumConcurrentNumberOfAI;
	struct FScalableFloat                         MaxSpawnCountPerEventGeneration;
};
static_assert(alignof(FFortAthenaLivingWorldEncounterStage) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldEncounterStage");
static_assert(sizeof(FFortAthenaLivingWorldEncounterStage) == 0x000078, "Wrong size on FFortAthenaLivingWorldEncounterStage");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, EventTable) == 0x000000, "Member 'FFortAthenaLivingWorldEncounterStage::EventTable' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaximumConcurrentNumberOfAI) == 0x000028, "Member 'FFortAthenaLivingWorldEncounterStage::MaximumConcurrentNumberOfAI' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaxSpawnCountPerEventGeneration) == 0x000050, "Member 'FFortAthenaLivingWorldEncounterStage::MaxSpawnCountPerEventGeneration' has a wrong offset!");

struct FFortAthenaLivingWorldEventDespawnCondition final
{
public:
	bool                                          bCanBeDespawned;
	uint8                                         Pad_1[0x3];
	float                                         MinDistanceToPlayer;
	float                                         TimeAsCandidateBeforeDespawn;
	EAthenaGamePhaseStep                          CanStartDespawningPhaseStep;
	uint8                                         Pad_D[0x3];
	int32                                         CanStartDespawningSafeZonePhase;
	bool                                          bCanDespawnWhenInCombatWithPlayer;
	bool                                          bCanDespawnInTheStorm;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(FFortAthenaLivingWorldEventDespawnCondition) == 0x000004, "Wrong alignment on FFortAthenaLivingWorldEventDespawnCondition");
static_assert(sizeof(FFortAthenaLivingWorldEventDespawnCondition) == 0x000018, "Wrong size on FFortAthenaLivingWorldEventDespawnCondition");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanBeDespawned) == 0x000000, "Member 'FFortAthenaLivingWorldEventDespawnCondition::bCanBeDespawned' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, MinDistanceToPlayer) == 0x000004, "Member 'FFortAthenaLivingWorldEventDespawnCondition::MinDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, TimeAsCandidateBeforeDespawn) == 0x000008, "Member 'FFortAthenaLivingWorldEventDespawnCondition::TimeAsCandidateBeforeDespawn' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, CanStartDespawningPhaseStep) == 0x00000C, "Member 'FFortAthenaLivingWorldEventDespawnCondition::CanStartDespawningPhaseStep' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, CanStartDespawningSafeZonePhase) == 0x000010, "Member 'FFortAthenaLivingWorldEventDespawnCondition::CanStartDespawningSafeZonePhase' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanDespawnWhenInCombatWithPlayer) == 0x000014, "Member 'FFortAthenaLivingWorldEventDespawnCondition::bCanDespawnWhenInCombatWithPlayer' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanDespawnInTheStorm) == 0x000015, "Member 'FFortAthenaLivingWorldEventDespawnCondition::bCanDespawnInTheStorm' has a wrong offset!");

struct FFortAthenaLivingWorldEventTagDensityCondition final
{
public:
	struct FGameplayTag                           tag;
	float                                         Distance;
	float                                         MaxDensity;
};
static_assert(alignof(FFortAthenaLivingWorldEventTagDensityCondition) == 0x000004, "Wrong alignment on FFortAthenaLivingWorldEventTagDensityCondition");
static_assert(sizeof(FFortAthenaLivingWorldEventTagDensityCondition) == 0x00000C, "Wrong size on FFortAthenaLivingWorldEventTagDensityCondition");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, tag) == 0x000000, "Member 'FFortAthenaLivingWorldEventTagDensityCondition::tag' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, Distance) == 0x000004, "Member 'FFortAthenaLivingWorldEventTagDensityCondition::Distance' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, MaxDensity) == 0x000008, "Member 'FFortAthenaLivingWorldEventTagDensityCondition::MaxDensity' has a wrong offset!");

struct FFortAthenaLivingWorldEventDataEntry final
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;
	struct FScalableFloat                         Weight;
};
static_assert(alignof(FFortAthenaLivingWorldEventDataEntry) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldEventDataEntry");
static_assert(sizeof(FFortAthenaLivingWorldEventDataEntry) == 0x000050, "Wrong size on FFortAthenaLivingWorldEventDataEntry");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, EventData) == 0x000000, "Member 'FFortAthenaLivingWorldEventDataEntry::EventData' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, Weight) == 0x000028, "Member 'FFortAthenaLivingWorldEventDataEntry::Weight' has a wrong offset!");

struct FLivingWorldCalendarEventCondition final
{
public:
	class FName                                   CalendarEventName;
	ELivingWorldCalendarEventConditionBehavior    Behavior;
	bool                                          ShouldEventBeActive;
	ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior;
	uint8                                         Pad_7[0x1];
	float                                         RatioValue;
	float                                         RatioMaxValue;
};
static_assert(alignof(FLivingWorldCalendarEventCondition) == 0x000004, "Wrong alignment on FLivingWorldCalendarEventCondition");
static_assert(sizeof(FLivingWorldCalendarEventCondition) == 0x000010, "Wrong size on FLivingWorldCalendarEventCondition");
static_assert(offsetof(FLivingWorldCalendarEventCondition, CalendarEventName) == 0x000000, "Member 'FLivingWorldCalendarEventCondition::CalendarEventName' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventCondition, Behavior) == 0x000004, "Member 'FLivingWorldCalendarEventCondition::Behavior' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventCondition, ShouldEventBeActive) == 0x000005, "Member 'FLivingWorldCalendarEventCondition::ShouldEventBeActive' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioBehavior) == 0x000006, "Member 'FLivingWorldCalendarEventCondition::RatioBehavior' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioValue) == 0x000008, "Member 'FLivingWorldCalendarEventCondition::RatioValue' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioMaxValue) == 0x00000C, "Member 'FLivingWorldCalendarEventCondition::RatioMaxValue' has a wrong offset!");

struct FLivingWorldCalendarEventConditions final
{
public:
	TArray<struct FLivingWorldCalendarEventCondition> Conditions;
	bool                                          IsActiveWithoutSeasonalManager;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FLivingWorldCalendarEventConditions) == 0x000008, "Wrong alignment on FLivingWorldCalendarEventConditions");
static_assert(sizeof(FLivingWorldCalendarEventConditions) == 0x000018, "Wrong size on FLivingWorldCalendarEventConditions");
static_assert(offsetof(FLivingWorldCalendarEventConditions, Conditions) == 0x000000, "Member 'FLivingWorldCalendarEventConditions::Conditions' has a wrong offset!");
static_assert(offsetof(FLivingWorldCalendarEventConditions, IsActiveWithoutSeasonalManager) == 0x000010, "Member 'FLivingWorldCalendarEventConditions::IsActiveWithoutSeasonalManager' has a wrong offset!");

struct FFortAthenaLivingWorldEvent final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;
	TArray<struct FFortAthenaLivingWorldEventDataEntry> EventDatas;
	struct FScalableFloat                         IsEnabled;
	TArray<float>                                 MaxCount;
	TArray<float>                                 MaxSpawnedCount;
	TArray<float>                                 EventInstanceMaxCount;
	TArray<float>                                 EventInstanceMaxSpawnedCount;
	float                                         Weight;
	uint8                                         Pad_AC[0x4];
	TArray<float>                                 MinRespawnTime;
	TArray<float>                                 MaxRespawnTime;
	bool                                          bOnlyInSafeZone;
	bool                                          bOnlyInNextSafeZone;
	bool                                          bOnlyInNextSafeZoneIfStormShrinking;
	uint8                                         Pad_D3[0x5];
	struct FWorldConditionQueryDefinition         CanSpawnCondition;
	EAthenaGamePhaseStep                          ActivationGamePhaseStep;
	uint8                                         Pad_F1[0x3];
	int32                                         ActivationSafezoneIndex;
	float                                         ActivationMinDelay;
	float                                         ActivationMaxDelay;
	float                                         DeactivationMinDelay;
	float                                         DeactivationMaxDelay;
	TArray<struct FFortAthenaLivingWorldEventTagDensityCondition> TagDensityConditions;
	bool                                          bCheckForActorDensity;
	uint8                                         Pad_119[0x3];
	float                                         MaxActorDensityOverride;
	float                                         MinDistanceToPlayer;
	float                                         MaxDistanceToPlayer;
	bool                                          bCanSpawnWithoutMatchingPlayerDistance;
	uint8                                         Pad_129[0x3];
	float                                         RandomActivationChance;
	struct FFortAthenaLivingWorldEventDespawnCondition DespawnCondition;
	TArray<struct FFortAthenaLivingWorldDespawnCondition> DespawnConditions;
	struct FGameplayTagContainer                  RequirePlaylistTags;
	struct FLivingWorldCalendarEventConditions    CalendarEventConditions;
};
static_assert(alignof(FFortAthenaLivingWorldEvent) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldEvent");
static_assert(sizeof(FFortAthenaLivingWorldEvent) == 0x000190, "Wrong size on FFortAthenaLivingWorldEvent");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventData) == 0x000008, "Member 'FFortAthenaLivingWorldEvent::EventData' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventDatas) == 0x000030, "Member 'FFortAthenaLivingWorldEvent::EventDatas' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, IsEnabled) == 0x000040, "Member 'FFortAthenaLivingWorldEvent::IsEnabled' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxCount) == 0x000068, "Member 'FFortAthenaLivingWorldEvent::MaxCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxSpawnedCount) == 0x000078, "Member 'FFortAthenaLivingWorldEvent::MaxSpawnedCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventInstanceMaxCount) == 0x000088, "Member 'FFortAthenaLivingWorldEvent::EventInstanceMaxCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventInstanceMaxSpawnedCount) == 0x000098, "Member 'FFortAthenaLivingWorldEvent::EventInstanceMaxSpawnedCount' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, Weight) == 0x0000A8, "Member 'FFortAthenaLivingWorldEvent::Weight' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MinRespawnTime) == 0x0000B0, "Member 'FFortAthenaLivingWorldEvent::MinRespawnTime' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxRespawnTime) == 0x0000C0, "Member 'FFortAthenaLivingWorldEvent::MaxRespawnTime' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInSafeZone) == 0x0000D0, "Member 'FFortAthenaLivingWorldEvent::bOnlyInSafeZone' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInNextSafeZone) == 0x0000D1, "Member 'FFortAthenaLivingWorldEvent::bOnlyInNextSafeZone' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInNextSafeZoneIfStormShrinking) == 0x0000D2, "Member 'FFortAthenaLivingWorldEvent::bOnlyInNextSafeZoneIfStormShrinking' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, CanSpawnCondition) == 0x0000D8, "Member 'FFortAthenaLivingWorldEvent::CanSpawnCondition' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationGamePhaseStep) == 0x0000F0, "Member 'FFortAthenaLivingWorldEvent::ActivationGamePhaseStep' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationSafezoneIndex) == 0x0000F4, "Member 'FFortAthenaLivingWorldEvent::ActivationSafezoneIndex' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationMinDelay) == 0x0000F8, "Member 'FFortAthenaLivingWorldEvent::ActivationMinDelay' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationMaxDelay) == 0x0000FC, "Member 'FFortAthenaLivingWorldEvent::ActivationMaxDelay' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DeactivationMinDelay) == 0x000100, "Member 'FFortAthenaLivingWorldEvent::DeactivationMinDelay' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DeactivationMaxDelay) == 0x000104, "Member 'FFortAthenaLivingWorldEvent::DeactivationMaxDelay' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, TagDensityConditions) == 0x000108, "Member 'FFortAthenaLivingWorldEvent::TagDensityConditions' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bCheckForActorDensity) == 0x000118, "Member 'FFortAthenaLivingWorldEvent::bCheckForActorDensity' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxActorDensityOverride) == 0x00011C, "Member 'FFortAthenaLivingWorldEvent::MaxActorDensityOverride' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MinDistanceToPlayer) == 0x000120, "Member 'FFortAthenaLivingWorldEvent::MinDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxDistanceToPlayer) == 0x000124, "Member 'FFortAthenaLivingWorldEvent::MaxDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bCanSpawnWithoutMatchingPlayerDistance) == 0x000128, "Member 'FFortAthenaLivingWorldEvent::bCanSpawnWithoutMatchingPlayerDistance' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, RandomActivationChance) == 0x00012C, "Member 'FFortAthenaLivingWorldEvent::RandomActivationChance' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DespawnCondition) == 0x000130, "Member 'FFortAthenaLivingWorldEvent::DespawnCondition' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DespawnConditions) == 0x000148, "Member 'FFortAthenaLivingWorldEvent::DespawnConditions' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, RequirePlaylistTags) == 0x000158, "Member 'FFortAthenaLivingWorldEvent::RequirePlaylistTags' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEvent, CalendarEventConditions) == 0x000178, "Member 'FFortAthenaLivingWorldEvent::CalendarEventConditions' has a wrong offset!");

struct FPointProviderFilterEntry final
{
public:
	struct FGameplayTagQuery                      ProviderFiltersTagQuery;
	struct FLivingWorldCalendarEventConditions    CalendarEventConditions;
	struct FScalableFloat                         Weight;
};
static_assert(alignof(FPointProviderFilterEntry) == 0x000008, "Wrong alignment on FPointProviderFilterEntry");
static_assert(sizeof(FPointProviderFilterEntry) == 0x000088, "Wrong size on FPointProviderFilterEntry");
static_assert(offsetof(FPointProviderFilterEntry, ProviderFiltersTagQuery) == 0x000000, "Member 'FPointProviderFilterEntry::ProviderFiltersTagQuery' has a wrong offset!");
static_assert(offsetof(FPointProviderFilterEntry, CalendarEventConditions) == 0x000048, "Member 'FPointProviderFilterEntry::CalendarEventConditions' has a wrong offset!");
static_assert(offsetof(FPointProviderFilterEntry, Weight) == 0x000060, "Member 'FPointProviderFilterEntry::Weight' has a wrong offset!");

struct FFortAthenaLivingWorldEventDataActorSpawnDescription final : public FFortAthenaLivingWorldActorSpawnDescription
{
public:
	bool                                          bSpawnAroundDefaultPoint;
	bool                                          bUpdateDefaultPosition;
	uint8                                         Pad_102[0x6];
	class UEnvQuery*                              SpawnAroundEnvironmentQuery;
	EEnvQueryRunMode                              SpawnAroundEnvironmentQueryRunMode;
	uint8                                         Pad_111[0x7];
};
static_assert(alignof(FFortAthenaLivingWorldEventDataActorSpawnDescription) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldEventDataActorSpawnDescription");
static_assert(sizeof(FFortAthenaLivingWorldEventDataActorSpawnDescription) == 0x000118, "Wrong size on FFortAthenaLivingWorldEventDataActorSpawnDescription");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, bSpawnAroundDefaultPoint) == 0x000100, "Member 'FFortAthenaLivingWorldEventDataActorSpawnDescription::bSpawnAroundDefaultPoint' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, bUpdateDefaultPosition) == 0x000101, "Member 'FFortAthenaLivingWorldEventDataActorSpawnDescription::bUpdateDefaultPosition' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, SpawnAroundEnvironmentQuery) == 0x000108, "Member 'FFortAthenaLivingWorldEventDataActorSpawnDescription::SpawnAroundEnvironmentQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, SpawnAroundEnvironmentQueryRunMode) == 0x000110, "Member 'FFortAthenaLivingWorldEventDataActorSpawnDescription::SpawnAroundEnvironmentQueryRunMode' has a wrong offset!");

struct FFortAthenaLivingWorldPreloader final
{
public:
	class UFortAthenaLivingWorldManager*          LivingWorldManager;
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> LoadedSpawnerDataClass;
	TArray<TSubclassOf<class AActor>>             LoadedActorClasses;
	uint8                                         Pad_28[0xB8];
};
static_assert(alignof(FFortAthenaLivingWorldPreloader) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldPreloader");
static_assert(sizeof(FFortAthenaLivingWorldPreloader) == 0x0000E0, "Wrong size on FFortAthenaLivingWorldPreloader");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LivingWorldManager) == 0x000000, "Member 'FFortAthenaLivingWorldPreloader::LivingWorldManager' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LoadedSpawnerDataClass) == 0x000008, "Member 'FFortAthenaLivingWorldPreloader::LoadedSpawnerDataClass' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LoadedActorClasses) == 0x000018, "Member 'FFortAthenaLivingWorldPreloader::LoadedActorClasses' has a wrong offset!");

struct FFortAthenaLivingWorldTaggedSpawnActionClass final
{
public:
	struct FGameplayTag                           SpawnActionTag;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UFortAthenaLivingWorldSpawnAction> SpawnActionClass;
};
static_assert(alignof(FFortAthenaLivingWorldTaggedSpawnActionClass) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldTaggedSpawnActionClass");
static_assert(sizeof(FFortAthenaLivingWorldTaggedSpawnActionClass) == 0x000010, "Wrong size on FFortAthenaLivingWorldTaggedSpawnActionClass");
static_assert(offsetof(FFortAthenaLivingWorldTaggedSpawnActionClass, SpawnActionTag) == 0x000000, "Member 'FFortAthenaLivingWorldTaggedSpawnActionClass::SpawnActionTag' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldTaggedSpawnActionClass, SpawnActionClass) == 0x000008, "Member 'FFortAthenaLivingWorldTaggedSpawnActionClass::SpawnActionClass' has a wrong offset!");

struct FFortAthenaLivingWorldCategoryTableDataList final
{
public:
	TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas;
};
static_assert(alignof(FFortAthenaLivingWorldCategoryTableDataList) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldCategoryTableDataList");
static_assert(sizeof(FFortAthenaLivingWorldCategoryTableDataList) == 0x000010, "Wrong size on FFortAthenaLivingWorldCategoryTableDataList");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableDataList, CategoryTableDatas) == 0x000000, "Member 'FFortAthenaLivingWorldCategoryTableDataList::CategoryTableDatas' has a wrong offset!");

struct FLivingWorldSpawnAroundPlayerConfiguration final
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> Encounter;
	TArray<TSubclassOf<class AFortAthenaPointAroundPlayerProvider>> PointProviderClasses;
	bool                                          bRegisterReservoir;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FLivingWorldSpawnAroundPlayerConfiguration) == 0x000008, "Wrong alignment on FLivingWorldSpawnAroundPlayerConfiguration");
static_assert(sizeof(FLivingWorldSpawnAroundPlayerConfiguration) == 0x000040, "Wrong size on FLivingWorldSpawnAroundPlayerConfiguration");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, Encounter) == 0x000000, "Member 'FLivingWorldSpawnAroundPlayerConfiguration::Encounter' has a wrong offset!");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, PointProviderClasses) == 0x000028, "Member 'FLivingWorldSpawnAroundPlayerConfiguration::PointProviderClasses' has a wrong offset!");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, bRegisterReservoir) == 0x000038, "Member 'FLivingWorldSpawnAroundPlayerConfiguration::bRegisterReservoir' has a wrong offset!");

struct FLivingWorldSpawnAroundPlayerRuntimeData final
{
public:
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> PointAroundPlayerProviders;
	class UFortAthenaLivingWorldEncounterInstance* Encounter;
};
static_assert(alignof(FLivingWorldSpawnAroundPlayerRuntimeData) == 0x000008, "Wrong alignment on FLivingWorldSpawnAroundPlayerRuntimeData");
static_assert(sizeof(FLivingWorldSpawnAroundPlayerRuntimeData) == 0x000018, "Wrong size on FLivingWorldSpawnAroundPlayerRuntimeData");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerRuntimeData, PointAroundPlayerProviders) == 0x000000, "Member 'FLivingWorldSpawnAroundPlayerRuntimeData::PointAroundPlayerProviders' has a wrong offset!");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerRuntimeData, Encounter) == 0x000010, "Member 'FLivingWorldSpawnAroundPlayerRuntimeData::Encounter' has a wrong offset!");

struct FFortAthenaLivingWorldTagQueryToSeatMapping final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	int32                                         SeatIndex;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FFortAthenaLivingWorldTagQueryToSeatMapping) == 0x000008, "Wrong alignment on FFortAthenaLivingWorldTagQueryToSeatMapping");
static_assert(sizeof(FFortAthenaLivingWorldTagQueryToSeatMapping) == 0x000050, "Wrong size on FFortAthenaLivingWorldTagQueryToSeatMapping");
static_assert(offsetof(FFortAthenaLivingWorldTagQueryToSeatMapping, TagQuery) == 0x000000, "Member 'FFortAthenaLivingWorldTagQueryToSeatMapping::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaLivingWorldTagQueryToSeatMapping, SeatIndex) == 0x000048, "Member 'FFortAthenaLivingWorldTagQueryToSeatMapping::SeatIndex' has a wrong offset!");

}
