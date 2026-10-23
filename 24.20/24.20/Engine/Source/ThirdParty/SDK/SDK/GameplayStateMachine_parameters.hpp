#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GameplayState_AddStateRuntimeTag final
{
public:
	struct FGameplayTag                           AddedTag;
};
static_assert(alignof(GameplayState_AddStateRuntimeTag) == 0x000004, "Wrong alignment on GameplayState_AddStateRuntimeTag");
static_assert(sizeof(GameplayState_AddStateRuntimeTag) == 0x000004, "Wrong size on GameplayState_AddStateRuntimeTag");
static_assert(offsetof(GameplayState_AddStateRuntimeTag, AddedTag) == 0x000000, "Member 'GameplayState_AddStateRuntimeTag::AddedTag' has a wrong offset!");

struct GameplayState_BeginStateEvent final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_BeginStateEvent) == 0x000004, "Wrong alignment on GameplayState_BeginStateEvent");
static_assert(sizeof(GameplayState_BeginStateEvent) == 0x000004, "Wrong size on GameplayState_BeginStateEvent");
static_assert(offsetof(GameplayState_BeginStateEvent, PrevStateId) == 0x000000, "Member 'GameplayState_BeginStateEvent::PrevStateId' has a wrong offset!");

struct GameplayState_BeginStateEventClient final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_BeginStateEventClient) == 0x000004, "Wrong alignment on GameplayState_BeginStateEventClient");
static_assert(sizeof(GameplayState_BeginStateEventClient) == 0x000004, "Wrong size on GameplayState_BeginStateEventClient");
static_assert(offsetof(GameplayState_BeginStateEventClient, PrevStateId) == 0x000000, "Member 'GameplayState_BeginStateEventClient::PrevStateId' has a wrong offset!");

struct GameplayState_BeginStateEventServer final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_BeginStateEventServer) == 0x000004, "Wrong alignment on GameplayState_BeginStateEventServer");
static_assert(sizeof(GameplayState_BeginStateEventServer) == 0x000004, "Wrong size on GameplayState_BeginStateEventServer");
static_assert(offsetof(GameplayState_BeginStateEventServer, PrevStateId) == 0x000000, "Member 'GameplayState_BeginStateEventServer::PrevStateId' has a wrong offset!");

struct GameplayState_EndStateEvent final
{
public:
	struct FGameplayTag                           NextStateId;
};
static_assert(alignof(GameplayState_EndStateEvent) == 0x000004, "Wrong alignment on GameplayState_EndStateEvent");
static_assert(sizeof(GameplayState_EndStateEvent) == 0x000004, "Wrong size on GameplayState_EndStateEvent");
static_assert(offsetof(GameplayState_EndStateEvent, NextStateId) == 0x000000, "Member 'GameplayState_EndStateEvent::NextStateId' has a wrong offset!");

struct GameplayState_EndStateEventClient final
{
public:
	struct FGameplayTag                           NextStateId;
};
static_assert(alignof(GameplayState_EndStateEventClient) == 0x000004, "Wrong alignment on GameplayState_EndStateEventClient");
static_assert(sizeof(GameplayState_EndStateEventClient) == 0x000004, "Wrong size on GameplayState_EndStateEventClient");
static_assert(offsetof(GameplayState_EndStateEventClient, NextStateId) == 0x000000, "Member 'GameplayState_EndStateEventClient::NextStateId' has a wrong offset!");

struct GameplayState_EndStateEventServer final
{
public:
	struct FGameplayTag                           NextStateId;
};
static_assert(alignof(GameplayState_EndStateEventServer) == 0x000004, "Wrong alignment on GameplayState_EndStateEventServer");
static_assert(sizeof(GameplayState_EndStateEventServer) == 0x000004, "Wrong size on GameplayState_EndStateEventServer");
static_assert(offsetof(GameplayState_EndStateEventServer, NextStateId) == 0x000000, "Member 'GameplayState_EndStateEventServer::NextStateId' has a wrong offset!");

struct GameplayState_HasStateRuntimeTag final
{
public:
	struct FGameplayTag                           QueryTag;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(GameplayState_HasStateRuntimeTag) == 0x000004, "Wrong alignment on GameplayState_HasStateRuntimeTag");
static_assert(sizeof(GameplayState_HasStateRuntimeTag) == 0x000008, "Wrong size on GameplayState_HasStateRuntimeTag");
static_assert(offsetof(GameplayState_HasStateRuntimeTag, QueryTag) == 0x000000, "Member 'GameplayState_HasStateRuntimeTag::QueryTag' has a wrong offset!");
static_assert(offsetof(GameplayState_HasStateRuntimeTag, ReturnValue) == 0x000004, "Member 'GameplayState_HasStateRuntimeTag::ReturnValue' has a wrong offset!");

