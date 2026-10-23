#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MeshNetwork_structs.hpp"

namespace SDK::Params
{

struct MeshBeaconClient_ServerSetClientId final
{
public:
	class FString                                 NewClientId;
};
static_assert(alignof(MeshBeaconClient_ServerSetClientId) == 0x000008, "Wrong alignment on MeshBeaconClient_ServerSetClientId");
static_assert(sizeof(MeshBeaconClient_ServerSetClientId) == 0x000010, "Wrong size on MeshBeaconClient_ServerSetClientId");
static_assert(offsetof(MeshBeaconClient_ServerSetClientId, NewClientId) == 0x000000, "Member 'MeshBeaconClient_ServerSetClientId::NewClientId' has a wrong offset!");

struct MeshBeaconClient_ServerUpdateLevelVisibility final
{
public:
	struct FUpdateLevelVisibilityLevelInfo        LevelVisibility;
};
static_assert(alignof(MeshBeaconClient_ServerUpdateLevelVisibility) == 0x000004, "Wrong alignment on MeshBeaconClient_ServerUpdateLevelVisibility");
static_assert(sizeof(MeshBeaconClient_ServerUpdateLevelVisibility) == 0x000010, "Wrong size on MeshBeaconClient_ServerUpdateLevelVisibility");
static_assert(offsetof(MeshBeaconClient_ServerUpdateLevelVisibility, LevelVisibility) == 0x000000, "Member 'MeshBeaconClient_ServerUpdateLevelVisibility::LevelVisibility' has a wrong offset!");

struct MeshBeaconClient_ServerUpdateMultipleLevelsVisibility final
{
public:
	TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities;
};
static_assert(alignof(MeshBeaconClient_ServerUpdateMultipleLevelsVisibility) == 0x000008, "Wrong alignment on MeshBeaconClient_ServerUpdateMultipleLevelsVisibility");
static_assert(sizeof(MeshBeaconClient_ServerUpdateMultipleLevelsVisibility) == 0x000010, "Wrong size on MeshBeaconClient_ServerUpdateMultipleLevelsVisibility");
static_assert(offsetof(MeshBeaconClient_ServerUpdateMultipleLevelsVisibility, LevelVisibilities) == 0x000000, "Member 'MeshBeaconClient_ServerUpdateMultipleLevelsVisibility::LevelVisibilities' has a wrong offset!");

struct MeshNetworkComponent_GetMeshNetworkNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;
};
static_assert(alignof(MeshNetworkComponent_GetMeshNetworkNodeType) == 0x000001, "Wrong alignment on MeshNetworkComponent_GetMeshNetworkNodeType");
static_assert(sizeof(MeshNetworkComponent_GetMeshNetworkNodeType) == 0x000001, "Wrong size on MeshNetworkComponent_GetMeshNetworkNodeType");
static_assert(offsetof(MeshNetworkComponent_GetMeshNetworkNodeType, ReturnValue) == 0x000000, "Member 'MeshNetworkComponent_GetMeshNetworkNodeType::ReturnValue' has a wrong offset!");

struct MeshNetworkComponent_IsConnectedToMeshRoot final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MeshNetworkComponent_IsConnectedToMeshRoot) == 0x000001, "Wrong alignment on MeshNetworkComponent_IsConnectedToMeshRoot");
static_assert(sizeof(MeshNetworkComponent_IsConnectedToMeshRoot) == 0x000001, "Wrong size on MeshNetworkComponent_IsConnectedToMeshRoot");
static_assert(offsetof(MeshNetworkComponent_IsConnectedToMeshRoot, ReturnValue) == 0x000000, "Member 'MeshNetworkComponent_IsConnectedToMeshRoot::ReturnValue' has a wrong offset!");

struct MeshNetworkSubsystem_DisableMeshReplication final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(MeshNetworkSubsystem_DisableMeshReplication) == 0x000008, "Wrong alignment on MeshNetworkSubsystem_DisableMeshReplication");
static_assert(sizeof(MeshNetworkSubsystem_DisableMeshReplication) == 0x000008, "Wrong size on MeshNetworkSubsystem_DisableMeshReplication");
static_assert(offsetof(MeshNetworkSubsystem_DisableMeshReplication, Actor) == 0x000000, "Member 'MeshNetworkSubsystem_DisableMeshReplication::Actor' has a wrong offset!");

struct MeshNetworkSubsystem_EnableMeshReplication final
{
public:
	class AActor*                                 Actor;
	TSubclassOf<class UMeshNetworkComponent>      MeshComponentClass;
};
static_assert(alignof(MeshNetworkSubsystem_EnableMeshReplication) == 0x000008, "Wrong alignment on MeshNetworkSubsystem_EnableMeshReplication");
static_assert(sizeof(MeshNetworkSubsystem_EnableMeshReplication) == 0x000010, "Wrong size on MeshNetworkSubsystem_EnableMeshReplication");
static_assert(offsetof(MeshNetworkSubsystem_EnableMeshReplication, Actor) == 0x000000, "Member 'MeshNetworkSubsystem_EnableMeshReplication::Actor' has a wrong offset!");
static_assert(offsetof(MeshNetworkSubsystem_EnableMeshReplication, MeshComponentClass) == 0x000008, "Member 'MeshNetworkSubsystem_EnableMeshReplication::MeshComponentClass' has a wrong offset!");

