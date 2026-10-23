#pragma once

#include "Basic.hpp"

#include "WorldConditions_structs.hpp"
#include "WorldConditions_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "LagerRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "GameFeatures_classes.hpp"

namespace SDK
{

class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{
public:
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders;
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders;
	struct FGameplayTagContainer                  EnablerTags;
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders;
	struct FScalableFloat                         PointProvidersToEnable;
	struct FScalableFloat                         EvaluateAutomatically;
	uint8                                         Pad_328[0x8];
	TMulticastInlineDelegate<void(TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders)> OnCompletedEvaluationDelegate;

public:
	void EvaluateAndEnablePointProviders();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void RemoveClosestPointProvidersToPoint(const struct FVector& Point, const float MaximumDistance, const int32 PointsToDisable);

	bool DoesStartEnabled() const;
	const TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders() const;
	const struct FGameplayTagContainer GetEnablerTags() const;
	bool HasCompletedEvaluation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPointProvidersEnabler">();
	}
	static class AFortAthenaLivingWorldPointProvidersEnabler* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldPointProvidersEnabler>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldPointProvidersEnabler) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldPointProvidersEnabler");
static_assert(sizeof(AFortAthenaLivingWorldPointProvidersEnabler) == 0x000340, "Wrong size on AFortAthenaLivingWorldPointProvidersEnabler");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, EnabledLinkedPointProviders) == 0x000288, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::EnabledLinkedPointProviders' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, AvailableLinkedPointProviders) == 0x000298, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::AvailableLinkedPointProviders' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, EnablerTags) == 0x0002A8, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::EnablerTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, LinkedPointProviders) == 0x0002C8, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::LinkedPointProviders' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, PointProvidersToEnable) == 0x0002D8, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::PointProvidersToEnable' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, EvaluateAutomatically) == 0x000300, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::EvaluateAutomatically' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPointProvidersEnabler, OnCompletedEvaluationDelegate) == 0x000330, "Member 'AFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluationDelegate' has a wrong offset!");

class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride final : public AFortAthenaLivingWorldPointProvidersEnabler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride">();
	}
	static class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");
static_assert(sizeof(AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride) == 0x000340, "Wrong size on AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");

class UFortAthenaLinearEncounterAnalyticComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x58];

public:
	void OnAttackerSpawned(class AActor* SpawnedAttacker);
	void OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderSpawned(class AActor* SpawnedDefender);
	void OnEncounterEnd();
	void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter);
	void OnStageCompleted(const TArray<class AFortPickup*>& SpawnedRewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLinearEncounterAnalyticComponent">();
	}
	static class UFortAthenaLinearEncounterAnalyticComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLinearEncounterAnalyticComponent>();
	}
};
static_assert(alignof(UFortAthenaLinearEncounterAnalyticComponent) == 0x000008, "Wrong alignment on UFortAthenaLinearEncounterAnalyticComponent");
static_assert(sizeof(UFortAthenaLinearEncounterAnalyticComponent) == 0x0000F8, "Wrong size on UFortAthenaLinearEncounterAnalyticComponent");

class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldConditionSchema">();
	}
	static class UFortAthenaLivingWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldConditionSchema>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldConditionSchema) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldConditionSchema");
static_assert(sizeof(UFortAthenaLivingWorldConditionSchema) == 0x000038, "Wrong size on UFortAthenaLivingWorldConditionSchema");

class UFortAthenaLivingWorldConfigData final : public UDataAsset
{
public:
	TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas;
	struct FScalableFloat                         MaxActorCount;
	struct FScalableFloat                         MaxEventSpawnPerTick;
	struct FScalableFloat                         MaxActorDespawnPerTick;
	struct FScalableFloat                         MinimumEventGenerationInterval;
	struct FScalableFloat                         MaxActorDensity;
	struct FScalableFloat                         MaxActorUpdatesPerTick;
	struct FScalableFloat                         ActorDensityGridCellSize;
	struct FScalableFloat                         PointClusterSize;
	struct FScalableFloat                         MinNumberOfPlayerForAggressiveSpawning;
	TArray<struct FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData;
	struct FGameplayTagQuery                      SingleUseSpawnerDataQuery;
	TSubclassOf<class AActor>                     EQSActorHelperClass;
	struct FScalableFloat                         DelayEventGeneration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldConfigData">();
	}
	static class UFortAthenaLivingWorldConfigData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldConfigData>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldConfigData) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldConfigData");
static_assert(sizeof(UFortAthenaLivingWorldConfigData) == 0x000230, "Wrong size on UFortAthenaLivingWorldConfigData");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, CategoryTableDatas) == 0x000030, "Member 'UFortAthenaLivingWorldConfigData::CategoryTableDatas' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorCount) == 0x000040, "Member 'UFortAthenaLivingWorldConfigData::MaxActorCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxEventSpawnPerTick) == 0x000068, "Member 'UFortAthenaLivingWorldConfigData::MaxEventSpawnPerTick' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorDespawnPerTick) == 0x000090, "Member 'UFortAthenaLivingWorldConfigData::MaxActorDespawnPerTick' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MinimumEventGenerationInterval) == 0x0000B8, "Member 'UFortAthenaLivingWorldConfigData::MinimumEventGenerationInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorDensity) == 0x0000E0, "Member 'UFortAthenaLivingWorldConfigData::MaxActorDensity' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorUpdatesPerTick) == 0x000108, "Member 'UFortAthenaLivingWorldConfigData::MaxActorUpdatesPerTick' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, ActorDensityGridCellSize) == 0x000130, "Member 'UFortAthenaLivingWorldConfigData::ActorDensityGridCellSize' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, PointClusterSize) == 0x000158, "Member 'UFortAthenaLivingWorldConfigData::PointClusterSize' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MinNumberOfPlayerForAggressiveSpawning) == 0x000180, "Member 'UFortAthenaLivingWorldConfigData::MinNumberOfPlayerForAggressiveSpawning' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, TagDensityGridData) == 0x0001A8, "Member 'UFortAthenaLivingWorldConfigData::TagDensityGridData' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, SingleUseSpawnerDataQuery) == 0x0001B8, "Member 'UFortAthenaLivingWorldConfigData::SingleUseSpawnerDataQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, EQSActorHelperClass) == 0x000200, "Member 'UFortAthenaLivingWorldConfigData::EQSActorHelperClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, DelayEventGeneration) == 0x000208, "Member 'UFortAthenaLivingWorldConfigData::DelayEventGeneration' has a wrong offset!");

