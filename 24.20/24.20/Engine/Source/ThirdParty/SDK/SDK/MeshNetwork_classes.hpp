#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "ReplicationGraph_classes.hpp"
#include "MeshNetwork_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                         Pad_318[0x40];
	bool                                          bConnectedToRoot;
	uint8                                         Pad_359[0x7];
	struct FDateTime                              MeshPingTime;
	TArray<class FString>                         ParentIds;
	class FString                                 ClientId;
	uint8                                         Pad_388[0x10];

public:
	void OnRep_ConnectedToRoot();
	void OnRep_MeshPingTime();
	void OnRep_ParentIds();
	void ServerSetClientId(const class FString& NewClientId);
	void ServerUpdateLevelVisibility(const struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void ServerUpdateMultipleLevelsVisibility(const TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconClient">();
	}
	static class AMeshBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconClient>();
	}
};
static_assert(alignof(AMeshBeaconClient) == 0x000008, "Wrong alignment on AMeshBeaconClient");
static_assert(sizeof(AMeshBeaconClient) == 0x000398, "Wrong size on AMeshBeaconClient");
static_assert(offsetof(AMeshBeaconClient, bConnectedToRoot) == 0x000358, "Member 'AMeshBeaconClient::bConnectedToRoot' has a wrong offset!");
static_assert(offsetof(AMeshBeaconClient, MeshPingTime) == 0x000360, "Member 'AMeshBeaconClient::MeshPingTime' has a wrong offset!");
static_assert(offsetof(AMeshBeaconClient, ParentIds) == 0x000368, "Member 'AMeshBeaconClient::ParentIds' has a wrong offset!");
static_assert(offsetof(AMeshBeaconClient, ClientId) == 0x000378, "Member 'AMeshBeaconClient::ClientId' has a wrong offset!");

class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                         MaxConnections;
	uint8                                         Pad_3CC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconHost">();
	}
	static class AMeshBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconHost>();
	}
};
static_assert(alignof(AMeshBeaconHost) == 0x000008, "Wrong alignment on AMeshBeaconHost");
static_assert(sizeof(AMeshBeaconHost) == 0x0003D0, "Wrong size on AMeshBeaconHost");
static_assert(offsetof(AMeshBeaconHost, MaxConnections) == 0x0003C8, "Member 'AMeshBeaconHost::MaxConnections' has a wrong offset!");

class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_2B0[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconHostObject">();
	}
	static class AMeshBeaconHostObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconHostObject>();
	}
};
static_assert(alignof(AMeshBeaconHostObject) == 0x000008, "Wrong alignment on AMeshBeaconHostObject");
static_assert(sizeof(AMeshBeaconHostObject) == 0x0002C8, "Wrong size on AMeshBeaconHostObject");

class UMeshConnection final : public UIpConnection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshConnection">();
	}
	static class UMeshConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshConnection>();
	}
};
static_assert(alignof(UMeshConnection) == 0x000008, "Wrong alignment on UMeshConnection");
static_assert(sizeof(UMeshConnection) == 0x001E88, "Wrong size on UMeshConnection");

class UMeshNetDriver final : public UIpNetDriver
{
public:
	uint8                                         Pad_848[0x8];
	TArray<class AActor*>                         ClientDormantDynamicActors;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetDriver">();
	}
	static class UMeshNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetDriver>();
	}
};
static_assert(alignof(UMeshNetDriver) == 0x000008, "Wrong alignment on UMeshNetDriver");
static_assert(sizeof(UMeshNetDriver) == 0x000860, "Wrong size on UMeshNetDriver");
static_assert(offsetof(UMeshNetDriver, ClientDormantDynamicActors) == 0x000850, "Member 'UMeshNetDriver::ClientDormantDynamicActors' has a wrong offset!");

class UMeshNetworkComponent : public UActorComponent
{
public:
	EMeshNetworkRelevancy                         MeshRelevancy;
	uint8                                         Pad_A1[0x7];
	TMap<class FString, struct FAggregatedFunction> AggregatedFunctions;
	TMap<class FName, struct FAggregatedFunctionConfig> AggregatedFunctionConfigs;
	uint8                                         Pad_148[0x8];

public:
	EMeshNetworkNodeType GetMeshNetworkNodeType() const;
	bool IsConnectedToMeshRoot() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetworkComponent">();
	}
	static class UMeshNetworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetworkComponent>();
	}
};
static_assert(alignof(UMeshNetworkComponent) == 0x000008, "Wrong alignment on UMeshNetworkComponent");
static_assert(sizeof(UMeshNetworkComponent) == 0x000150, "Wrong size on UMeshNetworkComponent");
static_assert(offsetof(UMeshNetworkComponent, MeshRelevancy) == 0x0000A0, "Member 'UMeshNetworkComponent::MeshRelevancy' has a wrong offset!");
static_assert(offsetof(UMeshNetworkComponent, AggregatedFunctions) == 0x0000A8, "Member 'UMeshNetworkComponent::AggregatedFunctions' has a wrong offset!");
static_assert(offsetof(UMeshNetworkComponent, AggregatedFunctionConfigs) == 0x0000F8, "Member 'UMeshNetworkComponent::AggregatedFunctionConfigs' has a wrong offset!");

