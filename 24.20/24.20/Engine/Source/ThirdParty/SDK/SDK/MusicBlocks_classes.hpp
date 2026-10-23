#pragma once

#include "Basic.hpp"

#include "MusicBlocks_structs.hpp"
#include "Engine_classes.hpp"
#include "PlayspaceSystem_classes.hpp"

namespace SDK
{

class UMusicSequencerHitComponent final : public UActorComponent
{
public:
	struct FMusicSequencerHitArray                MusicSequencerEventList;
	TArray<class USoundBase*>                     LoadedSoundsList;
	TArray<TSubclassOf<class AActor>>             SoundPreloadClassList;

public:
	static bool RegisterMusicSequencerActor(const class UObject* WorldContextObject, TScriptInterface<class IFortMusicSequencerInterface> Actor);
	static bool ReplicateMusicSequencerHit(const class UObject* WorldContextObject, TScriptInterface<class IFortMusicSequencerInterface> HitInterface, const class AController* Instigator);

	bool AddMusicSequencerActor(TScriptInterface<class IFortMusicSequencerInterface> HitInterface);
	bool AddSequenceHitEvent(TScriptInterface<class IFortMusicSequencerInterface> HitInterface, const class AController* Instigator);
	void OnSequenceHitEventExpired(const struct FMusicSequencerHitHandle& ExpiredHandle);
	bool ProcessSequenceHitEvent(const struct FMusicSequencerHitEntry& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicSequencerHitComponent">();
	}
	static class UMusicSequencerHitComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicSequencerHitComponent>();
	}
};
static_assert(alignof(UMusicSequencerHitComponent) == 0x000008, "Wrong alignment on UMusicSequencerHitComponent");
static_assert(sizeof(UMusicSequencerHitComponent) == 0x0001E0, "Wrong size on UMusicSequencerHitComponent");
static_assert(offsetof(UMusicSequencerHitComponent, MusicSequencerEventList) == 0x0000A0, "Member 'UMusicSequencerHitComponent::MusicSequencerEventList' has a wrong offset!");
static_assert(offsetof(UMusicSequencerHitComponent, LoadedSoundsList) == 0x0001C0, "Member 'UMusicSequencerHitComponent::LoadedSoundsList' has a wrong offset!");
static_assert(offsetof(UMusicSequencerHitComponent, SoundPreloadClassList) == 0x0001D0, "Member 'UMusicSequencerHitComponent::SoundPreloadClassList' has a wrong offset!");

class AMusicSequencerHitActor final : public AActor
{
public:
	class UMusicSequencerHitComponent*            MusicSequencerHitComponent;

public:
	class UMusicSequencerHitComponent* GetMusicSequencerHitComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicSequencerHitActor">();
	}
	static class AMusicSequencerHitActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMusicSequencerHitActor>();
	}
};
static_assert(alignof(AMusicSequencerHitActor) == 0x000008, "Wrong alignment on AMusicSequencerHitActor");
static_assert(sizeof(AMusicSequencerHitActor) == 0x000290, "Wrong size on AMusicSequencerHitActor");
static_assert(offsetof(AMusicSequencerHitActor, MusicSequencerHitComponent) == 0x000288, "Member 'AMusicSequencerHitActor::MusicSequencerHitComponent' has a wrong offset!");

class UMusicSequencerHitAdderComponent final : public UPlayspaceComponent
{
public:
	TSubclassOf<class AMusicSequencerHitActor>    MusicSequencerHitActorClass;
	TWeakObjectPtr<class AMusicSequencerHitActor> MusicSequencerHitActor;

public:
	class AMusicSequencerHitActor* GetMusicSequencerHitActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicSequencerHitAdderComponent">();
	}
	static class UMusicSequencerHitAdderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicSequencerHitAdderComponent>();
	}
};
static_assert(alignof(UMusicSequencerHitAdderComponent) == 0x000008, "Wrong alignment on UMusicSequencerHitAdderComponent");
static_assert(sizeof(UMusicSequencerHitAdderComponent) == 0x0000B0, "Wrong size on UMusicSequencerHitAdderComponent");
static_assert(offsetof(UMusicSequencerHitAdderComponent, MusicSequencerHitActorClass) == 0x0000A0, "Member 'UMusicSequencerHitAdderComponent::MusicSequencerHitActorClass' has a wrong offset!");
static_assert(offsetof(UMusicSequencerHitAdderComponent, MusicSequencerHitActor) == 0x0000A8, "Member 'UMusicSequencerHitAdderComponent::MusicSequencerHitActor' has a wrong offset!");

}