class UFortAthenaLivingWorldDebugDensityMiniMapIndicator final : public UFortMiniMapIndicator
{
public:
	TArray<struct FFortAthenaActorDensityDebugInfo> ActorDebugInfos;
	TArray<float>                                 DensityGridValues;
	struct FVector                                GridOrigin;
	struct FIntVector                             MaxGridSize;
	float                                         CellSize;
	float                                         MaxDensity;
	uint8                                         Pad_18C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldDebugDensityMiniMapIndicator">();
	}
	static class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldDebugDensityMiniMapIndicator>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldDebugDensityMiniMapIndicator");
static_assert(sizeof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator) == 0x000190, "Wrong size on UFortAthenaLivingWorldDebugDensityMiniMapIndicator");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, ActorDebugInfos) == 0x000140, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::ActorDebugInfos' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, DensityGridValues) == 0x000150, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::DensityGridValues' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, GridOrigin) == 0x000160, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::GridOrigin' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, MaxGridSize) == 0x000178, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::MaxGridSize' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, CellSize) == 0x000184, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::CellSize' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, MaxDensity) == 0x000188, "Member 'UFortAthenaLivingWorldDebugDensityMiniMapIndicator::MaxDensity' has a wrong offset!");

class UFortAthenaLivingWorldDespawnConditionSchema final : public UFortAthenaLivingWorldConditionSchema
{
public:
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldDespawnConditionSchema">();
	}
	static class UFortAthenaLivingWorldDespawnConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldDespawnConditionSchema>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldDespawnConditionSchema) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldDespawnConditionSchema");
static_assert(sizeof(UFortAthenaLivingWorldDespawnConditionSchema) == 0x000040, "Wrong size on UFortAthenaLivingWorldDespawnConditionSchema");

class UFortAthenaLivingWorldEncounter final : public UDataAsset
{
public:
	struct FScalableFloat                         IntervalBetweenEventGeneration;
	TArray<struct FFortAthenaLivingWorldEncounterStage> Stages;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldEncounter">();
	}
	static class UFortAthenaLivingWorldEncounter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldEncounter>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldEncounter) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldEncounter");
static_assert(sizeof(UFortAthenaLivingWorldEncounter) == 0x000068, "Wrong size on UFortAthenaLivingWorldEncounter");
static_assert(offsetof(UFortAthenaLivingWorldEncounter, IntervalBetweenEventGeneration) == 0x000030, "Member 'UFortAthenaLivingWorldEncounter::IntervalBetweenEventGeneration' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounter, Stages) == 0x000058, "Member 'UFortAthenaLivingWorldEncounter::Stages' has a wrong offset!");

class UFortAthenaLivingWorldEncounterInstance final : public UObject
{
public:
	TMulticastInlineDelegate<void(class AActor* SpawnedActor)> OnActorSpawned;
	TMulticastInlineDelegate<void(class AActor* DestroyedActor)> OnActorDestroyed;
	uint8                                         Pad_48[0x50];
	struct FFortAthenaLivingWorldConditionContainer ConditionContainer;
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AllowedPointProviders;
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders;
	TArray<class UFortAthenaLivingWorldEventData*> RuntimeCreatedEventDatas;
	uint8                                         Pad_E0[0x20];
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterDefinition;
	class AActor*                                 ActorDensityReservoir;
	TArray<class AActor*>                         SpawnedActors;
	uint8                                         Pad_140[0x8];
	int32                                         CurrentStageIndex;
	uint8                                         Pad_14C[0x4];
	bool                                          bIsPaused;
	uint8                                         Pad_151[0x7];

public:
	void AddAllowedPointProvider(const TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>& PointProvider);
	void AdvanceEncounterStage();
	void PauseEncounter();
	void RemoveAllowedPointProvider(const TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>& PointProvider);
	void RequestEventGeneration();
	void Reset();
	void ResumeEncounter();
	void StartEncounterStage(const int32 StageIndex);

	int32 GetTotalActorCount() const;
	bool OwnsActor(class AActor* Actor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldEncounterInstance">();
	}
	static class UFortAthenaLivingWorldEncounterInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldEncounterInstance>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldEncounterInstance) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldEncounterInstance");
static_assert(sizeof(UFortAthenaLivingWorldEncounterInstance) == 0x000158, "Wrong size on UFortAthenaLivingWorldEncounterInstance");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnActorSpawned) == 0x000028, "Member 'UFortAthenaLivingWorldEncounterInstance::OnActorSpawned' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnActorDestroyed) == 0x000038, "Member 'UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, ConditionContainer) == 0x000098, "Member 'UFortAthenaLivingWorldEncounterInstance::ConditionContainer' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, AllowedPointProviders) == 0x0000B0, "Member 'UFortAthenaLivingWorldEncounterInstance::AllowedPointProviders' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, RegisteredPointProviders) == 0x0000C0, "Member 'UFortAthenaLivingWorldEncounterInstance::RegisteredPointProviders' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, RuntimeCreatedEventDatas) == 0x0000D0, "Member 'UFortAthenaLivingWorldEncounterInstance::RuntimeCreatedEventDatas' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, EncounterDefinition) == 0x000100, "Member 'UFortAthenaLivingWorldEncounterInstance::EncounterDefinition' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, ActorDensityReservoir) == 0x000128, "Member 'UFortAthenaLivingWorldEncounterInstance::ActorDensityReservoir' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, SpawnedActors) == 0x000130, "Member 'UFortAthenaLivingWorldEncounterInstance::SpawnedActors' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, CurrentStageIndex) == 0x000148, "Member 'UFortAthenaLivingWorldEncounterInstance::CurrentStageIndex' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, bIsPaused) == 0x000150, "Member 'UFortAthenaLivingWorldEncounterInstance::bIsPaused' has a wrong offset!");

class UFortAthenaLivingWorldEventData final : public UDataAsset
{
public:
	int32                                         TimeOfDayFilters;
	float                                         WaterLevelIndexMin;
	float                                         WaterLevelIndexMax;
	uint8                                         Pad_3C[0x4];
	struct FWorldConditionQueryDefinition         CanSpawnCondition;
	TArray<struct FFortAthenaLivingWorldDespawnCondition> DespawnConditions;
	struct FGameplayTagQuery                      ProviderFiltersTagQuery;
	TArray<struct FPointProviderFilterEntry>      ProviderFiltersEntries;
	TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions;
	struct FScalableFloat                         MinActorCountToSpawn;
	struct FScalableFloat                         MaxActorCountToSpawn;
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldEventData">();
	}
	static class UFortAthenaLivingWorldEventData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldEventData>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldEventData) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldEventData");
