#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

enum class EPlayspaceCreationType : uint8
{
	ChildOfRoot                              = 0,
	RootDestroy                              = 1,
	RootInserted                             = 2,
	RootDoNotClobber                         = 3,
	EPlayspaceCreationType_MAX               = 4,
};

enum class EWithinBoundsEvaluationType : uint8
{
	UseOverlaps                              = 0,
	UseBoxBounds                             = 1,
	UseSphereBounds                          = 2,
	EWithinBoundsEvaluationType_MAX          = 3,
};

enum class EPlayspaceComponentCreationType : uint8
{
	Root                                     = 0,
	ByLocation                               = 1,
	ByTags                                   = 2,
	EPlayspaceComponentCreationType_MAX      = 3,
};

enum class EPlayspaceRootType : uint8
{
	ShouldBeRoot                             = 0,
	ShouldBeClobbered                        = 1,
	EPlayspaceRootType_MAX                   = 2,
};

struct FPlayspaceUser final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	struct FUniqueNetIdRepl                       UserId;
	class APlayspace*                             LeafPlayspace;
	class APlayerState*                           PlayerStateCached;
	class AController*                            ControllerCached;
};
static_assert(alignof(FPlayspaceUser) == 0x000008, "Wrong alignment on FPlayspaceUser");
static_assert(sizeof(FPlayspaceUser) == 0x000058, "Wrong size on FPlayspaceUser");
static_assert(offsetof(FPlayspaceUser, UserId) == 0x000010, "Member 'FPlayspaceUser::UserId' has a wrong offset!");
static_assert(offsetof(FPlayspaceUser, LeafPlayspace) == 0x000040, "Member 'FPlayspaceUser::LeafPlayspace' has a wrong offset!");
static_assert(offsetof(FPlayspaceUser, PlayerStateCached) == 0x000048, "Member 'FPlayspaceUser::PlayerStateCached' has a wrong offset!");
static_assert(offsetof(FPlayspaceUser, ControllerCached) == 0x000050, "Member 'FPlayspaceUser::ControllerCached' has a wrong offset!");

struct FReplicatedSpawnInfo final
{
public:
	struct FVector                                SpawnLocation;
	struct FRotator                               SpawnRotation;
	float                                         ServerSpawnTime;
	uint8                                         Pad_34[0x4];
	struct FVector                                LastLocation;
	float                                         MinTimeForCameraFadeTransition;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FReplicatedSpawnInfo) == 0x000008, "Wrong alignment on FReplicatedSpawnInfo");
static_assert(sizeof(FReplicatedSpawnInfo) == 0x000058, "Wrong size on FReplicatedSpawnInfo");
static_assert(offsetof(FReplicatedSpawnInfo, SpawnLocation) == 0x000000, "Member 'FReplicatedSpawnInfo::SpawnLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedSpawnInfo, SpawnRotation) == 0x000018, "Member 'FReplicatedSpawnInfo::SpawnRotation' has a wrong offset!");
static_assert(offsetof(FReplicatedSpawnInfo, ServerSpawnTime) == 0x000030, "Member 'FReplicatedSpawnInfo::ServerSpawnTime' has a wrong offset!");
static_assert(offsetof(FReplicatedSpawnInfo, LastLocation) == 0x000038, "Member 'FReplicatedSpawnInfo::LastLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedSpawnInfo, MinTimeForCameraFadeTransition) == 0x000050, "Member 'FReplicatedSpawnInfo::MinTimeForCameraFadeTransition' has a wrong offset!");

struct FPlayspaceSpawningInfo final
{
public:
	struct FUniqueNetIdRepl                       UserId;
	TWeakObjectPtr<class APlayspace>              RequestingPlayspace;
	class AActor*                                 SpawnLocationActor;
	struct FVector                                SpawnLocation;
	struct FRotator                               SpawnRotation;
	float                                         SpawnTimeServer;
	uint8                                         Pad_74[0x4];
	struct FVector                                LastLocation;
	float                                         MinTimeForCameraFadeTransition;
	uint8                                         Pad_94[0x4];
};
static_assert(alignof(FPlayspaceSpawningInfo) == 0x000008, "Wrong alignment on FPlayspaceSpawningInfo");
static_assert(sizeof(FPlayspaceSpawningInfo) == 0x000098, "Wrong size on FPlayspaceSpawningInfo");
static_assert(offsetof(FPlayspaceSpawningInfo, UserId) == 0x000000, "Member 'FPlayspaceSpawningInfo::UserId' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, RequestingPlayspace) == 0x000030, "Member 'FPlayspaceSpawningInfo::RequestingPlayspace' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnLocationActor) == 0x000038, "Member 'FPlayspaceSpawningInfo::SpawnLocationActor' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnLocation) == 0x000040, "Member 'FPlayspaceSpawningInfo::SpawnLocation' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnRotation) == 0x000058, "Member 'FPlayspaceSpawningInfo::SpawnRotation' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnTimeServer) == 0x000070, "Member 'FPlayspaceSpawningInfo::SpawnTimeServer' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, LastLocation) == 0x000078, "Member 'FPlayspaceSpawningInfo::LastLocation' has a wrong offset!");
static_assert(offsetof(FPlayspaceSpawningInfo, MinTimeForCameraFadeTransition) == 0x000090, "Member 'FPlayspaceSpawningInfo::MinTimeForCameraFadeTransition' has a wrong offset!");

