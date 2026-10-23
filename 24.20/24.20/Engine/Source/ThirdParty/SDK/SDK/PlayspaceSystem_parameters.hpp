#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayspaceSystem_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct OverlapComponent_OnBeginActorOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(OverlapComponent_OnBeginActorOverlap) == 0x000008, "Wrong alignment on OverlapComponent_OnBeginActorOverlap");
static_assert(sizeof(OverlapComponent_OnBeginActorOverlap) == 0x000100, "Wrong size on OverlapComponent_OnBeginActorOverlap");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, OverlappedComponent) == 0x000000, "Member 'OverlapComponent_OnBeginActorOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, OtherActor) == 0x000008, "Member 'OverlapComponent_OnBeginActorOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, OtherComp) == 0x000010, "Member 'OverlapComponent_OnBeginActorOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, OtherBodyIndex) == 0x000018, "Member 'OverlapComponent_OnBeginActorOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, bFromSweep) == 0x00001C, "Member 'OverlapComponent_OnBeginActorOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnBeginActorOverlap, SweepResult) == 0x000020, "Member 'OverlapComponent_OnBeginActorOverlap::SweepResult' has a wrong offset!");

struct OverlapComponent_OnEndActorOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(OverlapComponent_OnEndActorOverlap) == 0x000008, "Wrong alignment on OverlapComponent_OnEndActorOverlap");
static_assert(sizeof(OverlapComponent_OnEndActorOverlap) == 0x000020, "Wrong size on OverlapComponent_OnEndActorOverlap");
static_assert(offsetof(OverlapComponent_OnEndActorOverlap, OverlappedComponent) == 0x000000, "Member 'OverlapComponent_OnEndActorOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnEndActorOverlap, OtherActor) == 0x000008, "Member 'OverlapComponent_OnEndActorOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnEndActorOverlap, OtherComp) == 0x000010, "Member 'OverlapComponent_OnEndActorOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(OverlapComponent_OnEndActorOverlap, OtherBodyIndex) == 0x000018, "Member 'OverlapComponent_OnEndActorOverlap::OtherBodyIndex' has a wrong offset!");

struct PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo final
{
public:
	struct FReplicatedSpawnInfo                   ReturnValue;
};
static_assert(alignof(PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo) == 0x000008, "Wrong alignment on PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo");
static_assert(sizeof(PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo) == 0x000058, "Wrong size on PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo");
static_assert(offsetof(PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo, ReturnValue) == 0x000000, "Member 'PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo::ReturnValue' has a wrong offset!");

struct GameplayVolume_InitializeBoundsComponent final
{
public:
	class UOverlapComponent*                      NewBoundsComponent;
};
static_assert(alignof(GameplayVolume_InitializeBoundsComponent) == 0x000008, "Wrong alignment on GameplayVolume_InitializeBoundsComponent");
static_assert(sizeof(GameplayVolume_InitializeBoundsComponent) == 0x000008, "Wrong size on GameplayVolume_InitializeBoundsComponent");
static_assert(offsetof(GameplayVolume_InitializeBoundsComponent, NewBoundsComponent) == 0x000000, "Member 'GameplayVolume_InitializeBoundsComponent::NewBoundsComponent' has a wrong offset!");

struct GameplayVolume_OnOverlappedPawnControllerChanged final
{
public:
	class APawn*                                  Pawn;
	class AController*                            OldController;
	class AController*                            NewController;
};
static_assert(alignof(GameplayVolume_OnOverlappedPawnControllerChanged) == 0x000008, "Wrong alignment on GameplayVolume_OnOverlappedPawnControllerChanged");
static_assert(sizeof(GameplayVolume_OnOverlappedPawnControllerChanged) == 0x000018, "Wrong size on GameplayVolume_OnOverlappedPawnControllerChanged");
static_assert(offsetof(GameplayVolume_OnOverlappedPawnControllerChanged, Pawn) == 0x000000, "Member 'GameplayVolume_OnOverlappedPawnControllerChanged::Pawn' has a wrong offset!");
static_assert(offsetof(GameplayVolume_OnOverlappedPawnControllerChanged, OldController) == 0x000008, "Member 'GameplayVolume_OnOverlappedPawnControllerChanged::OldController' has a wrong offset!");
static_assert(offsetof(GameplayVolume_OnOverlappedPawnControllerChanged, NewController) == 0x000010, "Member 'GameplayVolume_OnOverlappedPawnControllerChanged::NewController' has a wrong offset!");

struct GameplayVolume_UpdateSize final
{
public:
	struct FVector                                NewScale;
};
static_assert(alignof(GameplayVolume_UpdateSize) == 0x000008, "Wrong alignment on GameplayVolume_UpdateSize");
static_assert(sizeof(GameplayVolume_UpdateSize) == 0x000018, "Wrong size on GameplayVolume_UpdateSize");
static_assert(offsetof(GameplayVolume_UpdateSize, NewScale) == 0x000000, "Member 'GameplayVolume_UpdateSize::NewScale' has a wrong offset!");

struct GameplayVolume_GetPlayspace final
{
public:
	class APlayspace*                             ReturnValue;
};
static_assert(alignof(GameplayVolume_GetPlayspace) == 0x000008, "Wrong alignment on GameplayVolume_GetPlayspace");
static_assert(sizeof(GameplayVolume_GetPlayspace) == 0x000008, "Wrong size on GameplayVolume_GetPlayspace");
static_assert(offsetof(GameplayVolume_GetPlayspace, ReturnValue) == 0x000000, "Member 'GameplayVolume_GetPlayspace::ReturnValue' has a wrong offset!");

