#pragma once

#include "Basic.hpp"

#include "SoundLibrary_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct SoundLibraryContext_OnAddedToActor final
{
public:
	const class AActor*                           InActor;
};
static_assert(alignof(SoundLibraryContext_OnAddedToActor) == 0x000008, "Wrong alignment on SoundLibraryContext_OnAddedToActor");
static_assert(sizeof(SoundLibraryContext_OnAddedToActor) == 0x000008, "Wrong size on SoundLibraryContext_OnAddedToActor");
static_assert(offsetof(SoundLibraryContext_OnAddedToActor, InActor) == 0x000000, "Member 'SoundLibraryContext_OnAddedToActor::InActor' has a wrong offset!");

struct SoundLibraryContext_OnRemovedFromActor final
{
public:
	const class AActor*                           InActor;
};
static_assert(alignof(SoundLibraryContext_OnRemovedFromActor) == 0x000008, "Wrong alignment on SoundLibraryContext_OnRemovedFromActor");
static_assert(sizeof(SoundLibraryContext_OnRemovedFromActor) == 0x000008, "Wrong size on SoundLibraryContext_OnRemovedFromActor");
static_assert(offsetof(SoundLibraryContext_OnRemovedFromActor, InActor) == 0x000000, "Member 'SoundLibraryContext_OnRemovedFromActor::InActor' has a wrong offset!");

struct SoundLibraryContext_PlaySound final
{
public:
	class USoundBase*                             sound;
	struct FSoundLibraryPlaySoundResult           OutResults;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(SoundLibraryContext_PlaySound) == 0x000008, "Wrong alignment on SoundLibraryContext_PlaySound");
static_assert(sizeof(SoundLibraryContext_PlaySound) == 0x000038, "Wrong size on SoundLibraryContext_PlaySound");
static_assert(offsetof(SoundLibraryContext_PlaySound, sound) == 0x000000, "Member 'SoundLibraryContext_PlaySound::sound' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_PlaySound, OutResults) == 0x000008, "Member 'SoundLibraryContext_PlaySound::OutResults' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_PlaySound, ReturnValue) == 0x000030, "Member 'SoundLibraryContext_PlaySound::ReturnValue' has a wrong offset!");

struct SoundLibraryContext_CreateEventName final
{
public:
	struct FGameplayTag                           OutEventName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(SoundLibraryContext_CreateEventName) == 0x000004, "Wrong alignment on SoundLibraryContext_CreateEventName");
static_assert(sizeof(SoundLibraryContext_CreateEventName) == 0x000008, "Wrong size on SoundLibraryContext_CreateEventName");
static_assert(offsetof(SoundLibraryContext_CreateEventName, OutEventName) == 0x000000, "Member 'SoundLibraryContext_CreateEventName::OutEventName' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_CreateEventName, ReturnValue) == 0x000004, "Member 'SoundLibraryContext_CreateEventName::ReturnValue' has a wrong offset!");

struct SoundLibraryAnimContext_ConfigureContext final
{
public:
	class AActor*                                 OwningActor;
	class UAnimSequenceBase*                      InAnimation;
	struct FSoundLibraryAnimContextSettings       InSettings;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(SoundLibraryAnimContext_ConfigureContext) == 0x000008, "Wrong alignment on SoundLibraryAnimContext_ConfigureContext");
static_assert(sizeof(SoundLibraryAnimContext_ConfigureContext) == 0x000038, "Wrong size on SoundLibraryAnimContext_ConfigureContext");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, OwningActor) == 0x000000, "Member 'SoundLibraryAnimContext_ConfigureContext::OwningActor' has a wrong offset!");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, InAnimation) == 0x000008, "Member 'SoundLibraryAnimContext_ConfigureContext::InAnimation' has a wrong offset!");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, InSettings) == 0x000010, "Member 'SoundLibraryAnimContext_ConfigureContext::InSettings' has a wrong offset!");

