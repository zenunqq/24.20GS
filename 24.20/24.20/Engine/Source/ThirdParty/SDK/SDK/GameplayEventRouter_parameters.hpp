#pragma once

#include "Basic.hpp"

#include "GameplayEventRouter_structs.hpp"

namespace SDK::Params
{

struct AsyncAction_StartListeningToEvent_StartListeningToEvent final
{
public:
	class UObject*                                WorldContextObject;
	class UGameplayEventRouterComponent*          Target;
	class UScriptStruct*                          EventType;
	class UObject*                                Context;
	EEventBubblingRule                            EventBubblingRule;
	uint8                                         Pad_21[0x7];
	class UAsyncAction_StartListeningToEvent*     ReturnValue;
};
static_assert(alignof(AsyncAction_StartListeningToEvent_StartListeningToEvent) == 0x000008, "Wrong alignment on AsyncAction_StartListeningToEvent_StartListeningToEvent");
static_assert(sizeof(AsyncAction_StartListeningToEvent_StartListeningToEvent) == 0x000030, "Wrong size on AsyncAction_StartListeningToEvent_StartListeningToEvent");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, WorldContextObject) == 0x000000, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, Target) == 0x000008, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::Target' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, EventType) == 0x000010, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::EventType' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, Context) == 0x000018, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::Context' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, EventBubblingRule) == 0x000020, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::EventBubblingRule' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_StartListeningToEvent, ReturnValue) == 0x000028, "Member 'AsyncAction_StartListeningToEvent_StartListeningToEvent::ReturnValue' has a wrong offset!");

struct AsyncAction_StartListeningToEvent_GetPayload final
{
public:
	int32                                         OutPayload;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AsyncAction_StartListeningToEvent_GetPayload) == 0x000004, "Wrong alignment on AsyncAction_StartListeningToEvent_GetPayload");
static_assert(sizeof(AsyncAction_StartListeningToEvent_GetPayload) == 0x000008, "Wrong size on AsyncAction_StartListeningToEvent_GetPayload");
static_assert(offsetof(AsyncAction_StartListeningToEvent_GetPayload, OutPayload) == 0x000000, "Member 'AsyncAction_StartListeningToEvent_GetPayload::OutPayload' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToEvent_GetPayload, ReturnValue) == 0x000004, "Member 'AsyncAction_StartListeningToEvent_GetPayload::ReturnValue' has a wrong offset!");

struct AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent final
{
public:
	class UObject*                                WorldContextObject;
	class UGameplayEventRouterComponent*          Target;
	class UScriptStruct*                          EventType;
	class UObject*                                Context;
	EEventBubblingRule                            EventBubblingRule;
	uint8                                         Pad_21[0x7];
	class UAsyncAction_StartListeningToStatefulEvent* ReturnValue;
};
static_assert(alignof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent) == 0x000008, "Wrong alignment on AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent");
static_assert(sizeof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent) == 0x000030, "Wrong size on AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, WorldContextObject) == 0x000000, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, Target) == 0x000008, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::Target' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, EventType) == 0x000010, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::EventType' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, Context) == 0x000018, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::Context' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, EventBubblingRule) == 0x000020, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::EventBubblingRule' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent, ReturnValue) == 0x000028, "Member 'AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent::ReturnValue' has a wrong offset!");

struct AsyncAction_StartListeningToStatefulEvent_GetPayload final
{
public:
	int32                                         OutPayload;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AsyncAction_StartListeningToStatefulEvent_GetPayload) == 0x000004, "Wrong alignment on AsyncAction_StartListeningToStatefulEvent_GetPayload");
static_assert(sizeof(AsyncAction_StartListeningToStatefulEvent_GetPayload) == 0x000008, "Wrong size on AsyncAction_StartListeningToStatefulEvent_GetPayload");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_GetPayload, OutPayload) == 0x000000, "Member 'AsyncAction_StartListeningToStatefulEvent_GetPayload::OutPayload' has a wrong offset!");
static_assert(offsetof(AsyncAction_StartListeningToStatefulEvent_GetPayload, ReturnValue) == 0x000004, "Member 'AsyncAction_StartListeningToStatefulEvent_GetPayload::ReturnValue' has a wrong offset!");

