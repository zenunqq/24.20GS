#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EPointLightDeviceModes : uint8
{
	Constant                                 = 0,
	Flicker                                  = 1,
	Wave                                     = 2,
	ShortCircuit                             = 3,
	Party                                    = 4,
	Windy                                    = 5,
	Flash                                    = 6,
	EPointLightDeviceModes_MAX               = 7,
};

enum class EPointLightDeviceLightType : uint8
{
	Point                                    = 0,
	Spot                                     = 1,
	EPointLightDeviceLightType_MAX           = 2,
};

struct FPointLightRhythmParameters final
{
public:
	struct FLinearColor                           LightColor;
	class ULightComponent*                        ActiveLight;
	class UStaticMeshComponent*                   StaticMeshComponent;
	int32                                         ColorBands;
	float                                         RhythmFrequencyValue;
	float                                         WindAmplitudeSpotLight;
	float                                         FlashFactor;
	float                                         SizeBasedIntensity;
	EPointLightDeviceLightType                    LightType;
	EPointLightDeviceModes                        RhythmMode;
	uint8                                         Pad_36[0x2];
};
static_assert(alignof(FPointLightRhythmParameters) == 0x000008, "Wrong alignment on FPointLightRhythmParameters");
static_assert(sizeof(FPointLightRhythmParameters) == 0x000038, "Wrong size on FPointLightRhythmParameters");
static_assert(offsetof(FPointLightRhythmParameters, LightColor) == 0x000000, "Member 'FPointLightRhythmParameters::LightColor' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, ActiveLight) == 0x000010, "Member 'FPointLightRhythmParameters::ActiveLight' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, StaticMeshComponent) == 0x000018, "Member 'FPointLightRhythmParameters::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, ColorBands) == 0x000020, "Member 'FPointLightRhythmParameters::ColorBands' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, RhythmFrequencyValue) == 0x000024, "Member 'FPointLightRhythmParameters::RhythmFrequencyValue' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, WindAmplitudeSpotLight) == 0x000028, "Member 'FPointLightRhythmParameters::WindAmplitudeSpotLight' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, FlashFactor) == 0x00002C, "Member 'FPointLightRhythmParameters::FlashFactor' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, SizeBasedIntensity) == 0x000030, "Member 'FPointLightRhythmParameters::SizeBasedIntensity' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, LightType) == 0x000034, "Member 'FPointLightRhythmParameters::LightType' has a wrong offset!");
static_assert(offsetof(FPointLightRhythmParameters, RhythmMode) == 0x000035, "Member 'FPointLightRhythmParameters::RhythmMode' has a wrong offset!");

}
