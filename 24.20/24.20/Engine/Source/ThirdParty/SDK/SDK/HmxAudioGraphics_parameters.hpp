#pragma once

#include "Basic.hpp"

#include "HmxCore_structs.hpp"

namespace SDK::Params
{

struct MusicTempometerComponent_SetMaterialParameterCollection final
{
public:
	class UMaterialParameterCollection*           InMaterialParameterCollection;
};
static_assert(alignof(MusicTempometerComponent_SetMaterialParameterCollection) == 0x000008, "Wrong alignment on MusicTempometerComponent_SetMaterialParameterCollection");
static_assert(sizeof(MusicTempometerComponent_SetMaterialParameterCollection) == 0x000008, "Wrong size on MusicTempometerComponent_SetMaterialParameterCollection");
static_assert(offsetof(MusicTempometerComponent_SetMaterialParameterCollection, InMaterialParameterCollection) == 0x000000, "Member 'MusicTempometerComponent_SetMaterialParameterCollection::InMaterialParameterCollection' has a wrong offset!");

struct MusicTempometerComponent_SetSongPosInterface final
{
public:
	TScriptInterface<class ISongPosInterface>     InSongPosInterface;
};
static_assert(alignof(MusicTempometerComponent_SetSongPosInterface) == 0x000008, "Wrong alignment on MusicTempometerComponent_SetSongPosInterface");
static_assert(sizeof(MusicTempometerComponent_SetSongPosInterface) == 0x000010, "Wrong size on MusicTempometerComponent_SetSongPosInterface");
static_assert(offsetof(MusicTempometerComponent_SetSongPosInterface, InSongPosInterface) == 0x000000, "Member 'MusicTempometerComponent_SetSongPosInterface::InSongPosInterface' has a wrong offset!");

struct MusicTempometerComponent_SetSongPosInterfaceFromActor final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(MusicTempometerComponent_SetSongPosInterfaceFromActor) == 0x000008, "Wrong alignment on MusicTempometerComponent_SetSongPosInterfaceFromActor");
static_assert(sizeof(MusicTempometerComponent_SetSongPosInterfaceFromActor) == 0x000008, "Wrong size on MusicTempometerComponent_SetSongPosInterfaceFromActor");
static_assert(offsetof(MusicTempometerComponent_SetSongPosInterfaceFromActor, Actor) == 0x000000, "Member 'MusicTempometerComponent_SetSongPosInterfaceFromActor::Actor' has a wrong offset!");