struct GameplayEventRouterComponent_ClearEventState final
{
public:
	const class UScriptStruct*                    EventType;
};
static_assert(alignof(GameplayEventRouterComponent_ClearEventState) == 0x000008, "Wrong alignment on GameplayEventRouterComponent_ClearEventState");
static_assert(sizeof(GameplayEventRouterComponent_ClearEventState) == 0x000008, "Wrong size on GameplayEventRouterComponent_ClearEventState");
static_assert(offsetof(GameplayEventRouterComponent_ClearEventState, EventType) == 0x000000, "Member 'GameplayEventRouterComponent_ClearEventState::EventType' has a wrong offset!");

struct GameplayEventRouterComponent_ClearEventStateByContext final
{
public:
	const class UScriptStruct*                    EventType;
	const class UObject*                          Context;
};
static_assert(alignof(GameplayEventRouterComponent_ClearEventStateByContext) == 0x000008, "Wrong alignment on GameplayEventRouterComponent_ClearEventStateByContext");
static_assert(sizeof(GameplayEventRouterComponent_ClearEventStateByContext) == 0x000010, "Wrong size on GameplayEventRouterComponent_ClearEventStateByContext");
static_assert(offsetof(GameplayEventRouterComponent_ClearEventStateByContext, EventType) == 0x000000, "Member 'GameplayEventRouterComponent_ClearEventStateByContext::EventType' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_ClearEventStateByContext, Context) == 0x000008, "Member 'GameplayEventRouterComponent_ClearEventStateByContext::Context' has a wrong offset!");

struct GameplayEventRouterComponent_K2_BroadcastEvent final
{
public:
	int32                                         EventData;
	uint8                                         Pad_4[0x4];
	class UObject*                                EventContext;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(GameplayEventRouterComponent_K2_BroadcastEvent) == 0x000008, "Wrong alignment on GameplayEventRouterComponent_K2_BroadcastEvent");
static_assert(sizeof(GameplayEventRouterComponent_K2_BroadcastEvent) == 0x000018, "Wrong size on GameplayEventRouterComponent_K2_BroadcastEvent");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastEvent, EventData) == 0x000000, "Member 'GameplayEventRouterComponent_K2_BroadcastEvent::EventData' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastEvent, EventContext) == 0x000008, "Member 'GameplayEventRouterComponent_K2_BroadcastEvent::EventContext' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastEvent, ReturnValue) == 0x000010, "Member 'GameplayEventRouterComponent_K2_BroadcastEvent::ReturnValue' has a wrong offset!");

struct GameplayEventRouterComponent_K2_BroadcastStatefulEvent final
{
public:
	int32                                         EventData;
	uint8                                         Pad_4[0x4];
	class UObject*                                EventContext;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(GameplayEventRouterComponent_K2_BroadcastStatefulEvent) == 0x000008, "Wrong alignment on GameplayEventRouterComponent_K2_BroadcastStatefulEvent");
static_assert(sizeof(GameplayEventRouterComponent_K2_BroadcastStatefulEvent) == 0x000018, "Wrong size on GameplayEventRouterComponent_K2_BroadcastStatefulEvent");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastStatefulEvent, EventData) == 0x000000, "Member 'GameplayEventRouterComponent_K2_BroadcastStatefulEvent::EventData' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastStatefulEvent, EventContext) == 0x000008, "Member 'GameplayEventRouterComponent_K2_BroadcastStatefulEvent::EventContext' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_K2_BroadcastStatefulEvent, ReturnValue) == 0x000010, "Member 'GameplayEventRouterComponent_K2_BroadcastStatefulEvent::ReturnValue' has a wrong offset!");

struct GameplayEventRouterComponent_StopListeningToEvent final
{
public:
	struct FGameplayEventListenerHandle           HandleToRemove;
};
static_assert(alignof(GameplayEventRouterComponent_StopListeningToEvent) == 0x000004, "Wrong alignment on GameplayEventRouterComponent_StopListeningToEvent");
static_assert(sizeof(GameplayEventRouterComponent_StopListeningToEvent) == 0x00001C, "Wrong size on GameplayEventRouterComponent_StopListeningToEvent");
static_assert(offsetof(GameplayEventRouterComponent_StopListeningToEvent, HandleToRemove) == 0x000000, "Member 'GameplayEventRouterComponent_StopListeningToEvent::HandleToRemove' has a wrong offset!");