struct PlayspaceLibrary_DestroyPlayspace final
{
public:
	class APlayspace*                             PlayspaceToDestroy;
};
static_assert(alignof(PlayspaceLibrary_DestroyPlayspace) == 0x000008, "Wrong alignment on PlayspaceLibrary_DestroyPlayspace");
static_assert(sizeof(PlayspaceLibrary_DestroyPlayspace) == 0x000008, "Wrong size on PlayspaceLibrary_DestroyPlayspace");
static_assert(offsetof(PlayspaceLibrary_DestroyPlayspace, PlayspaceToDestroy) == 0x000000, "Member 'PlayspaceLibrary_DestroyPlayspace::PlayspaceToDestroy' has a wrong offset!");

struct PlayspaceLibrary_GetPlayspaceForActor final
{
public:
	const class UObject*                          WorldContextObject;
	class AActor*                                 InActor;
	class APlayspace*                             ReturnValue;
};
static_assert(alignof(PlayspaceLibrary_GetPlayspaceForActor) == 0x000008, "Wrong alignment on PlayspaceLibrary_GetPlayspaceForActor");
static_assert(sizeof(PlayspaceLibrary_GetPlayspaceForActor) == 0x000018, "Wrong size on PlayspaceLibrary_GetPlayspaceForActor");
static_assert(offsetof(PlayspaceLibrary_GetPlayspaceForActor, WorldContextObject) == 0x000000, "Member 'PlayspaceLibrary_GetPlayspaceForActor::WorldContextObject' has a wrong offset!");
static_assert(offsetof(PlayspaceLibrary_GetPlayspaceForActor, InActor) == 0x000008, "Member 'PlayspaceLibrary_GetPlayspaceForActor::InActor' has a wrong offset!");
static_assert(offsetof(PlayspaceLibrary_GetPlayspaceForActor, ReturnValue) == 0x000010, "Member 'PlayspaceLibrary_GetPlayspaceForActor::ReturnValue' has a wrong offset!");

struct PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume final
{
public:
	class APlayerState*                           PlayerState;
	class AGameplayVolume*                        Volume;
};
static_assert(alignof(PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume) == 0x000008, "Wrong alignment on PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume");
static_assert(sizeof(PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume) == 0x000010, "Wrong size on PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume");
static_assert(offsetof(PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume, PlayerState) == 0x000000, "Member 'PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume::PlayerState' has a wrong offset!");
static_assert(offsetof(PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume, Volume) == 0x000008, "Member 'PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume::Volume' has a wrong offset!");

struct PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume final
{
public:
	class APlayerState*                           PlayerState;
	class AGameplayVolume*                        Volume;
};
static_assert(alignof(PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume) == 0x000008, "Wrong alignment on PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume");
static_assert(sizeof(PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume) == 0x000010, "Wrong size on PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume");
static_assert(offsetof(PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume, PlayerState) == 0x000000, "Member 'PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume::PlayerState' has a wrong offset!");
static_assert(offsetof(PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume, Volume) == 0x000008, "Member 'PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume::Volume' has a wrong offset!");

struct PlayspaceManagerComponent_ProcessOverlapEvents final
{
public:
	float                                         DeltaTime;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(PlayspaceManagerComponent_ProcessOverlapEvents) == 0x000004, "Wrong alignment on PlayspaceManagerComponent_ProcessOverlapEvents");
static_assert(sizeof(PlayspaceManagerComponent_ProcessOverlapEvents) == 0x000008, "Wrong size on PlayspaceManagerComponent_ProcessOverlapEvents");
static_assert(offsetof(PlayspaceManagerComponent_ProcessOverlapEvents, DeltaTime) == 0x000000, "Member 'PlayspaceManagerComponent_ProcessOverlapEvents::DeltaTime' has a wrong offset!");
static_assert(offsetof(PlayspaceManagerComponent_ProcessOverlapEvents, ReturnValue) == 0x000004, "Member 'PlayspaceManagerComponent_ProcessOverlapEvents::ReturnValue' has a wrong offset!");

struct PlayspacePlayerManagerComponent_OnPlayerPawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(PlayspacePlayerManagerComponent_OnPlayerPawnSet) == 0x000008, "Wrong alignment on PlayspacePlayerManagerComponent_OnPlayerPawnSet");
static_assert(sizeof(PlayspacePlayerManagerComponent_OnPlayerPawnSet) == 0x000018, "Wrong size on PlayspacePlayerManagerComponent_OnPlayerPawnSet");
static_assert(offsetof(PlayspacePlayerManagerComponent_OnPlayerPawnSet, Player) == 0x000000, "Member 'PlayspacePlayerManagerComponent_OnPlayerPawnSet::Player' has a wrong offset!");
static_assert(offsetof(PlayspacePlayerManagerComponent_OnPlayerPawnSet, NewPawn) == 0x000008, "Member 'PlayspacePlayerManagerComponent_OnPlayerPawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(PlayspacePlayerManagerComponent_OnPlayerPawnSet, OldPawn) == 0x000010, "Member 'PlayspacePlayerManagerComponent_OnPlayerPawnSet::OldPawn' has a wrong offset!");

}
