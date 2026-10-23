#pragma once

#include "Basic.hpp"

#include "SoundLibrary_classes.hpp"
#include "SoundLibrary_parameters.hpp"

namespace SDK
{

void USoundLibraryContext::OnAddedToActor(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibraryContext", "OnAddedToActor");

	Params::SoundLibraryContext_OnAddedToActor Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibraryContext::OnRemovedFromActor(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibraryContext", "OnRemovedFromActor");

	Params::SoundLibraryContext_OnRemovedFromActor Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USoundLibraryContext::PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibraryContext", "PlaySound");

	Params::SoundLibraryContext_PlaySound Parms{};

	Parms.sound = sound;
	Parms.OutResults = std::move(OutResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutResults = std::move(Parms.OutResults);

	return Parms.ReturnValue;
}

bool USoundLibraryContext::CreateEventName(struct FGameplayTag& OutEventName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibraryContext", "CreateEventName");

	Params::SoundLibraryContext_CreateEventName Parms{};

	Parms.OutEventName = std::move(OutEventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutEventName = std::move(Parms.OutEventName);

	return Parms.ReturnValue;
}

void USoundLibraryAnimContext::ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, const struct FSoundLibraryAnimContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibraryAnimContext", "ConfigureContext");

	Params::SoundLibraryAnimContext_ConfigureContext Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InAnimation = InAnimation;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibrarySimpleContext::ConfigureContext(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySimpleContext", "ConfigureContext");

	Params::SoundLibrarySimpleContext_ConfigureContext Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USoundLibraryContext* USoundLibrarySubsystem::AddContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddContext");

	Params::SoundLibrarySubsystem_AddContext Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USoundLibrarySubsystem::AddLibraries(class AActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibraries");

	Params::SoundLibrarySubsystem_AddLibraries Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = std::move(Libraries);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibrarySubsystem::AddLibrary(class AActor* Actor, class USoundLibrary* Library)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrary");

	Params::SoundLibrarySubsystem_AddLibrary Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibrarySubsystem::DisableEventsForActor(const class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "DisableEventsForActor");

	Params::SoundLibrarySubsystem_DisableEventsForActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibrarySubsystem::EnableEventsForActor(const class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "EnableEventsForActor");

	Params::SoundLibrarySubsystem_EnableEventsForActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USoundLibraryContext* USoundLibrarySubsystem::GetContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "GetContext");

	Params::SoundLibrarySubsystem_GetContext Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USoundLibrarySubsystem::PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult* OutResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySound");

	Params::SoundLibrarySubsystem_PlaySound Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);
}

struct FSoundLibraryPlaySoundResult USoundLibrarySubsystem::PlaySoundSimple(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySoundSimple");

	Params::SoundLibrarySubsystem_PlaySoundSimple Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USoundLibrarySubsystem::RemoveContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveContext");

	Params::SoundLibrarySubsystem_RemoveContext Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USoundLibrarySubsystem::RemoveLibraries(const class AActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibraries");

	Params::SoundLibrarySubsystem_RemoveLibraries Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = std::move(Libraries);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundLibrarySubsystem::RemoveLibrary(const class AActor* Actor, class USoundLibrary* Library)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrary");

	Params::SoundLibrarySubsystem_RemoveLibrary Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSoundLibraryTag USoundLibraryTagHelperFunctions::MakeSoundLibraryTag(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundLibraryTagHelperFunctions", "MakeSoundLibraryTag");

	Params::SoundLibraryTagHelperFunctions_MakeSoundLibraryTag Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
