#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AudioClustersRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct AudioClusterBehavior_OnActorAdded final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(AudioClusterBehavior_OnActorAdded) == 0x000008, "Wrong alignment on AudioClusterBehavior_OnActorAdded");
static_assert(sizeof(AudioClusterBehavior_OnActorAdded) == 0x000008, "Wrong size on AudioClusterBehavior_OnActorAdded");
static_assert(offsetof(AudioClusterBehavior_OnActorAdded, Actor) == 0x000000, "Member 'AudioClusterBehavior_OnActorAdded::Actor' has a wrong offset!");

struct AudioClusterBehavior_OnActorRemoved final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(AudioClusterBehavior_OnActorRemoved) == 0x000008, "Wrong alignment on AudioClusterBehavior_OnActorRemoved");
static_assert(sizeof(AudioClusterBehavior_OnActorRemoved) == 0x000008, "Wrong size on AudioClusterBehavior_OnActorRemoved");
static_assert(offsetof(AudioClusterBehavior_OnActorRemoved, Actor) == 0x000000, "Member 'AudioClusterBehavior_OnActorRemoved::Actor' has a wrong offset!");

struct AudioClusterBehavior_OnPositionUpdated final
{
public:
	struct FVector                                Position;
};
static_assert(alignof(AudioClusterBehavior_OnPositionUpdated) == 0x000008, "Wrong alignment on AudioClusterBehavior_OnPositionUpdated");
static_assert(sizeof(AudioClusterBehavior_OnPositionUpdated) == 0x000018, "Wrong size on AudioClusterBehavior_OnPositionUpdated");
static_assert(offsetof(AudioClusterBehavior_OnPositionUpdated, Position) == 0x000000, "Member 'AudioClusterBehavior_OnPositionUpdated::Position' has a wrong offset!");

struct AudioClusterBehavior_OnSizeUpdated final
{
public:
	int32                                         Size;
};
static_assert(alignof(AudioClusterBehavior_OnSizeUpdated) == 0x000004, "Wrong alignment on AudioClusterBehavior_OnSizeUpdated");
static_assert(sizeof(AudioClusterBehavior_OnSizeUpdated) == 0x000004, "Wrong size on AudioClusterBehavior_OnSizeUpdated");
static_assert(offsetof(AudioClusterBehavior_OnSizeUpdated, Size) == 0x000000, "Member 'AudioClusterBehavior_OnSizeUpdated::Size' has a wrong offset!");

struct AudioClustersSubsystem_AddConfigMap final
{
public:
	class UAudioClusterConfigMap*                 Map;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AudioClustersSubsystem_AddConfigMap) == 0x000008, "Wrong alignment on AudioClustersSubsystem_AddConfigMap");
