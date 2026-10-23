#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UAudioClusterConfig final : public UObject
{
public:
	class UAudioClusterBehavior*                  Behavior;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioClusterConfig">();
	}
	static class UAudioClusterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioClusterConfig>();
	}
};
static_assert(alignof(UAudioClusterConfig) == 0x000008, "Wrong alignment on UAudioClusterConfig");
static_assert(sizeof(UAudioClusterConfig) == 0x000030, "Wrong size on UAudioClusterConfig");
static_assert(offsetof(UAudioClusterConfig, Behavior) == 0x000028, "Member 'UAudioClusterConfig::Behavior' has a wrong offset!");

class UAudioClusterConfigMap final : public UObject
{
public:
	TMap<struct FGameplayTag, class UAudioClusterConfig*> TagConfigMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioClusterConfigMap">();
	}
	static class UAudioClusterConfigMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioClusterConfigMap>();
	}
};
static_assert(alignof(UAudioClusterConfigMap) == 0x000008, "Wrong alignment on UAudioClusterConfigMap");
static_assert(sizeof(UAudioClusterConfigMap) == 0x000078, "Wrong size on UAudioClusterConfigMap");
static_assert(offsetof(UAudioClusterConfigMap, TagConfigMap) == 0x000028, "Member 'UAudioClusterConfigMap::TagConfigMap' has a wrong offset!");

class UAudioClusterBehavior : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	void OnActorAdded(class AActor* Actor);
	void OnActorRemoved(class AActor* Actor);
	void OnPositionUpdated(const struct FVector& Position);
	void OnSizeUpdated(int32 Size);
	void OnStart();
	void OnStop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioClusterBehavior">();
	}
	static class UAudioClusterBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioClusterBehavior>();
	}
};
static_assert(alignof(UAudioClusterBehavior) == 0x000008, "Wrong alignment on UAudioClusterBehavior");
static_assert(sizeof(UAudioClusterBehavior) == 0x000030, "Wrong size on UAudioClusterBehavior");

class UAudioClustersSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];

public:
	bool AddConfigMap(class UAudioClusterConfigMap* Map);
	bool Register(const struct FAudioClusterActorInfo& ActorInfo);
	bool RegisterOneShot(const struct FAudioClusterOneShotInfo& OneShotInfo);
	bool RemoveConfigMap(class UAudioClusterConfigMap* Map);
	void SetListenerPosition(const struct FVector& InListenerPosition);
	bool SetParam(const struct FGameplayTag& tag, double Value);
	bool Unregister(const struct FAudioClusterActorInfo& ActorInfo);
	void UpdateClusters(float DeltaTimeSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioClustersSubsystem">();
	}
	static class UAudioClustersSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioClustersSubsystem>();
	}
};
static_assert(alignof(UAudioClustersSubsystem) == 0x000008, "Wrong alignment on UAudioClustersSubsystem");
static_assert(sizeof(UAudioClustersSubsystem) == 0x000038, "Wrong size on UAudioClustersSubsystem");

}
