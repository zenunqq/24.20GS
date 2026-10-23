#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PointLight_structs.hpp"

namespace SDK::Params
{

struct PointLightNativeComponent_StartRhythmUpdate final
{
public:
	struct FTimerHandle                           TimerHandle;
	float                                         Rate;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(PointLightNativeComponent_StartRhythmUpdate) == 0x000008, "Wrong alignment on PointLightNativeComponent_StartRhythmUpdate");
static_assert(sizeof(PointLightNativeComponent_StartRhythmUpdate) == 0x000010, "Wrong size on PointLightNativeComponent_StartRhythmUpdate");
static_assert(offsetof(PointLightNativeComponent_StartRhythmUpdate, TimerHandle) == 0x000000, "Member 'PointLightNativeComponent_StartRhythmUpdate::TimerHandle' has a wrong offset!");
static_assert(offsetof(PointLightNativeComponent_StartRhythmUpdate, Rate) == 0x000008, "Member 'PointLightNativeComponent_StartRhythmUpdate::Rate' has a wrong offset!");

struct PointLightNativeComponent_StartShortCircuitUpdate final
{
public:
	class UTimelineComponent*                     ShortCircuitTimeline;
};
static_assert(alignof(PointLightNativeComponent_StartShortCircuitUpdate) == 0x000008, "Wrong alignment on PointLightNativeComponent_StartShortCircuitUpdate");
static_assert(sizeof(PointLightNativeComponent_StartShortCircuitUpdate) == 0x000008, "Wrong size on PointLightNativeComponent_StartShortCircuitUpdate");
static_assert(offsetof(PointLightNativeComponent_StartShortCircuitUpdate, ShortCircuitTimeline) == 0x000000, "Member 'PointLightNativeComponent_StartShortCircuitUpdate::ShortCircuitTimeline' has a wrong offset!");

struct PointLightNativeComponent_UpdateDeviceSettings final
{
public:
	struct FPointLightRhythmParameters            RhythmParameters;
};
static_assert(alignof(PointLightNativeComponent_UpdateDeviceSettings) == 0x000008, "Wrong alignment on PointLightNativeComponent_UpdateDeviceSettings");
static_assert(sizeof(PointLightNativeComponent_UpdateDeviceSettings) == 0x000038, "Wrong size on PointLightNativeComponent_UpdateDeviceSettings");
static_assert(offsetof(PointLightNativeComponent_UpdateDeviceSettings, RhythmParameters) == 0x000000, "Member 'PointLightNativeComponent_UpdateDeviceSettings::RhythmParameters' has a wrong offset!");

}
