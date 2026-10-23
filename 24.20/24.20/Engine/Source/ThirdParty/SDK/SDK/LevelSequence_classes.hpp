#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "LevelSequence_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class ALevelSequenceActor : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;
	class ULevelSequencePlayer*                   SequencePlayer;
	class ULevelSequence*                         LevelSequenceAsset;
	struct FLevelSequenceCameraSettings           CameraSettings;
	uint8                                         Pad_2CA[0x6];
	class ULevelSequenceBurnInOptions*            BurnInOptions;
	class UMovieSceneBindingOverrides*            BindingOverrides;
	uint8                                         bAutoPlay : 1;
	uint8                                         bOverrideInstanceData : 1;
	uint8                                         bReplicatePlayback : 1;
	uint8                                         Pad_2E1[0x7];
	class UObject*                                DefaultInstanceData;
	class ULevelSequenceBurnIn*                   BurnInInstance;
	bool                                          bShowBurnin;
	uint8                                         Pad_2F9[0x7];

public:
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void HideBurnin();
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void RemoveBindingByTag(class FName tag, class AActor* Actor);
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void ResetBindings();
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBindingByTag(class FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetSequence(class ULevelSequence* InSequence);
	void ShowBurnin();

	struct FMovieSceneObjectBindingID FindNamedBinding(class FName tag) const;
	const TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName tag) const;
	class ULevelSequence* GetSequence() const;
	class ULevelSequencePlayer* GetSequencePlayer() const;
	class ULevelSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceActor">();
	}
	static class ALevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceActor>();
	}
};
static_assert(alignof(ALevelSequenceActor) == 0x000008, "Wrong alignment on ALevelSequenceActor");
static_assert(sizeof(ALevelSequenceActor) == 0x000300, "Wrong size on ALevelSequenceActor");
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x000298, "Member 'ALevelSequenceActor::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x0002B8, "Member 'ALevelSequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, LevelSequenceAsset) == 0x0002C0, "Member 'ALevelSequenceActor::LevelSequenceAsset' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x0002C8, "Member 'ALevelSequenceActor::CameraSettings' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x0002D0, "Member 'ALevelSequenceActor::BurnInOptions' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x0002D8, "Member 'ALevelSequenceActor::BindingOverrides' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x0002E8, "Member 'ALevelSequenceActor::DefaultInstanceData' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x0002F0, "Member 'ALevelSequenceActor::BurnInInstance' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, bShowBurnin) == 0x0002F8, "Member 'ALevelSequenceActor::bShowBurnin' has a wrong offset!");

class AReplicatedLevelSequenceActor final : public ALevelSequenceActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicatedLevelSequenceActor">();
	}
	static class AReplicatedLevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicatedLevelSequenceActor>();
	}
};
static_assert(alignof(AReplicatedLevelSequenceActor) == 0x000008, "Wrong alignment on AReplicatedLevelSequenceActor");
static_assert(sizeof(AReplicatedLevelSequenceActor) == 0x000300, "Wrong size on AReplicatedLevelSequenceActor");

class UDefaultLevelSequenceInstanceData final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class AActor*                                 TransformOriginActor;
	uint8                                         Pad_38[0x8];
	struct FTransform                             TransformOrigin;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultLevelSequenceInstanceData">();
	}
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultLevelSequenceInstanceData>();
	}
};
static_assert(alignof(UDefaultLevelSequenceInstanceData) == 0x000010, "Wrong alignment on UDefaultLevelSequenceInstanceData");
static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x0000A0, "Wrong size on UDefaultLevelSequenceInstanceData");
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x000030, "Member 'UDefaultLevelSequenceInstanceData::TransformOriginActor' has a wrong offset!");
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x000040, "Member 'UDefaultLevelSequenceInstanceData::TransformOrigin' has a wrong offset!");

class ILevelSequenceMetaData final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMetaData">();
	}
	static class ILevelSequenceMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILevelSequenceMetaData>();
	}
};
static_assert(alignof(ILevelSequenceMetaData) == 0x000008, "Wrong alignment on ILevelSequenceMetaData");
static_assert(sizeof(ILevelSequenceMetaData) == 0x000028, "Wrong size on ILevelSequenceMetaData");

class UAnimSequenceLevelSequenceLink final : public UAssetUserData
{
public:
	struct FGuid                                  SkelTrackGuid;
	struct FSoftObjectPath                        PathToLevelSequence;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSequenceLevelSequenceLink">();
	}
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequenceLevelSequenceLink>();
	}
};
static_assert(alignof(UAnimSequenceLevelSequenceLink) == 0x000008, "Wrong alignment on UAnimSequenceLevelSequenceLink");
static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x000050, "Wrong size on UAnimSequenceLevelSequenceLink");
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x000028, "Member 'UAnimSequenceLevelSequenceLink::SkelTrackGuid' has a wrong offset!");
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x000038, "Member 'UAnimSequenceLevelSequenceLink::PathToLevelSequence' has a wrong offset!");

