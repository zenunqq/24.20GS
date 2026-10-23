#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ReplicationGraph_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;
	class UNetDriver*                             NetDriver;
	TArray<class UNetReplicationGraphConnection*> Connections;
	TArray<class UNetReplicationGraphConnection*> PendingConnections;
	uint8                                         Pad_58[0x40];
	TArray<class UReplicationGraphNode*>          GlobalGraphNodes;
	TArray<class UReplicationGraphNode*>          PrepareForReplicationNodes;
	uint8                                         Pad_B8[0x4B0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraph">();
	}
	static class UReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraph>();
	}
};
#pragma pack(pop)
static_assert(alignof(UReplicationGraph) == 0x000010, "Wrong alignment on UReplicationGraph");
static_assert(sizeof(UReplicationGraph) == 0x000570, "Wrong size on UReplicationGraph");
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x000028, "Member 'UReplicationGraph::ReplicationConnectionManagerClass' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x000030, "Member 'UReplicationGraph::NetDriver' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, Connections) == 0x000038, "Member 'UReplicationGraph::Connections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x000048, "Member 'UReplicationGraph::PendingConnections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x000098, "Member 'UReplicationGraph::GlobalGraphNodes' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x0000A8, "Member 'UReplicationGraph::PrepareForReplicationNodes' has a wrong offset!");

class UBasicReplicationGraph final : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;
	class UReplicationGraphNode_ActorList*        AlwaysRelevantNode;
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
	TArray<class AActor*>                         ActorsWithoutNetConnection;
	uint8                                         Pad_598[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BasicReplicationGraph">();
	}
	static class UBasicReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicReplicationGraph>();
	}
};
static_assert(alignof(UBasicReplicationGraph) == 0x000010, "Wrong alignment on UBasicReplicationGraph");
static_assert(sizeof(UBasicReplicationGraph) == 0x0005A0, "Wrong size on UBasicReplicationGraph");
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x000568, "Member 'UBasicReplicationGraph::GridNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x000570, "Member 'UBasicReplicationGraph::AlwaysRelevantNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x000578, "Member 'UBasicReplicationGraph::AlwaysRelevantForConnectionList' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x000588, "Member 'UBasicReplicationGraph::ActorsWithoutNetConnection' has a wrong offset!");

class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>          AllChildNodes;
	uint8                                         Pad_38[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode">();
	}
	static class UReplicationGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode>();
	}
};
static_assert(alignof(UReplicationGraphNode) == 0x000008, "Wrong alignment on UReplicationGraphNode");
static_assert(sizeof(UReplicationGraphNode) == 0x000050, "Wrong size on UReplicationGraphNode");
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x000028, "Member 'UReplicationGraphNode::AllChildNodes' has a wrong offset!");

class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0x80];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorList">();
	}
	static class UReplicationGraphNode_ActorList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorList>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorList) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorList");
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x0000D0, "Wrong size on UReplicationGraphNode_ActorList");

class UReplicationGraphNode_ActorListFrequencyBuckets final : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0xB8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorListFrequencyBuckets">();
	}
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorListFrequencyBuckets>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorListFrequencyBuckets");
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000108, "Wrong size on UReplicationGraphNode_ActorListFrequencyBuckets");

class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_D0[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DynamicSpatialFrequency">();
	}
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DynamicSpatialFrequency>();
	}
};
static_assert(alignof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000008, "Wrong alignment on UReplicationGraphNode_DynamicSpatialFrequency");
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000100, "Wrong size on UReplicationGraphNode_DynamicSpatialFrequency");

class UReplicationGraphNode_ConnectionDormancyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_D0[0x80];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ConnectionDormancyNode">();
	}
	static class UReplicationGraphNode_ConnectionDormancyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ConnectionDormancyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_ConnectionDormancyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_ConnectionDormancyNode");
static_assert(sizeof(UReplicationGraphNode_ConnectionDormancyNode) == 0x000150, "Wrong size on UReplicationGraphNode_ConnectionDormancyNode");

class UReplicationGraphNode_DormancyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_D0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DormancyNode">();
	}
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DormancyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_DormancyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_DormancyNode");
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x0000E0, "Wrong size on UReplicationGraphNode_DormancyNode");

