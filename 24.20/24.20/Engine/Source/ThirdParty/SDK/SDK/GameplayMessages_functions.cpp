#pragma once

#include "Basic.hpp"

#include "GameplayMessages_classes.hpp"
#include "GameplayMessages_parameters.hpp"

namespace SDK
{

class UAsyncAction_RegisterGameplayMessageReceiver* UAsyncAction_RegisterGameplayMessageReceiver::RegisterGameplayMessageReceiver(class UObject* WorldContextObject, const struct FEventMessageTag& Channel, class UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, class AActor* ActorContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "RegisterGameplayMessageReceiver");

	Params::AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Channel = std::move(Channel);
	Parms.PayloadType = PayloadType;
	Parms.MatchType = MatchType;
	Parms.ActorContext = ActorContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAsyncAction_RegisterGameplayMessageReceiver::GetPayload(int32& OutPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "GetPayload");

	Params::AsyncAction_RegisterGameplayMessageReceiver_GetPayload Parms{};

	Parms.OutPayload = OutPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutPayload = Parms.OutPayload;

	return Parms.ReturnValue;
}

void UAsyncAction_RegisterGameplayMessageReceiver::Unregister()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "Unregister");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AGameplayMessageReplicator::Multicast_ServerMessageTriggered(const struct FEventMessageTag& Channel, const struct FReplicatedMessage& MessageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayMessageReplicator", "Multicast_ServerMessageTriggered");

	Params::GameplayMessageReplicator_Multicast_ServerMessageTriggered Parms{};

	Parms.Channel = std::move(Channel);
	Parms.MessageData = std::move(MessageData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayMessageRouter::ClearSavedMessage(const struct FEventMessageTag& Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayMessageRouter", "ClearSavedMessage");

	Params::GameplayMessageRouter_ClearSavedMessage Parms{};

	Parms.Channel = std::move(Channel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayMessageRouter::K2_BroadcastMessage(const struct FEventMessageTag& Channel, const int32& message, bool bSaveToChannel, class AActor* ActorContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayMessageRouter", "K2_BroadcastMessage");

	Params::GameplayMessageRouter_K2_BroadcastMessage Parms{};

	Parms.Channel = std::move(Channel);
	Parms.message = message;
	Parms.bSaveToChannel = bSaveToChannel;
	Parms.ActorContext = ActorContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UGameplayMessageRouter::HasValidSavedMessage(const struct FEventMessageTag& Channel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayMessageRouter", "HasValidSavedMessage");

	Params::GameplayMessageRouter_HasValidSavedMessage Parms{};

	Parms.Channel = std::move(Channel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEventMessageTag UBlueprintEventMessageTagLibrary::GetEventMessageTagFromGameplayTag(const struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlueprintEventMessageTagLibrary", "GetEventMessageTagFromGameplayTag");

	Params::BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag Parms{};

	Parms.InTag = std::move(InTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
