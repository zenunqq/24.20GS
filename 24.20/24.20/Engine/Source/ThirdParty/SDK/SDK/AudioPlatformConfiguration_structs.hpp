#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ESoundwaveSampleRateSettings : uint8
{
	Max                                      = 0,
	High                                     = 1,
	Medium                                   = 2,
	Low                                      = 3,
	Min                                      = 4,
	MatchDevice_DEPRECATED                   = 5,
};

struct FPlatformRuntimeAudioCompressionOverrides final
{
public:
	bool                                          bOverrideCompressionTimes;
	uint8                                         Pad_1[0x3];
	float                                         DurationThreshold;
	int32                                         MaxNumRandomBranches;
	int32                                         SoundCueQualityIndex;
};
static_assert(alignof(FPlatformRuntimeAudioCompressionOverrides) == 0x000004, "Wrong alignment on FPlatformRuntimeAudioCompressionOverrides");
static_assert(sizeof(FPlatformRuntimeAudioCompressionOverrides) == 0x000010, "Wrong size on FPlatformRuntimeAudioCompressionOverrides");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, bOverrideCompressionTimes) == 0x000000, "Member 'FPlatformRuntimeAudioCompressionOverrides::bOverrideCompressionTimes' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, DurationThreshold) == 0x000004, "Member 'FPlatformRuntimeAudioCompressionOverrides::DurationThreshold' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, MaxNumRandomBranches) == 0x000008, "Member 'FPlatformRuntimeAudioCompressionOverrides::MaxNumRandomBranches' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, SoundCueQualityIndex) == 0x00000C, "Member 'FPlatformRuntimeAudioCompressionOverrides::SoundCueQualityIndex' has a wrong offset!");

}