struct FPlayspaceComponentConfiguration final
{
public:
	TSoftClassPtr<class UClass>                   PlayspaceComponentClass;
	EPlayspaceComponentCreationType               CreationType;
	uint8                                         Pad_29[0x7];
	struct FGameplayTagQuery                      TagQuery;
	struct FVector                                Location;
};
static_assert(alignof(FPlayspaceComponentConfiguration) == 0x000008, "Wrong alignment on FPlayspaceComponentConfiguration");
static_assert(sizeof(FPlayspaceComponentConfiguration) == 0x000090, "Wrong size on FPlayspaceComponentConfiguration");
static_assert(offsetof(FPlayspaceComponentConfiguration, PlayspaceComponentClass) == 0x000000, "Member 'FPlayspaceComponentConfiguration::PlayspaceComponentClass' has a wrong offset!");
static_assert(offsetof(FPlayspaceComponentConfiguration, CreationType) == 0x000028, "Member 'FPlayspaceComponentConfiguration::CreationType' has a wrong offset!");
static_assert(offsetof(FPlayspaceComponentConfiguration, TagQuery) == 0x000030, "Member 'FPlayspaceComponentConfiguration::TagQuery' has a wrong offset!");
static_assert(offsetof(FPlayspaceComponentConfiguration, Location) == 0x000078, "Member 'FPlayspaceComponentConfiguration::Location' has a wrong offset!");

struct FPlayspaceConfiguration final
{
public:
	TSoftClassPtr<class UClass>                   PlayspaceClass;
	EPlayspaceCreationType                        CreationType;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FPlayspaceConfiguration) == 0x000008, "Wrong alignment on FPlayspaceConfiguration");
static_assert(sizeof(FPlayspaceConfiguration) == 0x000030, "Wrong size on FPlayspaceConfiguration");
static_assert(offsetof(FPlayspaceConfiguration, PlayspaceClass) == 0x000000, "Member 'FPlayspaceConfiguration::PlayspaceClass' has a wrong offset!");
static_assert(offsetof(FPlayspaceConfiguration, CreationType) == 0x000028, "Member 'FPlayspaceConfiguration::CreationType' has a wrong offset!");

struct FActorOverlapEvent final
{
public:
	class APlayerState*                           PlayerState;
	class AGameplayVolume*                        Volume;
};
static_assert(alignof(FActorOverlapEvent) == 0x000008, "Wrong alignment on FActorOverlapEvent");
static_assert(sizeof(FActorOverlapEvent) == 0x000010, "Wrong size on FActorOverlapEvent");
static_assert(offsetof(FActorOverlapEvent, PlayerState) == 0x000000, "Member 'FActorOverlapEvent::PlayerState' has a wrong offset!");
static_assert(offsetof(FActorOverlapEvent, Volume) == 0x000008, "Member 'FActorOverlapEvent::Volume' has a wrong offset!");

struct FPlayspaceUserList final : public FFastArraySerializer
{
public:
	TArray<struct FPlayspaceUser>                 PlayspaceUsers;
	uint8                                         Pad_118[0x54];
	bool                                          bIsInitialized;
	uint8                                         Pad_16D[0x3];
	class APlayspace*                             Playspace;
};
static_assert(alignof(FPlayspaceUserList) == 0x000008, "Wrong alignment on FPlayspaceUserList");
static_assert(sizeof(FPlayspaceUserList) == 0x000178, "Wrong size on FPlayspaceUserList");
static_assert(offsetof(FPlayspaceUserList, PlayspaceUsers) == 0x000108, "Member 'FPlayspaceUserList::PlayspaceUsers' has a wrong offset!");
static_assert(offsetof(FPlayspaceUserList, bIsInitialized) == 0x00016C, "Member 'FPlayspaceUserList::bIsInitialized' has a wrong offset!");
static_assert(offsetof(FPlayspaceUserList, Playspace) == 0x000170, "Member 'FPlayspaceUserList::Playspace' has a wrong offset!");

}
