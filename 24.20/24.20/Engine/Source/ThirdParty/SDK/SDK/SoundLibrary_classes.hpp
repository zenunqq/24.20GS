#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioGameplay_structs.hpp"
#include "AudioGameplay_classes.hpp"
#include "SoundLibrary_structs.hpp"
#include "GameFeatures_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class USoundLibraryContext : public UObject
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	struct FGameplayTag                           BaseEventName;
	bool                                          bForwardToActorOwner;
	bool                                          bForwardToAttachedActors;
	bool                                          bAutoResetContext;
	uint8                                         Pad_37[0x1];
	struct FGameplayTagContainer                  PlaybackTags;

public:
	void OnAddedToActor(const class AActor* InActor);
	void OnRemovedFromActor(const class AActor* InActor);
	bool PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults);

	bool CreateEventName(struct FGameplayTag& OutEventName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryContext">();
	}
	static class USoundLibraryContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryContext>();
	}
};
static_assert(alignof(USoundLibraryContext) == 0x000008, "Wrong alignment on USoundLibraryContext");
static_assert(sizeof(USoundLibraryContext) == 0x000058, "Wrong size on USoundLibraryContext");
static_assert(offsetof(USoundLibraryContext, Actor) == 0x000028, "Member 'USoundLibraryContext::Actor' has a wrong offset!");
static_assert(offsetof(USoundLibraryContext, BaseEventName) == 0x000030, "Member 'USoundLibraryContext::BaseEventName' has a wrong offset!");
static_assert(offsetof(USoundLibraryContext, bForwardToActorOwner) == 0x000034, "Member 'USoundLibraryContext::bForwardToActorOwner' has a wrong offset!");
static_assert(offsetof(USoundLibraryContext, bForwardToAttachedActors) == 0x000035, "Member 'USoundLibraryContext::bForwardToAttachedActors' has a wrong offset!");
static_assert(offsetof(USoundLibraryContext, bAutoResetContext) == 0x000036, "Member 'USoundLibraryContext::bAutoResetContext' has a wrong offset!");
static_assert(offsetof(USoundLibraryContext, PlaybackTags) == 0x000038, "Member 'USoundLibraryContext::PlaybackTags' has a wrong offset!");

class USoundLibraryAnimContext : public USoundLibraryContext
{
public:
	struct FSoundLibraryAnimContextSettings       AnimSettings;
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;
	TWeakObjectPtr<class USkeletalMeshComponent>  MeshComponent;
	bool                                          bSupportsNotifyEnd;
	uint8                                         Pad_8D[0x3];
	float                                         AnimRate;
	uint8                                         Pad_94[0x4];

public:
	void ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, const struct FSoundLibraryAnimContextSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryAnimContext">();
	}
	static class USoundLibraryAnimContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryAnimContext>();
	}
};
static_assert(alignof(USoundLibraryAnimContext) == 0x000008, "Wrong alignment on USoundLibraryAnimContext");
static_assert(sizeof(USoundLibraryAnimContext) == 0x000098, "Wrong size on USoundLibraryAnimContext");
static_assert(offsetof(USoundLibraryAnimContext, AnimSettings) == 0x000058, "Member 'USoundLibraryAnimContext::AnimSettings' has a wrong offset!");
static_assert(offsetof(USoundLibraryAnimContext, Animation) == 0x00007C, "Member 'USoundLibraryAnimContext::Animation' has a wrong offset!");
static_assert(offsetof(USoundLibraryAnimContext, MeshComponent) == 0x000084, "Member 'USoundLibraryAnimContext::MeshComponent' has a wrong offset!");
static_assert(offsetof(USoundLibraryAnimContext, bSupportsNotifyEnd) == 0x00008C, "Member 'USoundLibraryAnimContext::bSupportsNotifyEnd' has a wrong offset!");
static_assert(offsetof(USoundLibraryAnimContext, AnimRate) == 0x000090, "Member 'USoundLibraryAnimContext::AnimRate' has a wrong offset!");

class USoundLibraryAnimNotifyHelper final : public UObject
{
public:
	TArray<TWeakObjectPtr<class UAudioComponent>> PlayingComps;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryAnimNotifyHelper">();
	}
	static class USoundLibraryAnimNotifyHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryAnimNotifyHelper>();
	}
};
static_assert(alignof(USoundLibraryAnimNotifyHelper) == 0x000008, "Wrong alignment on USoundLibraryAnimNotifyHelper");
static_assert(sizeof(USoundLibraryAnimNotifyHelper) == 0x000038, "Wrong size on USoundLibraryAnimNotifyHelper");
static_assert(offsetof(USoundLibraryAnimNotifyHelper, PlayingComps) == 0x000028, "Member 'USoundLibraryAnimNotifyHelper::PlayingComps' has a wrong offset!");

