#pragma once

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "LevelSequence_parameters.hpp"

namespace SDK
{

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::LevelSequenceActor_AddBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "AddBindingByTag");

	Params::LevelSequenceActor_AddBindingByTag Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::HideBurnin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "HideBurnin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::LevelSequenceActor_RemoveBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::RemoveBindingByTag(class FName tag, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBindingByTag");

	Params::LevelSequenceActor_RemoveBindingByTag Parms{};

	Parms.tag = tag;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::LevelSequenceActor_ResetBinding Parms{};

	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::LevelSequenceActor_SetBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actors = std::move(Actors);
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::SetBindingByTag(class FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetBindingByTag");

	Params::LevelSequenceActor_SetBindingByTag Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actors = std::move(Actors);
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetReplicatePlayback");

	Params::LevelSequenceActor_SetReplicatePlayback Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::LevelSequenceActor_SetSequence Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceActor::ShowBurnin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "ShowBurnin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(class FName tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBinding");

	Params::LevelSequenceActor_FindNamedBinding Parms{};

	Parms.tag = tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(class FName tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBindings");

	Params::LevelSequenceActor_FindNamedBindings Parms{};

	Parms.tag = tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelSequence* ALevelSequenceActor::GetSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::LevelSequenceActor_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequencePlayer");

	Params::LevelSequenceActor_GetSequencePlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelSequence* ALevelSequenceActor::LoadSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "LoadSequence");

	Params::LevelSequenceActor_LoadSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequence", "CopyMetaData");

	Params::LevelSequence_CopyMetaData Parms{};

	Parms.InMetaData = InMetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* ULevelSequence::FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");

	Params::LevelSequence_FindOrAddMetaDataByClass Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULevelSequence::RemoveMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequence", "RemoveMetaDataByClass");

	Params::LevelSequence_RemoveMetaDataByClass Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* ULevelSequence::FindMetaDataByClass(TSubclassOf<class UObject> InClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequence", "FindMetaDataByClass");

	Params::LevelSequence_FindMetaDataByClass Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");

	Params::LevelSequenceBurnInOptions_SetBurnIn Parms{};

	Parms.InBurnInClass = std::move(InBurnInClass);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::LevelSequenceBurnIn_SetSettings Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);
}

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::LevelSequenceBurnIn_GetSettingsClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* ULevelSequenceDirector::GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActor");

	Params::LevelSequenceDirector_GetBoundActor Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AActor*> ULevelSequenceDirector::GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActors");

	Params::LevelSequenceDirector_GetBoundActors Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* ULevelSequenceDirector::GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObject");

	Params::LevelSequenceDirector_GetBoundObject Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UObject*> ULevelSequenceDirector::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObjects");

	Params::LevelSequenceDirector_GetBoundObjects Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneSequence* ULevelSequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetSequence");

	Params::LevelSequenceDirector_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULevelSequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "OnCreated");

	UObject::ProcessEvent(Func, nullptr);
}

struct FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetCurrentTime");

	Params::LevelSequenceDirector_GetCurrentTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetMasterSequenceTime");

	Params::LevelSequenceDirector_GetMasterSequenceTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime ULevelSequenceDirector::GetRootSequenceTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceDirector", "GetRootSequenceTime");

	Params::LevelSequenceDirector_GetRootSequenceTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::LevelSequencePlayer_CreateLevelSequencePlayer Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = std::move(Settings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;
}

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");

	Params::LevelSequencePlayer_GetActiveCameraComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceMediaController", "OnRep_ServerStartTimeSeconds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceMediaController::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceMediaController", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");

	Params::LevelSequenceMediaController_SynchronizeToServer Parms{};

	Parms.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetMediaComponent");

	Params::LevelSequenceMediaController_GetMediaComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetSequence");

	Params::LevelSequenceMediaController_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