static_assert(sizeof(UFortAthenaLivingWorldEventData) == 0x000130, "Wrong size on UFortAthenaLivingWorldEventData");
static_assert(offsetof(UFortAthenaLivingWorldEventData, TimeOfDayFilters) == 0x000030, "Member 'UFortAthenaLivingWorldEventData::TimeOfDayFilters' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, WaterLevelIndexMin) == 0x000034, "Member 'UFortAthenaLivingWorldEventData::WaterLevelIndexMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, WaterLevelIndexMax) == 0x000038, "Member 'UFortAthenaLivingWorldEventData::WaterLevelIndexMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, CanSpawnCondition) == 0x000040, "Member 'UFortAthenaLivingWorldEventData::CanSpawnCondition' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, DespawnConditions) == 0x000058, "Member 'UFortAthenaLivingWorldEventData::DespawnConditions' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ProviderFiltersTagQuery) == 0x000068, "Member 'UFortAthenaLivingWorldEventData::ProviderFiltersTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ProviderFiltersEntries) == 0x0000B0, "Member 'UFortAthenaLivingWorldEventData::ProviderFiltersEntries' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, SpawnActions) == 0x0000C0, "Member 'UFortAthenaLivingWorldEventData::SpawnActions' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, MinActorCountToSpawn) == 0x0000D0, "Member 'UFortAthenaLivingWorldEventData::MinActorCountToSpawn' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, MaxActorCountToSpawn) == 0x0000F8, "Member 'UFortAthenaLivingWorldEventData::MaxActorCountToSpawn' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ActorDescriptions) == 0x000120, "Member 'UFortAthenaLivingWorldEventData::ActorDescriptions' has a wrong offset!");

class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig;
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;
	struct FScalableFloat                         LagerEnabled;
	TMap<struct FGameplayTag, TSubclassOf<class UFortAthenaLivingWorldSpawnAction>> TaggedSpawnActionClassMap;
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> PointProviders;
	uint8                                         Pad_168[0x8];
	struct FSlateBrush                            SpecialActorMinimapIconBrush;
	struct FVector2D                              SpecialActorMinimapIconScale;
	struct FSlateBrush                            SpecialActorCompassIconBrush;
	struct FVector2D                              SpecialActorCompassIconScale;
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> SpawnedSingleUseSpawnerData;
	class UWorld*                                 CachedWorld;
	class UFortAthenaLivingWorldConfigData*       CachedConfig;
	TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;
	class UFortSeasonalEventManager*              CachedSeasonalEventManager;
	TArray<TSoftClassPtr<class UClass>>           ActorClassToPreloadOnClient;
	struct FFortAthenaLivingWorldActorUpdateHandler ActorUpdateHandler;
	struct FFortAthenaLivingWorldPlayerTracker    PlayerTracker;
	struct FFortAthenaLivingWorldPreloader        Preloader;
	struct FFortAthenaLivingWorldConditionContainer GlobalConditionContainer;
	uint8                                         Pad_5B0[0x258];
	TArray<class AActor*>                         RuntimePointProviderList;
	TSet<class AActor*>                           RuntimePointProviderOwners;
	uint8                                         Pad_868[0x1D0];
	TMap<TSubclassOf<class UFortAthenaLivingWorldSpawnAction>, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache;
	class AActor*                                 EQSHelper;
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator;
	uint8                                         Pad_A98[0x28];

public:
	static class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject* WorldContextObject);
	static void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	static void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);

	void CancelSpawnRequest(const int32 RequestID);
	void EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
	void LivingWorldManagerDebugEvent(const class FString& EventName, int32 DebugIndex, const class FString& RuntimeSpawnDataName, const class FString& EncounterName);
	void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance, float MinDisplayDistance);
	void LivingWorldManagerDumpEventInstances();
	void LivingWorldManagerDumpPrefabLevelBounds();
	void LivingWorldManagerDumpSpawnCount();
	void LivingWorldManagerFlush();
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerSetEventGenerationEnabled(const bool bInGenerateEvents);
	void LivingWorldManagerToggleActorMinimap(const class FString& Name_0);
	void LivingWorldManagerToggleDensityDisplay();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleVerboseLogging();
	void LWMF();
	void LWMTAM(const class FString& Name_0);
	void OnActorSpawned(class AActor* Actor, int32 RequestID);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnDebugSpawnEventSpawned(const TArray<class AActor*>& SpawnedActors, bool bSuccess);
	void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);
	void OnRep_ActorClassToPreloadOnClient();
	void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);
	void OnSpawnedActorDestroy(class AActor* DestroyedActor);
	void OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor);
	void OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags);
	void RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range);
	void RequestEventGeneration();
	void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(const TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, const TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor* ActorDensityReservoir);
	bool TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, const TDelegate<void(TArray<class AActor*>& SpawnedActors, bool bSuccess)>& OnRequestFinished, int32* RequestID);
	void UnregisterDensityReservoir(class AActor* ActorDensityReservoir);

	bool BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const;
	class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor* Actor) const;
	bool IsEncounterCategoryActive(const TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType) const;
	int32 QueryEventBudget(const struct FDataTableRowHandle& EventEntry, const class AActor* SpawnLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldManager">();
	}
	static class UFortAthenaLivingWorldManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldManager>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldManager) == 0x000010, "Wrong alignment on UFortAthenaLivingWorldManager");
