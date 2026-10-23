#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK::Params
{

struct MovieSceneEasingFunction_OnEvaluate final
{
public:
	float                                         Interp;
	float                                         ReturnValue;
};
static_assert(alignof(MovieSceneEasingFunction_OnEvaluate) == 0x000004, "Wrong alignment on MovieSceneEasingFunction_OnEvaluate");
static_assert(sizeof(MovieSceneEasingFunction_OnEvaluate) == 0x000008, "Wrong size on MovieSceneEasingFunction_OnEvaluate");
static_assert(offsetof(MovieSceneEasingFunction_OnEvaluate, Interp) == 0x000000, "Member 'MovieSceneEasingFunction_OnEvaluate::Interp' has a wrong offset!");
static_assert(offsetof(MovieSceneEasingFunction_OnEvaluate, ReturnValue) == 0x000004, "Member 'MovieSceneEasingFunction_OnEvaluate::ReturnValue' has a wrong offset!");

struct MovieSceneCustomClockSource_OnRequestCurrentTime final
{
public:
	struct FQualifiedFrameTime                    InCurrentTime;
	float                                         InPlayRate;
	struct FFrameTime                             ReturnValue;
};
static_assert(alignof(MovieSceneCustomClockSource_OnRequestCurrentTime) == 0x000004, "Wrong alignment on MovieSceneCustomClockSource_OnRequestCurrentTime");
static_assert(sizeof(MovieSceneCustomClockSource_OnRequestCurrentTime) == 0x00001C, "Wrong size on MovieSceneCustomClockSource_OnRequestCurrentTime");
static_assert(offsetof(MovieSceneCustomClockSource_OnRequestCurrentTime, InCurrentTime) == 0x000000, "Member 'MovieSceneCustomClockSource_OnRequestCurrentTime::InCurrentTime' has a wrong offset!");
static_assert(offsetof(MovieSceneCustomClockSource_OnRequestCurrentTime, InPlayRate) == 0x000010, "Member 'MovieSceneCustomClockSource_OnRequestCurrentTime::InPlayRate' has a wrong offset!");
static_assert(offsetof(MovieSceneCustomClockSource_OnRequestCurrentTime, ReturnValue) == 0x000014, "Member 'MovieSceneCustomClockSource_OnRequestCurrentTime::ReturnValue' has a wrong offset!");

struct MovieSceneCustomClockSource_OnStartPlaying final
{
public:
	struct FQualifiedFrameTime                    InStartTime;
};
static_assert(alignof(MovieSceneCustomClockSource_OnStartPlaying) == 0x000004, "Wrong alignment on MovieSceneCustomClockSource_OnStartPlaying");
static_assert(sizeof(MovieSceneCustomClockSource_OnStartPlaying) == 0x000010, "Wrong size on MovieSceneCustomClockSource_OnStartPlaying");
static_assert(offsetof(MovieSceneCustomClockSource_OnStartPlaying, InStartTime) == 0x000000, "Member 'MovieSceneCustomClockSource_OnStartPlaying::InStartTime' has a wrong offset!");

struct MovieSceneCustomClockSource_OnStopPlaying final
{
public:
	struct FQualifiedFrameTime                    InStopTime;
};
static_assert(alignof(MovieSceneCustomClockSource_OnStopPlaying) == 0x000004, "Wrong alignment on MovieSceneCustomClockSource_OnStopPlaying");
static_assert(sizeof(MovieSceneCustomClockSource_OnStopPlaying) == 0x000010, "Wrong size on MovieSceneCustomClockSource_OnStopPlaying");
static_assert(offsetof(MovieSceneCustomClockSource_OnStopPlaying, InStopTime) == 0x000000, "Member 'MovieSceneCustomClockSource_OnStopPlaying::InStopTime' has a wrong offset!");

struct MovieSceneCustomClockSource_OnTick final
{
public:
	float                                         DeltaSeconds;
	float                                         InPlayRate;
};
static_assert(alignof(MovieSceneCustomClockSource_OnTick) == 0x000004, "Wrong alignment on MovieSceneCustomClockSource_OnTick");
static_assert(sizeof(MovieSceneCustomClockSource_OnTick) == 0x000008, "Wrong size on MovieSceneCustomClockSource_OnTick");
static_assert(offsetof(MovieSceneCustomClockSource_OnTick, DeltaSeconds) == 0x000000, "Member 'MovieSceneCustomClockSource_OnTick::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(MovieSceneCustomClockSource_OnTick, InPlayRate) == 0x000004, "Member 'MovieSceneCustomClockSource_OnTick::InPlayRate' has a wrong offset!");

struct MovieSceneSection_SetBlendType final
{
public:
	EMovieSceneBlendType                          InBlendType;
};
static_assert(alignof(MovieSceneSection_SetBlendType) == 0x000001, "Wrong alignment on MovieSceneSection_SetBlendType");
static_assert(sizeof(MovieSceneSection_SetBlendType) == 0x000001, "Wrong size on MovieSceneSection_SetBlendType");
static_assert(offsetof(MovieSceneSection_SetBlendType, InBlendType) == 0x000000, "Member 'MovieSceneSection_SetBlendType::InBlendType' has a wrong offset!");

struct MovieSceneSection_SetCompletionMode final
{
public:
	EMovieSceneCompletionMode                     InCompletionMode;
};
static_assert(alignof(MovieSceneSection_SetCompletionMode) == 0x000001, "Wrong alignment on MovieSceneSection_SetCompletionMode");
static_assert(sizeof(MovieSceneSection_SetCompletionMode) == 0x000001, "Wrong size on MovieSceneSection_SetCompletionMode");
static_assert(offsetof(MovieSceneSection_SetCompletionMode, InCompletionMode) == 0x000000, "Member 'MovieSceneSection_SetCompletionMode::InCompletionMode' has a wrong offset!");

struct MovieSceneSection_SetIsActive final
{
public:
	bool                                          bInIsActive;
};
static_assert(alignof(MovieSceneSection_SetIsActive) == 0x000001, "Wrong alignment on MovieSceneSection_SetIsActive");
static_assert(sizeof(MovieSceneSection_SetIsActive) == 0x000001, "Wrong size on MovieSceneSection_SetIsActive");
static_assert(offsetof(MovieSceneSection_SetIsActive, bInIsActive) == 0x000000, "Member 'MovieSceneSection_SetIsActive::bInIsActive' has a wrong offset!");

struct MovieSceneSection_SetIsLocked final
{
public:
	bool                                          bInIsLocked;
};
static_assert(alignof(MovieSceneSection_SetIsLocked) == 0x000001, "Wrong alignment on MovieSceneSection_SetIsLocked");
static_assert(sizeof(MovieSceneSection_SetIsLocked) == 0x000001, "Wrong size on MovieSceneSection_SetIsLocked");
static_assert(offsetof(MovieSceneSection_SetIsLocked, bInIsLocked) == 0x000000, "Member 'MovieSceneSection_SetIsLocked::bInIsLocked' has a wrong offset!");

struct MovieSceneSection_SetOverlapPriority final
{
public:
	int32                                         NewPriority;
};
static_assert(alignof(MovieSceneSection_SetOverlapPriority) == 0x000004, "Wrong alignment on MovieSceneSection_SetOverlapPriority");
static_assert(sizeof(MovieSceneSection_SetOverlapPriority) == 0x000004, "Wrong size on MovieSceneSection_SetOverlapPriority");
static_assert(offsetof(MovieSceneSection_SetOverlapPriority, NewPriority) == 0x000000, "Member 'MovieSceneSection_SetOverlapPriority::NewPriority' has a wrong offset!");

struct MovieSceneSection_SetPostRollFrames final
{
public:
	int32                                         InPostRollFrames;
};
static_assert(alignof(MovieSceneSection_SetPostRollFrames) == 0x000004, "Wrong alignment on MovieSceneSection_SetPostRollFrames");
static_assert(sizeof(MovieSceneSection_SetPostRollFrames) == 0x000004, "Wrong size on MovieSceneSection_SetPostRollFrames");
static_assert(offsetof(MovieSceneSection_SetPostRollFrames, InPostRollFrames) == 0x000000, "Member 'MovieSceneSection_SetPostRollFrames::InPostRollFrames' has a wrong offset!");

struct MovieSceneSection_SetPreRollFrames final
{
public:
	int32                                         InPreRollFrames;
};
static_assert(alignof(MovieSceneSection_SetPreRollFrames) == 0x000004, "Wrong alignment on MovieSceneSection_SetPreRollFrames");
static_assert(sizeof(MovieSceneSection_SetPreRollFrames) == 0x000004, "Wrong size on MovieSceneSection_SetPreRollFrames");
static_assert(offsetof(MovieSceneSection_SetPreRollFrames, InPreRollFrames) == 0x000000, "Member 'MovieSceneSection_SetPreRollFrames::InPreRollFrames' has a wrong offset!");

struct MovieSceneSection_SetRowIndex final
{
public:
	int32                                         NewRowIndex;
};
static_assert(alignof(MovieSceneSection_SetRowIndex) == 0x000004, "Wrong alignment on MovieSceneSection_SetRowIndex");
static_assert(sizeof(MovieSceneSection_SetRowIndex) == 0x000004, "Wrong size on MovieSceneSection_SetRowIndex");
static_assert(offsetof(MovieSceneSection_SetRowIndex, NewRowIndex) == 0x000000, "Member 'MovieSceneSection_SetRowIndex::NewRowIndex' has a wrong offset!");

struct MovieSceneSection_GetBlendType final
{
public:
	struct FOptionalMovieSceneBlendType           ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetBlendType) == 0x000001, "Wrong alignment on MovieSceneSection_GetBlendType");
static_assert(sizeof(MovieSceneSection_GetBlendType) == 0x000002, "Wrong size on MovieSceneSection_GetBlendType");
static_assert(offsetof(MovieSceneSection_GetBlendType, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetBlendType::ReturnValue' has a wrong offset!");

struct MovieSceneSection_GetCompletionMode final
{
public:
	EMovieSceneCompletionMode                     ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetCompletionMode) == 0x000001, "Wrong alignment on MovieSceneSection_GetCompletionMode");
static_assert(sizeof(MovieSceneSection_GetCompletionMode) == 0x000001, "Wrong size on MovieSceneSection_GetCompletionMode");
static_assert(offsetof(MovieSceneSection_GetCompletionMode, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetCompletionMode::ReturnValue' has a wrong offset!");

struct MovieSceneSection_GetOverlapPriority final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetOverlapPriority) == 0x000004, "Wrong alignment on MovieSceneSection_GetOverlapPriority");
static_assert(sizeof(MovieSceneSection_GetOverlapPriority) == 0x000004, "Wrong size on MovieSceneSection_GetOverlapPriority");
static_assert(offsetof(MovieSceneSection_GetOverlapPriority, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetOverlapPriority::ReturnValue' has a wrong offset!");

struct MovieSceneSection_GetPostRollFrames final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetPostRollFrames) == 0x000004, "Wrong alignment on MovieSceneSection_GetPostRollFrames");
static_assert(sizeof(MovieSceneSection_GetPostRollFrames) == 0x000004, "Wrong size on MovieSceneSection_GetPostRollFrames");
static_assert(offsetof(MovieSceneSection_GetPostRollFrames, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetPostRollFrames::ReturnValue' has a wrong offset!");

struct MovieSceneSection_GetPreRollFrames final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetPreRollFrames) == 0x000004, "Wrong alignment on MovieSceneSection_GetPreRollFrames");
static_assert(sizeof(MovieSceneSection_GetPreRollFrames) == 0x000004, "Wrong size on MovieSceneSection_GetPreRollFrames");
static_assert(offsetof(MovieSceneSection_GetPreRollFrames, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetPreRollFrames::ReturnValue' has a wrong offset!");

struct MovieSceneSection_GetRowIndex final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(MovieSceneSection_GetRowIndex) == 0x000004, "Wrong alignment on MovieSceneSection_GetRowIndex");
static_assert(sizeof(MovieSceneSection_GetRowIndex) == 0x000004, "Wrong size on MovieSceneSection_GetRowIndex");
static_assert(offsetof(MovieSceneSection_GetRowIndex, ReturnValue) == 0x000000, "Member 'MovieSceneSection_GetRowIndex::ReturnValue' has a wrong offset!");

struct MovieSceneSection_IsActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSection_IsActive) == 0x000001, "Wrong alignment on MovieSceneSection_IsActive");
static_assert(sizeof(MovieSceneSection_IsActive) == 0x000001, "Wrong size on MovieSceneSection_IsActive");
static_assert(offsetof(MovieSceneSection_IsActive, ReturnValue) == 0x000000, "Member 'MovieSceneSection_IsActive::ReturnValue' has a wrong offset!");

struct MovieSceneSection_IsLocked final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSection_IsLocked) == 0x000001, "Wrong alignment on MovieSceneSection_IsLocked");
static_assert(sizeof(MovieSceneSection_IsLocked) == 0x000001, "Wrong size on MovieSceneSection_IsLocked");
static_assert(offsetof(MovieSceneSection_IsLocked, ReturnValue) == 0x000000, "Member 'MovieSceneSection_IsLocked::ReturnValue' has a wrong offset!");

