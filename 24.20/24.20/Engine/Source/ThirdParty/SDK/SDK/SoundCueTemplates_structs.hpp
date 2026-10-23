#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

enum class ESoundContainerType : uint8
{
	Concatenate                              = 0,
	Randomize                                = 1,
	Mix                                      = 2,
	ESoundContainerType_MAX                  = 3,
};

struct FSoundCueCrossfadeInfo final
{
public:
	struct FDistanceDatum                         DistanceInfo;
	uint8                                         Pad_14[0x4];
	class USoundWave*                             sound;
};
static_assert(alignof(FSoundCueCrossfadeInfo) == 0x000008, "Wrong alignment on FSoundCueCrossfadeInfo");
static_assert(sizeof(FSoundCueCrossfadeInfo) == 0x000020, "Wrong size on FSoundCueCrossfadeInfo");
static_assert(offsetof(FSoundCueCrossfadeInfo, DistanceInfo) == 0x000000, "Member 'FSoundCueCrossfadeInfo::DistanceInfo' has a wrong offset!");
static_assert(offsetof(FSoundCueCrossfadeInfo, sound) == 0x000018, "Member 'FSoundCueCrossfadeInfo::sound' has a wrong offset!");

struct FSoundCueTemplateQualitySettings final
{
public:
	class FText                                   DisplayName;
	int32                                         MaxConcatenatedVariations;
	int32                                         MaxRandomizedVariations;
	int32                                         MaxMixVariations;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FSoundCueTemplateQualitySettings) == 0x000008, "Wrong alignment on FSoundCueTemplateQualitySettings");
static_assert(sizeof(FSoundCueTemplateQualitySettings) == 0x000028, "Wrong size on FSoundCueTemplateQualitySettings");
static_assert(offsetof(FSoundCueTemplateQualitySettings, DisplayName) == 0x000000, "Member 'FSoundCueTemplateQualitySettings::DisplayName' has a wrong offset!");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxConcatenatedVariations) == 0x000018, "Member 'FSoundCueTemplateQualitySettings::MaxConcatenatedVariations' has a wrong offset!");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxRandomizedVariations) == 0x00001C, "Member 'FSoundCueTemplateQualitySettings::MaxRandomizedVariations' has a wrong offset!");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxMixVariations) == 0x000020, "Member 'FSoundCueTemplateQualitySettings::MaxMixVariations' has a wrong offset!");

}