static_assert(sizeof(UFortAthenaLivingWorldManager) == 0x000AC0, "Wrong size on UFortAthenaLivingWorldManager");
static_assert(offsetof(UFortAthenaLivingWorldManager, DefaultLagerConfig) == 0x0000A8, "Member 'UFortAthenaLivingWorldManager::DefaultLagerConfig' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, LagerConfigOverrides) == 0x0000D0, "Member 'UFortAthenaLivingWorldManager::LagerConfigOverrides' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, LagerEnabled) == 0x0000E0, "Member 'UFortAthenaLivingWorldManager::LagerEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, TaggedSpawnActionClassMap) == 0x000108, "Member 'UFortAthenaLivingWorldManager::TaggedSpawnActionClassMap' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, PointProviders) == 0x000158, "Member 'UFortAthenaLivingWorldManager::PointProviders' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorMinimapIconBrush) == 0x000170, "Member 'UFortAthenaLivingWorldManager::SpecialActorMinimapIconBrush' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorMinimapIconScale) == 0x000230, "Member 'UFortAthenaLivingWorldManager::SpecialActorMinimapIconScale' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorCompassIconBrush) == 0x000240, "Member 'UFortAthenaLivingWorldManager::SpecialActorCompassIconBrush' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorCompassIconScale) == 0x000300, "Member 'UFortAthenaLivingWorldManager::SpecialActorCompassIconScale' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpawnedSingleUseSpawnerData) == 0x000310, "Member 'UFortAthenaLivingWorldManager::SpawnedSingleUseSpawnerData' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedWorld) == 0x000320, "Member 'UFortAthenaLivingWorldManager::CachedWorld' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedConfig) == 0x000328, "Member 'UFortAthenaLivingWorldManager::CachedConfig' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, RunningEncounterInstances) == 0x000330, "Member 'UFortAthenaLivingWorldManager::RunningEncounterInstances' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedSeasonalEventManager) == 0x000340, "Member 'UFortAthenaLivingWorldManager::CachedSeasonalEventManager' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, ActorClassToPreloadOnClient) == 0x000348, "Member 'UFortAthenaLivingWorldManager::ActorClassToPreloadOnClient' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, ActorUpdateHandler) == 0x000358, "Member 'UFortAthenaLivingWorldManager::ActorUpdateHandler' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, PlayerTracker) == 0x000408, "Member 'UFortAthenaLivingWorldManager::PlayerTracker' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, Preloader) == 0x0004B8, "Member 'UFortAthenaLivingWorldManager::Preloader' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, GlobalConditionContainer) == 0x000598, "Member 'UFortAthenaLivingWorldManager::GlobalConditionContainer' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, RuntimePointProviderList) == 0x000808, "Member 'UFortAthenaLivingWorldManager::RuntimePointProviderList' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, RuntimePointProviderOwners) == 0x000818, "Member 'UFortAthenaLivingWorldManager::RuntimePointProviderOwners' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpawnActionCache) == 0x000A38, "Member 'UFortAthenaLivingWorldManager::SpawnActionCache' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, EQSHelper) == 0x000A88, "Member 'UFortAthenaLivingWorldManager::EQSHelper' has a wrong offset!");
static_assert(offsetof(UFortAthenaLivingWorldManager, DebugDensityMinimapIndicator) == 0x000A90, "Member 'UFortAthenaLivingWorldManager::DebugDensityMinimapIndicator' has a wrong offset!");

class IFortAthenaLivingWorldPointProviderInterface final : public IInterface
{
public:
	void DisablePointProvider();
	void EnablePointProvider();
	struct FVector GetPointProviderLocation();

	void GetFiltersTags(struct FGameplayTagContainer* FilterTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPointProviderInterface">();
	}
	static class IFortAthenaLivingWorldPointProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaLivingWorldPointProviderInterface>();
	}
};
static_assert(alignof(IFortAthenaLivingWorldPointProviderInterface) == 0x000008, "Wrong alignment on IFortAthenaLivingWorldPointProviderInterface");
static_assert(sizeof(IFortAthenaLivingWorldPointProviderInterface) == 0x000028, "Wrong size on IFortAthenaLivingWorldPointProviderInterface");

class UFortAthenaLivingWorldPrefabLevelStreaming final : public ULevelStreamingLevelInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPrefabLevelStreaming">();
	}
	static class UFortAthenaLivingWorldPrefabLevelStreaming* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldPrefabLevelStreaming>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldPrefabLevelStreaming) == 0x000010, "Wrong alignment on UFortAthenaLivingWorldPrefabLevelStreaming");
static_assert(sizeof(UFortAthenaLivingWorldPrefabLevelStreaming) == 0x0001C0, "Wrong size on UFortAthenaLivingWorldPrefabLevelStreaming");

class AFortAthenaLivingWorldPrefab final : public ABuildingLevelInstance
{
public:
	TArray<struct FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas;
	struct FBox                                   LocalLevelBounds;
	struct FBox                                   LocalGrassRemovalBox;
	TMulticastInlineDelegate<void(TArray<class AActor*>& SpawnedActors)> OnAllActorSpawnedDelegate;
	uint8                                         Pad_8D0[0x18];
	TArray<TWeakObjectPtr<class ABuildingActor>>  BuildingsToKill;
	TArray<TWeakObjectPtr<class AActor>>          SpawnedActors;
	TDelegate<void()>                             FinishedDestroyingBuildingCallback;
	bool                                          bHasFinishedSpawn;
	bool                                          bHasRemovedFoliage;
	uint8                                         Pad_916[0x2];
	struct FScalableFloat                         bIsEnabled;
	struct FScalableFloat                         Weight;
	bool                                          bShouldLevelBeVisible;
	bool                                          bShouldSpawnerBeAllowedToSpawn;
	bool                                          bShouldAlwaysSnapAboveLandscape;
	uint8                                         Pad_96B[0x5];
	struct FWorldConditionQueryDefinition         CanSpawnCondition;
	uint8                                         Pad_988[0x8];

public:
	static class AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(const class UObject* WorldContextObject);

	void AllowSpawnerToSpawn();
	void CallWhenAllActorHaveSpawned(const TDelegate<void(TArray<class AActor*>& SpawnedActors)>& DelegateToCall);
	void DestroyBuildingsInLevelBounds(const TDelegate<void()>& FinishedDelegate);
	void MakeLevelVisible();
	void OnLevelShown();
	void OnRep_ShouldLevelBeVisible();
	void RemoveFoliageInsideLevelBound();

	struct FBox GetLevelBounds() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPrefab">();
	}
	static class AFortAthenaLivingWorldPrefab* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldPrefab>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldPrefab) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldPrefab");