static_assert(sizeof(AudioClustersSubsystem_AddConfigMap) == 0x000010, "Wrong size on AudioClustersSubsystem_AddConfigMap");
static_assert(offsetof(AudioClustersSubsystem_AddConfigMap, Map) == 0x000000, "Member 'AudioClustersSubsystem_AddConfigMap::Map' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_AddConfigMap, ReturnValue) == 0x000008, "Member 'AudioClustersSubsystem_AddConfigMap::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_Register final
{
public:
	struct FAudioClusterActorInfo                 ActorInfo;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(AudioClustersSubsystem_Register) == 0x000004, "Wrong alignment on AudioClustersSubsystem_Register");
static_assert(sizeof(AudioClustersSubsystem_Register) == 0x000010, "Wrong size on AudioClustersSubsystem_Register");
static_assert(offsetof(AudioClustersSubsystem_Register, ActorInfo) == 0x000000, "Member 'AudioClustersSubsystem_Register::ActorInfo' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_Register, ReturnValue) == 0x00000C, "Member 'AudioClustersSubsystem_Register::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_RegisterOneShot final
{
public:
	struct FAudioClusterOneShotInfo               OneShotInfo;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(AudioClustersSubsystem_RegisterOneShot) == 0x000008, "Wrong alignment on AudioClustersSubsystem_RegisterOneShot");
static_assert(sizeof(AudioClustersSubsystem_RegisterOneShot) == 0x000030, "Wrong size on AudioClustersSubsystem_RegisterOneShot");
static_assert(offsetof(AudioClustersSubsystem_RegisterOneShot, OneShotInfo) == 0x000000, "Member 'AudioClustersSubsystem_RegisterOneShot::OneShotInfo' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_RegisterOneShot, ReturnValue) == 0x000028, "Member 'AudioClustersSubsystem_RegisterOneShot::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_RemoveConfigMap final
{
public:
	class UAudioClusterConfigMap*                 Map;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AudioClustersSubsystem_RemoveConfigMap) == 0x000008, "Wrong alignment on AudioClustersSubsystem_RemoveConfigMap");
static_assert(sizeof(AudioClustersSubsystem_RemoveConfigMap) == 0x000010, "Wrong size on AudioClustersSubsystem_RemoveConfigMap");
static_assert(offsetof(AudioClustersSubsystem_RemoveConfigMap, Map) == 0x000000, "Member 'AudioClustersSubsystem_RemoveConfigMap::Map' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_RemoveConfigMap, ReturnValue) == 0x000008, "Member 'AudioClustersSubsystem_RemoveConfigMap::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_SetListenerPosition final
{
public:
	struct FVector                                InListenerPosition;
};
static_assert(alignof(AudioClustersSubsystem_SetListenerPosition) == 0x000008, "Wrong alignment on AudioClustersSubsystem_SetListenerPosition");
static_assert(sizeof(AudioClustersSubsystem_SetListenerPosition) == 0x000018, "Wrong size on AudioClustersSubsystem_SetListenerPosition");
static_assert(offsetof(AudioClustersSubsystem_SetListenerPosition, InListenerPosition) == 0x000000, "Member 'AudioClustersSubsystem_SetListenerPosition::InListenerPosition' has a wrong offset!");

struct AudioClustersSubsystem_SetParam final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	double                                        Value;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(AudioClustersSubsystem_SetParam) == 0x000008, "Wrong alignment on AudioClustersSubsystem_SetParam");
static_assert(sizeof(AudioClustersSubsystem_SetParam) == 0x000018, "Wrong size on AudioClustersSubsystem_SetParam");
static_assert(offsetof(AudioClustersSubsystem_SetParam, tag) == 0x000000, "Member 'AudioClustersSubsystem_SetParam::tag' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_SetParam, Value) == 0x000008, "Member 'AudioClustersSubsystem_SetParam::Value' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_SetParam, ReturnValue) == 0x000010, "Member 'AudioClustersSubsystem_SetParam::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_Unregister final
{
public:
	struct FAudioClusterActorInfo                 ActorInfo;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(AudioClustersSubsystem_Unregister) == 0x000004, "Wrong alignment on AudioClustersSubsystem_Unregister");
static_assert(sizeof(AudioClustersSubsystem_Unregister) == 0x000010, "Wrong size on AudioClustersSubsystem_Unregister");
static_assert(offsetof(AudioClustersSubsystem_Unregister, ActorInfo) == 0x000000, "Member 'AudioClustersSubsystem_Unregister::ActorInfo' has a wrong offset!");
static_assert(offsetof(AudioClustersSubsystem_Unregister, ReturnValue) == 0x00000C, "Member 'AudioClustersSubsystem_Unregister::ReturnValue' has a wrong offset!");

struct AudioClustersSubsystem_UpdateClusters final
{
public:
	float                                         DeltaTimeSeconds;
};
static_assert(alignof(AudioClustersSubsystem_UpdateClusters) == 0x000004, "Wrong alignment on AudioClustersSubsystem_UpdateClusters");
static_assert(sizeof(AudioClustersSubsystem_UpdateClusters) == 0x000004, "Wrong size on AudioClustersSubsystem_UpdateClusters");
static_assert(offsetof(AudioClustersSubsystem_UpdateClusters, DeltaTimeSeconds) == 0x000000, "Member 'AudioClustersSubsystem_UpdateClusters::DeltaTimeSeconds' has a wrong offset!");

}
