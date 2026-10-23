#pragma once

#include "Basic.hpp"

#include "MovieScene_classes.hpp"
#include "MovieScene_parameters.hpp"

namespace SDK
{

float IMovieSceneEasingFunction::OnEvaluate(float Interp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneEasingFunction", "OnEvaluate");

	Params::MovieSceneEasingFunction_OnEvaluate Parms{};

	Parms.Interp = Interp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FFrameTime IMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnRequestCurrentTime");

	Params::MovieSceneCustomClockSource_OnRequestCurrentTime Parms{};

	Parms.InCurrentTime = std::move(InCurrentTime);
	Parms.InPlayRate = InPlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStartPlaying");

	Params::MovieSceneCustomClockSource_OnStartPlaying Parms{};

	Parms.InStartTime = std::move(InStartTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStopPlaying");

	Params::MovieSceneCustomClockSource_OnStopPlaying Parms{};

	Parms.InStopTime = std::move(InStopTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnTick");

	Params::MovieSceneCustomClockSource_OnTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.InPlayRate = InPlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetBlendType");

	Params::MovieSceneSection_SetBlendType Parms{};

	Parms.InBlendType = InBlendType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetCompletionMode");

	Params::MovieSceneSection_SetCompletionMode Parms{};

	Parms.InCompletionMode = InCompletionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetIsActive");

	Params::MovieSceneSection_SetIsActive Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetIsLocked");

	Params::MovieSceneSection_SetIsLocked Parms{};

	Parms.bInIsLocked = bInIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetOverlapPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetOverlapPriority");

	Params::MovieSceneSection_SetOverlapPriority Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetPostRollFrames(int32 InPostRollFrames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetPostRollFrames");

	Params::MovieSceneSection_SetPostRollFrames Parms{};

	Parms.InPostRollFrames = InPostRollFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetPreRollFrames(int32 InPreRollFrames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetPreRollFrames");

	Params::MovieSceneSection_SetPreRollFrames Parms{};

	Parms.InPreRollFrames = InPreRollFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSection::SetRowIndex(int32 NewRowIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "SetRowIndex");

	Params::MovieSceneSection_SetRowIndex Parms{};

	Parms.NewRowIndex = NewRowIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetBlendType");

	Params::MovieSceneSection_GetBlendType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetCompletionMode");

	Params::MovieSceneSection_GetCompletionMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSection::GetOverlapPriority() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetOverlapPriority");

	Params::MovieSceneSection_GetOverlapPriority Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSection::GetPostRollFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetPostRollFrames");

	Params::MovieSceneSection_GetPostRollFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSection::GetPreRollFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetPreRollFrames");

	Params::MovieSceneSection_GetPreRollFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSection::GetRowIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "GetRowIndex");

	Params::MovieSceneSection_GetRowIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSection::IsActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "IsActive");

	Params::MovieSceneSection_IsActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSection::IsLocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSection", "IsLocked");

	Params::MovieSceneSection_IsLocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(class FName InBindingName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequence", "FindBindingByTag");

	Params::MovieSceneSequence_FindBindingByTag Parms{};

	Parms.InBindingName = InBindingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(class FName InBindingName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequence", "FindBindingsByTag");

	Params::MovieSceneSequence_FindBindingsByTag Parms{};

	Parms.InBindingName = InBindingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneTimecodeSource UMovieSceneSequence::GetEarliestTimecodeSource() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequence", "GetEarliestTimecodeSource");

	Params::MovieSceneSequence_GetEarliestTimecodeSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetBoundObjects");

	Params::MovieSceneSequencePlayer_GetBoundObjects Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");

	Params::MovieSceneSequencePlayer_GetDisableCameraCuts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetObjectBindings");

	Params::MovieSceneSequencePlayer_GetObjectBindings Parms{};

	Parms.InObject = InObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GoToEndAndStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToFrame");

	Params::MovieSceneSequencePlayer_JumpToFrame Parms{};

	Parms.NewPosition = std::move(NewPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const class FString& InLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToMarkedFrame");

	Params::MovieSceneSequencePlayer_JumpToMarkedFrame Parms{};

	Parms.InLabel = std::move(InLabel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToSeconds");

	Params::MovieSceneSequencePlayer_JumpToSeconds Parms{};

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::MovieSceneSequencePlayer_PlayLooping Parms{};

	Parms.NumLoops = NumLoops;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::PlayReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayTo");

	Params::MovieSceneSequencePlayer_PlayTo Parms{};

	Parms.PlaybackParams = std::move(PlaybackParams);
	Parms.PlayToParams = std::move(PlayToParams);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToFrame");

	Params::MovieSceneSequencePlayer_PlayToFrame Parms{};

	Parms.NewPosition = std::move(NewPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const class FString& InLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToMarkedFrame");

	Params::MovieSceneSequencePlayer_PlayToMarkedFrame Parms{};

	Parms.InLabel = std::move(InLabel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToSeconds");

	Params::MovieSceneSequencePlayer_PlayToSeconds Parms{};

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::RemoveWeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RemoveWeight");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::RestoreState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RestoreState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_ExplicitServerUpdateEvent");

	Params::MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent Parms{};

	Parms.Method = Method;
	Parms.RelevantTime = std::move(RelevantTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnFinishPlaybackEvent");

	Params::MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent Parms{};

	Parms.StoppedTime = std::move(StoppedTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnStopEvent");

	Params::MovieSceneSequencePlayer_RPC_OnStopEvent Parms{};

	Parms.StoppedTime = std::move(StoppedTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::Scrub()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Scrub");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToFrame");

	Params::MovieSceneSequencePlayer_ScrubToFrame Parms{};

	Parms.NewPosition = std::move(NewPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const class FString& InLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToMarkedFrame");

	Params::MovieSceneSequencePlayer_ScrubToMarkedFrame Parms{};

	Parms.InLabel = std::move(InLabel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToSeconds");

	Params::MovieSceneSequencePlayer_ScrubToSeconds Parms{};

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");

	Params::MovieSceneSequencePlayer_SetDisableCameraCuts Parms{};

	Parms.bInDisableCameraCuts = bInDisableCameraCuts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");

	Params::MovieSceneSequencePlayer_SetFrameRange Parms{};

	Parms.StartFrame = StartFrame;
	Parms.Duration = Duration;
	Parms.SubFrames = SubFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRate");

	Params::MovieSceneSequencePlayer_SetFrameRate Parms{};

	Parms.FrameRate = std::move(FrameRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::MovieSceneSequencePlayer_SetPlaybackPosition Parms{};

	Parms.PlaybackParams = std::move(PlaybackParams);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::MovieSceneSequencePlayer_SetPlayRate Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime_0, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");

	Params::MovieSceneSequencePlayer_SetTimeRange Parms{};

	Parms.StartTime_0 = StartTime_0;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::SetWeight(double InWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetWeight");

	Params::MovieSceneSequencePlayer_SetWeight Parms{};

	Parms.InWeight = InWeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "StopAtCurrentTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetCurrentTime");

	Params::MovieSceneSequencePlayer_GetCurrentTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDuration");

	Params::MovieSceneSequencePlayer_GetDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetEndTime");

	Params::MovieSceneSequencePlayer_GetEndTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequencePlayer::GetFrameDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameDuration");

	Params::MovieSceneSequencePlayer_GetFrameDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameRate");

	Params::MovieSceneSequencePlayer_GetFrameRate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetPlayRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::MovieSceneSequencePlayer_GetPlayRate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequence");

	Params::MovieSceneSequencePlayer_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMovieSceneSequencePlayer::GetSequenceName(bool bAddClientInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequenceName");

	Params::MovieSceneSequencePlayer_GetSequenceName Parms{};

	Parms.bAddClientInfo = bAddClientInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetStartTime");

	Params::MovieSceneSequencePlayer_GetStartTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPaused");

	Params::MovieSceneSequencePlayer_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::MovieSceneSequencePlayer_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::IsReversed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsReversed");

	Params::MovieSceneSequencePlayer_IsReversed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSubSection", "SetSequence");

	Params::MovieSceneSubSection_SetSequence Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMovieSceneSequence* UMovieSceneSubSection::GetSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneSubSection", "GetSequence");

	Params::MovieSceneSubSection_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