static_assert(sizeof(AFortAthenaLivingWorldPrefab) == 0x000990, "Wrong size on AFortAthenaLivingWorldPrefab");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, ActorSpawnerDatas) == 0x000840, "Member 'AFortAthenaLivingWorldPrefab::ActorSpawnerDatas' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, LocalLevelBounds) == 0x000850, "Member 'AFortAthenaLivingWorldPrefab::LocalLevelBounds' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, LocalGrassRemovalBox) == 0x000888, "Member 'AFortAthenaLivingWorldPrefab::LocalGrassRemovalBox' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, OnAllActorSpawnedDelegate) == 0x0008C0, "Member 'AFortAthenaLivingWorldPrefab::OnAllActorSpawnedDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, BuildingsToKill) == 0x0008E8, "Member 'AFortAthenaLivingWorldPrefab::BuildingsToKill' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, SpawnedActors) == 0x0008F8, "Member 'AFortAthenaLivingWorldPrefab::SpawnedActors' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, FinishedDestroyingBuildingCallback) == 0x000908, "Member 'AFortAthenaLivingWorldPrefab::FinishedDestroyingBuildingCallback' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bHasFinishedSpawn) == 0x000914, "Member 'AFortAthenaLivingWorldPrefab::bHasFinishedSpawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bHasRemovedFoliage) == 0x000915, "Member 'AFortAthenaLivingWorldPrefab::bHasRemovedFoliage' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bIsEnabled) == 0x000918, "Member 'AFortAthenaLivingWorldPrefab::bIsEnabled' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, Weight) == 0x000940, "Member 'AFortAthenaLivingWorldPrefab::Weight' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bShouldLevelBeVisible) == 0x000968, "Member 'AFortAthenaLivingWorldPrefab::bShouldLevelBeVisible' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bShouldSpawnerBeAllowedToSpawn) == 0x000969, "Member 'AFortAthenaLivingWorldPrefab::bShouldSpawnerBeAllowedToSpawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, bShouldAlwaysSnapAboveLandscape) == 0x00096A, "Member 'AFortAthenaLivingWorldPrefab::bShouldAlwaysSnapAboveLandscape' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefab, CanSpawnCondition) == 0x000970, "Member 'AFortAthenaLivingWorldPrefab::CanSpawnCondition' has a wrong offset!");

class AFortAthenaLivingWorldPrefabActorSpawner final : public AActor
{
public:
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription;
	TMulticastInlineDelegate<void(class AActor* SpawnedActor)> OnActorSpawnedDelegate;
	class AFortAthenaPatrolPath*                  PatrolPath;
	struct FGuid                                  Guid;
	TWeakObjectPtr<class AActor>                  SpawnedActor;

public:
	void CallWhenActorSpawned(const TDelegate<void(class AActor* SpawnedActor)>& DelegateToCall);
	void OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, const struct FTransform& OldTransform, const struct FTransform& NewTransfom);

	class AActor* GetSpawnedActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPrefabActorSpawner">();
	}
	static class AFortAthenaLivingWorldPrefabActorSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldPrefabActorSpawner>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldPrefabActorSpawner) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldPrefabActorSpawner");
static_assert(sizeof(AFortAthenaLivingWorldPrefabActorSpawner) == 0x0003B8, "Wrong size on AFortAthenaLivingWorldPrefabActorSpawner");
static_assert(offsetof(AFortAthenaLivingWorldPrefabActorSpawner, ActorDescription) == 0x000288, "Member 'AFortAthenaLivingWorldPrefabActorSpawner::ActorDescription' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefabActorSpawner, OnActorSpawnedDelegate) == 0x000388, "Member 'AFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawnedDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefabActorSpawner, PatrolPath) == 0x000398, "Member 'AFortAthenaLivingWorldPrefabActorSpawner::PatrolPath' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefabActorSpawner, Guid) == 0x0003A0, "Member 'AFortAthenaLivingWorldPrefabActorSpawner::Guid' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldPrefabActorSpawner, SpawnedActor) == 0x0003B0, "Member 'AFortAthenaLivingWorldPrefabActorSpawner::SpawnedActor' has a wrong offset!");

class UFortAthenaLivingWorldSpawnAction : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldSpawnAction">();
	}
	static class UFortAthenaLivingWorldSpawnAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldSpawnAction>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldSpawnAction) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldSpawnAction");
static_assert(sizeof(UFortAthenaLivingWorldSpawnAction) == 0x000028, "Wrong size on UFortAthenaLivingWorldSpawnAction");

class UFortAthenaLivingWorldSpawnActionBlueprint final : public UFortAthenaLivingWorldSpawnAction
{
public:
	void K2_OnAllActorSpawned(const TArray<class AActor*>& SpawnedActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldSpawnActionBlueprint">();
	}
	static class UFortAthenaLivingWorldSpawnActionBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldSpawnActionBlueprint>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldSpawnActionBlueprint) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldSpawnActionBlueprint");
static_assert(sizeof(UFortAthenaLivingWorldSpawnActionBlueprint) == 0x000028, "Wrong size on UFortAthenaLivingWorldSpawnActionBlueprint");

class AFortAthenaLivingWorldStaticPointProvider : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
	struct FGameplayTagContainer                  FiltersTags;
	TArray<struct FTransform>                     SpawnPoints;
	bool                                          bStartEnabled;
	bool                                          bRandomizeStartPoint;
	uint8                                         Pad_32A[0x6];
	TMulticastInlineDelegate<void(class AActor* SpawnedActor)> OnActorSpawned;
	class AFortGameStateAthena*                   CachedGameState;
	class UFortAthenaLivingWorldManager*          CachedLivingWorldManager;
	uint8                                         Pad_350[0x8];

public:
	void DisablePointProvider();
	void EnablePointProvider();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldStaticPointProvider">();
	}
	static class AFortAthenaLivingWorldStaticPointProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldStaticPointProvider>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldStaticPointProvider) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldStaticPointProvider");
static_assert(sizeof(AFortAthenaLivingWorldStaticPointProvider) == 0x000358, "Wrong size on AFortAthenaLivingWorldStaticPointProvider");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, SpawnLimiter) == 0x000290, "Member 'AFortAthenaLivingWorldStaticPointProvider::SpawnLimiter' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, FiltersTags) == 0x0002F8, "Member 'AFortAthenaLivingWorldStaticPointProvider::FiltersTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, SpawnPoints) == 0x000318, "Member 'AFortAthenaLivingWorldStaticPointProvider::SpawnPoints' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, bStartEnabled) == 0x000328, "Member 'AFortAthenaLivingWorldStaticPointProvider::bStartEnabled' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, bRandomizeStartPoint) == 0x000329, "Member 'AFortAthenaLivingWorldStaticPointProvider::bRandomizeStartPoint' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, OnActorSpawned) == 0x000330, "Member 'AFortAthenaLivingWorldStaticPointProvider::OnActorSpawned' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, CachedGameState) == 0x000340, "Member 'AFortAthenaLivingWorldStaticPointProvider::CachedGameState' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldStaticPointProvider, CachedLivingWorldManager) == 0x000348, "Member 'AFortAthenaLivingWorldStaticPointProvider::CachedLivingWorldManager' has a wrong offset!");

