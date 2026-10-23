#pragma once

#include "Basic.hpp"

#include "GameplayMessages_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver final
{
public:
	class UObject*                                WorldContextObject;
	struct FEventMessageTag                       Channel;
	uint8                                         Pad_C[0x4];
	class UScriptStruct*                          PayloadType;
	EGameplayMessageMatchType                     MatchType;
	uint8                                         Pad_19[0x7];
	class AActor*                                 ActorContext;
	class UAsyncAction_RegisterGameplayMessageReceiver* ReturnValue;
};
static_assert(alignof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver) == 0x000008, "Wrong alignment on AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver");
static_assert(sizeof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver) == 0x000030, "Wrong size on AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, WorldContextObject) == 0x000000, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, Channel) == 0x000008, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::Channel' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, PayloadType) == 0x000010, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::PayloadType' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, MatchType) == 0x000018, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::MatchType' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, ActorContext) == 0x000020, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::ActorContext' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver, ReturnValue) == 0x000028, "Member 'AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver::ReturnValue' has a wrong offset!");

struct AsyncAction_RegisterGameplayMessageReceiver_GetPayload final
{
public:
	int32                                         OutPayload;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AsyncAction_RegisterGameplayMessageReceiver_GetPayload) == 0x000004, "Wrong alignment on AsyncAction_RegisterGameplayMessageReceiver_GetPayload");
static_assert(sizeof(AsyncAction_RegisterGameplayMessageReceiver_GetPayload) == 0x000008, "Wrong size on AsyncAction_RegisterGameplayMessageReceiver_GetPayload");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_GetPayload, OutPayload) == 0x000000, "Member 'AsyncAction_RegisterGameplayMessageReceiver_GetPayload::OutPayload' has a wrong offset!");
static_assert(offsetof(AsyncAction_RegisterGameplayMessageReceiver_GetPayload, ReturnValue) == 0x000004, "Member 'AsyncAction_RegisterGameplayMessageReceiver_GetPayload::ReturnValue' has a wrong offset!");

struct GameplayMessageReplicator_Multicast_ServerMessageTriggered final
{
public:
	struct FEventMessageTag                       Channel;
	uint8                                         Pad_4[0x4];
	struct FReplicatedMessage                     MessageData;
};
static_assert(alignof(GameplayMessageReplicator_Multicast_ServerMessageTriggered) == 0x000008, "Wrong alignment on GameplayMessageReplicator_Multicast_ServerMessageTriggered");
static_assert(sizeof(GameplayMessageReplicator_Multicast_ServerMessageTriggered) == 0x000018, "Wrong size on GameplayMessageReplicator_Multicast_ServerMessageTriggered");
static_assert(offsetof(GameplayMessageReplicator_Multicast_ServerMessageTriggered, Channel) == 0x000000, "Member 'GameplayMessageReplicator_Multicast_ServerMessageTriggered::Channel' has a wrong offset!");
static_assert(offsetof(GameplayMessageReplicator_Multicast_ServerMessageTriggered, MessageData) == 0x000008, "Member 'GameplayMessageReplicator_Multicast_ServerMessageTriggered::MessageData' has a wrong offset!");

struct GameplayMessageRouter_ClearSavedMessage final
{
public:
	struct FEventMessageTag                       Channel;
};
static_assert(alignof(GameplayMessageRouter_ClearSavedMessage) == 0x000004, "Wrong alignment on GameplayMessageRouter_ClearSavedMessage");
static_assert(sizeof(GameplayMessageRouter_ClearSavedMessage) == 0x000004, "Wrong size on GameplayMessageRouter_ClearSavedMessage");
static_assert(offsetof(GameplayMessageRouter_ClearSavedMessage, Channel) == 0x000000, "Member 'GameplayMessageRouter_ClearSavedMessage::Channel' has a wrong offset!");

struct GameplayMessageRouter_K2_BroadcastMessage final
{
public:
	struct FEventMessageTag                       Channel;
	int32                                         message;
	bool                                          bSaveToChannel;
	uint8                                         Pad_9[0x7];
	class AActor*                                 ActorContext;
};
static_assert(alignof(GameplayMessageRouter_K2_BroadcastMessage) == 0x000008, "Wrong alignment on GameplayMessageRouter_K2_BroadcastMessage");
static_assert(sizeof(GameplayMessageRouter_K2_BroadcastMessage) == 0x000018, "Wrong size on GameplayMessageRouter_K2_BroadcastMessage");
static_assert(offsetof(GameplayMessageRouter_K2_BroadcastMessage, Channel) == 0x000000, "Member 'GameplayMessageRouter_K2_BroadcastMessage::Channel' has a wrong offset!");
static_assert(offsetof(GameplayMessageRouter_K2_BroadcastMessage, message) == 0x000004, "Member 'GameplayMessageRouter_K2_BroadcastMessage::message' has a wrong offset!");
static_assert(offsetof(GameplayMessageRouter_K2_BroadcastMessage, bSaveToChannel) == 0x000008, "Member 'GameplayMessageRouter_K2_BroadcastMessage::bSaveToChannel' has a wrong offset!");
static_assert(offsetof(GameplayMessageRouter_K2_BroadcastMessage, ActorContext) == 0x000010, "Member 'GameplayMessageRouter_K2_BroadcastMessage::ActorContext' has a wrong offset!");

struct GameplayMessageRouter_HasValidSavedMessage final
{
public:
	struct FEventMessageTag                       Channel;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(GameplayMessageRouter_HasValidSavedMessage) == 0x000004, "Wrong alignment on GameplayMessageRouter_HasValidSavedMessage");
static_assert(sizeof(GameplayMessageRouter_HasValidSavedMessage) == 0x000008, "Wrong size on GameplayMessageRouter_HasValidSavedMessage");
static_assert(offsetof(GameplayMessageRouter_HasValidSavedMessage, Channel) == 0x000000, "Member 'GameplayMessageRouter_HasValidSavedMessage::Channel' has a wrong offset!");
static_assert(offsetof(GameplayMessageRouter_HasValidSavedMessage, ReturnValue) == 0x000004, "Member 'GameplayMessageRouter_HasValidSavedMessage::ReturnValue' has a wrong offset!");

struct BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag final
{
public:
	struct FGameplayTag                           InTag;
	struct FEventMessageTag                       ReturnValue;
};
static_assert(alignof(BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag) == 0x000004, "Wrong alignment on BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag");
static_assert(sizeof(BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag) == 0x000008, "Wrong size on BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag");
static_assert(offsetof(BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag, InTag) == 0x000000, "Member 'BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag::InTag' has a wrong offset!");
static_assert(offsetof(BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag, ReturnValue) == 0x000004, "Member 'BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag::ReturnValue' has a wrong offset!");

}