struct SoundLibrarySimpleContext_ConfigureContext final
{
public:
	class AActor*                                 OwningActor;
	struct FSoundLibrarySimpleContextSettings     InSettings;
};
static_assert(alignof(SoundLibrarySimpleContext_ConfigureContext) == 0x000008, "Wrong alignment on SoundLibrarySimpleContext_ConfigureContext");
static_assert(sizeof(SoundLibrarySimpleContext_ConfigureContext) == 0x000060, "Wrong size on SoundLibrarySimpleContext_ConfigureContext");
static_assert(offsetof(SoundLibrarySimpleContext_ConfigureContext, OwningActor) == 0x000000, "Member 'SoundLibrarySimpleContext_ConfigureContext::OwningActor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySimpleContext_ConfigureContext, InSettings) == 0x000008, "Member 'SoundLibrarySimpleContext_ConfigureContext::InSettings' has a wrong offset!");

struct SoundLibrarySubsystem_AddContext final
{
public:
	const class AActor*                           Actor;
	TSubclassOf<class USoundLibraryContext>       ContextClass;
	class USoundLibraryContext*                   ReturnValue;
};
static_assert(alignof(SoundLibrarySubsystem_AddContext) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddContext");
static_assert(sizeof(SoundLibrarySubsystem_AddContext) == 0x000018, "Wrong size on SoundLibrarySubsystem_AddContext");
static_assert(offsetof(SoundLibrarySubsystem_AddContext, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddContext::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddContext, ContextClass) == 0x000008, "Member 'SoundLibrarySubsystem_AddContext::ContextClass' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddContext, ReturnValue) == 0x000010, "Member 'SoundLibrarySubsystem_AddContext::ReturnValue' has a wrong offset!");

struct SoundLibrarySubsystem_AddLibraries final
{
public:
	class AActor*                                 Actor;
	TArray<class USoundLibrary*>                  Libraries;
};
static_assert(alignof(SoundLibrarySubsystem_AddLibraries) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibraries");
static_assert(sizeof(SoundLibrarySubsystem_AddLibraries) == 0x000018, "Wrong size on SoundLibrarySubsystem_AddLibraries");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraries, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibraries::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraries, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibraries::Libraries' has a wrong offset!");

struct SoundLibrarySubsystem_AddLibrary final
{
public:
	class AActor*                                 Actor;
	class USoundLibrary*                          Library;
};
static_assert(alignof(SoundLibrarySubsystem_AddLibrary) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibrary");
static_assert(sizeof(SoundLibrarySubsystem_AddLibrary) == 0x000010, "Wrong size on SoundLibrarySubsystem_AddLibrary");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrary, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibrary::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrary, Library) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibrary::Library' has a wrong offset!");

struct SoundLibrarySubsystem_DisableEventsForActor final
{
public:
	const class AActor*                           Actor;
};
static_assert(alignof(SoundLibrarySubsystem_DisableEventsForActor) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_DisableEventsForActor");
static_assert(sizeof(SoundLibrarySubsystem_DisableEventsForActor) == 0x000008, "Wrong size on SoundLibrarySubsystem_DisableEventsForActor");
static_assert(offsetof(SoundLibrarySubsystem_DisableEventsForActor, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_DisableEventsForActor::Actor' has a wrong offset!");

struct SoundLibrarySubsystem_EnableEventsForActor final
{
public:
	const class AActor*                           Actor;
};
static_assert(alignof(SoundLibrarySubsystem_EnableEventsForActor) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_EnableEventsForActor");
static_assert(sizeof(SoundLibrarySubsystem_EnableEventsForActor) == 0x000008, "Wrong size on SoundLibrarySubsystem_EnableEventsForActor");
static_assert(offsetof(SoundLibrarySubsystem_EnableEventsForActor, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_EnableEventsForActor::Actor' has a wrong offset!");

struct SoundLibrarySubsystem_GetContext final
{
public:
	const class AActor*                           Actor;
	TSubclassOf<class USoundLibraryContext>       ContextClass;
	class USoundLibraryContext*                   ReturnValue;
};
static_assert(alignof(SoundLibrarySubsystem_GetContext) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_GetContext");
static_assert(sizeof(SoundLibrarySubsystem_GetContext) == 0x000018, "Wrong size on SoundLibrarySubsystem_GetContext");
static_assert(offsetof(SoundLibrarySubsystem_GetContext, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_GetContext::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_GetContext, ContextClass) == 0x000008, "Member 'SoundLibrarySubsystem_GetContext::ContextClass' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_GetContext, ReturnValue) == 0x000010, "Member 'SoundLibrarySubsystem_GetContext::ReturnValue' has a wrong offset!");

struct SoundLibrarySubsystem_PlaySound final
{
public:
	class USoundLibraryContext*                   Context;
	struct FSoundLibraryPlaySoundResult           OutResults;
};
static_assert(alignof(SoundLibrarySubsystem_PlaySound) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_PlaySound");
static_assert(sizeof(SoundLibrarySubsystem_PlaySound) == 0x000030, "Wrong size on SoundLibrarySubsystem_PlaySound");
static_assert(offsetof(SoundLibrarySubsystem_PlaySound, Context) == 0x000000, "Member 'SoundLibrarySubsystem_PlaySound::Context' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySound, OutResults) == 0x000008, "Member 'SoundLibrarySubsystem_PlaySound::OutResults' has a wrong offset!");

struct SoundLibrarySubsystem_PlaySoundSimple final
{
public:
	class AActor*                                 OwningActor;
	struct FSoundLibrarySimpleContextSettings     InSettings;
	struct FSoundLibraryPlaySoundResult           ReturnValue;
};
static_assert(alignof(SoundLibrarySubsystem_PlaySoundSimple) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_PlaySoundSimple");
static_assert(sizeof(SoundLibrarySubsystem_PlaySoundSimple) == 0x000088, "Wrong size on SoundLibrarySubsystem_PlaySoundSimple");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, OwningActor) == 0x000000, "Member 'SoundLibrarySubsystem_PlaySoundSimple::OwningActor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, InSettings) == 0x000008, "Member 'SoundLibrarySubsystem_PlaySoundSimple::InSettings' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, ReturnValue) == 0x000060, "Member 'SoundLibrarySubsystem_PlaySoundSimple::ReturnValue' has a wrong offset!");

struct SoundLibrarySubsystem_RemoveContext final
{
public:
	const class AActor*                           Actor;
	TSubclassOf<class USoundLibraryContext>       ContextClass;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SoundLibrarySubsystem_RemoveContext) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveContext");
static_assert(sizeof(SoundLibrarySubsystem_RemoveContext) == 0x000018, "Wrong size on SoundLibrarySubsystem_RemoveContext");
static_assert(offsetof(SoundLibrarySubsystem_RemoveContext, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveContext::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveContext, ContextClass) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveContext::ContextClass' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveContext, ReturnValue) == 0x000010, "Member 'SoundLibrarySubsystem_RemoveContext::ReturnValue' has a wrong offset!");

struct SoundLibrarySubsystem_RemoveLibraries final
{
public:
	const class AActor*                           Actor;
	TArray<class USoundLibrary*>                  Libraries;
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibraries) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibraries");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibraries) == 0x000018, "Wrong size on SoundLibrarySubsystem_RemoveLibraries");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraries, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibraries::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraries, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibraries::Libraries' has a wrong offset!");

struct SoundLibrarySubsystem_RemoveLibrary final
{
public:
	const class AActor*                           Actor;
	class USoundLibrary*                          Library;
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibrary) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibrary");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibrary) == 0x000010, "Wrong size on SoundLibrarySubsystem_RemoveLibrary");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrary, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibrary::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrary, Library) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibrary::Library' has a wrong offset!");

struct SoundLibraryTagHelperFunctions_MakeSoundLibraryTag final
{
public:
	struct FGameplayTag                           tag;
	struct FSoundLibraryTag                       ReturnValue;
};
static_assert(alignof(SoundLibraryTagHelperFunctions_MakeSoundLibraryTag) == 0x000004, "Wrong alignment on SoundLibraryTagHelperFunctions_MakeSoundLibraryTag");
static_assert(sizeof(SoundLibraryTagHelperFunctions_MakeSoundLibraryTag) == 0x000008, "Wrong size on SoundLibraryTagHelperFunctions_MakeSoundLibraryTag");
static_assert(offsetof(SoundLibraryTagHelperFunctions_MakeSoundLibraryTag, tag) == 0x000000, "Member 'SoundLibraryTagHelperFunctions_MakeSoundLibraryTag::tag' has a wrong offset!");
static_assert(offsetof(SoundLibraryTagHelperFunctions_MakeSoundLibraryTag, ReturnValue) == 0x000004, "Member 'SoundLibraryTagHelperFunctions_MakeSoundLibraryTag::ReturnValue' has a wrong offset!");

}