class AFortAthenaLivingWorldVehiclePointProvider final : public AFortAthenaLivingWorldStaticPointProvider
{
public:
	struct FGameplayTagContainer                  ForceMods;
	struct FScalableFloat                         ForceModsAllowed;
	EVehicleInitialOverlapBehavior                InitialOverlapBehavior;
	uint8                                         Pad_3A1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldVehiclePointProvider">();
	}
	static class AFortAthenaLivingWorldVehiclePointProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldVehiclePointProvider>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldVehiclePointProvider) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldVehiclePointProvider");
static_assert(sizeof(AFortAthenaLivingWorldVehiclePointProvider) == 0x0003A8, "Wrong size on AFortAthenaLivingWorldVehiclePointProvider");
static_assert(offsetof(AFortAthenaLivingWorldVehiclePointProvider, ForceMods) == 0x000358, "Member 'AFortAthenaLivingWorldVehiclePointProvider::ForceMods' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVehiclePointProvider, ForceModsAllowed) == 0x000378, "Member 'AFortAthenaLivingWorldVehiclePointProvider::ForceModsAllowed' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVehiclePointProvider, InitialOverlapBehavior) == 0x0003A0, "Member 'AFortAthenaLivingWorldVehiclePointProvider::InitialOverlapBehavior' has a wrong offset!");

class AFortAthenaLivingWorldVolume : public AVolume
{
public:
	uint8                                         Pad_2C0[0x8];
	bool                                          bStartEnabled;
	uint8                                         Pad_2C9[0x7];
	struct FGameplayTagContainer                  FiltersTags;
	class UEnvQuery*                              EnvironmentQuery;
	TArray<struct FAIDynamicParam>                QueryConfig;
	bool                                          bRemoveUsedPoint;
	bool                                          bRemoveUsedPointPermenantly;
	uint8                                         Pad_30A[0x6];
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
	struct FScalableFloat                         EQSRefreshInterval;
	struct FScalableFloat                         WaterLevelIndexMin;
	struct FScalableFloat                         WaterLevelIndexMax;
	class AFortGameStateAthena*                   CachedGameState;
	TMulticastInlineDelegate<void(class AActor* SpawnedActor, bool bResult)> OnActorSpawnedResult;
	TMulticastInlineDelegate<void(class AFortAthenaLivingWorldVolume* PointProviderVolume)> OnPointProviderRegistered;
	class UFortAthenaLivingWorldManager*          CachedLivingWorldManager;
	uint8                                         Pad_420[0x198];

public:
	void DisablePointProvider();
	void EnablePointProvider();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags);
	void ResetSpawnRotation();
	void RunEQS();
	void SetEQSQuery(class UEnvQuery* Query);
	void SetEQSQueryConfigParam(const class FName ParameterName, float Value);
	void SetFiltersTags(const struct FGameplayTagContainer& TagContainer);
	void SetSpawnRotation(const struct FRotator& Rotation);

	bool DoesStartEnabled() const;
	bool IsPointProviderEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldVolume">();
	}
	static class AFortAthenaLivingWorldVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldVolume>();
	}
};
static_assert(alignof(AFortAthenaLivingWorldVolume) == 0x000008, "Wrong alignment on AFortAthenaLivingWorldVolume");
static_assert(sizeof(AFortAthenaLivingWorldVolume) == 0x0005B8, "Wrong size on AFortAthenaLivingWorldVolume");
static_assert(offsetof(AFortAthenaLivingWorldVolume, bStartEnabled) == 0x0002C8, "Member 'AFortAthenaLivingWorldVolume::bStartEnabled' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, FiltersTags) == 0x0002D0, "Member 'AFortAthenaLivingWorldVolume::FiltersTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, EnvironmentQuery) == 0x0002F0, "Member 'AFortAthenaLivingWorldVolume::EnvironmentQuery' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, QueryConfig) == 0x0002F8, "Member 'AFortAthenaLivingWorldVolume::QueryConfig' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, bRemoveUsedPoint) == 0x000308, "Member 'AFortAthenaLivingWorldVolume::bRemoveUsedPoint' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, bRemoveUsedPointPermenantly) == 0x000309, "Member 'AFortAthenaLivingWorldVolume::bRemoveUsedPointPermenantly' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, SpawnLimiter) == 0x000310, "Member 'AFortAthenaLivingWorldVolume::SpawnLimiter' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, EQSRefreshInterval) == 0x000378, "Member 'AFortAthenaLivingWorldVolume::EQSRefreshInterval' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, WaterLevelIndexMin) == 0x0003A0, "Member 'AFortAthenaLivingWorldVolume::WaterLevelIndexMin' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, WaterLevelIndexMax) == 0x0003C8, "Member 'AFortAthenaLivingWorldVolume::WaterLevelIndexMax' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, CachedGameState) == 0x0003F0, "Member 'AFortAthenaLivingWorldVolume::CachedGameState' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, OnActorSpawnedResult) == 0x0003F8, "Member 'AFortAthenaLivingWorldVolume::OnActorSpawnedResult' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, OnPointProviderRegistered) == 0x000408, "Member 'AFortAthenaLivingWorldVolume::OnPointProviderRegistered' has a wrong offset!");
static_assert(offsetof(AFortAthenaLivingWorldVolume, CachedLivingWorldManager) == 0x000418, "Member 'AFortAthenaLivingWorldVolume::CachedLivingWorldManager' has a wrong offset!");

class UFortAthenaLivingWorldWardComponent final : public UActorComponent
{
public:
	float                                         DefaultRadius;
	uint8                                         Pad_A4[0xC];

public:
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags);
	void SetWardRadius(float Radius);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldWardComponent">();
	}
	static class UFortAthenaLivingWorldWardComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldWardComponent>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldWardComponent) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldWardComponent");
