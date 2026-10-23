#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayMessages_structs.hpp"

namespace SDK
{

class UAsyncAction_RegisterGameplayMessageReceiver final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class UAsyncAction_RegisterGameplayMessageReceiver* ProxyObject)> OnMessageReceived;
	TMulticastInlineDelegate<void(class UAsyncAction_RegisterGameplayMessageReceiver* ProxyObject)> HandleSavedState;
	TMulticastInlineDelegate<void(class UAsyncAction_RegisterGameplayMessageReceiver* ProxyObject)> HandleStateCleared;
	uint8                                         Pad_60[0x38];

public:
	static class UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(class UObject* WorldContextObject, const struct FEventMessageTag& Channel, class UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, class AActor* ActorContext);

	bool GetPayload(int32& OutPayload);
	void Unregister();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_RegisterGameplayMessageReceiver">();
	}
	static class UAsyncAction_RegisterGameplayMessageReceiver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_RegisterGameplayMessageReceiver>();
	}
};
static_assert(alignof(UAsyncAction_RegisterGameplayMessageReceiver) == 0x000008, "Wrong alignment on UAsyncAction_RegisterGameplayMessageReceiver");
static_assert(sizeof(UAsyncAction_RegisterGameplayMessageReceiver) == 0x000098, "Wrong size on UAsyncAction_RegisterGameplayMessageReceiver");
static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, OnMessageReceived) == 0x000030, "Member 'UAsyncAction_RegisterGameplayMessageReceiver::OnMessageReceived' has a wrong offset!");
static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, HandleSavedState) == 0x000040, "Member 'UAsyncAction_RegisterGameplayMessageReceiver::HandleSavedState' has a wrong offset!");
static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, HandleStateCleared) == 0x000050, "Member 'UAsyncAction_RegisterGameplayMessageReceiver::HandleStateCleared' has a wrong offset!");

class AGameplayMessageReplicator final : public AActor
{
public:
	void Multicast_ServerMessageTriggered(const struct FEventMessageTag& Channel, const struct FReplicatedMessage& MessageData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayMessageReplicator">();
	}
	static class AGameplayMessageReplicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameplayMessageReplicator>();
	}
};
static_assert(alignof(AGameplayMessageReplicator) == 0x000008, "Wrong alignment on AGameplayMessageReplicator");
static_assert(sizeof(AGameplayMessageReplicator) == 0x000288, "Wrong size on AGameplayMessageReplicator");

class UGameplayMessageRouter final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0xA0];
	class AGameplayMessageReplicator*             MessageReplicator;

public:
	void ClearSavedMessage(const struct FEventMessageTag& Channel);
	void K2_BroadcastMessage(const struct FEventMessageTag& Channel, const int32& message, bool bSaveToChannel, class AActor* ActorContext);

	bool HasValidSavedMessage(const struct FEventMessageTag& Channel) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayMessageRouter">();
	}
	static class UGameplayMessageRouter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayMessageRouter>();
	}
};
static_assert(alignof(UGameplayMessageRouter) == 0x000008, "Wrong alignment on UGameplayMessageRouter");
static_assert(sizeof(UGameplayMessageRouter) == 0x0000D8, "Wrong size on UGameplayMessageRouter");
static_assert(offsetof(UGameplayMessageRouter, MessageReplicator) == 0x0000D0, "Member 'UGameplayMessageRouter::MessageReplicator' has a wrong offset!");

class UBlueprintEventMessageTagLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FEventMessageTag GetEventMessageTagFromGameplayTag(const struct FGameplayTag& InTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintEventMessageTagLibrary">();
	}
	static class UBlueprintEventMessageTagLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintEventMessageTagLibrary>();
	}
};
static_assert(alignof(UBlueprintEventMessageTagLibrary) == 0x000008, "Wrong alignment on UBlueprintEventMessageTagLibrary");
static_assert(sizeof(UBlueprintEventMessageTagLibrary) == 0x000028, "Wrong size on UBlueprintEventMessageTagLibrary");

}
