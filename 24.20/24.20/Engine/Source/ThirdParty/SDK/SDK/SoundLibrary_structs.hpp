#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESoundLibraryNotifyTriggerType : uint8
{
	Play                                     = 0,
	Stop                                     = 1,
	None                                     = 2,
	ESoundLibraryNotifyTriggerType_MAX       = 3,
};

struct FSoundLibraryAnimContextSettings final
{
public:
	struct FFloatInterval                         AnimRateThreshold;
	struct FGameplayTag                           EventName;
	bool                                          bAttachToActor;
	uint8                                         Pad_D[0x3];
	class FName                                   AttachName;
	bool                                          bFadeOutOnEnd;
	uint8                                         Pad_15[0x3];
	float                                         FadeTime;
	float                                         NotifyTriggerChance;
	float                                         VolumeMultiplier;
};
static_assert(alignof(FSoundLibraryAnimContextSettings) == 0x000004, "Wrong alignment on FSoundLibraryAnimContextSettings");
static_assert(sizeof(FSoundLibraryAnimContextSettings) == 0x000024, "Wrong size on FSoundLibraryAnimContextSettings");
static_assert(offsetof(FSoundLibraryAnimContextSettings, AnimRateThreshold) == 0x000000, "Member 'FSoundLibraryAnimContextSettings::AnimRateThreshold' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, EventName) == 0x000008, "Member 'FSoundLibraryAnimContextSettings::EventName' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, bAttachToActor) == 0x00000C, "Member 'FSoundLibraryAnimContextSettings::bAttachToActor' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, AttachName) == 0x000010, "Member 'FSoundLibraryAnimContextSettings::AttachName' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, bFadeOutOnEnd) == 0x000014, "Member 'FSoundLibraryAnimContextSettings::bFadeOutOnEnd' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, FadeTime) == 0x000018, "Member 'FSoundLibraryAnimContextSettings::FadeTime' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, NotifyTriggerChance) == 0x00001C, "Member 'FSoundLibraryAnimContextSettings::NotifyTriggerChance' has a wrong offset!");
static_assert(offsetof(FSoundLibraryAnimContextSettings, VolumeMultiplier) == 0x000020, "Member 'FSoundLibraryAnimContextSettings::VolumeMultiplier' has a wrong offset!");

struct FSoundLibraryPlaySoundResult final
{
public:
	struct FGameplayTag                           EventName;
	bool                                          bWasBlocked;
	bool                                          bSuccess;
	uint8                                         Pad_6[0x12];
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(FSoundLibraryPlaySoundResult) == 0x000008, "Wrong alignment on FSoundLibraryPlaySoundResult");
static_assert(sizeof(FSoundLibraryPlaySoundResult) == 0x000028, "Wrong size on FSoundLibraryPlaySoundResult");
static_assert(offsetof(FSoundLibraryPlaySoundResult, EventName) == 0x000000, "Member 'FSoundLibraryPlaySoundResult::EventName' has a wrong offset!");
static_assert(offsetof(FSoundLibraryPlaySoundResult, bWasBlocked) == 0x000004, "Member 'FSoundLibraryPlaySoundResult::bWasBlocked' has a wrong offset!");
static_assert(offsetof(FSoundLibraryPlaySoundResult, bSuccess) == 0x000005, "Member 'FSoundLibraryPlaySoundResult::bSuccess' has a wrong offset!");
static_assert(offsetof(FSoundLibraryPlaySoundResult, AudioComponents) == 0x000018, "Member 'FSoundLibraryPlaySoundResult::AudioComponents' has a wrong offset!");

struct FSoundLibrarySet final
{
public:
	TSet<class USoundLibrary*>                    LibrarySet;
};
static_assert(alignof(FSoundLibrarySet) == 0x000008, "Wrong alignment on FSoundLibrarySet");
static_assert(sizeof(FSoundLibrarySet) == 0x000050, "Wrong size on FSoundLibrarySet");
static_assert(offsetof(FSoundLibrarySet, LibrarySet) == 0x000000, "Member 'FSoundLibrarySet::LibrarySet' has a wrong offset!");