static_assert(sizeof(UFortAthenaLivingWorldWardComponent) == 0x0000B0, "Wrong size on UFortAthenaLivingWorldWardComponent");
static_assert(offsetof(UFortAthenaLivingWorldWardComponent, DefaultRadius) == 0x0000A0, "Member 'UFortAthenaLivingWorldWardComponent::DefaultRadius' has a wrong offset!");

class AFortAthenaPatrolPathPointProvider final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	struct FGameplayTagContainer                  FiltersTags;
	class AFortAthenaPatrolPath*                  AssociatedPatrolPath;
	uint8                                         bStartEnabled : 1;
	uint8                                         bSpawnOnPatrolPath : 1;
	uint8                                         bAlignOrientationToPath : 1;
	uint8                                         Pad_2B9[0x7];
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
	TMulticastInlineDelegate<void(class AActor* SpawnedActor, bool bResult)> OnActorSpawnedResult;
	TWeakObjectPtr<class AFortAthenaPatrolPath>   RuntimePatrolPathWeakPtr;
	class AFortGameStateAthena*                   CachedGameState;
	class UFortAthenaLivingWorldManager*          CachedLivingWorldManager;
	uint8                                         Pad_350[0x8];

public:
	void DisablePointProvider();
	void EnablePointProvider();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPatrolPathPointProvider">();
	}
	static class AFortAthenaPatrolPathPointProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaPatrolPathPointProvider>();
	}
};
static_assert(alignof(AFortAthenaPatrolPathPointProvider) == 0x000008, "Wrong alignment on AFortAthenaPatrolPathPointProvider");
static_assert(sizeof(AFortAthenaPatrolPathPointProvider) == 0x000358, "Wrong size on AFortAthenaPatrolPathPointProvider");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, FiltersTags) == 0x000290, "Member 'AFortAthenaPatrolPathPointProvider::FiltersTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, AssociatedPatrolPath) == 0x0002B0, "Member 'AFortAthenaPatrolPathPointProvider::AssociatedPatrolPath' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, SpawnLimiter) == 0x0002C0, "Member 'AFortAthenaPatrolPathPointProvider::SpawnLimiter' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, OnActorSpawnedResult) == 0x000328, "Member 'AFortAthenaPatrolPathPointProvider::OnActorSpawnedResult' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, RuntimePatrolPathWeakPtr) == 0x000338, "Member 'AFortAthenaPatrolPathPointProvider::RuntimePatrolPathWeakPtr' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, CachedGameState) == 0x000340, "Member 'AFortAthenaPatrolPathPointProvider::CachedGameState' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPathPointProvider, CachedLivingWorldManager) == 0x000348, "Member 'AFortAthenaPatrolPathPointProvider::CachedLivingWorldManager' has a wrong offset!");

class AFortAthenaPointAroundPlayerProvider final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	struct FGameplayTagContainer                  FiltersTags;
	class UEnvQuery*                              QueryTemplate;
	EEnvQueryRunMode                              RunMode;
	uint8                                         bStartEnabled : 1;
	uint8                                         bGenerateAroundPlayerBots : 1;
	uint8                                         Pad_2BA[0x2];
	struct FGameplayTag                           IgnorePlayerWithTag;
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
	TMulticastInlineDelegate<void(class AActor* SpawnedActor, bool bResult)> OnActorSpawnedResult;
	class AFortGameStateAthena*                   CachedGameState;
	uint8                                         Pad_340[0x8];

public:
	void DisablePointProvider();
	void EnablePointProvider();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPointAroundPlayerProvider">();
	}
	static class AFortAthenaPointAroundPlayerProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaPointAroundPlayerProvider>();
	}
};
static_assert(alignof(AFortAthenaPointAroundPlayerProvider) == 0x000008, "Wrong alignment on AFortAthenaPointAroundPlayerProvider");
static_assert(sizeof(AFortAthenaPointAroundPlayerProvider) == 0x000348, "Wrong size on AFortAthenaPointAroundPlayerProvider");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, FiltersTags) == 0x000290, "Member 'AFortAthenaPointAroundPlayerProvider::FiltersTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, QueryTemplate) == 0x0002B0, "Member 'AFortAthenaPointAroundPlayerProvider::QueryTemplate' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, RunMode) == 0x0002B8, "Member 'AFortAthenaPointAroundPlayerProvider::RunMode' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, IgnorePlayerWithTag) == 0x0002BC, "Member 'AFortAthenaPointAroundPlayerProvider::IgnorePlayerWithTag' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, SpawnLimiter) == 0x0002C0, "Member 'AFortAthenaPointAroundPlayerProvider::SpawnLimiter' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, OnActorSpawnedResult) == 0x000328, "Member 'AFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult' has a wrong offset!");
static_assert(offsetof(AFortAthenaPointAroundPlayerProvider, CachedGameState) == 0x000338, "Member 'AFortAthenaPointAroundPlayerProvider::CachedGameState' has a wrong offset!");

class UFortCheatManager_LivingWorldManager final : public UChildCheatManager
{
public:
	int32                                         CheatTeleportToCount;
	uint8                                         Pad_2C[0x4];
	class FString                                 CheatTeleportLastEventDataName;
	int32                                         CheatSpawnEventCount;
	uint8                                         Pad_44[0x4];
	class FString                                 CheatSpawnEventName;
	int32                                         CheatTriggerEventCount;
	uint8                                         Pad_5C[0x4];
	class FString                                 CheatTriggerEventName;

public:
	void LivingWorldManagerSpawn(const class FString& EventDataName);
	void LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation);
	void LivingWorldManagerSpawnEvent(const class FString& EventDataName, const class FString& SpawnerDataNames);
	void LivingWorldManagerSpawnEventAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation, const class FString& SpawnerDataNames);
	void LivingWorldManagerTeleportTo(const class FString& EventDataName);
	void LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName);
	void LivingWorldManagerTriggerEvent(const class FString& EventDataName);
	void LWMS(const class FString& EventDataName);
	void LWMSE(const class FString& EventDataName, const class FString& SpawnerDataNames);
	void LWMTE(const class FString& EventDataName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_LivingWorldManager">();
	}
	static class UFortCheatManager_LivingWorldManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_LivingWorldManager>();
	}
};
static_assert(alignof(UFortCheatManager_LivingWorldManager) == 0x000008, "Wrong alignment on UFortCheatManager_LivingWorldManager");
static_assert(sizeof(UFortCheatManager_LivingWorldManager) == 0x000070, "Wrong size on UFortCheatManager_LivingWorldManager");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTeleportToCount) == 0x000028, "Member 'UFortCheatManager_LivingWorldManager::CheatTeleportToCount' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTeleportLastEventDataName) == 0x000030, "Member 'UFortCheatManager_LivingWorldManager::CheatTeleportLastEventDataName' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatSpawnEventCount) == 0x000040, "Member 'UFortCheatManager_LivingWorldManager::CheatSpawnEventCount' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatSpawnEventName) == 0x000048, "Member 'UFortCheatManager_LivingWorldManager::CheatSpawnEventName' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTriggerEventCount) == 0x000058, "Member 'UFortCheatManager_LivingWorldManager::CheatTriggerEventCount' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTriggerEventName) == 0x000060, "Member 'UFortCheatManager_LivingWorldManager::CheatTriggerEventName' has a wrong offset!");

