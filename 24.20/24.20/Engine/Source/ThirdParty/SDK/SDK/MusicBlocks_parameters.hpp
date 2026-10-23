#pragma once

#include "Basic.hpp"

#include "MusicBlocks_structs.hpp"

namespace SDK::Params
{

struct MusicSequencerHitComponent_RegisterMusicSequencerActor final
{
public:
	const class UObject*                          WorldContextObject;
	TScriptInterface<class IFortMusicSequencerInterface> Actor;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(MusicSequencerHitComponent_RegisterMusicSequencerActor) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_RegisterMusicSequencerActor");
static_assert(sizeof(MusicSequencerHitComponent_RegisterMusicSequencerActor) == 0x000020, "Wrong size on MusicSequencerHitComponent_RegisterMusicSequencerActor");
static_assert(offsetof(MusicSequencerHitComponent_RegisterMusicSequencerActor, WorldContextObject) == 0x000000, "Member 'MusicSequencerHitComponent_RegisterMusicSequencerActor::WorldContextObject' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_RegisterMusicSequencerActor, Actor) == 0x000008, "Member 'MusicSequencerHitComponent_RegisterMusicSequencerActor::Actor' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_RegisterMusicSequencerActor, ReturnValue) == 0x000018, "Member 'MusicSequencerHitComponent_RegisterMusicSequencerActor::ReturnValue' has a wrong offset!");

struct MusicSequencerHitComponent_ReplicateMusicSequencerHit final
{
public:
	const class UObject*                          WorldContextObject;
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;
	const class AController*                      Instigator;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(MusicSequencerHitComponent_ReplicateMusicSequencerHit) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_ReplicateMusicSequencerHit");
static_assert(sizeof(MusicSequencerHitComponent_ReplicateMusicSequencerHit) == 0x000028, "Wrong size on MusicSequencerHitComponent_ReplicateMusicSequencerHit");
static_assert(offsetof(MusicSequencerHitComponent_ReplicateMusicSequencerHit, WorldContextObject) == 0x000000, "Member 'MusicSequencerHitComponent_ReplicateMusicSequencerHit::WorldContextObject' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_ReplicateMusicSequencerHit, HitInterface) == 0x000008, "Member 'MusicSequencerHitComponent_ReplicateMusicSequencerHit::HitInterface' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_ReplicateMusicSequencerHit, Instigator) == 0x000018, "Member 'MusicSequencerHitComponent_ReplicateMusicSequencerHit::Instigator' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_ReplicateMusicSequencerHit, ReturnValue) == 0x000020, "Member 'MusicSequencerHitComponent_ReplicateMusicSequencerHit::ReturnValue' has a wrong offset!");

struct MusicSequencerHitComponent_AddMusicSequencerActor final
{
public:
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MusicSequencerHitComponent_AddMusicSequencerActor) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_AddMusicSequencerActor");
static_assert(sizeof(MusicSequencerHitComponent_AddMusicSequencerActor) == 0x000018, "Wrong size on MusicSequencerHitComponent_AddMusicSequencerActor");
static_assert(offsetof(MusicSequencerHitComponent_AddMusicSequencerActor, HitInterface) == 0x000000, "Member 'MusicSequencerHitComponent_AddMusicSequencerActor::HitInterface' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_AddMusicSequencerActor, ReturnValue) == 0x000010, "Member 'MusicSequencerHitComponent_AddMusicSequencerActor::ReturnValue' has a wrong offset!");

struct MusicSequencerHitComponent_AddSequenceHitEvent final
{
public:
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;
	const class AController*                      Instigator;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(MusicSequencerHitComponent_AddSequenceHitEvent) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_AddSequenceHitEvent");
static_assert(sizeof(MusicSequencerHitComponent_AddSequenceHitEvent) == 0x000020, "Wrong size on MusicSequencerHitComponent_AddSequenceHitEvent");
static_assert(offsetof(MusicSequencerHitComponent_AddSequenceHitEvent, HitInterface) == 0x000000, "Member 'MusicSequencerHitComponent_AddSequenceHitEvent::HitInterface' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_AddSequenceHitEvent, Instigator) == 0x000010, "Member 'MusicSequencerHitComponent_AddSequenceHitEvent::Instigator' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_AddSequenceHitEvent, ReturnValue) == 0x000018, "Member 'MusicSequencerHitComponent_AddSequenceHitEvent::ReturnValue' has a wrong offset!");

struct MusicSequencerHitComponent_OnSequenceHitEventExpired final
{
public:
	struct FMusicSequencerHitHandle               ExpiredHandle;
};
static_assert(alignof(MusicSequencerHitComponent_OnSequenceHitEventExpired) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_OnSequenceHitEventExpired");
static_assert(sizeof(MusicSequencerHitComponent_OnSequenceHitEventExpired) == 0x000008, "Wrong size on MusicSequencerHitComponent_OnSequenceHitEventExpired");
static_assert(offsetof(MusicSequencerHitComponent_OnSequenceHitEventExpired, ExpiredHandle) == 0x000000, "Member 'MusicSequencerHitComponent_OnSequenceHitEventExpired::ExpiredHandle' has a wrong offset!");

struct MusicSequencerHitComponent_ProcessSequenceHitEvent final
{
public:
	struct FMusicSequencerHitEntry                Event;
	bool                                          ReturnValue;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(MusicSequencerHitComponent_ProcessSequenceHitEvent) == 0x000008, "Wrong alignment on MusicSequencerHitComponent_ProcessSequenceHitEvent");
static_assert(sizeof(MusicSequencerHitComponent_ProcessSequenceHitEvent) == 0x000068, "Wrong size on MusicSequencerHitComponent_ProcessSequenceHitEvent");
static_assert(offsetof(MusicSequencerHitComponent_ProcessSequenceHitEvent, Event) == 0x000000, "Member 'MusicSequencerHitComponent_ProcessSequenceHitEvent::Event' has a wrong offset!");
static_assert(offsetof(MusicSequencerHitComponent_ProcessSequenceHitEvent, ReturnValue) == 0x000060, "Member 'MusicSequencerHitComponent_ProcessSequenceHitEvent::ReturnValue' has a wrong offset!");

struct MusicSequencerHitActor_GetMusicSequencerHitComponent final
{
public:
	class UMusicSequencerHitComponent*            ReturnValue;
};
static_assert(alignof(MusicSequencerHitActor_GetMusicSequencerHitComponent) == 0x000008, "Wrong alignment on MusicSequencerHitActor_GetMusicSequencerHitComponent");
static_assert(sizeof(MusicSequencerHitActor_GetMusicSequencerHitComponent) == 0x000008, "Wrong size on MusicSequencerHitActor_GetMusicSequencerHitComponent");
static_assert(offsetof(MusicSequencerHitActor_GetMusicSequencerHitComponent, ReturnValue) == 0x000000, "Member 'MusicSequencerHitActor_GetMusicSequencerHitComponent::ReturnValue' has a wrong offset!");

struct MusicSequencerHitAdderComponent_GetMusicSequencerHitActor final
{
public:
	class AMusicSequencerHitActor*                ReturnValue;
};
static_assert(alignof(MusicSequencerHitAdderComponent_GetMusicSequencerHitActor) == 0x000008, "Wrong alignment on MusicSequencerHitAdderComponent_GetMusicSequencerHitActor");
static_assert(sizeof(MusicSequencerHitAdderComponent_GetMusicSequencerHitActor) == 0x000008, "Wrong size on MusicSequencerHitAdderComponent_GetMusicSequencerHitActor");
static_assert(offsetof(MusicSequencerHitAdderComponent_GetMusicSequencerHitActor, ReturnValue) == 0x000000, "Member 'MusicSequencerHitAdderComponent_GetMusicSequencerHitActor::ReturnValue' has a wrong offset!");

}
