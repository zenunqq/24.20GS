#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "FortAudioClustersRuntime_structs.hpp"
#include "GameFeatures_classes.hpp"

namespace SDK
{

class UFortAudioClustersSettings final : public UDeveloperSettings
{
public:
	TMap<struct FGameplayTag, double>             ParameterDefaults;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAudioClustersSettings">();
	}
	static class UFortAudioClustersSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAudioClustersSettings>();
	}
};
static_assert(alignof(UFortAudioClustersSettings) == 0x000008, "Wrong alignment on UFortAudioClustersSettings");
static_assert(sizeof(UFortAudioClustersSettings) == 0x000080, "Wrong size on UFortAudioClustersSettings");
static_assert(offsetof(UFortAudioClustersSettings, ParameterDefaults) == 0x000030, "Member 'UFortAudioClustersSettings::ParameterDefaults' has a wrong offset!");

class UFortAudioClustersSubsystem final : public UTickableWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAudioClustersSubsystem">();
	}
	static class UFortAudioClustersSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAudioClustersSubsystem>();
	}
};
static_assert(alignof(UFortAudioClustersSubsystem) == 0x000008, "Wrong alignment on UFortAudioClustersSubsystem");
static_assert(sizeof(UFortAudioClustersSubsystem) == 0x000040, "Wrong size on UFortAudioClustersSubsystem");

class UGameFeatureAction_AddAudioCluster final : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureAudioClusterEntry>  Clusters;
	TMap<class FName, struct FGameplayTag>        OverrideTable;
	class FName                                   DisabledActorTag;
	uint8                                         Pad_8C[0x64];

public:
	void HandleRegisteredActorDeath(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddAudioCluster">();
	}
	static class UGameFeatureAction_AddAudioCluster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddAudioCluster>();
	}
};
static_assert(alignof(UGameFeatureAction_AddAudioCluster) == 0x000008, "Wrong alignment on UGameFeatureAction_AddAudioCluster");
static_assert(sizeof(UGameFeatureAction_AddAudioCluster) == 0x0000F0, "Wrong size on UGameFeatureAction_AddAudioCluster");
static_assert(offsetof(UGameFeatureAction_AddAudioCluster, Clusters) == 0x000028, "Member 'UGameFeatureAction_AddAudioCluster::Clusters' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddAudioCluster, OverrideTable) == 0x000038, "Member 'UGameFeatureAction_AddAudioCluster::OverrideTable' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddAudioCluster, DisabledActorTag) == 0x000088, "Member 'UGameFeatureAction_AddAudioCluster::DisabledActorTag' has a wrong offset!");

class UGameFeatureAction_AddAudioClusterConfigMaps final : public UGameFeatureAction
{
public:
	TArray<class UAudioClusterConfigMap*>         ConfigMaps;
	uint8                                         Pad_38[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddAudioClusterConfigMaps">();
	}
	static class UGameFeatureAction_AddAudioClusterConfigMaps* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddAudioClusterConfigMaps>();
	}
};
static_assert(alignof(UGameFeatureAction_AddAudioClusterConfigMaps) == 0x000008, "Wrong alignment on UGameFeatureAction_AddAudioClusterConfigMaps");
static_assert(sizeof(UGameFeatureAction_AddAudioClusterConfigMaps) == 0x000088, "Wrong size on UGameFeatureAction_AddAudioClusterConfigMaps");
static_assert(offsetof(UGameFeatureAction_AddAudioClusterConfigMaps, ConfigMaps) == 0x000028, "Member 'UGameFeatureAction_AddAudioClusterConfigMaps::ConfigMaps' has a wrong offset!");

}
