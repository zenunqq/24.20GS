#pragma once

#include "Basic.hpp"

#include "GameplayDebugger_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GameplayDebuggerCategoryReplicator_ClientDataPackPacket final
{
public:
	struct FGameplayDebuggerDataPackRPCParams     Params_0;
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ClientDataPackPacket) == 0x000008, "Wrong alignment on GameplayDebuggerCategoryReplicator_ClientDataPackPacket");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ClientDataPackPacket) == 0x000028, "Wrong size on GameplayDebuggerCategoryReplicator_ClientDataPackPacket");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ClientDataPackPacket, Params_0) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ClientDataPackPacket::Params_0' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent final
{
public:
	int32                                         CategoryId;
	int32                                         HandlerId;
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent) == 0x000004, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent) == 0x000008, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, CategoryId) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent::CategoryId' has a wrong offset!");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, HandlerId) == 0x000004, "Member 'GameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent::HandlerId' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent final
{
public:
	int32                                         ExtensionId;
	int32                                         HandlerId;
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent) == 0x000004, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent) == 0x000008, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, ExtensionId) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent::ExtensionId' has a wrong offset!");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, HandlerId) == 0x000004, "Member 'GameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent::HandlerId' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled final
{
public:
	int32                                         CategoryId;
	bool                                          bEnable;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled) == 0x000004, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled) == 0x000008, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, CategoryId) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled::CategoryId' has a wrong offset!");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, bEnable) == 0x000004, "Member 'GameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled::bEnable' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSetDebugActor final
{
public:
	class AActor*                                 Actor;
	bool                                          bSelectInEditor;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSetDebugActor) == 0x000008, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSetDebugActor");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSetDebugActor) == 0x000010, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSetDebugActor");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetDebugActor, Actor) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSetDebugActor::Actor' has a wrong offset!");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetDebugActor, bSelectInEditor) == 0x000008, "Member 'GameplayDebuggerCategoryReplicator_ServerSetDebugActor::bSelectInEditor' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSetEnabled final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSetEnabled) == 0x000001, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSetEnabled");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSetEnabled) == 0x000001, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSetEnabled");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetEnabled, bEnable) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSetEnabled::bEnable' has a wrong offset!");

struct GameplayDebuggerCategoryReplicator_ServerSetViewPoint final
{
public:
	struct FVector                                InViewLocation;
	struct FVector                                InViewDirection;
};
static_assert(alignof(GameplayDebuggerCategoryReplicator_ServerSetViewPoint) == 0x000008, "Wrong alignment on GameplayDebuggerCategoryReplicator_ServerSetViewPoint");
static_assert(sizeof(GameplayDebuggerCategoryReplicator_ServerSetViewPoint) == 0x000030, "Wrong size on GameplayDebuggerCategoryReplicator_ServerSetViewPoint");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetViewPoint, InViewLocation) == 0x000000, "Member 'GameplayDebuggerCategoryReplicator_ServerSetViewPoint::InViewLocation' has a wrong offset!");
static_assert(offsetof(GameplayDebuggerCategoryReplicator_ServerSetViewPoint, InViewDirection) == 0x000018, "Member 'GameplayDebuggerCategoryReplicator_ServerSetViewPoint::InViewDirection' has a wrong offset!");

}