struct MeshNetworkSubsystem_GetMetadata final
{
public:
	struct FMeshMetaDataStruct                    MetaData;
};
static_assert(alignof(MeshNetworkSubsystem_GetMetadata) == 0x000001, "Wrong alignment on MeshNetworkSubsystem_GetMetadata");
static_assert(sizeof(MeshNetworkSubsystem_GetMetadata) == 0x000001, "Wrong size on MeshNetworkSubsystem_GetMetadata");
static_assert(offsetof(MeshNetworkSubsystem_GetMetadata, MetaData) == 0x000000, "Member 'MeshNetworkSubsystem_GetMetadata::MetaData' has a wrong offset!");

struct MeshNetworkSubsystem_GetMetaDataWithKey final
{
public:
	class FName                                   Key;
	struct FMeshMetaDataStruct                    MetaData;
	bool                                          ReturnValue;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(MeshNetworkSubsystem_GetMetaDataWithKey) == 0x000004, "Wrong alignment on MeshNetworkSubsystem_GetMetaDataWithKey");
static_assert(sizeof(MeshNetworkSubsystem_GetMetaDataWithKey) == 0x000008, "Wrong size on MeshNetworkSubsystem_GetMetaDataWithKey");
static_assert(offsetof(MeshNetworkSubsystem_GetMetaDataWithKey, Key) == 0x000000, "Member 'MeshNetworkSubsystem_GetMetaDataWithKey::Key' has a wrong offset!");
static_assert(offsetof(MeshNetworkSubsystem_GetMetaDataWithKey, MetaData) == 0x000004, "Member 'MeshNetworkSubsystem_GetMetaDataWithKey::MetaData' has a wrong offset!");
static_assert(offsetof(MeshNetworkSubsystem_GetMetaDataWithKey, ReturnValue) == 0x000005, "Member 'MeshNetworkSubsystem_GetMetaDataWithKey::ReturnValue' has a wrong offset!");

struct MeshNetworkSubsystem_SetMetaData final
{
public:
	struct FMeshMetaDataStruct                    MetaData;
};
static_assert(alignof(MeshNetworkSubsystem_SetMetaData) == 0x000001, "Wrong alignment on MeshNetworkSubsystem_SetMetaData");
static_assert(sizeof(MeshNetworkSubsystem_SetMetaData) == 0x000001, "Wrong size on MeshNetworkSubsystem_SetMetaData");
static_assert(offsetof(MeshNetworkSubsystem_SetMetaData, MetaData) == 0x000000, "Member 'MeshNetworkSubsystem_SetMetaData::MetaData' has a wrong offset!");

struct MeshNetworkSubsystem_SetMetaDataWithKey final
{
public:
	class FName                                   Key;
	struct FMeshMetaDataStruct                    MetaData;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MeshNetworkSubsystem_SetMetaDataWithKey) == 0x000004, "Wrong alignment on MeshNetworkSubsystem_SetMetaDataWithKey");
static_assert(sizeof(MeshNetworkSubsystem_SetMetaDataWithKey) == 0x000008, "Wrong size on MeshNetworkSubsystem_SetMetaDataWithKey");
static_assert(offsetof(MeshNetworkSubsystem_SetMetaDataWithKey, Key) == 0x000000, "Member 'MeshNetworkSubsystem_SetMetaDataWithKey::Key' has a wrong offset!");
static_assert(offsetof(MeshNetworkSubsystem_SetMetaDataWithKey, MetaData) == 0x000004, "Member 'MeshNetworkSubsystem_SetMetaDataWithKey::MetaData' has a wrong offset!");

struct MeshNetworkSubsystem_GetConnectedToRoot final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MeshNetworkSubsystem_GetConnectedToRoot) == 0x000001, "Wrong alignment on MeshNetworkSubsystem_GetConnectedToRoot");
static_assert(sizeof(MeshNetworkSubsystem_GetConnectedToRoot) == 0x000001, "Wrong size on MeshNetworkSubsystem_GetConnectedToRoot");
static_assert(offsetof(MeshNetworkSubsystem_GetConnectedToRoot, ReturnValue) == 0x000000, "Member 'MeshNetworkSubsystem_GetConnectedToRoot::ReturnValue' has a wrong offset!");

struct MeshNetworkSubsystem_GetGameServerNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;
};
static_assert(alignof(MeshNetworkSubsystem_GetGameServerNodeType) == 0x000001, "Wrong alignment on MeshNetworkSubsystem_GetGameServerNodeType");
static_assert(sizeof(MeshNetworkSubsystem_GetGameServerNodeType) == 0x000001, "Wrong size on MeshNetworkSubsystem_GetGameServerNodeType");
static_assert(offsetof(MeshNetworkSubsystem_GetGameServerNodeType, ReturnValue) == 0x000000, "Member 'MeshNetworkSubsystem_GetGameServerNodeType::ReturnValue' has a wrong offset!");

struct MeshNetworkSubsystem_GetMeshNetworkNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;
};
static_assert(alignof(MeshNetworkSubsystem_GetMeshNetworkNodeType) == 0x000001, "Wrong alignment on MeshNetworkSubsystem_GetMeshNetworkNodeType");
static_assert(sizeof(MeshNetworkSubsystem_GetMeshNetworkNodeType) == 0x000001, "Wrong size on MeshNetworkSubsystem_GetMeshNetworkNodeType");
static_assert(offsetof(MeshNetworkSubsystem_GetMeshNetworkNodeType, ReturnValue) == 0x000000, "Member 'MeshNetworkSubsystem_GetMeshNetworkNodeType::ReturnValue' has a wrong offset!");

}
