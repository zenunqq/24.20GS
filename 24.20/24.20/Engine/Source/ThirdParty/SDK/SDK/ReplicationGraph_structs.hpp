#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FConnectionAlwaysRelevantNodePair final
{
public:
	class UNetConnection*                         NetConnection;
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;
};
static_assert(alignof(FConnectionAlwaysRelevantNodePair) == 0x000008, "Wrong alignment on FConnectionAlwaysRelevantNodePair");
static_assert(sizeof(FConnectionAlwaysRelevantNodePair) == 0x000010, "Wrong size on FConnectionAlwaysRelevantNodePair");
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0x000000, "Member 'FConnectionAlwaysRelevantNodePair::NetConnection' has a wrong offset!");
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 0x000008, "Member 'FConnectionAlwaysRelevantNodePair::Node' has a wrong offset!");

struct FAlwaysRelevantActorInfo final
{
public:
	class UNetConnection*                         Connection;
	class AActor*                                 LastViewer;
	class AActor*                                 LastViewTarget;
};
static_assert(alignof(FAlwaysRelevantActorInfo) == 0x000008, "Wrong alignment on FAlwaysRelevantActorInfo");
static_assert(sizeof(FAlwaysRelevantActorInfo) == 0x000018, "Wrong size on FAlwaysRelevantActorInfo");
static_assert(offsetof(FAlwaysRelevantActorInfo, Connection) == 0x000000, "Member 'FAlwaysRelevantActorInfo::Connection' has a wrong offset!");
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewer) == 0x000008, "Member 'FAlwaysRelevantActorInfo::LastViewer' has a wrong offset!");
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewTarget) == 0x000010, "Member 'FAlwaysRelevantActorInfo::LastViewTarget' has a wrong offset!");

struct FTearOffActorInfo final
{
public:
	uint8                                         Pad_0[0x8];
	class AActor*                                 Actor;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FTearOffActorInfo) == 0x000008, "Wrong alignment on FTearOffActorInfo");
static_assert(sizeof(FTearOffActorInfo) == 0x000018, "Wrong size on FTearOffActorInfo");
static_assert(offsetof(FTearOffActorInfo, Actor) == 0x000008, "Member 'FTearOffActorInfo::Actor' has a wrong offset!");

struct FLastLocationGatherInfo final
{
public:
	class UNetConnection*                         Connection;
	struct FVector                                LastLocation;
	struct FVector                                LastOutOfRangeLocationCheck;
};
static_assert(alignof(FLastLocationGatherInfo) == 0x000008, "Wrong alignment on FLastLocationGatherInfo");
static_assert(sizeof(FLastLocationGatherInfo) == 0x000038, "Wrong size on FLastLocationGatherInfo");
static_assert(offsetof(FLastLocationGatherInfo, Connection) == 0x000000, "Member 'FLastLocationGatherInfo::Connection' has a wrong offset!");
static_assert(offsetof(FLastLocationGatherInfo, LastLocation) == 0x000008, "Member 'FLastLocationGatherInfo::LastLocation' has a wrong offset!");
static_assert(offsetof(FLastLocationGatherInfo, LastOutOfRangeLocationCheck) == 0x000020, "Member 'FLastLocationGatherInfo::LastOutOfRangeLocationCheck' has a wrong offset!");

struct alignas(0x10) FClassReplicationInfo final
{
public:
	float                                         DistancePriorityScale;
	float                                         StarvationPriorityScale;
	float                                         AccumulatedNetPriorityBias;
	uint16                                        ReplicationPeriodFrame;
	uint16                                        FastPath_ReplicationPeriodFrame;
	uint16                                        ActorChannelFrameTimeout;
	uint8                                         Pad_12[0x52];
	float                                         CullDistance;
	float                                         CullDistanceSquared;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FClassReplicationInfo) == 0x000010, "Wrong alignment on FClassReplicationInfo");
static_assert(sizeof(FClassReplicationInfo) == 0x000070, "Wrong size on FClassReplicationInfo");
static_assert(offsetof(FClassReplicationInfo, DistancePriorityScale) == 0x000000, "Member 'FClassReplicationInfo::DistancePriorityScale' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, StarvationPriorityScale) == 0x000004, "Member 'FClassReplicationInfo::StarvationPriorityScale' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, AccumulatedNetPriorityBias) == 0x000008, "Member 'FClassReplicationInfo::AccumulatedNetPriorityBias' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, ReplicationPeriodFrame) == 0x00000C, "Member 'FClassReplicationInfo::ReplicationPeriodFrame' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, FastPath_ReplicationPeriodFrame) == 0x00000E, "Member 'FClassReplicationInfo::FastPath_ReplicationPeriodFrame' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, ActorChannelFrameTimeout) == 0x000010, "Member 'FClassReplicationInfo::ActorChannelFrameTimeout' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, CullDistance) == 0x000064, "Member 'FClassReplicationInfo::CullDistance' has a wrong offset!");
static_assert(offsetof(FClassReplicationInfo, CullDistanceSquared) == 0x000068, "Member 'FClassReplicationInfo::CullDistanceSquared' has a wrong offset!");

}
