#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK::Params
{

struct LevelSequenceActor_AddBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;
	class AActor*                                 Actor;
	bool                                          bAllowBindingsFromAsset;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(LevelSequenceActor_AddBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_AddBinding");
static_assert(sizeof(LevelSequenceActor_AddBinding) == 0x000028, "Wrong size on LevelSequenceActor_AddBinding");
static_assert(offsetof(LevelSequenceActor_AddBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_AddBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_AddBinding::Actor' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, bAllowBindingsFromAsset) == 0x000020, "Member 'LevelSequenceActor_AddBinding::bAllowBindingsFromAsset' has a wrong offset!");

struct LevelSequenceActor_AddBindingByTag final
{
public:
	class FName                                   BindingTag;
	uint8                                         Pad_4[0x4];
	class AActor*                                 Actor;
	bool                                          bAllowBindingsFromAsset;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(LevelSequenceActor_AddBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_AddBindingByTag");
static_assert(sizeof(LevelSequenceActor_AddBindingByTag) == 0x000018, "Wrong size on LevelSequenceActor_AddBindingByTag");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, BindingTag) == 0x000000, "Member 'LevelSequenceActor_AddBindingByTag::BindingTag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, Actor) == 0x000008, "Member 'LevelSequenceActor_AddBindingByTag::Actor' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, bAllowBindingsFromAsset) == 0x000010, "Member 'LevelSequenceActor_AddBindingByTag::bAllowBindingsFromAsset' has a wrong offset!");

struct LevelSequenceActor_RemoveBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;
	class AActor*                                 Actor;
};
static_assert(alignof(LevelSequenceActor_RemoveBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_RemoveBinding");
static_assert(sizeof(LevelSequenceActor_RemoveBinding) == 0x000020, "Wrong size on LevelSequenceActor_RemoveBinding");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_RemoveBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_RemoveBinding::Actor' has a wrong offset!");

struct LevelSequenceActor_RemoveBindingByTag final
{
public:
	class FName                                   tag;
	uint8                                         Pad_4[0x4];
	class AActor*                                 Actor;
};
static_assert(alignof(LevelSequenceActor_RemoveBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_RemoveBindingByTag");
static_assert(sizeof(LevelSequenceActor_RemoveBindingByTag) == 0x000010, "Wrong size on LevelSequenceActor_RemoveBindingByTag");
static_assert(offsetof(LevelSequenceActor_RemoveBindingByTag, tag) == 0x000000, "Member 'LevelSequenceActor_RemoveBindingByTag::tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_RemoveBindingByTag, Actor) == 0x000008, "Member 'LevelSequenceActor_RemoveBindingByTag::Actor' has a wrong offset!");

struct LevelSequenceActor_ResetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;
};
static_assert(alignof(LevelSequenceActor_ResetBinding) == 0x000004, "Wrong alignment on LevelSequenceActor_ResetBinding");
static_assert(sizeof(LevelSequenceActor_ResetBinding) == 0x000018, "Wrong size on LevelSequenceActor_ResetBinding");
static_assert(offsetof(LevelSequenceActor_ResetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_ResetBinding::Binding' has a wrong offset!");

struct LevelSequenceActor_SetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;
	TArray<class AActor*>                         Actors;
	bool                                          bAllowBindingsFromAsset;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(LevelSequenceActor_SetBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_SetBinding");
static_assert(sizeof(LevelSequenceActor_SetBinding) == 0x000030, "Wrong size on LevelSequenceActor_SetBinding");
static_assert(offsetof(LevelSequenceActor_SetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_SetBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, Actors) == 0x000018, "Member 'LevelSequenceActor_SetBinding::Actors' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, bAllowBindingsFromAsset) == 0x000028, "Member 'LevelSequenceActor_SetBinding::bAllowBindingsFromAsset' has a wrong offset!");

struct LevelSequenceActor_SetBindingByTag final
{
public:
	class FName                                   BindingTag;
	uint8                                         Pad_4[0x4];
	TArray<class AActor*>                         Actors;
	bool                                          bAllowBindingsFromAsset;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LevelSequenceActor_SetBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_SetBindingByTag");
static_assert(sizeof(LevelSequenceActor_SetBindingByTag) == 0x000020, "Wrong size on LevelSequenceActor_SetBindingByTag");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, BindingTag) == 0x000000, "Member 'LevelSequenceActor_SetBindingByTag::BindingTag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, Actors) == 0x000008, "Member 'LevelSequenceActor_SetBindingByTag::Actors' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, bAllowBindingsFromAsset) == 0x000018, "Member 'LevelSequenceActor_SetBindingByTag::bAllowBindingsFromAsset' has a wrong offset!");

struct LevelSequenceActor_SetReplicatePlayback final
{
public:
	bool                                          ReplicatePlayback;
};
static_assert(alignof(LevelSequenceActor_SetReplicatePlayback) == 0x000001, "Wrong alignment on LevelSequenceActor_SetReplicatePlayback");
static_assert(sizeof(LevelSequenceActor_SetReplicatePlayback) == 0x000001, "Wrong size on LevelSequenceActor_SetReplicatePlayback");
static_assert(offsetof(LevelSequenceActor_SetReplicatePlayback, ReplicatePlayback) == 0x000000, "Member 'LevelSequenceActor_SetReplicatePlayback::ReplicatePlayback' has a wrong offset!");

struct LevelSequenceActor_SetSequence final
{
public:
	class ULevelSequence*                         InSequence;
};
static_assert(alignof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_SetSequence");
static_assert(sizeof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong size on LevelSequenceActor_SetSequence");
static_assert(offsetof(LevelSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'LevelSequenceActor_SetSequence::InSequence' has a wrong offset!");

struct LevelSequenceActor_FindNamedBinding final
{
public:
	class FName                                   tag;
	struct FMovieSceneObjectBindingID             ReturnValue;
};
static_assert(alignof(LevelSequenceActor_FindNamedBinding) == 0x000004, "Wrong alignment on LevelSequenceActor_FindNamedBinding");
static_assert(sizeof(LevelSequenceActor_FindNamedBinding) == 0x00001C, "Wrong size on LevelSequenceActor_FindNamedBinding");
static_assert(offsetof(LevelSequenceActor_FindNamedBinding, tag) == 0x000000, "Member 'LevelSequenceActor_FindNamedBinding::tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_FindNamedBinding, ReturnValue) == 0x000004, "Member 'LevelSequenceActor_FindNamedBinding::ReturnValue' has a wrong offset!");

struct LevelSequenceActor_FindNamedBindings final
{
public:
	class FName                                   tag;
	uint8                                         Pad_4[0x4];
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;
};
static_assert(alignof(LevelSequenceActor_FindNamedBindings) == 0x000008, "Wrong alignment on LevelSequenceActor_FindNamedBindings");
static_assert(sizeof(LevelSequenceActor_FindNamedBindings) == 0x000018, "Wrong size on LevelSequenceActor_FindNamedBindings");
static_assert(offsetof(LevelSequenceActor_FindNamedBindings, tag) == 0x000000, "Member 'LevelSequenceActor_FindNamedBindings::tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_FindNamedBindings, ReturnValue) == 0x000008, "Member 'LevelSequenceActor_FindNamedBindings::ReturnValue' has a wrong offset!");

struct LevelSequenceActor_GetSequence final
{
public:
	class ULevelSequence*                         ReturnValue;
};
static_assert(alignof(LevelSequenceActor_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_GetSequence");
static_assert(sizeof(LevelSequenceActor_GetSequence) == 0x000008, "Wrong size on LevelSequenceActor_GetSequence");
static_assert(offsetof(LevelSequenceActor_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_GetSequence::ReturnValue' has a wrong offset!");

struct LevelSequenceActor_GetSequencePlayer final
{
public:
	class ULevelSequencePlayer*                   ReturnValue;
};
static_assert(alignof(LevelSequenceActor_GetSequencePlayer) == 0x000008, "Wrong alignment on LevelSequenceActor_GetSequencePlayer");
static_assert(sizeof(LevelSequenceActor_GetSequencePlayer) == 0x000008, "Wrong size on LevelSequenceActor_GetSequencePlayer");
static_assert(offsetof(LevelSequenceActor_GetSequencePlayer, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_GetSequencePlayer::ReturnValue' has a wrong offset!");

struct LevelSequenceActor_LoadSequence final
{
public:
	class ULevelSequence*                         ReturnValue;
};
static_assert(alignof(LevelSequenceActor_LoadSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_LoadSequence");
static_assert(sizeof(LevelSequenceActor_LoadSequence) == 0x000008, "Wrong size on LevelSequenceActor_LoadSequence");
static_assert(offsetof(LevelSequenceActor_LoadSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_LoadSequence::ReturnValue' has a wrong offset!");

struct LevelSequence_CopyMetaData final
{
public:
	class UObject*                                InMetaData;
	class UObject*                                ReturnValue;
};
static_assert(alignof(LevelSequence_CopyMetaData) == 0x000008, "Wrong alignment on LevelSequence_CopyMetaData");
static_assert(sizeof(LevelSequence_CopyMetaData) == 0x000010, "Wrong size on LevelSequence_CopyMetaData");
static_assert(offsetof(LevelSequence_CopyMetaData, InMetaData) == 0x000000, "Member 'LevelSequence_CopyMetaData::InMetaData' has a wrong offset!");
static_assert(offsetof(LevelSequence_CopyMetaData, ReturnValue) == 0x000008, "Member 'LevelSequence_CopyMetaData::ReturnValue' has a wrong offset!");

struct LevelSequence_FindOrAddMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(LevelSequence_FindOrAddMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_FindOrAddMetaDataByClass");
static_assert(sizeof(LevelSequence_FindOrAddMetaDataByClass) == 0x000010, "Wrong size on LevelSequence_FindOrAddMetaDataByClass");
static_assert(offsetof(LevelSequence_FindOrAddMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_FindOrAddMetaDataByClass::InClass' has a wrong offset!");
static_assert(offsetof(LevelSequence_FindOrAddMetaDataByClass, ReturnValue) == 0x000008, "Member 'LevelSequence_FindOrAddMetaDataByClass::ReturnValue' has a wrong offset!");

struct LevelSequence_RemoveMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;
};
static_assert(alignof(LevelSequence_RemoveMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_RemoveMetaDataByClass");
static_assert(sizeof(LevelSequence_RemoveMetaDataByClass) == 0x000008, "Wrong size on LevelSequence_RemoveMetaDataByClass");
static_assert(offsetof(LevelSequence_RemoveMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_RemoveMetaDataByClass::InClass' has a wrong offset!");

struct LevelSequence_FindMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(LevelSequence_FindMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_FindMetaDataByClass");
static_assert(sizeof(LevelSequence_FindMetaDataByClass) == 0x000010, "Wrong size on LevelSequence_FindMetaDataByClass");
static_assert(offsetof(LevelSequence_FindMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_FindMetaDataByClass::InClass' has a wrong offset!");
static_assert(offsetof(LevelSequence_FindMetaDataByClass, ReturnValue) == 0x000008, "Member 'LevelSequence_FindMetaDataByClass::ReturnValue' has a wrong offset!");

struct LevelSequenceBurnInOptions_SetBurnIn final
{
public:
	struct FSoftClassPath                         InBurnInClass;
};
static_assert(alignof(LevelSequenceBurnInOptions_SetBurnIn) == 0x000008, "Wrong alignment on LevelSequenceBurnInOptions_SetBurnIn");
static_assert(sizeof(LevelSequenceBurnInOptions_SetBurnIn) == 0x000018, "Wrong size on LevelSequenceBurnInOptions_SetBurnIn");
static_assert(offsetof(LevelSequenceBurnInOptions_SetBurnIn, InBurnInClass) == 0x000000, "Member 'LevelSequenceBurnInOptions_SetBurnIn::InBurnInClass' has a wrong offset!");

struct LevelSequenceBurnIn_SetSettings final
{
public:
	class UObject*                                InSettings;
};
static_assert(alignof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_SetSettings");
static_assert(sizeof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong size on LevelSequenceBurnIn_SetSettings");
static_assert(offsetof(LevelSequenceBurnIn_SetSettings, InSettings) == 0x000000, "Member 'LevelSequenceBurnIn_SetSettings::InSettings' has a wrong offset!");

struct LevelSequenceBurnIn_GetSettingsClass final
{
public:
	TSubclassOf<class ULevelSequenceBurnInInitSettings> ReturnValue;
};
static_assert(alignof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_GetSettingsClass");
static_assert(sizeof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong size on LevelSequenceBurnIn_GetSettingsClass");
static_assert(offsetof(LevelSequenceBurnIn_GetSettingsClass, ReturnValue) == 0x000000, "Member 'LevelSequenceBurnIn_GetSettingsClass::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetBoundActor final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;
	class AActor*                                 ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetBoundActor) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundActor");
static_assert(sizeof(LevelSequenceDirector_GetBoundActor) == 0x000020, "Wrong size on LevelSequenceDirector_GetBoundActor");
static_assert(offsetof(LevelSequenceDirector_GetBoundActor, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundActor::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundActor, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundActor::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetBoundActors final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;
	TArray<class AActor*>                         ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetBoundActors) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundActors");
static_assert(sizeof(LevelSequenceDirector_GetBoundActors) == 0x000028, "Wrong size on LevelSequenceDirector_GetBoundActors");
static_assert(offsetof(LevelSequenceDirector_GetBoundActors, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundActors::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundActors, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundActors::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetBoundObject final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;
	class UObject*                                ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetBoundObject) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundObject");
static_assert(sizeof(LevelSequenceDirector_GetBoundObject) == 0x000020, "Wrong size on LevelSequenceDirector_GetBoundObject");
static_assert(offsetof(LevelSequenceDirector_GetBoundObject, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundObject::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundObject, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundObject::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetBoundObjects final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;
	TArray<class UObject*>                        ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetBoundObjects) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundObjects");
static_assert(sizeof(LevelSequenceDirector_GetBoundObjects) == 0x000028, "Wrong size on LevelSequenceDirector_GetBoundObjects");
static_assert(offsetof(LevelSequenceDirector_GetBoundObjects, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundObjects::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundObjects, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundObjects::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetSequence");
static_assert(sizeof(LevelSequenceDirector_GetSequence) == 0x000008, "Wrong size on LevelSequenceDirector_GetSequence");
static_assert(offsetof(LevelSequenceDirector_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceDirector_GetSequence::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetCurrentTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetCurrentTime) == 0x000004, "Wrong alignment on LevelSequenceDirector_GetCurrentTime");
static_assert(sizeof(LevelSequenceDirector_GetCurrentTime) == 0x000010, "Wrong size on LevelSequenceDirector_GetCurrentTime");
static_assert(offsetof(LevelSequenceDirector_GetCurrentTime, ReturnValue) == 0x000000, "Member 'LevelSequenceDirector_GetCurrentTime::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetMasterSequenceTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetMasterSequenceTime) == 0x000004, "Wrong alignment on LevelSequenceDirector_GetMasterSequenceTime");
static_assert(sizeof(LevelSequenceDirector_GetMasterSequenceTime) == 0x000010, "Wrong size on LevelSequenceDirector_GetMasterSequenceTime");
static_assert(offsetof(LevelSequenceDirector_GetMasterSequenceTime, ReturnValue) == 0x000000, "Member 'LevelSequenceDirector_GetMasterSequenceTime::ReturnValue' has a wrong offset!");

struct LevelSequenceDirector_GetRootSequenceTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;
};
static_assert(alignof(LevelSequenceDirector_GetRootSequenceTime) == 0x000004, "Wrong alignment on LevelSequenceDirector_GetRootSequenceTime");
static_assert(sizeof(LevelSequenceDirector_GetRootSequenceTime) == 0x000010, "Wrong size on LevelSequenceDirector_GetRootSequenceTime");
static_assert(offsetof(LevelSequenceDirector_GetRootSequenceTime, ReturnValue) == 0x000000, "Member 'LevelSequenceDirector_GetRootSequenceTime::ReturnValue' has a wrong offset!");

struct LevelSequencePlayer_CreateLevelSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;
	class ULevelSequence*                         LevelSequence;
	struct FMovieSceneSequencePlaybackSettings    Settings;
	class ALevelSequenceActor*                    OutActor;
	class ULevelSequencePlayer*                   ReturnValue;
};
static_assert(alignof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000008, "Wrong alignment on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(sizeof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000040, "Wrong size on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, WorldContextObject) == 0x000000, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, LevelSequence) == 0x000008, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::LevelSequence' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, Settings) == 0x000010, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, OutActor) == 0x000030, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::OutActor' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, ReturnValue) == 0x000038, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::ReturnValue' has a wrong offset!");

struct LevelSequencePlayer_GetActiveCameraComponent final
{
public:
	class UCameraComponent*                       ReturnValue;
};
static_assert(alignof(LevelSequencePlayer_GetActiveCameraComponent) == 0x000008, "Wrong alignment on LevelSequencePlayer_GetActiveCameraComponent");
static_assert(sizeof(LevelSequencePlayer_GetActiveCameraComponent) == 0x000008, "Wrong size on LevelSequencePlayer_GetActiveCameraComponent");
static_assert(offsetof(LevelSequencePlayer_GetActiveCameraComponent, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_GetActiveCameraComponent::ReturnValue' has a wrong offset!");

struct LevelSequenceMediaController_SynchronizeToServer final
{
public:
	float                                         DesyncThresholdSeconds;
};
static_assert(alignof(LevelSequenceMediaController_SynchronizeToServer) == 0x000004, "Wrong alignment on LevelSequenceMediaController_SynchronizeToServer");
static_assert(sizeof(LevelSequenceMediaController_SynchronizeToServer) == 0x000004, "Wrong size on LevelSequenceMediaController_SynchronizeToServer");
static_assert(offsetof(LevelSequenceMediaController_SynchronizeToServer, DesyncThresholdSeconds) == 0x000000, "Member 'LevelSequenceMediaController_SynchronizeToServer::DesyncThresholdSeconds' has a wrong offset!");

struct LevelSequenceMediaController_GetMediaComponent final
{
public:
	class UMediaComponent*                        ReturnValue;
};
static_assert(alignof(LevelSequenceMediaController_GetMediaComponent) == 0x000008, "Wrong alignment on LevelSequenceMediaController_GetMediaComponent");
static_assert(sizeof(LevelSequenceMediaController_GetMediaComponent) == 0x000008, "Wrong size on LevelSequenceMediaController_GetMediaComponent");
static_assert(offsetof(LevelSequenceMediaController_GetMediaComponent, ReturnValue) == 0x000000, "Member 'LevelSequenceMediaController_GetMediaComponent::ReturnValue' has a wrong offset!");

struct LevelSequenceMediaController_GetSequence final
{
public:
	class ALevelSequenceActor*                    ReturnValue;
};
static_assert(alignof(LevelSequenceMediaController_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceMediaController_GetSequence");
static_assert(sizeof(LevelSequenceMediaController_GetSequence) == 0x000008, "Wrong size on LevelSequenceMediaController_GetSequence");
static_assert(offsetof(LevelSequenceMediaController_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceMediaController_GetSequence::ReturnValue' has a wrong offset!");

}