struct GameplayState_InitializeStateEvent final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_InitializeStateEvent) == 0x000004, "Wrong alignment on GameplayState_InitializeStateEvent");
static_assert(sizeof(GameplayState_InitializeStateEvent) == 0x000004, "Wrong size on GameplayState_InitializeStateEvent");
static_assert(offsetof(GameplayState_InitializeStateEvent, PrevStateId) == 0x000000, "Member 'GameplayState_InitializeStateEvent::PrevStateId' has a wrong offset!");

struct GameplayState_InitializeStateEventClient final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_InitializeStateEventClient) == 0x000004, "Wrong alignment on GameplayState_InitializeStateEventClient");
static_assert(sizeof(GameplayState_InitializeStateEventClient) == 0x000004, "Wrong size on GameplayState_InitializeStateEventClient");
static_assert(offsetof(GameplayState_InitializeStateEventClient, PrevStateId) == 0x000000, "Member 'GameplayState_InitializeStateEventClient::PrevStateId' has a wrong offset!");

struct GameplayState_InitializeStateEventServer final
{
public:
	struct FGameplayTag                           PrevStateId;
};
static_assert(alignof(GameplayState_InitializeStateEventServer) == 0x000004, "Wrong alignment on GameplayState_InitializeStateEventServer");
static_assert(sizeof(GameplayState_InitializeStateEventServer) == 0x000004, "Wrong size on GameplayState_InitializeStateEventServer");
static_assert(offsetof(GameplayState_InitializeStateEventServer, PrevStateId) == 0x000000, "Member 'GameplayState_InitializeStateEventServer::PrevStateId' has a wrong offset!");

struct GameplayState_RemoveStateRuntimeTag final
{
public:
	struct FGameplayTag                           RemovedTag;
};
static_assert(alignof(GameplayState_RemoveStateRuntimeTag) == 0x000004, "Wrong alignment on GameplayState_RemoveStateRuntimeTag");
static_assert(sizeof(GameplayState_RemoveStateRuntimeTag) == 0x000004, "Wrong size on GameplayState_RemoveStateRuntimeTag");
static_assert(offsetof(GameplayState_RemoveStateRuntimeTag, RemovedTag) == 0x000000, "Member 'GameplayState_RemoveStateRuntimeTag::RemovedTag' has a wrong offset!");

struct GameplayState_UpdateStateEvent final
{
public:
	float                                         DeltaTime;
};
static_assert(alignof(GameplayState_UpdateStateEvent) == 0x000004, "Wrong alignment on GameplayState_UpdateStateEvent");
static_assert(sizeof(GameplayState_UpdateStateEvent) == 0x000004, "Wrong size on GameplayState_UpdateStateEvent");
static_assert(offsetof(GameplayState_UpdateStateEvent, DeltaTime) == 0x000000, "Member 'GameplayState_UpdateStateEvent::DeltaTime' has a wrong offset!");

struct GameplayState_UpdateStateEventClient final
{
public:
	float                                         DeltaTime;
};
static_assert(alignof(GameplayState_UpdateStateEventClient) == 0x000004, "Wrong alignment on GameplayState_UpdateStateEventClient");
static_assert(sizeof(GameplayState_UpdateStateEventClient) == 0x000004, "Wrong size on GameplayState_UpdateStateEventClient");
static_assert(offsetof(GameplayState_UpdateStateEventClient, DeltaTime) == 0x000000, "Member 'GameplayState_UpdateStateEventClient::DeltaTime' has a wrong offset!");

struct GameplayState_UpdateStateEventServer final
{
public:
	float                                         DeltaTime;
};
static_assert(alignof(GameplayState_UpdateStateEventServer) == 0x000004, "Wrong alignment on GameplayState_UpdateStateEventServer");
static_assert(sizeof(GameplayState_UpdateStateEventServer) == 0x000004, "Wrong size on GameplayState_UpdateStateEventServer");
static_assert(offsetof(GameplayState_UpdateStateEventServer, DeltaTime) == 0x000000, "Member 'GameplayState_UpdateStateEventServer::DeltaTime' has a wrong offset!");

struct GameplayState_GetGameplayStateMachine final
{
public:
	class UGameplayStateMachine*                  ReturnValue;
};
static_assert(alignof(GameplayState_GetGameplayStateMachine) == 0x000008, "Wrong alignment on GameplayState_GetGameplayStateMachine");
static_assert(sizeof(GameplayState_GetGameplayStateMachine) == 0x000008, "Wrong size on GameplayState_GetGameplayStateMachine");
static_assert(offsetof(GameplayState_GetGameplayStateMachine, ReturnValue) == 0x000000, "Member 'GameplayState_GetGameplayStateMachine::ReturnValue' has a wrong offset!");