struct GameplayEventRouterComponent_HasValidEventState final
{
public:
	const class UScriptStruct*                    EventType;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayEventRouterComponent_HasValidEventState) == 0x000008, "Wrong alignment on GameplayEventRouterComponent_HasValidEventState");
static_assert(sizeof(GameplayEventRouterComponent_HasValidEventState) == 0x000010, "Wrong size on GameplayEventRouterComponent_HasValidEventState");
static_assert(offsetof(GameplayEventRouterComponent_HasValidEventState, EventType) == 0x000000, "Member 'GameplayEventRouterComponent_HasValidEventState::EventType' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterComponent_HasValidEventState, ReturnValue) == 0x000008, "Member 'GameplayEventRouterComponent_HasValidEventState::ReturnValue' has a wrong offset!");

struct GameplayEventRouterOwnerInterface_GetEventRouterClass final
{
public:
	TSubclassOf<class UGameplayEventRouterComponent> ReturnValue;
};
static_assert(alignof(GameplayEventRouterOwnerInterface_GetEventRouterClass) == 0x000008, "Wrong alignment on GameplayEventRouterOwnerInterface_GetEventRouterClass");
static_assert(sizeof(GameplayEventRouterOwnerInterface_GetEventRouterClass) == 0x000008, "Wrong size on GameplayEventRouterOwnerInterface_GetEventRouterClass");
static_assert(offsetof(GameplayEventRouterOwnerInterface_GetEventRouterClass, ReturnValue) == 0x000000, "Member 'GameplayEventRouterOwnerInterface_GetEventRouterClass::ReturnValue' has a wrong offset!");

struct GameplayEventRouterSubsytem_GetEventRouter final
{
public:
	class UClass*                                 Scope;
	class AActor*                                 ContextActor;
	class UGameplayEventRouterComponent*          ReturnValue;
};
static_assert(alignof(GameplayEventRouterSubsytem_GetEventRouter) == 0x000008, "Wrong alignment on GameplayEventRouterSubsytem_GetEventRouter");
static_assert(sizeof(GameplayEventRouterSubsytem_GetEventRouter) == 0x000018, "Wrong size on GameplayEventRouterSubsytem_GetEventRouter");
static_assert(offsetof(GameplayEventRouterSubsytem_GetEventRouter, Scope) == 0x000000, "Member 'GameplayEventRouterSubsytem_GetEventRouter::Scope' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterSubsytem_GetEventRouter, ContextActor) == 0x000008, "Member 'GameplayEventRouterSubsytem_GetEventRouter::ContextActor' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterSubsytem_GetEventRouter, ReturnValue) == 0x000010, "Member 'GameplayEventRouterSubsytem_GetEventRouter::ReturnValue' has a wrong offset!");

struct GameplayEventRouterSubsytem_GetGlobalEventRouter final
{
public:
	const class UObject*                          WorldContextObject;
	class UGameplayEventRouterComponent*          ReturnValue;
};
static_assert(alignof(GameplayEventRouterSubsytem_GetGlobalEventRouter) == 0x000008, "Wrong alignment on GameplayEventRouterSubsytem_GetGlobalEventRouter");
static_assert(sizeof(GameplayEventRouterSubsytem_GetGlobalEventRouter) == 0x000010, "Wrong size on GameplayEventRouterSubsytem_GetGlobalEventRouter");
static_assert(offsetof(GameplayEventRouterSubsytem_GetGlobalEventRouter, WorldContextObject) == 0x000000, "Member 'GameplayEventRouterSubsytem_GetGlobalEventRouter::WorldContextObject' has a wrong offset!");
static_assert(offsetof(GameplayEventRouterSubsytem_GetGlobalEventRouter, ReturnValue) == 0x000008, "Member 'GameplayEventRouterSubsytem_GetGlobalEventRouter::ReturnValue' has a wrong offset!");

}