class UFortGameFeatureAction_AddCategoryTableToConfig final : public UGameFeatureAction
{
public:
	TMap<TSoftObjectPtr<class UFortAthenaLivingWorldConfigData>, struct FFortAthenaLivingWorldCategoryTableDataList> ConfigToCategoryTableDatas;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFeatureAction_AddCategoryTableToConfig">();
	}
	static class UFortGameFeatureAction_AddCategoryTableToConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFeatureAction_AddCategoryTableToConfig>();
	}
};
static_assert(alignof(UFortGameFeatureAction_AddCategoryTableToConfig) == 0x000008, "Wrong alignment on UFortGameFeatureAction_AddCategoryTableToConfig");
static_assert(sizeof(UFortGameFeatureAction_AddCategoryTableToConfig) == 0x000078, "Wrong size on UFortGameFeatureAction_AddCategoryTableToConfig");
static_assert(offsetof(UFortGameFeatureAction_AddCategoryTableToConfig, ConfigToCategoryTableDatas) == 0x000028, "Member 'UFortGameFeatureAction_AddCategoryTableToConfig::ConfigToCategoryTableDatas' has a wrong offset!");

class UFortGameFeatureAction_AddLagerConfig final : public UGameFeatureAction
{
public:
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFeatureAction_AddLagerConfig">();
	}
	static class UFortGameFeatureAction_AddLagerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFeatureAction_AddLagerConfig>();
	}
};
static_assert(alignof(UFortGameFeatureAction_AddLagerConfig) == 0x000008, "Wrong alignment on UFortGameFeatureAction_AddLagerConfig");
static_assert(sizeof(UFortGameFeatureAction_AddLagerConfig) == 0x000038, "Wrong size on UFortGameFeatureAction_AddLagerConfig");
static_assert(offsetof(UFortGameFeatureAction_AddLagerConfig, LagerConfigOverrides) == 0x000028, "Member 'UFortGameFeatureAction_AddLagerConfig::LagerConfigOverrides' has a wrong offset!");

class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath final : public UFortGameFeatureAction_MapMarkerTagsProvider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath">();
	}
	static class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath>();
	}
};
static_assert(alignof(UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath) == 0x000008, "Wrong alignment on UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath");
static_assert(sizeof(UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath) == 0x000028, "Wrong size on UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath");

class UFortPawnComponent_LivingWorldSpawnAroundPlayer final : public UFortPawnComponent
{
public:
	TArray<struct FLivingWorldSpawnAroundPlayerRuntimeData> RuntimeData;
	TArray<struct FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_LivingWorldSpawnAroundPlayer">();
	}
	static class UFortPawnComponent_LivingWorldSpawnAroundPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_LivingWorldSpawnAroundPlayer>();
	}
};
static_assert(alignof(UFortPawnComponent_LivingWorldSpawnAroundPlayer) == 0x000008, "Wrong alignment on UFortPawnComponent_LivingWorldSpawnAroundPlayer");
static_assert(sizeof(UFortPawnComponent_LivingWorldSpawnAroundPlayer) == 0x0000C8, "Wrong size on UFortPawnComponent_LivingWorldSpawnAroundPlayer");
static_assert(offsetof(UFortPawnComponent_LivingWorldSpawnAroundPlayer, RuntimeData) == 0x0000A8, "Member 'UFortPawnComponent_LivingWorldSpawnAroundPlayer::RuntimeData' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_LivingWorldSpawnAroundPlayer, PerPlayerConfigurations) == 0x0000B8, "Member 'UFortPawnComponent_LivingWorldSpawnAroundPlayer::PerPlayerConfigurations' has a wrong offset!");

class UFortQueryTest_IsCloseToLivingWorldWard final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsCloseToLivingWorldWard">();
	}
	static class UFortQueryTest_IsCloseToLivingWorldWard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsCloseToLivingWorldWard>();
	}
};
static_assert(alignof(UFortQueryTest_IsCloseToLivingWorldWard) == 0x000008, "Wrong alignment on UFortQueryTest_IsCloseToLivingWorldWard");
static_assert(sizeof(UFortQueryTest_IsCloseToLivingWorldWard) == 0x0001F8, "Wrong size on UFortQueryTest_IsCloseToLivingWorldWard");

class UFortAthenaLivingWorldSpawnAction_AddAIToGroup final : public UFortAthenaLivingWorldSpawnAction
{
public:
	struct FGameplayTagContainer                  GroupTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldSpawnAction_AddAIToGroup">();
	}
	static class UFortAthenaLivingWorldSpawnAction_AddAIToGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldSpawnAction_AddAIToGroup>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldSpawnAction_AddAIToGroup) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldSpawnAction_AddAIToGroup");
static_assert(sizeof(UFortAthenaLivingWorldSpawnAction_AddAIToGroup) == 0x000048, "Wrong size on UFortAthenaLivingWorldSpawnAction_AddAIToGroup");
static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_AddAIToGroup, GroupTags) == 0x000028, "Member 'UFortAthenaLivingWorldSpawnAction_AddAIToGroup::GroupTags' has a wrong offset!");

class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle final : public UFortAthenaLivingWorldSpawnAction
{
public:
	TArray<struct FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle">();
	}
	static class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle>();
	}
};
static_assert(alignof(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle) == 0x000008, "Wrong alignment on UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");
static_assert(sizeof(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle) == 0x000038, "Wrong size on UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");
static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle, SeatMappings) == 0x000028, "Member 'UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::SeatMappings' has a wrong offset!");

}