struct GameplayState_GetOwningActor final
{
public:
	class AActor*                                 ReturnValue;
};
static_assert(alignof(GameplayState_GetOwningActor) == 0x000008, "Wrong alignment on GameplayState_GetOwningActor");
static_assert(sizeof(GameplayState_GetOwningActor) == 0x000008, "Wrong size on GameplayState_GetOwningActor");
static_assert(offsetof(GameplayState_GetOwningActor, ReturnValue) == 0x000000, "Member 'GameplayState_GetOwningActor::ReturnValue' has a wrong offset!");

struct GameplayState_GetStateId final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(GameplayState_GetStateId) == 0x000004, "Wrong alignment on GameplayState_GetStateId");
static_assert(sizeof(GameplayState_GetStateId) == 0x000004, "Wrong size on GameplayState_GetStateId");
static_assert(offsetof(GameplayState_GetStateId, ReturnValue) == 0x000000, "Member 'GameplayState_GetStateId::ReturnValue' has a wrong offset!");

struct GameplayState_GetStateRuntimeTags final
{
public:
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(GameplayState_GetStateRuntimeTags) == 0x000008, "Wrong alignment on GameplayState_GetStateRuntimeTags");
static_assert(sizeof(GameplayState_GetStateRuntimeTags) == 0x000020, "Wrong size on GameplayState_GetStateRuntimeTags");
static_assert(offsetof(GameplayState_GetStateRuntimeTags, ReturnValue) == 0x000000, "Member 'GameplayState_GetStateRuntimeTags::ReturnValue' has a wrong offset!");

struct GameplayState_HasAuthority final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(GameplayState_HasAuthority) == 0x000001, "Wrong alignment on GameplayState_HasAuthority");
static_assert(sizeof(GameplayState_HasAuthority) == 0x000001, "Wrong size on GameplayState_HasAuthority");
static_assert(offsetof(GameplayState_HasAuthority, ReturnValue) == 0x000000, "Member 'GameplayState_HasAuthority::ReturnValue' has a wrong offset!");

struct GameplayStateMachine_SetState final
{
public:
	struct FGameplayTag                           InStateId;
	float                                         InBeginStateDelay;
};
static_assert(alignof(GameplayStateMachine_SetState) == 0x000004, "Wrong alignment on GameplayStateMachine_SetState");
static_assert(sizeof(GameplayStateMachine_SetState) == 0x000008, "Wrong size on GameplayStateMachine_SetState");
static_assert(offsetof(GameplayStateMachine_SetState, InStateId) == 0x000000, "Member 'GameplayStateMachine_SetState::InStateId' has a wrong offset!");
static_assert(offsetof(GameplayStateMachine_SetState, InBeginStateDelay) == 0x000004, "Member 'GameplayStateMachine_SetState::InBeginStateDelay' has a wrong offset!");

struct GameplayStateMachine_GetActiveStateId final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(GameplayStateMachine_GetActiveStateId) == 0x000004, "Wrong alignment on GameplayStateMachine_GetActiveStateId");
static_assert(sizeof(GameplayStateMachine_GetActiveStateId) == 0x000004, "Wrong size on GameplayStateMachine_GetActiveStateId");
static_assert(offsetof(GameplayStateMachine_GetActiveStateId, ReturnValue) == 0x000000, "Member 'GameplayStateMachine_GetActiveStateId::ReturnValue' has a wrong offset!");

struct GameplayStateMachine_GetActiveStateObject final
{
public:
	class UGameplayState*                         ReturnValue;
};
static_assert(alignof(GameplayStateMachine_GetActiveStateObject) == 0x000008, "Wrong alignment on GameplayStateMachine_GetActiveStateObject");
static_assert(sizeof(GameplayStateMachine_GetActiveStateObject) == 0x000008, "Wrong size on GameplayStateMachine_GetActiveStateObject");
static_assert(offsetof(GameplayStateMachine_GetActiveStateObject, ReturnValue) == 0x000000, "Member 'GameplayStateMachine_GetActiveStateObject::ReturnValue' has a wrong offset!");

struct GameplayStateMachine_GetStateMachineId final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(GameplayStateMachine_GetStateMachineId) == 0x000004, "Wrong alignment on GameplayStateMachine_GetStateMachineId");
static_assert(sizeof(GameplayStateMachine_GetStateMachineId) == 0x000004, "Wrong size on GameplayStateMachine_GetStateMachineId");
static_assert(offsetof(GameplayStateMachine_GetStateMachineId, ReturnValue) == 0x000000, "Member 'GameplayStateMachine_GetStateMachineId::ReturnValue' has a wrong offset!");

}
