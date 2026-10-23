#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMusicTimebase : uint8
{
	AudioRenderTime                          = 0,
	ExperiencedTime                          = 1,
	VideoRenderTime                          = 2,
	EMusicTimebase_MAX                       = 3,
};

enum class EMusicTimeStart : uint8
{
	FromContentStart                         = 0,
	FromSongStart                            = 1,
	EMusicTimeStart_MAX                      = 2,
};

enum class ETempoListenerTimeSyncOption : uint8
{
	None                                     = 0,
	TempoSync                                = 1,
	SpeedScale                               = 2,
	ETempoListenerTimeSyncOption_MAX         = 3,
};

struct FSongPos final
{
public:
	float                                         Seconds;
	float                                         Milliseconds;
	int32                                         TimeSigNum;
	int32                                         TimeSigDenom;
	float                                         Tempo;
	int32                                         Tick;
	float                                         FractionalTick;
	int32                                         Beat;
	float                                         FractionalBeat;
	int32                                         Measure;
	float                                         FractionalMeasure;
	int32                                         BeatInMeasure;
	float                                         FractionalBeatInMeasure;
	int32                                         TickInMeasure;
	float                                         FractionalTickInMeasure;
	int32                                         TickInBeat;
	float                                         FractionalTickInBeat;
	int32                                         PulseInMeasure;
	float                                         FractionalPulseInMeasure;
};
static_assert(alignof(FSongPos) == 0x000004, "Wrong alignment on FSongPos");
static_assert(sizeof(FSongPos) == 0x00004C, "Wrong size on FSongPos");
static_assert(offsetof(FSongPos, Seconds) == 0x000000, "Member 'FSongPos::Seconds' has a wrong offset!");
static_assert(offsetof(FSongPos, Milliseconds) == 0x000004, "Member 'FSongPos::Milliseconds' has a wrong offset!");
static_assert(offsetof(FSongPos, TimeSigNum) == 0x000008, "Member 'FSongPos::TimeSigNum' has a wrong offset!");
static_assert(offsetof(FSongPos, TimeSigDenom) == 0x00000C, "Member 'FSongPos::TimeSigDenom' has a wrong offset!");
static_assert(offsetof(FSongPos, Tempo) == 0x000010, "Member 'FSongPos::Tempo' has a wrong offset!");
static_assert(offsetof(FSongPos, Tick) == 0x000014, "Member 'FSongPos::Tick' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalTick) == 0x000018, "Member 'FSongPos::FractionalTick' has a wrong offset!");
static_assert(offsetof(FSongPos, Beat) == 0x00001C, "Member 'FSongPos::Beat' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalBeat) == 0x000020, "Member 'FSongPos::FractionalBeat' has a wrong offset!");
static_assert(offsetof(FSongPos, Measure) == 0x000024, "Member 'FSongPos::Measure' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalMeasure) == 0x000028, "Member 'FSongPos::FractionalMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, BeatInMeasure) == 0x00002C, "Member 'FSongPos::BeatInMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalBeatInMeasure) == 0x000030, "Member 'FSongPos::FractionalBeatInMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, TickInMeasure) == 0x000034, "Member 'FSongPos::TickInMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalTickInMeasure) == 0x000038, "Member 'FSongPos::FractionalTickInMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, TickInBeat) == 0x00003C, "Member 'FSongPos::TickInBeat' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalTickInBeat) == 0x000040, "Member 'FSongPos::FractionalTickInBeat' has a wrong offset!");
static_assert(offsetof(FSongPos, PulseInMeasure) == 0x000044, "Member 'FSongPos::PulseInMeasure' has a wrong offset!");
static_assert(offsetof(FSongPos, FractionalPulseInMeasure) == 0x000048, "Member 'FSongPos::FractionalPulseInMeasure' has a wrong offset!");

}
