#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AnimationSharingStateProcessor_GetAnimationStateEnum final
{
public:
	class UEnum*                                  ReturnValue;
};
static_assert(alignof(AnimationSharingStateProcessor_GetAnimationStateEnum) == 0x000008, "Wrong alignment on AnimationSharingStateProcessor_GetAnimationStateEnum");
static_assert(sizeof(AnimationSharingStateProcessor_GetAnimationStateEnum) == 0x000008, "Wrong size on AnimationSharingStateProcessor_GetAnimationStateEnum");
static_assert(offsetof(AnimationSharingStateProcessor_GetAnimationStateEnum, ReturnValue) == 0x000000, "Member 'AnimationSharingStateProcessor_GetAnimationStateEnum::ReturnValue' has a wrong offset!");

struct AnimationSharingStateProcessor_ProcessActorState final
{
public:
	int32                                         OutState;
	uint8                                         Pad_4[0x4];
	class AActor*                                 InActor;
	uint8                                         CurrentState;
	uint8                                         OnDemandState;
	bool                                          bShouldProcess;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(AnimationSharingStateProcessor_ProcessActorState) == 0x000008, "Wrong alignment on AnimationSharingStateProcessor_ProcessActorState");
static_assert(sizeof(AnimationSharingStateProcessor_ProcessActorState) == 0x000018, "Wrong size on AnimationSharingStateProcessor_ProcessActorState");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, OutState) == 0x000000, "Member 'AnimationSharingStateProcessor_ProcessActorState::OutState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, InActor) == 0x000008, "Member 'AnimationSharingStateProcessor_ProcessActorState::InActor' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, CurrentState) == 0x000010, "Member 'AnimationSharingStateProcessor_ProcessActorState::CurrentState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, OnDemandState) == 0x000011, "Member 'AnimationSharingStateProcessor_ProcessActorState::OnDemandState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, bShouldProcess) == 0x000012, "Member 'AnimationSharingStateProcessor_ProcessActorState::bShouldProcess' has a wrong offset!");

struct AnimSharingStateInstance_GetInstancedActors final
{
public:
	TArray<class AActor*>                         Actors;
};
static_assert(alignof(AnimSharingStateInstance_GetInstancedActors) == 0x000008, "Wrong alignment on AnimSharingStateInstance_GetInstancedActors");
static_assert(sizeof(AnimSharingStateInstance_GetInstancedActors) == 0x000010, "Wrong size on AnimSharingStateInstance_GetInstancedActors");
static_assert(offsetof(AnimSharingStateInstance_GetInstancedActors, Actors) == 0x000000, "Member 'AnimSharingStateInstance_GetInstancedActors::Actors' has a wrong offset!");

struct AnimationSharingManager_AnimationSharingEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AnimationSharingManager_AnimationSharingEnabled) == 0x000001, "Wrong alignment on AnimationSharingManager_AnimationSharingEnabled");
static_assert(sizeof(AnimationSharingManager_AnimationSharingEnabled) == 0x000001, "Wrong size on AnimationSharingManager_AnimationSharingEnabled");
static_assert(offsetof(AnimationSharingManager_AnimationSharingEnabled, ReturnValue) == 0x000000, "Member 'AnimationSharingManager_AnimationSharingEnabled::ReturnValue' has a wrong offset!");

struct AnimationSharingManager_CreateAnimationSharingManager final
{
public:
	class UObject*                                WorldContextObject;
	const class UAnimationSharingSetup*           Setup;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(AnimationSharingManager_CreateAnimationSharingManager) == 0x000008, "Wrong alignment on AnimationSharingManager_CreateAnimationSharingManager");
static_assert(sizeof(AnimationSharingManager_CreateAnimationSharingManager) == 0x000018, "Wrong size on AnimationSharingManager_CreateAnimationSharingManager");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, WorldContextObject) == 0x000000, "Member 'AnimationSharingManager_CreateAnimationSharingManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, Setup) == 0x000008, "Member 'AnimationSharingManager_CreateAnimationSharingManager::Setup' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, ReturnValue) == 0x000010, "Member 'AnimationSharingManager_CreateAnimationSharingManager::ReturnValue' has a wrong offset!");

struct AnimationSharingManager_GetAnimationSharingManager final
{
public:
	class UObject*                                WorldContextObject;
	class UAnimationSharingManager*               ReturnValue;
};
static_assert(alignof(AnimationSharingManager_GetAnimationSharingManager) == 0x000008, "Wrong alignment on AnimationSharingManager_GetAnimationSharingManager");
static_assert(sizeof(AnimationSharingManager_GetAnimationSharingManager) == 0x000010, "Wrong size on AnimationSharingManager_GetAnimationSharingManager");
static_assert(offsetof(AnimationSharingManager_GetAnimationSharingManager, WorldContextObject) == 0x000000, "Member 'AnimationSharingManager_GetAnimationSharingManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_GetAnimationSharingManager, ReturnValue) == 0x000008, "Member 'AnimationSharingManager_GetAnimationSharingManager::ReturnValue' has a wrong offset!");

struct AnimationSharingManager_RegisterActorWithSkeletonBP final
{
public:
	class AActor*                                 InActor;
	const class USkeleton*                        SharingSkeleton;
};
static_assert(alignof(AnimationSharingManager_RegisterActorWithSkeletonBP) == 0x000008, "Wrong alignment on AnimationSharingManager_RegisterActorWithSkeletonBP");
static_assert(sizeof(AnimationSharingManager_RegisterActorWithSkeletonBP) == 0x000010, "Wrong size on AnimationSharingManager_RegisterActorWithSkeletonBP");
static_assert(offsetof(AnimationSharingManager_RegisterActorWithSkeletonBP, InActor) == 0x000000, "Member 'AnimationSharingManager_RegisterActorWithSkeletonBP::InActor' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_RegisterActorWithSkeletonBP, SharingSkeleton) == 0x000008, "Member 'AnimationSharingManager_RegisterActorWithSkeletonBP::SharingSkeleton' has a wrong offset!");

}
