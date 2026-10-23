#pragma once

#include "Basic.hpp"

#include "CableComponent_classes.hpp"
#include "CableComponent_parameters.hpp"

namespace SDK
{

void UCableComponent::SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CableComponent", "SetAttachEndTo");

	Params::CableComponent_SetAttachEndTo Parms{};

	Parms.Actor = Actor;
	Parms.ComponentProperty = ComponentProperty;
	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CableComponent", "SetAttachEndToComponent");

	Params::CableComponent_SetAttachEndToComponent Parms{};

	Parms.Component = Component;
	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UCableComponent::GetAttachedActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CableComponent", "GetAttachedActor");

	Params::CableComponent_GetAttachedActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USceneComponent* UCableComponent::GetAttachedComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CableComponent", "GetAttachedComponent");

	Params::CableComponent_GetAttachedComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CableComponent", "GetCableParticleLocations");

	Params::CableComponent_GetCableParticleLocations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);
}

}