class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                         Pad_68[0x8];
	class UMovieScene*                            MovieScene;
	struct FLevelSequenceObjectReferenceMap       ObjectReferences;
	struct FLevelSequenceBindingReferences        BindingReferences;
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;
	TSubclassOf<class UObject>                    DirectorClass;
	TArray<class UAssetUserData*>                 AssetUserData;

public:
	class UObject* CopyMetaData(class UObject* InMetaData);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);

	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequence">();
	}
	static class ULevelSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequence>();
	}
};
static_assert(alignof(ULevelSequence) == 0x000008, "Wrong alignment on ULevelSequence");
static_assert(sizeof(ULevelSequence) == 0x000220, "Wrong size on ULevelSequence");
static_assert(offsetof(ULevelSequence, MovieScene) == 0x000070, "Member 'ULevelSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(ULevelSequence, ObjectReferences) == 0x000078, "Member 'ULevelSequence::ObjectReferences' has a wrong offset!");
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x0000C8, "Member 'ULevelSequence::BindingReferences' has a wrong offset!");
static_assert(offsetof(ULevelSequence, PossessedObjects) == 0x0001B8, "Member 'ULevelSequence::PossessedObjects' has a wrong offset!");
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x000208, "Member 'ULevelSequence::DirectorClass' has a wrong offset!");
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x000210, "Member 'ULevelSequence::AssetUserData' has a wrong offset!");

class ULevelSequenceBurnInInitSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInInitSettings">();
	}
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInInitSettings>();
	}
};
static_assert(alignof(ULevelSequenceBurnInInitSettings) == 0x000008, "Wrong alignment on ULevelSequenceBurnInInitSettings");
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x000028, "Wrong size on ULevelSequenceBurnInInitSettings");

class ULevelSequenceBurnInOptions final : public UObject
{
public:
	bool                                          bUseBurnIn;
	uint8                                         Pad_29[0x7];
	struct FSoftClassPath                         BurnInClass;
	class ULevelSequenceBurnInInitSettings*       Settings;

public:
	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInOptions">();
	}
	static class ULevelSequenceBurnInOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInOptions>();
	}
};
static_assert(alignof(ULevelSequenceBurnInOptions) == 0x000008, "Wrong alignment on ULevelSequenceBurnInOptions");
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x000050, "Wrong size on ULevelSequenceBurnInOptions");
static_assert(offsetof(ULevelSequenceBurnInOptions, bUseBurnIn) == 0x000028, "Member 'ULevelSequenceBurnInOptions::bUseBurnIn' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x000030, "Member 'ULevelSequenceBurnInOptions::BurnInClass' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x000048, "Member 'ULevelSequenceBurnInOptions::Settings' has a wrong offset!");

class ULevelSequenceAnimSequenceLink final : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceAnimSequenceLink">();
	}
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceAnimSequenceLink>();
	}
};
static_assert(alignof(ULevelSequenceAnimSequenceLink) == 0x000008, "Wrong alignment on ULevelSequenceAnimSequenceLink");
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x000038, "Wrong size on ULevelSequenceAnimSequenceLink");
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x000028, "Member 'ULevelSequenceAnimSequenceLink::AnimSequenceLinks' has a wrong offset!");

class ULevelSequenceBurnIn final : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot           FrameInformation;
	class ALevelSequenceActor*                    LevelSequenceActor;

public:
	void SetSettings(class UObject* InSettings);

	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnIn">();
	}
	static class ULevelSequenceBurnIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnIn>();
	}
};
static_assert(alignof(ULevelSequenceBurnIn) == 0x000008, "Wrong alignment on ULevelSequenceBurnIn");
static_assert(sizeof(ULevelSequenceBurnIn) == 0x000338, "Wrong size on ULevelSequenceBurnIn");
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x000268, "Member 'ULevelSequenceBurnIn::FrameInformation' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x000330, "Member 'ULevelSequenceBurnIn::LevelSequenceActor' has a wrong offset!");

class ULevelSequenceDirector final : public UObject
{
public:
	class ULevelSequencePlayer*                   Player;
	int32                                         SubSequenceID;
	int32                                         MovieScenePlayerIndex;

public:
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UMovieSceneSequence* GetSequence();
	void OnCreated();

