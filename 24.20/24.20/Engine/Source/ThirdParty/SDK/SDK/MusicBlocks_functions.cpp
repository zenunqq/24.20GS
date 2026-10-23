#pragma once

#include "Basic.hpp"

#include "MusicBlocks_classes.hpp"
#include "MusicBlocks_parameters.hpp"

namespace SDK
{

bool UMusicSequencerHitComponent::RegisterMusicSequencerActor(const class UObject* WorldContextObject, TScriptInterface<class IFortMusicSequencerInterface> Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicSequencerHitComponent", "RegisterMusicSequencerActor");

	Params::MusicSequencerHitComponent_RegisterMusicSequencerActor Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicSequencerHitComponent::ReplicateMusicSequencerHit(const class UObject* WorldContextObject, TScriptInterface<class IFortMusicSequencerInterface> HitInterface, const class AController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicSequencerHitComponent", "ReplicateMusicSequencerHit");

	Params::MusicSequencerHitComponent_ReplicateMusicSequencerHit Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicSequencerHitComponent::AddMusicSequencerActor(TScriptInterface<class IFortMusicSequencerInterface> HitInterface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitComponent", "AddMusicSequencerActor");

	Params::MusicSequencerHitComponent_AddMusicSequencerActor Parms{};

	Parms.HitInterface = HitInterface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicSequencerHitComponent::AddSequenceHitEvent(TScriptInterface<class IFortMusicSequencerInterface> HitInterface, const class AController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitComponent", "AddSequenceHitEvent");

	Params::MusicSequencerHitComponent_AddSequenceHitEvent Parms{};

	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicSequencerHitComponent::OnSequenceHitEventExpired(const struct FMusicSequencerHitHandle& ExpiredHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitComponent", "OnSequenceHitEventExpired");

	Params::MusicSequencerHitComponent_OnSequenceHitEventExpired Parms{};

	Parms.ExpiredHandle = std::move(ExpiredHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMusicSequencerHitComponent::ProcessSequenceHitEvent(const struct FMusicSequencerHitEntry& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitComponent", "ProcessSequenceHitEvent");

	Params::MusicSequencerHitComponent_ProcessSequenceHitEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicSequencerHitComponent* AMusicSequencerHitActor::GetMusicSequencerHitComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitActor", "GetMusicSequencerHitComponent");

	Params::MusicSequencerHitActor_GetMusicSequencerHitComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AMusicSequencerHitActor* UMusicSequencerHitAdderComponent::GetMusicSequencerHitActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicSequencerHitAdderComponent", "GetMusicSequencerHitActor");

	Params::MusicSequencerHitAdderComponent_GetMusicSequencerHitActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
