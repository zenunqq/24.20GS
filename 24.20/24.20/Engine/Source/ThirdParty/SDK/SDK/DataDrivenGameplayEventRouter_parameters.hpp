#pragma once

#include "Basic.hpp"

#include "DataDrivenGameplayEventRouter_structs.hpp"

namespace SDK::Params
{

struct GameplayEventDescriptorLibrary_BroadcastEvent final
{
public:
	struct FGameplayEventDescriptor               EventDescriptor;
	class UObject*                                EventContext;
	int32                                         Event;
	uint8                                         Pad_14[0x4];
	class UClass*                                 EventRouterScope;
	class AActor*                                 RouterContextActor;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(GameplayEventDescriptorLibrary_BroadcastEvent) == 0x000008, "Wrong alignment on GameplayEventDescriptorLibrary_BroadcastEvent");
static_assert(sizeof(GameplayEventDescriptorLibrary_BroadcastEvent) == 0x000030, "Wrong size on GameplayEventDescriptorLibrary_BroadcastEvent");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, EventDescriptor) == 0x000000, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::EventDescriptor' has a wrong offset!");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, EventContext) == 0x000008, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::EventContext' has a wrong offset!");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, Event) == 0x000010, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::Event' has a wrong offset!");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, EventRouterScope) == 0x000018, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::EventRouterScope' has a wrong offset!");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, RouterContextActor) == 0x000020, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::RouterContextActor' has a wrong offset!");
static_assert(offsetof(GameplayEventDescriptorLibrary_BroadcastEvent, ReturnValue) == 0x000028, "Member 'GameplayEventDescriptorLibrary_BroadcastEvent::ReturnValue' has a wrong offset!");

}
