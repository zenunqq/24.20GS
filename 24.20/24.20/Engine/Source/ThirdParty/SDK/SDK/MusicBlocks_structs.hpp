#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

struct FMusicSequencerHitHandle final
{
public:
	uint64                                        Handle;
};
static_assert(alignof(FMusicSequencerHitHandle) == 0x000008, "Wrong alignment on FMusicSequencerHitHandle");
static_assert(sizeof(FMusicSequencerHitHandle) == 0x000008, "Wrong size on FMusicSequencerHitHandle");
static_assert(offsetof(FMusicSequencerHitHandle, Handle) == 0x000000, "Member 'FMusicSequencerHitHandle::Handle' has a wrong offset!");

struct FMusicSequencerHitEntry final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	struct FMusicSequencerHitHandle               Handle;
	float                                         ServerWorldTimeStart;
	uint8                                         Pad_1C[0x4];
	TSubclassOf<class AActor>                     ActorClass;
	TWeakObjectPtr<class AActor>                  Actor;
	TWeakObjectPtr<class APlayerState>            InstigatorPlayerState;
	struct FVector_NetQuantize                    SoundLocation;
	int32                                         SoundIndex;
	uint8                                         Pad_54[0x4];
	struct FTimerHandle                           TimerHandle;
};
static_assert(alignof(FMusicSequencerHitEntry) == 0x000008, "Wrong alignment on FMusicSequencerHitEntry");
static_assert(sizeof(FMusicSequencerHitEntry) == 0x000060, "Wrong size on FMusicSequencerHitEntry");
static_assert(offsetof(FMusicSequencerHitEntry, Handle) == 0x000010, "Member 'FMusicSequencerHitEntry::Handle' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, ServerWorldTimeStart) == 0x000018, "Member 'FMusicSequencerHitEntry::ServerWorldTimeStart' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, ActorClass) == 0x000020, "Member 'FMusicSequencerHitEntry::ActorClass' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, Actor) == 0x000028, "Member 'FMusicSequencerHitEntry::Actor' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, InstigatorPlayerState) == 0x000030, "Member 'FMusicSequencerHitEntry::InstigatorPlayerState' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, SoundLocation) == 0x000038, "Member 'FMusicSequencerHitEntry::SoundLocation' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, SoundIndex) == 0x000050, "Member 'FMusicSequencerHitEntry::SoundIndex' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitEntry, TimerHandle) == 0x000058, "Member 'FMusicSequencerHitEntry::TimerHandle' has a wrong offset!");

struct FMusicSequencerHitArray final : public FFastArraySerializer
{
public:
	TArray<struct FMusicSequencerHitEntry>        Items;
	TWeakObjectPtr<class UMusicSequencerHitComponent> OwningComponent;
};
static_assert(alignof(FMusicSequencerHitArray) == 0x000008, "Wrong alignment on FMusicSequencerHitArray");
static_assert(sizeof(FMusicSequencerHitArray) == 0x000120, "Wrong size on FMusicSequencerHitArray");
static_assert(offsetof(FMusicSequencerHitArray, Items) == 0x000108, "Member 'FMusicSequencerHitArray::Items' has a wrong offset!");
static_assert(offsetof(FMusicSequencerHitArray, OwningComponent) == 0x000118, "Member 'FMusicSequencerHitArray::OwningComponent' has a wrong offset!");

}