class UAnimNotify_SoundLibrary final : public UAnimNotify
{
public:
	class USoundLibraryContext*                   SoundContext;
	class USoundLibraryAnimNotifyHelper*          NotifyHelper;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_SoundLibrary">();
	}
	static class UAnimNotify_SoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_SoundLibrary>();
	}
};
static_assert(alignof(UAnimNotify_SoundLibrary) == 0x000008, "Wrong alignment on UAnimNotify_SoundLibrary");
static_assert(sizeof(UAnimNotify_SoundLibrary) == 0x000048, "Wrong size on UAnimNotify_SoundLibrary");
static_assert(offsetof(UAnimNotify_SoundLibrary, SoundContext) == 0x000038, "Member 'UAnimNotify_SoundLibrary::SoundContext' has a wrong offset!");
static_assert(offsetof(UAnimNotify_SoundLibrary, NotifyHelper) == 0x000040, "Member 'UAnimNotify_SoundLibrary::NotifyHelper' has a wrong offset!");

class UAnimNotifyState_SoundLibrary final : public UAnimNotifyState
{
public:
	class USoundLibraryContext*                   SoundContext;
	class USoundLibraryAnimNotifyHelper*          NotifyHelper;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_SoundLibrary">();
	}
	static class UAnimNotifyState_SoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SoundLibrary>();
	}
};
static_assert(alignof(UAnimNotifyState_SoundLibrary) == 0x000008, "Wrong alignment on UAnimNotifyState_SoundLibrary");
static_assert(sizeof(UAnimNotifyState_SoundLibrary) == 0x000040, "Wrong size on UAnimNotifyState_SoundLibrary");
static_assert(offsetof(UAnimNotifyState_SoundLibrary, SoundContext) == 0x000030, "Member 'UAnimNotifyState_SoundLibrary::SoundContext' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_SoundLibrary, NotifyHelper) == 0x000038, "Member 'UAnimNotifyState_SoundLibrary::NotifyHelper' has a wrong offset!");

class UGameFeatureAction_AddSoundLibraryCollection final : public UGameFeatureAction
{
public:
	TArray<class USoundLibraryCollection*>        CollectionList;
	TArray<TWeakObjectPtr<class USoundLibrarySubsystem>> TrackedSubsystems;
	uint8                                         Pad_48[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddSoundLibraryCollection">();
	}
	static class UGameFeatureAction_AddSoundLibraryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddSoundLibraryCollection>();
	}
};
static_assert(alignof(UGameFeatureAction_AddSoundLibraryCollection) == 0x000008, "Wrong alignment on UGameFeatureAction_AddSoundLibraryCollection");
static_assert(sizeof(UGameFeatureAction_AddSoundLibraryCollection) == 0x000058, "Wrong size on UGameFeatureAction_AddSoundLibraryCollection");
static_assert(offsetof(UGameFeatureAction_AddSoundLibraryCollection, CollectionList) == 0x000028, "Member 'UGameFeatureAction_AddSoundLibraryCollection::CollectionList' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddSoundLibraryCollection, TrackedSubsystems) == 0x000038, "Member 'UGameFeatureAction_AddSoundLibraryCollection::TrackedSubsystems' has a wrong offset!");

class USoundLibrary final : public UObject
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> Sounds;
	struct FAudioGameplayRequirements             LibraryRequirements;
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> FullLibrary;
	TArray<class USoundBase*>                     LoadedSoundObjects;
	TArray<TSoftObjectPtr<class USoundBase>>      Assets;
	uint8                                         Pad_138[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrary">();
	}
	static class USoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrary>();
	}
};
static_assert(alignof(USoundLibrary) == 0x000008, "Wrong alignment on USoundLibrary");
static_assert(sizeof(USoundLibrary) == 0x000148, "Wrong size on USoundLibrary");
static_assert(offsetof(USoundLibrary, Sounds) == 0x000028, "Member 'USoundLibrary::Sounds' has a wrong offset!");
static_assert(offsetof(USoundLibrary, LibraryRequirements) == 0x000078, "Member 'USoundLibrary::LibraryRequirements' has a wrong offset!");
static_assert(offsetof(USoundLibrary, FullLibrary) == 0x0000C8, "Member 'USoundLibrary::FullLibrary' has a wrong offset!");
static_assert(offsetof(USoundLibrary, LoadedSoundObjects) == 0x000118, "Member 'USoundLibrary::LoadedSoundObjects' has a wrong offset!");
static_assert(offsetof(USoundLibrary, Assets) == 0x000128, "Member 'USoundLibrary::Assets' has a wrong offset!");

class USoundLibraryComponent : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_A8[0x8];
	TMulticastInlineDelegate<void(struct FSoundLibraryPlaySoundResult& Results, class USoundLibraryContext* Context)> OnSoundLibraryPlayEvent;
	TArray<class USoundLibrary*>                  Libraries;
	TArray<TSubclassOf<class USoundLibraryContext>> ContextClasses;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryComponent">();
	}
	static class USoundLibraryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryComponent>();
	}
};
static_assert(alignof(USoundLibraryComponent) == 0x000008, "Wrong alignment on USoundLibraryComponent");
static_assert(sizeof(USoundLibraryComponent) == 0x0000E0, "Wrong size on USoundLibraryComponent");
static_assert(offsetof(USoundLibraryComponent, OnSoundLibraryPlayEvent) == 0x0000B0, "Member 'USoundLibraryComponent::OnSoundLibraryPlayEvent' has a wrong offset!");
static_assert(offsetof(USoundLibraryComponent, Libraries) == 0x0000C0, "Member 'USoundLibraryComponent::Libraries' has a wrong offset!");
static_assert(offsetof(USoundLibraryComponent, ContextClasses) == 0x0000D0, "Member 'USoundLibraryComponent::ContextClasses' has a wrong offset!");

class ISoundLibraryProviderInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryProviderInterface">();
	}
	static class ISoundLibraryProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISoundLibraryProviderInterface>();
	}
};
static_assert(alignof(ISoundLibraryProviderInterface) == 0x000008, "Wrong alignment on ISoundLibraryProviderInterface");
static_assert(sizeof(ISoundLibraryProviderInterface) == 0x000028, "Wrong size on ISoundLibraryProviderInterface");

class USoundLibraryCollection final : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FSoundLibrarySet> Libraries;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryCollection">();
	}
	static class USoundLibraryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryCollection>();
	}
};
static_assert(alignof(USoundLibraryCollection) == 0x000008, "Wrong alignment on USoundLibraryCollection");
static_assert(sizeof(USoundLibraryCollection) == 0x000080, "Wrong size on USoundLibraryCollection");
static_assert(offsetof(USoundLibraryCollection, Libraries) == 0x000030, "Member 'USoundLibraryCollection::Libraries' has a wrong offset!");

class USoundLibrarySettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class USoundLibraryCollection> CommonLibraries;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySettings">();
	}
	static class USoundLibrarySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySettings>();
	}
};
static_assert(alignof(USoundLibrarySettings) == 0x000008, "Wrong alignment on USoundLibrarySettings");
static_assert(sizeof(USoundLibrarySettings) == 0x000058, "Wrong size on USoundLibrarySettings");
static_assert(offsetof(USoundLibrarySettings, CommonLibraries) == 0x000030, "Member 'USoundLibrarySettings::CommonLibraries' has a wrong offset!");

class USoundLibrarySimpleContext : public USoundLibraryContext
{
public:
	struct FSoundLibrarySimpleContextSettings     Settings;

public:
	void ConfigureContext(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySimpleContext">();
	}
	static class USoundLibrarySimpleContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySimpleContext>();
	}
};
static_assert(alignof(USoundLibrarySimpleContext) == 0x000008, "Wrong alignment on USoundLibrarySimpleContext");
static_assert(sizeof(USoundLibrarySimpleContext) == 0x0000B0, "Wrong size on USoundLibrarySimpleContext");
static_assert(offsetof(USoundLibrarySimpleContext, Settings) == 0x000058, "Member 'USoundLibrarySimpleContext::Settings' has a wrong offset!");

class USoundLibrarySubsystem final : public UWorldSubsystem
{
public:
	TArray<class USoundLibraryCollection*>        LibraryCollections;
	class USoundLibrarySimpleContext*             SimpleContext;
	TMap<uint32, struct FSoundLibraryActorData>   ActorDataMap;
	uint8                                         Pad_98[0x50];

public:
	class USoundLibraryContext* AddContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void AddLibraries(class AActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	void AddLibrary(class AActor* Actor, class USoundLibrary* Library);
	void DisableEventsForActor(const class AActor* Actor);
	void EnableEventsForActor(const class AActor* Actor);
	class USoundLibraryContext* GetContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult* OutResults);
	struct FSoundLibraryPlaySoundResult PlaySoundSimple(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings);
	bool RemoveContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void RemoveLibraries(const class AActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	void RemoveLibrary(const class AActor* Actor, class USoundLibrary* Library);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySubsystem">();
	}
	static class USoundLibrarySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySubsystem>();
	}
};
static_assert(alignof(USoundLibrarySubsystem) == 0x000008, "Wrong alignment on USoundLibrarySubsystem");
static_assert(sizeof(USoundLibrarySubsystem) == 0x0000E8, "Wrong size on USoundLibrarySubsystem");
static_assert(offsetof(USoundLibrarySubsystem, LibraryCollections) == 0x000030, "Member 'USoundLibrarySubsystem::LibraryCollections' has a wrong offset!");
static_assert(offsetof(USoundLibrarySubsystem, SimpleContext) == 0x000040, "Member 'USoundLibrarySubsystem::SimpleContext' has a wrong offset!");
static_assert(offsetof(USoundLibrarySubsystem, ActorDataMap) == 0x000048, "Member 'USoundLibrarySubsystem::ActorDataMap' has a wrong offset!");

class USoundLibraryTagHelperFunctions final : public UObject
{
public:
	static struct FSoundLibraryTag MakeSoundLibraryTag(const struct FGameplayTag& tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryTagHelperFunctions">();
	}
	static class USoundLibraryTagHelperFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryTagHelperFunctions>();
	}
};
static_assert(alignof(USoundLibraryTagHelperFunctions) == 0x000008, "Wrong alignment on USoundLibraryTagHelperFunctions");
static_assert(sizeof(USoundLibraryTagHelperFunctions) == 0x000028, "Wrong size on USoundLibraryTagHelperFunctions");

}
