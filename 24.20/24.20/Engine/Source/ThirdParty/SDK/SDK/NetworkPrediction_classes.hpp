#pragma once

#include "Basic.hpp"

#include "NetworkPrediction_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UNetworkPredictionComponent final : public UActorComponent
{
public:
	struct FNetworkPredictionProxy                NetworkPredictionProxy;
	struct FReplicationProxy                      ReplicationProxy_ServerRPC;
	struct FReplicationProxy                      ReplicationProxy_Autonomous;
	struct FReplicationProxy                      ReplicationProxy_Simulated;
	struct FReplicationProxy                      ReplicationProxy_Replay;

public:
	void ServerReceiveClientInput(const struct FServerReplicationRPCParameter& ProxyParameter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPredictionComponent">();
	}
	static class UNetworkPredictionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkPredictionComponent>();
	}
};
static_assert(alignof(UNetworkPredictionComponent) == 0x000010, "Wrong alignment on UNetworkPredictionComponent");
static_assert(sizeof(UNetworkPredictionComponent) == 0x000290, "Wrong size on UNetworkPredictionComponent");
static_assert(offsetof(UNetworkPredictionComponent, NetworkPredictionProxy) == 0x0000A0, "Member 'UNetworkPredictionComponent::NetworkPredictionProxy' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_ServerRPC) == 0x000150, "Member 'UNetworkPredictionComponent::ReplicationProxy_ServerRPC' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Autonomous) == 0x0001A0, "Member 'UNetworkPredictionComponent::ReplicationProxy_Autonomous' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Simulated) == 0x0001F0, "Member 'UNetworkPredictionComponent::ReplicationProxy_Simulated' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Replay) == 0x000240, "Member 'UNetworkPredictionComponent::ReplicationProxy_Replay' has a wrong offset!");

class UNetworkPredictionPhysicsComponent final : public UActorComponent
{
public:
	struct FNetworkPredictionProxy                NetworkPredictionProxy;
	class UPrimitiveComponent*                    UpdatedPrimitive;
	uint8                                         Pad_158[0x8];
	struct FReplicationProxy                      ReplicationProxy;
	uint8                                         Pad_1B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPredictionPhysicsComponent">();
	}
	static class UNetworkPredictionPhysicsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkPredictionPhysicsComponent>();
	}
};
static_assert(alignof(UNetworkPredictionPhysicsComponent) == 0x000010, "Wrong alignment on UNetworkPredictionPhysicsComponent");
static_assert(sizeof(UNetworkPredictionPhysicsComponent) == 0x0001C0, "Wrong size on UNetworkPredictionPhysicsComponent");
static_assert(offsetof(UNetworkPredictionPhysicsComponent, NetworkPredictionProxy) == 0x0000A0, "Member 'UNetworkPredictionPhysicsComponent::NetworkPredictionProxy' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionPhysicsComponent, UpdatedPrimitive) == 0x000150, "Member 'UNetworkPredictionPhysicsComponent::UpdatedPrimitive' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionPhysicsComponent, ReplicationProxy) == 0x000160, "Member 'UNetworkPredictionPhysicsComponent::ReplicationProxy' has a wrong offset!");

class ANetworkPredictionReplicatedManager final : public AActor
{
public:
	struct FSharedPackageMap                      SharedPackageMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPredictionReplicatedManager">();
	}
	static class ANetworkPredictionReplicatedManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANetworkPredictionReplicatedManager>();
	}
};
static_assert(alignof(ANetworkPredictionReplicatedManager) == 0x000008, "Wrong alignment on ANetworkPredictionReplicatedManager");
static_assert(sizeof(ANetworkPredictionReplicatedManager) == 0x000298, "Wrong size on ANetworkPredictionReplicatedManager");
static_assert(offsetof(ANetworkPredictionReplicatedManager, SharedPackageMap) == 0x000288, "Member 'ANetworkPredictionReplicatedManager::SharedPackageMap' has a wrong offset!");

class UNetworkPredictionSettingsObject final : public UObject
{
public:
	struct FNetworkPredictionSettings             Settings;
	TArray<struct FNetworkPredictionDevHUD>       DevHUDs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPredictionSettingsObject">();
	}
	static class UNetworkPredictionSettingsObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkPredictionSettingsObject>();
	}
};
static_assert(alignof(UNetworkPredictionSettingsObject) == 0x000008, "Wrong alignment on UNetworkPredictionSettingsObject");
static_assert(sizeof(UNetworkPredictionSettingsObject) == 0x000060, "Wrong size on UNetworkPredictionSettingsObject");
static_assert(offsetof(UNetworkPredictionSettingsObject, Settings) == 0x000028, "Member 'UNetworkPredictionSettingsObject::Settings' has a wrong offset!");
static_assert(offsetof(UNetworkPredictionSettingsObject, DevHUDs) == 0x000050, "Member 'UNetworkPredictionSettingsObject::DevHUDs' has a wrong offset!");

class UNetworkPredictionWorldManager final : public UWorldSubsystem
{
public:
	class ANetworkPredictionReplicatedManager*    ReplicatedManager;
	uint8                                         Pad_38[0x630];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPredictionWorldManager">();
	}
	static class UNetworkPredictionWorldManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkPredictionWorldManager>();
	}
};
static_assert(alignof(UNetworkPredictionWorldManager) == 0x000008, "Wrong alignment on UNetworkPredictionWorldManager");
static_assert(sizeof(UNetworkPredictionWorldManager) == 0x000668, "Wrong size on UNetworkPredictionWorldManager");
static_assert(offsetof(UNetworkPredictionWorldManager, ReplicatedManager) == 0x000030, "Member 'UNetworkPredictionWorldManager::ReplicatedManager' has a wrong offset!");

}
