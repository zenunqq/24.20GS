#pragma once

#include "Basic.hpp"

#include "DataDrivenGameplayEventRouter_classes.hpp"
#include "DataDrivenGameplayEventRouter_parameters.hpp"

namespace SDK
{

bool UGameplayEventDescriptorLibrary::BroadcastEvent(const struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, const int32& Event, class UClass* EventRouterScope, class AActor* RouterContextActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayEventDescriptorLibrary", "BroadcastEvent");

	Params::GameplayEventDescriptorLibrary_BroadcastEvent Parms{};

	Parms.EventDescriptor = std::move(EventDescriptor);
	Parms.EventContext = EventContext;
	Parms.Event = Event;
	Parms.EventRouterScope = EventRouterScope;
	Parms.RouterContextActor = RouterContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