struct MovieSceneSequence_FindBindingByTag final
{
public:
	class FName                                   InBindingName;
	struct FMovieSceneObjectBindingID             ReturnValue;
};
static_assert(alignof(MovieSceneSequence_FindBindingByTag) == 0x000004, "Wrong alignment on MovieSceneSequence_FindBindingByTag");
static_assert(sizeof(MovieSceneSequence_FindBindingByTag) == 0x00001C, "Wrong size on MovieSceneSequence_FindBindingByTag");
static_assert(offsetof(MovieSceneSequence_FindBindingByTag, InBindingName) == 0x000000, "Member 'MovieSceneSequence_FindBindingByTag::InBindingName' has a wrong offset!");
static_assert(offsetof(MovieSceneSequence_FindBindingByTag, ReturnValue) == 0x000004, "Member 'MovieSceneSequence_FindBindingByTag::ReturnValue' has a wrong offset!");

struct MovieSceneSequence_FindBindingsByTag final
{
public:
	class FName                                   InBindingName;
	uint8                                         Pad_4[0x4];
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;
};
static_assert(alignof(MovieSceneSequence_FindBindingsByTag) == 0x000008, "Wrong alignment on MovieSceneSequence_FindBindingsByTag");
static_assert(sizeof(MovieSceneSequence_FindBindingsByTag) == 0x000018, "Wrong size on MovieSceneSequence_FindBindingsByTag");
static_assert(offsetof(MovieSceneSequence_FindBindingsByTag, InBindingName) == 0x000000, "Member 'MovieSceneSequence_FindBindingsByTag::InBindingName' has a wrong offset!");
static_assert(offsetof(MovieSceneSequence_FindBindingsByTag, ReturnValue) == 0x000008, "Member 'MovieSceneSequence_FindBindingsByTag::ReturnValue' has a wrong offset!");

