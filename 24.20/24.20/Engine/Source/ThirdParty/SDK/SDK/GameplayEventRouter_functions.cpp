#pragma once

#include "Basic.hpp"

#include "GameplayEventRouter_classes.hpp"
#include "GameplayEventRouter_parameters.hpp"

namespace SDK
{

class UAsyncAction_StartListeningToEvent* UAsyncAction_StartListeningToEvent::StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_StartListeningToEvent", "StartListeningToEvent");

	Params::AsyncAction_StartListeningToEvent_StartListeningToEvent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Target = Target;
	Parms.EventType = EventType;
	Parms.Context = Context;
	Parms.EventBubblingRule = EventBubblingRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAsyncAction_StartListeningToEvent::GetPayload(int32& OutPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_StartListeningToEvent", "GetPayload");

	Params::AsyncAction_StartListeningToEvent_GetPayload Parms{};

	Parms.OutPayload = OutPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutPayload = Parms.OutPayload;

	return Parms.ReturnValue;
}

void UAsyncAction_StartListeningToEvent::StopListeningToEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_StartListeningToEvent", "StopListeningToEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAsyncAction_StartListeningToStatefulEvent* UAsyncAction_StartListeningToStatefulEvent::StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_StartListeningToStatefulEvent", "StartListeningToStatefulEvent");

	Params::AsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Target = Target;
	Parms.EventType = EventType;
	Parms.Context = Context;
	Parms.EventBubblingRule = EventBubblingRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAsyncAction_StartListeningToStatefulEvent::GetPayload(int32& OutPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_StartListeningToStatefulEvent", "GetPayload");

	Params::AsyncAction_StartListeningToStatefulEvent_GetPayload Parms{};

	Parms.OutPayload = OutPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutPayload = Parms.OutPayload;

	return Parms.ReturnValue;
}

void UAsyncAction_StartListeningToStatefulEvent::StopListeningToStatefulEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsyncAction_StartListeningToStatefulEvent", "StopListeningToStatefulEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayEventRouterComponent::ClearEventState(const class UScriptStruct* EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "ClearEventState");

	Params::GameplayEventRouterComponent_ClearEventState Parms{};

	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayEventRouterComponent::ClearEventStateByContext(const class UScriptStruct* EventType, const class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "ClearEventStateByContext");

	Params::GameplayEventRouterComponent_ClearEventStateByContext Parms{};

	Parms.EventType = EventType;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UGameplayEventRouterComponent::K2_BroadcastEvent(const int32& EventData, class UObject* EventContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "K2_BroadcastEvent");

	Params::GameplayEventRouterComponent_K2_BroadcastEvent Parms{};

	Parms.EventData = EventData;
	Parms.EventContext = EventContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayEventRouterComponent::K2_BroadcastStatefulEvent(const int32& EventData, class UObject* EventContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "K2_BroadcastStatefulEvent");

	Params::GameplayEventRouterComponent_K2_BroadcastStatefulEvent Parms{};

	Parms.EventData = EventData;
	Parms.EventContext = EventContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayEventRouterComponent::StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "StopListeningToEvent");

	Params::GameplayEventRouterComponent_StopListeningToEvent Parms{};

	Parms.HandleToRemove = std::move(HandleToRemove);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	HandleToRemove = std::move(Parms.HandleToRemove);
}

bool UGameplayEventRouterComponent::HasValidEventState(const class UScriptStruct* EventType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterComponent", "HasValidEventState");

	Params::GameplayEventRouterComponent_HasValidEventState Parms{};

	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class UGameplayEventRouterComponent> IGameplayEventRouterOwnerInterface::GetEventRouterClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEventRouterOwnerInterface", "GetEventRouterClass");

	Params::GameplayEventRouterOwnerInterface_GetEventRouterClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayEventRouterComponent* UGameplayEventRouterSubsytem::GetEventRouter(class UClass* Scope, class AActor* ContextActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayEventRouterSubsytem", "GetEventRouter");

	Params::GameplayEventRouterSubsytem_GetEventRouter Parms{};

	Parms.Scope = Scope;
	Parms.ContextActor = ContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayEventRouterComponent* UGameplayEventRouterSubsytem::GetGlobalEventRouter(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayEventRouterSubsytem", "GetGlobalEventRouter");

	Params::GameplayEventRouterSubsytem_GetGlobalEventRouter Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