	struct FQualifiedFrameTime GetCurrentTime() const;
	struct FQualifiedFrameTime GetMasterSequenceTime() const;
	struct FQualifiedFrameTime GetRootSequenceTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceDirector">();
	}
	static class ULevelSequenceDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceDirector>();
	}
};
static_assert(alignof(ULevelSequenceDirector) == 0x000008, "Wrong alignment on ULevelSequenceDirector");
static_assert(sizeof(ULevelSequenceDirector) == 0x000038, "Wrong size on ULevelSequenceDirector");
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x000028, "Member 'ULevelSequenceDirector::Player' has a wrong offset!");
static_assert(offsetof(ULevelSequenceDirector, SubSequenceID) == 0x000030, "Member 'ULevelSequenceDirector::SubSequenceID' has a wrong offset!");
static_assert(offsetof(ULevelSequenceDirector, MovieScenePlayerIndex) == 0x000034, "Member 'ULevelSequenceDirector::MovieScenePlayerIndex' has a wrong offset!");

class ULegacyLevelSequenceDirectorBlueprint final : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyLevelSequenceDirectorBlueprint">();
	}
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyLevelSequenceDirectorBlueprint>();
	}
};
static_assert(alignof(ULegacyLevelSequenceDirectorBlueprint) == 0x000008, "Wrong alignment on ULegacyLevelSequenceDirectorBlueprint");
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x0000A8, "Wrong size on ULegacyLevelSequenceDirectorBlueprint");

class ULevelSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	TMulticastInlineDelegate<void(class UCameraComponent* CameraComponent)> OnCameraCut;
	uint8                                         Pad_4C0[0x118];

public:
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);

	class UCameraComponent* GetActiveCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequencePlayer">();
	}
	static class ULevelSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequencePlayer>();
	}
};
static_assert(alignof(ULevelSequencePlayer) == 0x000008, "Wrong alignment on ULevelSequencePlayer");
static_assert(sizeof(ULevelSequencePlayer) == 0x0005D8, "Wrong size on ULevelSequencePlayer");
static_assert(offsetof(ULevelSequencePlayer, OnCameraCut) == 0x0004B0, "Member 'ULevelSequencePlayer::OnCameraCut' has a wrong offset!");

class ULevelSequenceProjectSettings final : public UDeveloperSettings
{
public:
	bool                                          bDefaultLockEngineToDisplayRate;
	uint8                                         Pad_31[0x7];
	class FString                                 DefaultDisplayRate;
	class FString                                 DefaultTickResolution;
	EUpdateClockSource                            DefaultClockSource;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceProjectSettings">();
	}
	static class ULevelSequenceProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceProjectSettings>();
	}
};
static_assert(alignof(ULevelSequenceProjectSettings) == 0x000008, "Wrong alignment on ULevelSequenceProjectSettings");
static_assert(sizeof(ULevelSequenceProjectSettings) == 0x000060, "Wrong size on ULevelSequenceProjectSettings");
static_assert(offsetof(ULevelSequenceProjectSettings, bDefaultLockEngineToDisplayRate) == 0x000030, "Member 'ULevelSequenceProjectSettings::bDefaultLockEngineToDisplayRate' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultDisplayRate) == 0x000038, "Member 'ULevelSequenceProjectSettings::DefaultDisplayRate' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultTickResolution) == 0x000048, "Member 'ULevelSequenceProjectSettings::DefaultTickResolution' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultClockSource) == 0x000058, "Member 'ULevelSequenceProjectSettings::DefaultClockSource' has a wrong offset!");

class ALevelSequenceMediaController final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class ALevelSequenceActor*                    Sequence;
	class UMediaComponent*                        MediaComponent;
	float                                         ServerStartTimeSeconds;
	uint8                                         Pad_2A4[0xC];

public:
	void OnRep_ServerStartTimeSeconds();
	void Play();
	void SynchronizeToServer(float DesyncThresholdSeconds);

	class UMediaComponent* GetMediaComponent() const;
	class ALevelSequenceActor* GetSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMediaController">();
	}
	static class ALevelSequenceMediaController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceMediaController>();
	}
};
static_assert(alignof(ALevelSequenceMediaController) == 0x000008, "Wrong alignment on ALevelSequenceMediaController");
static_assert(sizeof(ALevelSequenceMediaController) == 0x0002B0, "Wrong size on ALevelSequenceMediaController");
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x000290, "Member 'ALevelSequenceMediaController::Sequence' has a wrong offset!");
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x000298, "Member 'ALevelSequenceMediaController::MediaComponent' has a wrong offset!");
static_assert(offsetof(ALevelSequenceMediaController, ServerStartTimeSeconds) == 0x0002A0, "Member 'ALevelSequenceMediaController::ServerStartTimeSeconds' has a wrong offset!");

}