class UMeshNetworkSubsystem final : public UGameInstanceSubsystem
{
public:
	TMulticastInlineDelegate<void(EMeshNetworkNodeType NodeType)> OnMeshNodeTypeChanged;
	TMulticastInlineDelegate<void(bool bConnected)> OnConnectedToRootChanged;
	TMulticastInlineDelegate<void(EMeshNetworkNodeType NodeType)> OnGameServerNodeTypeChanged;
	TMulticastInlineDelegate<void()>              OnMeshMetaDataUpdated;
	TMulticastInlineDelegate<void(class APlayerController* Player, class FName tag)> OnMeshPlayerRequested;
	uint8                                         Pad_80[0x30];
	EMeshNetworkNodeType                          NodeType;
	EMeshNetworkNodeType                          GameServerNodeType;
	bool                                          bConnectedToRoot;
	bool                                          bMetadataReceived;
	uint8                                         Pad_B4[0x54];

public:
	void DisableMeshReplication(class AActor* Actor);
	void EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass);
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(const struct FMeshMetaDataStruct& MetaData);
	void SetMetaDataWithKey(class FName Key, const struct FMeshMetaDataStruct& MetaData);

	bool GetConnectedToRoot() const;
	EMeshNetworkNodeType GetGameServerNodeType() const;
	EMeshNetworkNodeType GetMeshNetworkNodeType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetworkSubsystem">();
	}
	static class UMeshNetworkSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetworkSubsystem>();
	}
};
static_assert(alignof(UMeshNetworkSubsystem) == 0x000008, "Wrong alignment on UMeshNetworkSubsystem");
static_assert(sizeof(UMeshNetworkSubsystem) == 0x000108, "Wrong size on UMeshNetworkSubsystem");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshNodeTypeChanged) == 0x000030, "Member 'UMeshNetworkSubsystem::OnMeshNodeTypeChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnConnectedToRootChanged) == 0x000040, "Member 'UMeshNetworkSubsystem::OnConnectedToRootChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnGameServerNodeTypeChanged) == 0x000050, "Member 'UMeshNetworkSubsystem::OnGameServerNodeTypeChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshMetaDataUpdated) == 0x000060, "Member 'UMeshNetworkSubsystem::OnMeshMetaDataUpdated' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshPlayerRequested) == 0x000070, "Member 'UMeshNetworkSubsystem::OnMeshPlayerRequested' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, NodeType) == 0x0000B0, "Member 'UMeshNetworkSubsystem::NodeType' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, GameServerNodeType) == 0x0000B1, "Member 'UMeshNetworkSubsystem::GameServerNodeType' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, bConnectedToRoot) == 0x0000B2, "Member 'UMeshNetworkSubsystem::bConnectedToRoot' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, bMetadataReceived) == 0x0000B3, "Member 'UMeshNetworkSubsystem::bMetadataReceived' has a wrong offset!");

class UMeshReplicationGraphConnection final : public UNetReplicationGraphConnection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplicationGraphConnection">();
	}
	static class UMeshReplicationGraphConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReplicationGraphConnection>();
	}
};
static_assert(alignof(UMeshReplicationGraphConnection) == 0x000008, "Wrong alignment on UMeshReplicationGraphConnection");
static_assert(sizeof(UMeshReplicationGraphConnection) == 0x000378, "Wrong size on UMeshReplicationGraphConnection");

class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*        AlwaysRelevantNode;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplicationGraph">();
	}
	static class UMeshReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReplicationGraph>();
	}
};
static_assert(alignof(UMeshReplicationGraph) == 0x000010, "Wrong alignment on UMeshReplicationGraph");
static_assert(sizeof(UMeshReplicationGraph) == 0x000570, "Wrong size on UMeshReplicationGraph");
static_assert(offsetof(UMeshReplicationGraph, AlwaysRelevantNode) == 0x000568, "Member 'UMeshReplicationGraph::AlwaysRelevantNode' has a wrong offset!");

}