class alignas(0x10) UReplicationGraphNode_GridCell final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_D0[0x40];
	class UReplicationGraphNode*                  DynamicNode;
	class UReplicationGraphNode_DormancyNode*     DormancyNode;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridCell">();
	}
	static class UReplicationGraphNode_GridCell* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridCell>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridCell) == 0x000010, "Wrong alignment on UReplicationGraphNode_GridCell");
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x000120, "Wrong size on UReplicationGraphNode_GridCell");
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x000110, "Member 'UReplicationGraphNode_GridCell::DynamicNode' has a wrong offset!");
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x000118, "Member 'UReplicationGraphNode_GridCell::DormancyNode' has a wrong offset!");

class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0x230];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridSpatialization2D">();
	}
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridSpatialization2D>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridSpatialization2D) == 0x000008, "Wrong alignment on UReplicationGraphNode_GridSpatialization2D");
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x000280, "Wrong size on UReplicationGraphNode_GridSpatialization2D");

class UReplicationGraphNode_AlwaysRelevant final : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                  ChildNode;
	uint8                                         Pad_58[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant">();
	}
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x000068, "Wrong size on UReplicationGraphNode_AlwaysRelevant");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x000050, "Member 'UReplicationGraphNode_AlwaysRelevant::ChildNode' has a wrong offset!");

class UReplicationGraphNode_AlwaysRelevant_ForConnection final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_D0[0x10];
	TArray<struct FAlwaysRelevantActorInfo>       PastRelevantActors;
	uint8                                         Pad_F0[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant_ForConnection">();
	}
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000140, "Wrong size on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 0x0000E0, "Member 'UReplicationGraphNode_AlwaysRelevant_ForConnection::PastRelevantActors' has a wrong offset!");

class UReplicationGraphNode_TearOff_ForConnection final : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>              TearOffActors;
	uint8                                         Pad_60[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_TearOff_ForConnection">();
	}
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_TearOff_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_TearOff_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_TearOff_ForConnection");
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x000070, "Wrong size on UReplicationGraphNode_TearOff_ForConnection");
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x000050, "Member 'UReplicationGraphNode_TearOff_ForConnection::TearOffActors' has a wrong offset!");

class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                         NetConnection;
	uint8                                         Pad_30[0x148];
	class AReplicationGraphDebugActor*            DebugActor;
	uint8                                         Pad_180[0x8];
	TArray<struct FLastLocationGatherInfo>        LastGatherLocations;
	uint8                                         Pad_198[0xA8];
	TArray<class UReplicationGraphNode*>          ConnectionGraphNodes;
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;
	uint8                                         Pad_258[0x120];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetReplicationGraphConnection">();
	}
	static class UNetReplicationGraphConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetReplicationGraphConnection>();
	}
};
static_assert(alignof(UNetReplicationGraphConnection) == 0x000008, "Wrong alignment on UNetReplicationGraphConnection");
static_assert(sizeof(UNetReplicationGraphConnection) == 0x000378, "Wrong size on UNetReplicationGraphConnection");
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x000028, "Member 'UNetReplicationGraphConnection::NetConnection' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x000178, "Member 'UNetReplicationGraphConnection::DebugActor' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 0x000188, "Member 'UNetReplicationGraphConnection::LastGatherLocations' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x000240, "Member 'UNetReplicationGraphConnection::ConnectionGraphNodes' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x000250, "Member 'UNetReplicationGraphConnection::TearOffNode' has a wrong offset!");

class AReplicationGraphDebugActor final : public AActor
{
public:
	class UReplicationGraph*                      ReplicationGraph;
	class UNetReplicationGraphConnection*         ConnectionManager;

public:
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, const TArray<class AActor*>& Actors);
	void ServerCellInfo();
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerPrintCullDistances();
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerSetCullDistanceForClass(class UClass* Class_0, float CullDistance);
	void ServerSetPeriodFrameForClass(class UClass* Class_0, int32 PeriodFrame);
	void ServerStartDebugging();
	void ServerStopDebugging();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphDebugActor">();
	}
	static class AReplicationGraphDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicationGraphDebugActor>();
	}
};
static_assert(alignof(AReplicationGraphDebugActor) == 0x000008, "Wrong alignment on AReplicationGraphDebugActor");
static_assert(sizeof(AReplicationGraphDebugActor) == 0x000298, "Wrong size on AReplicationGraphDebugActor");
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x000288, "Member 'AReplicationGraphDebugActor::ReplicationGraph' has a wrong offset!");
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x000290, "Member 'AReplicationGraphDebugActor::ConnectionManager' has a wrong offset!");

}