struct MusicTempometerComponent_GetBeatLifetime final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetBeatLifetime) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetBeatLifetime");
static_assert(sizeof(MusicTempometerComponent_GetBeatLifetime) == 0x000004, "Wrong size on MusicTempometerComponent_GetBeatLifetime");
static_assert(offsetof(MusicTempometerComponent_GetBeatLifetime, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetBeatLifetime::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetBeatTick final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetBeatTick) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetBeatTick");
static_assert(sizeof(MusicTempometerComponent_GetBeatTick) == 0x000004, "Wrong size on MusicTempometerComponent_GetBeatTick");
static_assert(offsetof(MusicTempometerComponent_GetBeatTick, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetBeatTick::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMaterialParameterCollection final
{
public:
	class UMaterialParameterCollection*           ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMaterialParameterCollection) == 0x000008, "Wrong alignment on MusicTempometerComponent_GetMaterialParameterCollection");
static_assert(sizeof(MusicTempometerComponent_GetMaterialParameterCollection) == 0x000008, "Wrong size on MusicTempometerComponent_GetMaterialParameterCollection");
static_assert(offsetof(MusicTempometerComponent_GetMaterialParameterCollection, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMaterialParameterCollection::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMeasureBeat final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMeasureBeat) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMeasureBeat");
static_assert(sizeof(MusicTempometerComponent_GetMeasureBeat) == 0x000004, "Wrong size on MusicTempometerComponent_GetMeasureBeat");
static_assert(offsetof(MusicTempometerComponent_GetMeasureBeat, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMeasureBeat::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMeasureLifetime final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMeasureLifetime) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMeasureLifetime");
static_assert(sizeof(MusicTempometerComponent_GetMeasureLifetime) == 0x000004, "Wrong size on MusicTempometerComponent_GetMeasureLifetime");
static_assert(offsetof(MusicTempometerComponent_GetMeasureLifetime, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMeasureLifetime::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMeasureTick final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMeasureTick) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMeasureTick");
static_assert(sizeof(MusicTempometerComponent_GetMeasureTick) == 0x000004, "Wrong size on MusicTempometerComponent_GetMeasureTick");
static_assert(offsetof(MusicTempometerComponent_GetMeasureTick, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMeasureTick::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMusicBeat final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMusicBeat) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMusicBeat");
static_assert(sizeof(MusicTempometerComponent_GetMusicBeat) == 0x000004, "Wrong size on MusicTempometerComponent_GetMusicBeat");
static_assert(offsetof(MusicTempometerComponent_GetMusicBeat, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMusicBeat::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMusicMeasure final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMusicMeasure) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMusicMeasure");
static_assert(sizeof(MusicTempometerComponent_GetMusicMeasure) == 0x000004, "Wrong size on MusicTempometerComponent_GetMusicMeasure");
static_assert(offsetof(MusicTempometerComponent_GetMusicMeasure, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMusicMeasure::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMusicSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMusicSeconds) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMusicSeconds");
static_assert(sizeof(MusicTempometerComponent_GetMusicSeconds) == 0x000004, "Wrong size on MusicTempometerComponent_GetMusicSeconds");
static_assert(offsetof(MusicTempometerComponent_GetMusicSeconds, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMusicSeconds::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetMusicTick final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetMusicTick) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetMusicTick");
static_assert(sizeof(MusicTempometerComponent_GetMusicTick) == 0x000004, "Wrong size on MusicTempometerComponent_GetMusicTick");
static_assert(offsetof(MusicTempometerComponent_GetMusicTick, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetMusicTick::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetSongPos final
{
public:
	struct FSongPos                               ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetSongPos) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetSongPos");
static_assert(sizeof(MusicTempometerComponent_GetSongPos) == 0x00004C, "Wrong size on MusicTempometerComponent_GetSongPos");
static_assert(offsetof(MusicTempometerComponent_GetSongPos, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetSongPos::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetSongPosInterface final
{
public:
	TScriptInterface<class ISongPosInterface>     ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetSongPosInterface) == 0x000008, "Wrong alignment on MusicTempometerComponent_GetSongPosInterface");
static_assert(sizeof(MusicTempometerComponent_GetSongPosInterface) == 0x000010, "Wrong size on MusicTempometerComponent_GetSongPosInterface");
static_assert(offsetof(MusicTempometerComponent_GetSongPosInterface, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetSongPosInterface::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetSongPosInterfaceNoMutex final
{
public:
	TScriptInterface<class ISongPosInterface>     ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetSongPosInterfaceNoMutex) == 0x000008, "Wrong alignment on MusicTempometerComponent_GetSongPosInterfaceNoMutex");
static_assert(sizeof(MusicTempometerComponent_GetSongPosInterfaceNoMutex) == 0x000010, "Wrong size on MusicTempometerComponent_GetSongPosInterfaceNoMutex");
static_assert(offsetof(MusicTempometerComponent_GetSongPosInterfaceNoMutex, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetSongPosInterfaceNoMutex::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetTempo final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetTempo) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetTempo");
static_assert(sizeof(MusicTempometerComponent_GetTempo) == 0x000004, "Wrong size on MusicTempometerComponent_GetTempo");
static_assert(offsetof(MusicTempometerComponent_GetTempo, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetTempo::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetTickLifetime final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetTickLifetime) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetTickLifetime");
static_assert(sizeof(MusicTempometerComponent_GetTickLifetime) == 0x000004, "Wrong size on MusicTempometerComponent_GetTickLifetime");
static_assert(offsetof(MusicTempometerComponent_GetTickLifetime, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetTickLifetime::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetTimeSignatureDenominator final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetTimeSignatureDenominator) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetTimeSignatureDenominator");
static_assert(sizeof(MusicTempometerComponent_GetTimeSignatureDenominator) == 0x000004, "Wrong size on MusicTempometerComponent_GetTimeSignatureDenominator");
static_assert(offsetof(MusicTempometerComponent_GetTimeSignatureDenominator, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetTimeSignatureDenominator::ReturnValue' has a wrong offset!");

struct MusicTempometerComponent_GetTimeSignatureNumerator final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MusicTempometerComponent_GetTimeSignatureNumerator) == 0x000004, "Wrong alignment on MusicTempometerComponent_GetTimeSignatureNumerator");
static_assert(sizeof(MusicTempometerComponent_GetTimeSignatureNumerator) == 0x000004, "Wrong size on MusicTempometerComponent_GetTimeSignatureNumerator");
static_assert(offsetof(MusicTempometerComponent_GetTimeSignatureNumerator, ReturnValue) == 0x000000, "Member 'MusicTempometerComponent_GetTimeSignatureNumerator::ReturnValue' has a wrong offset!");

}
