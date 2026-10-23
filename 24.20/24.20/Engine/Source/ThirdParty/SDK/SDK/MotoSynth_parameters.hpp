#pragma once

#include "Basic.hpp"

#include "MotoSynth_structs.hpp"

namespace SDK::Params
{

struct SynthComponentMoto_GetRPMRange final
{
public:
	float                                         OutMinRPM;
	float                                         OutMaxRPM;
};
static_assert(alignof(SynthComponentMoto_GetRPMRange) == 0x000004, "Wrong alignment on SynthComponentMoto_GetRPMRange");
static_assert(sizeof(SynthComponentMoto_GetRPMRange) == 0x000008, "Wrong size on SynthComponentMoto_GetRPMRange");
static_assert(offsetof(SynthComponentMoto_GetRPMRange, OutMinRPM) == 0x000000, "Member 'SynthComponentMoto_GetRPMRange::OutMinRPM' has a wrong offset!");
static_assert(offsetof(SynthComponentMoto_GetRPMRange, OutMaxRPM) == 0x000004, "Member 'SynthComponentMoto_GetRPMRange::OutMaxRPM' has a wrong offset!");

struct SynthComponentMoto_SetRPM final
{
public:
	float                                         InRPM;
	float                                         InTimeSec;
};
static_assert(alignof(SynthComponentMoto_SetRPM) == 0x000004, "Wrong alignment on SynthComponentMoto_SetRPM");
static_assert(sizeof(SynthComponentMoto_SetRPM) == 0x000008, "Wrong size on SynthComponentMoto_SetRPM");
static_assert(offsetof(SynthComponentMoto_SetRPM, InRPM) == 0x000000, "Member 'SynthComponentMoto_SetRPM::InRPM' has a wrong offset!");
static_assert(offsetof(SynthComponentMoto_SetRPM, InTimeSec) == 0x000004, "Member 'SynthComponentMoto_SetRPM::InTimeSec' has a wrong offset!");

struct SynthComponentMoto_SetSettings final
{
public:
	struct FMotoSynthRuntimeSettings              InSettings;
};
static_assert(alignof(SynthComponentMoto_SetSettings) == 0x000008, "Wrong alignment on SynthComponentMoto_SetSettings");
static_assert(sizeof(SynthComponentMoto_SetSettings) == 0x000138, "Wrong size on SynthComponentMoto_SetSettings");
static_assert(offsetof(SynthComponentMoto_SetSettings, InSettings) == 0x000000, "Member 'SynthComponentMoto_SetSettings::InSettings' has a wrong offset!");

struct SynthComponentMoto_IsEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SynthComponentMoto_IsEnabled) == 0x000001, "Wrong alignment on SynthComponentMoto_IsEnabled");
static_assert(sizeof(SynthComponentMoto_IsEnabled) == 0x000001, "Wrong size on SynthComponentMoto_IsEnabled");
static_assert(offsetof(SynthComponentMoto_IsEnabled, ReturnValue) == 0x000000, "Member 'SynthComponentMoto_IsEnabled::ReturnValue' has a wrong offset!");

}