struct FSoundLibrarySimpleContextSettings final
{
public:
	struct FGameplayTag                           EventName;
	bool                                          bAttachedSound;
	bool                                          bStopWhenAttachedDestroyed;
	bool                                          bAutoDestroy;
	bool                                          bForceComponentCreation;
	float                                         VolumeMultiplier;
	float                                         PitchMultiplier;
	float                                         StartTime;
	uint8                                         Pad_14[0x4];
	class USoundConcurrency*                      ConcurrencySettings;
	class USoundAttenuation*                      AttenuationSettings;
	class FName                                   AttachName;
	uint8                                         Pad_2C[0x4];
	class USceneComponent*                        AttachToComponent;
	EAttachLocation                               LocationType;
	uint8                                         Pad_39[0x7];
	struct FVector                                Location;
};
static_assert(alignof(FSoundLibrarySimpleContextSettings) == 0x000008, "Wrong alignment on FSoundLibrarySimpleContextSettings");
static_assert(sizeof(FSoundLibrarySimpleContextSettings) == 0x000058, "Wrong size on FSoundLibrarySimpleContextSettings");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, EventName) == 0x000000, "Member 'FSoundLibrarySimpleContextSettings::EventName' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, bAttachedSound) == 0x000004, "Member 'FSoundLibrarySimpleContextSettings::bAttachedSound' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, bStopWhenAttachedDestroyed) == 0x000005, "Member 'FSoundLibrarySimpleContextSettings::bStopWhenAttachedDestroyed' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, bAutoDestroy) == 0x000006, "Member 'FSoundLibrarySimpleContextSettings::bAutoDestroy' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, bForceComponentCreation) == 0x000007, "Member 'FSoundLibrarySimpleContextSettings::bForceComponentCreation' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, VolumeMultiplier) == 0x000008, "Member 'FSoundLibrarySimpleContextSettings::VolumeMultiplier' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, PitchMultiplier) == 0x00000C, "Member 'FSoundLibrarySimpleContextSettings::PitchMultiplier' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, StartTime) == 0x000010, "Member 'FSoundLibrarySimpleContextSettings::StartTime' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, ConcurrencySettings) == 0x000018, "Member 'FSoundLibrarySimpleContextSettings::ConcurrencySettings' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, AttenuationSettings) == 0x000020, "Member 'FSoundLibrarySimpleContextSettings::AttenuationSettings' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, AttachName) == 0x000028, "Member 'FSoundLibrarySimpleContextSettings::AttachName' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, AttachToComponent) == 0x000030, "Member 'FSoundLibrarySimpleContextSettings::AttachToComponent' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, LocationType) == 0x000038, "Member 'FSoundLibrarySimpleContextSettings::LocationType' has a wrong offset!");
static_assert(offsetof(FSoundLibrarySimpleContextSettings, Location) == 0x000040, "Member 'FSoundLibrarySimpleContextSettings::Location' has a wrong offset!");

struct FSoundLibraryActorData final
{
public:
	uint8                                         Pad_0[0x20];
	TSet<class USoundLibrary*>                    SoundLibraries;
	TArray<class USoundLibraryContext*>           SoundLibraryContexts;
	uint8                                         Pad_80[0x8];
};
static_assert(alignof(FSoundLibraryActorData) == 0x000008, "Wrong alignment on FSoundLibraryActorData");
static_assert(sizeof(FSoundLibraryActorData) == 0x000088, "Wrong size on FSoundLibraryActorData");
static_assert(offsetof(FSoundLibraryActorData, SoundLibraries) == 0x000020, "Member 'FSoundLibraryActorData::SoundLibraries' has a wrong offset!");
static_assert(offsetof(FSoundLibraryActorData, SoundLibraryContexts) == 0x000070, "Member 'FSoundLibraryActorData::SoundLibraryContexts' has a wrong offset!");

struct FSoundLibraryTag final : public FGameplayTag
{
};
static_assert(alignof(FSoundLibraryTag) == 0x000004, "Wrong alignment on FSoundLibraryTag");
static_assert(sizeof(FSoundLibraryTag) == 0x000004, "Wrong size on FSoundLibraryTag");

}