struct MovieSceneSequence_GetEarliestTimecodeSource final
{
public:
	struct FMovieSceneTimecodeSource              ReturnValue;
};
static_assert(alignof(MovieSceneSequence_GetEarliestTimecodeSource) == 0x000004, "Wrong alignment on MovieSceneSequence_GetEarliestTimecodeSource");
static_assert(sizeof(MovieSceneSequence_GetEarliestTimecodeSource) == 0x000014, "Wrong size on MovieSceneSequence_GetEarliestTimecodeSource");
static_assert(offsetof(MovieSceneSequence_GetEarliestTimecodeSource, ReturnValue) == 0x000000, "Member 'MovieSceneSequence_GetEarliestTimecodeSource::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetBoundObjects final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;
	TArray<class UObject*>                        ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetBoundObjects) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_GetBoundObjects");
static_assert(sizeof(MovieSceneSequencePlayer_GetBoundObjects) == 0x000028, "Wrong size on MovieSceneSequencePlayer_GetBoundObjects");
static_assert(offsetof(MovieSceneSequencePlayer_GetBoundObjects, ObjectBinding) == 0x000000, "Member 'MovieSceneSequencePlayer_GetBoundObjects::ObjectBinding' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_GetBoundObjects, ReturnValue) == 0x000018, "Member 'MovieSceneSequencePlayer_GetBoundObjects::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetDisableCameraCuts final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetDisableCameraCuts) == 0x000001, "Wrong alignment on MovieSceneSequencePlayer_GetDisableCameraCuts");
static_assert(sizeof(MovieSceneSequencePlayer_GetDisableCameraCuts) == 0x000001, "Wrong size on MovieSceneSequencePlayer_GetDisableCameraCuts");
static_assert(offsetof(MovieSceneSequencePlayer_GetDisableCameraCuts, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetDisableCameraCuts::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetObjectBindings final
{
public:
	class UObject*                                InObject;
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetObjectBindings) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_GetObjectBindings");
static_assert(sizeof(MovieSceneSequencePlayer_GetObjectBindings) == 0x000018, "Wrong size on MovieSceneSequencePlayer_GetObjectBindings");
static_assert(offsetof(MovieSceneSequencePlayer_GetObjectBindings, InObject) == 0x000000, "Member 'MovieSceneSequencePlayer_GetObjectBindings::InObject' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_GetObjectBindings, ReturnValue) == 0x000008, "Member 'MovieSceneSequencePlayer_GetObjectBindings::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_JumpToFrame final
{
public:
	struct FFrameTime                             NewPosition;
};
static_assert(alignof(MovieSceneSequencePlayer_JumpToFrame) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_JumpToFrame");
static_assert(sizeof(MovieSceneSequencePlayer_JumpToFrame) == 0x000008, "Wrong size on MovieSceneSequencePlayer_JumpToFrame");
static_assert(offsetof(MovieSceneSequencePlayer_JumpToFrame, NewPosition) == 0x000000, "Member 'MovieSceneSequencePlayer_JumpToFrame::NewPosition' has a wrong offset!");

struct MovieSceneSequencePlayer_JumpToMarkedFrame final
{
public:
	class FString                                 InLabel;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MovieSceneSequencePlayer_JumpToMarkedFrame) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_JumpToMarkedFrame");
static_assert(sizeof(MovieSceneSequencePlayer_JumpToMarkedFrame) == 0x000018, "Wrong size on MovieSceneSequencePlayer_JumpToMarkedFrame");
static_assert(offsetof(MovieSceneSequencePlayer_JumpToMarkedFrame, InLabel) == 0x000000, "Member 'MovieSceneSequencePlayer_JumpToMarkedFrame::InLabel' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_JumpToMarkedFrame, ReturnValue) == 0x000010, "Member 'MovieSceneSequencePlayer_JumpToMarkedFrame::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_JumpToSeconds final
{
public:
	float                                         TimeInSeconds;
};
static_assert(alignof(MovieSceneSequencePlayer_JumpToSeconds) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_JumpToSeconds");
static_assert(sizeof(MovieSceneSequencePlayer_JumpToSeconds) == 0x000004, "Wrong size on MovieSceneSequencePlayer_JumpToSeconds");
static_assert(offsetof(MovieSceneSequencePlayer_JumpToSeconds, TimeInSeconds) == 0x000000, "Member 'MovieSceneSequencePlayer_JumpToSeconds::TimeInSeconds' has a wrong offset!");

struct MovieSceneSequencePlayer_PlayLooping final
{
public:
	int32                                         NumLoops;
};
static_assert(alignof(MovieSceneSequencePlayer_PlayLooping) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_PlayLooping");
static_assert(sizeof(MovieSceneSequencePlayer_PlayLooping) == 0x000004, "Wrong size on MovieSceneSequencePlayer_PlayLooping");
static_assert(offsetof(MovieSceneSequencePlayer_PlayLooping, NumLoops) == 0x000000, "Member 'MovieSceneSequencePlayer_PlayLooping::NumLoops' has a wrong offset!");

struct MovieSceneSequencePlayer_PlayTo final
{
public:
	struct FMovieSceneSequencePlaybackParams      PlaybackParams;
	struct FMovieSceneSequencePlayToParams        PlayToParams;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(MovieSceneSequencePlayer_PlayTo) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_PlayTo");
static_assert(sizeof(MovieSceneSequencePlayer_PlayTo) == 0x000030, "Wrong size on MovieSceneSequencePlayer_PlayTo");
static_assert(offsetof(MovieSceneSequencePlayer_PlayTo, PlaybackParams) == 0x000000, "Member 'MovieSceneSequencePlayer_PlayTo::PlaybackParams' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_PlayTo, PlayToParams) == 0x000028, "Member 'MovieSceneSequencePlayer_PlayTo::PlayToParams' has a wrong offset!");

struct MovieSceneSequencePlayer_PlayToFrame final
{
public:
	struct FFrameTime                             NewPosition;
};
static_assert(alignof(MovieSceneSequencePlayer_PlayToFrame) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_PlayToFrame");
static_assert(sizeof(MovieSceneSequencePlayer_PlayToFrame) == 0x000008, "Wrong size on MovieSceneSequencePlayer_PlayToFrame");
static_assert(offsetof(MovieSceneSequencePlayer_PlayToFrame, NewPosition) == 0x000000, "Member 'MovieSceneSequencePlayer_PlayToFrame::NewPosition' has a wrong offset!");

struct MovieSceneSequencePlayer_PlayToMarkedFrame final
{
public:
	class FString                                 InLabel;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MovieSceneSequencePlayer_PlayToMarkedFrame) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_PlayToMarkedFrame");
static_assert(sizeof(MovieSceneSequencePlayer_PlayToMarkedFrame) == 0x000018, "Wrong size on MovieSceneSequencePlayer_PlayToMarkedFrame");
static_assert(offsetof(MovieSceneSequencePlayer_PlayToMarkedFrame, InLabel) == 0x000000, "Member 'MovieSceneSequencePlayer_PlayToMarkedFrame::InLabel' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_PlayToMarkedFrame, ReturnValue) == 0x000010, "Member 'MovieSceneSequencePlayer_PlayToMarkedFrame::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_PlayToSeconds final
{
public:
	float                                         TimeInSeconds;
};
static_assert(alignof(MovieSceneSequencePlayer_PlayToSeconds) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_PlayToSeconds");
static_assert(sizeof(MovieSceneSequencePlayer_PlayToSeconds) == 0x000004, "Wrong size on MovieSceneSequencePlayer_PlayToSeconds");
static_assert(offsetof(MovieSceneSequencePlayer_PlayToSeconds, TimeInSeconds) == 0x000000, "Member 'MovieSceneSequencePlayer_PlayToSeconds::TimeInSeconds' has a wrong offset!");

struct MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent final
{
public:
	EUpdatePositionMethod                         Method;
	uint8                                         Pad_1[0x3];
	struct FFrameTime                             RelevantTime;
};
static_assert(alignof(MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent");
static_assert(sizeof(MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent) == 0x00000C, "Wrong size on MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent");
static_assert(offsetof(MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent, Method) == 0x000000, "Member 'MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent::Method' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent, RelevantTime) == 0x000004, "Member 'MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent::RelevantTime' has a wrong offset!");

struct MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent final
{
public:
	struct FFrameTime                             StoppedTime;
};
static_assert(alignof(MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent");
static_assert(sizeof(MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent) == 0x000008, "Wrong size on MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent");
static_assert(offsetof(MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent, StoppedTime) == 0x000000, "Member 'MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent::StoppedTime' has a wrong offset!");

struct MovieSceneSequencePlayer_RPC_OnStopEvent final
{
public:
	struct FFrameTime                             StoppedTime;
};
static_assert(alignof(MovieSceneSequencePlayer_RPC_OnStopEvent) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_RPC_OnStopEvent");
static_assert(sizeof(MovieSceneSequencePlayer_RPC_OnStopEvent) == 0x000008, "Wrong size on MovieSceneSequencePlayer_RPC_OnStopEvent");
static_assert(offsetof(MovieSceneSequencePlayer_RPC_OnStopEvent, StoppedTime) == 0x000000, "Member 'MovieSceneSequencePlayer_RPC_OnStopEvent::StoppedTime' has a wrong offset!");

struct MovieSceneSequencePlayer_ScrubToFrame final
{
public:
	struct FFrameTime                             NewPosition;
};
static_assert(alignof(MovieSceneSequencePlayer_ScrubToFrame) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_ScrubToFrame");
static_assert(sizeof(MovieSceneSequencePlayer_ScrubToFrame) == 0x000008, "Wrong size on MovieSceneSequencePlayer_ScrubToFrame");
static_assert(offsetof(MovieSceneSequencePlayer_ScrubToFrame, NewPosition) == 0x000000, "Member 'MovieSceneSequencePlayer_ScrubToFrame::NewPosition' has a wrong offset!");

struct MovieSceneSequencePlayer_ScrubToMarkedFrame final
{
public:
	class FString                                 InLabel;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MovieSceneSequencePlayer_ScrubToMarkedFrame) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_ScrubToMarkedFrame");
static_assert(sizeof(MovieSceneSequencePlayer_ScrubToMarkedFrame) == 0x000018, "Wrong size on MovieSceneSequencePlayer_ScrubToMarkedFrame");
static_assert(offsetof(MovieSceneSequencePlayer_ScrubToMarkedFrame, InLabel) == 0x000000, "Member 'MovieSceneSequencePlayer_ScrubToMarkedFrame::InLabel' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_ScrubToMarkedFrame, ReturnValue) == 0x000010, "Member 'MovieSceneSequencePlayer_ScrubToMarkedFrame::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_ScrubToSeconds final
{
public:
	float                                         TimeInSeconds;
};
static_assert(alignof(MovieSceneSequencePlayer_ScrubToSeconds) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_ScrubToSeconds");
static_assert(sizeof(MovieSceneSequencePlayer_ScrubToSeconds) == 0x000004, "Wrong size on MovieSceneSequencePlayer_ScrubToSeconds");
static_assert(offsetof(MovieSceneSequencePlayer_ScrubToSeconds, TimeInSeconds) == 0x000000, "Member 'MovieSceneSequencePlayer_ScrubToSeconds::TimeInSeconds' has a wrong offset!");

struct MovieSceneSequencePlayer_SetDisableCameraCuts final
{
public:
	bool                                          bInDisableCameraCuts;
};
static_assert(alignof(MovieSceneSequencePlayer_SetDisableCameraCuts) == 0x000001, "Wrong alignment on MovieSceneSequencePlayer_SetDisableCameraCuts");
static_assert(sizeof(MovieSceneSequencePlayer_SetDisableCameraCuts) == 0x000001, "Wrong size on MovieSceneSequencePlayer_SetDisableCameraCuts");
static_assert(offsetof(MovieSceneSequencePlayer_SetDisableCameraCuts, bInDisableCameraCuts) == 0x000000, "Member 'MovieSceneSequencePlayer_SetDisableCameraCuts::bInDisableCameraCuts' has a wrong offset!");

struct MovieSceneSequencePlayer_SetFrameRange final
{
public:
	int32                                         StartFrame;
	int32                                         Duration;
	float                                         SubFrames;
};
static_assert(alignof(MovieSceneSequencePlayer_SetFrameRange) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_SetFrameRange");
static_assert(sizeof(MovieSceneSequencePlayer_SetFrameRange) == 0x00000C, "Wrong size on MovieSceneSequencePlayer_SetFrameRange");
static_assert(offsetof(MovieSceneSequencePlayer_SetFrameRange, StartFrame) == 0x000000, "Member 'MovieSceneSequencePlayer_SetFrameRange::StartFrame' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_SetFrameRange, Duration) == 0x000004, "Member 'MovieSceneSequencePlayer_SetFrameRange::Duration' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_SetFrameRange, SubFrames) == 0x000008, "Member 'MovieSceneSequencePlayer_SetFrameRange::SubFrames' has a wrong offset!");

struct MovieSceneSequencePlayer_SetFrameRate final
{
public:
	struct FFrameRate                             FrameRate;
};
static_assert(alignof(MovieSceneSequencePlayer_SetFrameRate) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_SetFrameRate");
static_assert(sizeof(MovieSceneSequencePlayer_SetFrameRate) == 0x000008, "Wrong size on MovieSceneSequencePlayer_SetFrameRate");
static_assert(offsetof(MovieSceneSequencePlayer_SetFrameRate, FrameRate) == 0x000000, "Member 'MovieSceneSequencePlayer_SetFrameRate::FrameRate' has a wrong offset!");

struct MovieSceneSequencePlayer_SetPlaybackPosition final
{
public:
	struct FMovieSceneSequencePlaybackParams      PlaybackParams;
};
static_assert(alignof(MovieSceneSequencePlayer_SetPlaybackPosition) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_SetPlaybackPosition");
static_assert(sizeof(MovieSceneSequencePlayer_SetPlaybackPosition) == 0x000028, "Wrong size on MovieSceneSequencePlayer_SetPlaybackPosition");
static_assert(offsetof(MovieSceneSequencePlayer_SetPlaybackPosition, PlaybackParams) == 0x000000, "Member 'MovieSceneSequencePlayer_SetPlaybackPosition::PlaybackParams' has a wrong offset!");

struct MovieSceneSequencePlayer_SetPlayRate final
{
public:
	float                                         PlayRate;
};
static_assert(alignof(MovieSceneSequencePlayer_SetPlayRate) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_SetPlayRate");
static_assert(sizeof(MovieSceneSequencePlayer_SetPlayRate) == 0x000004, "Wrong size on MovieSceneSequencePlayer_SetPlayRate");
static_assert(offsetof(MovieSceneSequencePlayer_SetPlayRate, PlayRate) == 0x000000, "Member 'MovieSceneSequencePlayer_SetPlayRate::PlayRate' has a wrong offset!");

struct MovieSceneSequencePlayer_SetTimeRange final
{
public:
	float                                         StartTime_0;
	float                                         Duration;
};
static_assert(alignof(MovieSceneSequencePlayer_SetTimeRange) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_SetTimeRange");
static_assert(sizeof(MovieSceneSequencePlayer_SetTimeRange) == 0x000008, "Wrong size on MovieSceneSequencePlayer_SetTimeRange");
static_assert(offsetof(MovieSceneSequencePlayer_SetTimeRange, StartTime_0) == 0x000000, "Member 'MovieSceneSequencePlayer_SetTimeRange::StartTime_0' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_SetTimeRange, Duration) == 0x000004, "Member 'MovieSceneSequencePlayer_SetTimeRange::Duration' has a wrong offset!");

struct MovieSceneSequencePlayer_SetWeight final
{
public:
	double                                        InWeight;
};
static_assert(alignof(MovieSceneSequencePlayer_SetWeight) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_SetWeight");
static_assert(sizeof(MovieSceneSequencePlayer_SetWeight) == 0x000008, "Wrong size on MovieSceneSequencePlayer_SetWeight");
static_assert(offsetof(MovieSceneSequencePlayer_SetWeight, InWeight) == 0x000000, "Member 'MovieSceneSequencePlayer_SetWeight::InWeight' has a wrong offset!");

struct MovieSceneSequencePlayer_GetCurrentTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetCurrentTime) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetCurrentTime");
static_assert(sizeof(MovieSceneSequencePlayer_GetCurrentTime) == 0x000010, "Wrong size on MovieSceneSequencePlayer_GetCurrentTime");
static_assert(offsetof(MovieSceneSequencePlayer_GetCurrentTime, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetCurrentTime::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetDuration final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetDuration) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetDuration");
static_assert(sizeof(MovieSceneSequencePlayer_GetDuration) == 0x000010, "Wrong size on MovieSceneSequencePlayer_GetDuration");
static_assert(offsetof(MovieSceneSequencePlayer_GetDuration, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetDuration::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetEndTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetEndTime) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetEndTime");
static_assert(sizeof(MovieSceneSequencePlayer_GetEndTime) == 0x000010, "Wrong size on MovieSceneSequencePlayer_GetEndTime");
static_assert(offsetof(MovieSceneSequencePlayer_GetEndTime, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetEndTime::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetFrameDuration final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetFrameDuration) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetFrameDuration");
static_assert(sizeof(MovieSceneSequencePlayer_GetFrameDuration) == 0x000004, "Wrong size on MovieSceneSequencePlayer_GetFrameDuration");
static_assert(offsetof(MovieSceneSequencePlayer_GetFrameDuration, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetFrameDuration::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetFrameRate final
{
public:
	struct FFrameRate                             ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetFrameRate) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetFrameRate");
static_assert(sizeof(MovieSceneSequencePlayer_GetFrameRate) == 0x000008, "Wrong size on MovieSceneSequencePlayer_GetFrameRate");
static_assert(offsetof(MovieSceneSequencePlayer_GetFrameRate, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetFrameRate::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetPlayRate final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetPlayRate) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetPlayRate");
static_assert(sizeof(MovieSceneSequencePlayer_GetPlayRate) == 0x000004, "Wrong size on MovieSceneSequencePlayer_GetPlayRate");
static_assert(offsetof(MovieSceneSequencePlayer_GetPlayRate, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetPlayRate::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetSequence) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_GetSequence");
static_assert(sizeof(MovieSceneSequencePlayer_GetSequence) == 0x000008, "Wrong size on MovieSceneSequencePlayer_GetSequence");
static_assert(offsetof(MovieSceneSequencePlayer_GetSequence, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetSequence::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetSequenceName final
{
public:
	bool                                          bAddClientInfo;
	uint8                                         Pad_1[0x7];
	class FString                                 ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetSequenceName) == 0x000008, "Wrong alignment on MovieSceneSequencePlayer_GetSequenceName");
static_assert(sizeof(MovieSceneSequencePlayer_GetSequenceName) == 0x000018, "Wrong size on MovieSceneSequencePlayer_GetSequenceName");
static_assert(offsetof(MovieSceneSequencePlayer_GetSequenceName, bAddClientInfo) == 0x000000, "Member 'MovieSceneSequencePlayer_GetSequenceName::bAddClientInfo' has a wrong offset!");
static_assert(offsetof(MovieSceneSequencePlayer_GetSequenceName, ReturnValue) == 0x000008, "Member 'MovieSceneSequencePlayer_GetSequenceName::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_GetStartTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_GetStartTime) == 0x000004, "Wrong alignment on MovieSceneSequencePlayer_GetStartTime");
static_assert(sizeof(MovieSceneSequencePlayer_GetStartTime) == 0x000010, "Wrong size on MovieSceneSequencePlayer_GetStartTime");
static_assert(offsetof(MovieSceneSequencePlayer_GetStartTime, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_GetStartTime::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_IsPaused final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_IsPaused) == 0x000001, "Wrong alignment on MovieSceneSequencePlayer_IsPaused");
static_assert(sizeof(MovieSceneSequencePlayer_IsPaused) == 0x000001, "Wrong size on MovieSceneSequencePlayer_IsPaused");
static_assert(offsetof(MovieSceneSequencePlayer_IsPaused, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_IsPaused::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_IsPlaying final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_IsPlaying) == 0x000001, "Wrong alignment on MovieSceneSequencePlayer_IsPlaying");
static_assert(sizeof(MovieSceneSequencePlayer_IsPlaying) == 0x000001, "Wrong size on MovieSceneSequencePlayer_IsPlaying");
static_assert(offsetof(MovieSceneSequencePlayer_IsPlaying, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_IsPlaying::ReturnValue' has a wrong offset!");

struct MovieSceneSequencePlayer_IsReversed final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneSequencePlayer_IsReversed) == 0x000001, "Wrong alignment on MovieSceneSequencePlayer_IsReversed");
static_assert(sizeof(MovieSceneSequencePlayer_IsReversed) == 0x000001, "Wrong size on MovieSceneSequencePlayer_IsReversed");
static_assert(offsetof(MovieSceneSequencePlayer_IsReversed, ReturnValue) == 0x000000, "Member 'MovieSceneSequencePlayer_IsReversed::ReturnValue' has a wrong offset!");

struct MovieSceneSubSection_SetSequence final
{
public:
	class UMovieSceneSequence*                    Sequence;
};
static_assert(alignof(MovieSceneSubSection_SetSequence) == 0x000008, "Wrong alignment on MovieSceneSubSection_SetSequence");
static_assert(sizeof(MovieSceneSubSection_SetSequence) == 0x000008, "Wrong size on MovieSceneSubSection_SetSequence");
static_assert(offsetof(MovieSceneSubSection_SetSequence, Sequence) == 0x000000, "Member 'MovieSceneSubSection_SetSequence::Sequence' has a wrong offset!");

struct MovieSceneSubSection_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;
};
static_assert(alignof(MovieSceneSubSection_GetSequence) == 0x000008, "Wrong alignment on MovieSceneSubSection_GetSequence");
static_assert(sizeof(MovieSceneSubSection_GetSequence) == 0x000008, "Wrong size on MovieSceneSubSection_GetSequence");
static_assert(offsetof(MovieSceneSubSection_GetSequence, ReturnValue) == 0x000000, "Member 'MovieSceneSubSection_GetSequence::ReturnValue' has a wrong offset!");

}
