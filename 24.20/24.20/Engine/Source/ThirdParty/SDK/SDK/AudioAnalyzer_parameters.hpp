#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AudioAnalyzer_StartAnalyzing final
{
public:
	const class UObject*                          WorldContextObject;
	class UAudioBus*                              AudioBusToAnalyze;
};
static_assert(alignof(AudioAnalyzer_StartAnalyzing) == 0x000008, "Wrong alignment on AudioAnalyzer_StartAnalyzing");
static_assert(sizeof(AudioAnalyzer_StartAnalyzing) == 0x000010, "Wrong size on AudioAnalyzer_StartAnalyzing");
static_assert(offsetof(AudioAnalyzer_StartAnalyzing, WorldContextObject) == 0x000000, "Member 'AudioAnalyzer_StartAnalyzing::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioAnalyzer_StartAnalyzing, AudioBusToAnalyze) == 0x000008, "Member 'AudioAnalyzer_StartAnalyzing::AudioBusToAnalyze' has a wrong offset!");

struct AudioAnalyzer_StopAnalyzing final
{
public:
	const class UObject*                          WorldContextObject;
};
static_assert(alignof(AudioAnalyzer_StopAnalyzing) == 0x000008, "Wrong alignment on AudioAnalyzer_StopAnalyzing");
static_assert(sizeof(AudioAnalyzer_StopAnalyzing) == 0x000008, "Wrong size on AudioAnalyzer_StopAnalyzing");
static_assert(offsetof(AudioAnalyzer_StopAnalyzing, WorldContextObject) == 0x000000, "Member 'AudioAnalyzer_StopAnalyzing::WorldContextObject' has a wrong offset!");

}
