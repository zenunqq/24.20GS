#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ERaQualityMode : uint8
{
	STEREO_PANNING                           = 0,
	BINAURAL_LOW                             = 1,
	BINAURAL_MEDIUM                          = 2,
	BINAURAL_HIGH                            = 3,
	ERaQualityMode_MAX                       = 4,
};

enum class ERaSpatializationMethod : uint8
{
	STEREO_PANNING                           = 0,
	HRTF                                     = 1,
	ERaSpatializationMethod_MAX              = 2,
};

enum class ERaDistanceRolloffModel : uint8
{
	LOGARITHMIC                              = 0,
	LINEAR                                   = 1,
	NONE                                     = 2,
	ERaDistanceRolloffModel_MAX              = 3,
};

enum class ERaMaterialName : uint8
{
	TRANSPARENT_0                            = 0,
	ACOUSTIC_CEILING_TILES                   = 1,
	BRICK_BARE                               = 2,
	BRICK_PAINTED                            = 3,
	CONCRETE_BLOCK_COARSE                    = 4,
	CONCRETE_BLOCK_PAINTED                   = 5,
	CURTAIN_HEAVY                            = 6,
	FIBER_GLASS_INSULATION                   = 7,
	GLASS_THIN                               = 8,
	GLASS_THICK                              = 9,
	GRASS                                    = 10,
	LINOLEUM_ON_CONCRETE                     = 11,
	MARBLE                                   = 12,
	METAL                                    = 13,
	PARQUET_ONCONCRETE                       = 14,
	PLASTER_ROUGH                            = 15,
	PLASTER_SMOOTH                           = 16,
	PLYWOOD_PANEL                            = 17,
	POLISHED_CONCRETE_OR_TILE                = 18,
	SHEETROCK                                = 19,
	WATER_OR_ICE_SURFACE                     = 20,
	WOOD_CEILING                             = 21,
	WOOD_PANEL                               = 22,
	UNIFORM                                  = 23,
	ERaMaterialName_MAX                      = 24,
};

enum class EResonanceRenderMode : uint8
{
	StereoPanning                            = 0,
	BinauralLowQuality                       = 1,
	BinauralMediumQuality                    = 2,
	BinauralHighQuality                      = 3,
	RoomEffectsOnly                          = 4,
	EResonanceRenderMode_MAX                 = 5,
};

struct FResonanceAudioReverbPluginSettings final
{
public:
	bool                                          bEnableRoomEffects;
	bool                                          bGetTransformFromAudioVolume;
	uint8                                         Pad_2[0x6];
	struct FVector                                RoomPosition;
	struct FQuat                                  RoomRotation;
	struct FVector                                RoomDimensions;
	ERaMaterialName                               LeftWallMaterial;
	ERaMaterialName                               RightWallMaterial;
	ERaMaterialName                               FloorMaterial;
	ERaMaterialName                               CeilingMaterial;
	ERaMaterialName                               FrontWallMaterial;
	ERaMaterialName                               BackWallMaterial;
	uint8                                         Pad_5E[0x2];
	float                                         ReflectionScalar;
	float                                         ReverbGain;
	float                                         ReverbTimeModifier;
	float                                         ReverbBrightness;
};
static_assert(alignof(FResonanceAudioReverbPluginSettings) == 0x000010, "Wrong alignment on FResonanceAudioReverbPluginSettings");
static_assert(sizeof(FResonanceAudioReverbPluginSettings) == 0x000070, "Wrong size on FResonanceAudioReverbPluginSettings");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, bEnableRoomEffects) == 0x000000, "Member 'FResonanceAudioReverbPluginSettings::bEnableRoomEffects' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, bGetTransformFromAudioVolume) == 0x000001, "Member 'FResonanceAudioReverbPluginSettings::bGetTransformFromAudioVolume' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomPosition) == 0x000008, "Member 'FResonanceAudioReverbPluginSettings::RoomPosition' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomRotation) == 0x000020, "Member 'FResonanceAudioReverbPluginSettings::RoomRotation' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomDimensions) == 0x000040, "Member 'FResonanceAudioReverbPluginSettings::RoomDimensions' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, LeftWallMaterial) == 0x000058, "Member 'FResonanceAudioReverbPluginSettings::LeftWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RightWallMaterial) == 0x000059, "Member 'FResonanceAudioReverbPluginSettings::RightWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FloorMaterial) == 0x00005A, "Member 'FResonanceAudioReverbPluginSettings::FloorMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, CeilingMaterial) == 0x00005B, "Member 'FResonanceAudioReverbPluginSettings::CeilingMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FrontWallMaterial) == 0x00005C, "Member 'FResonanceAudioReverbPluginSettings::FrontWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, BackWallMaterial) == 0x00005D, "Member 'FResonanceAudioReverbPluginSettings::BackWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReflectionScalar) == 0x000060, "Member 'FResonanceAudioReverbPluginSettings::ReflectionScalar' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbGain) == 0x000064, "Member 'FResonanceAudioReverbPluginSettings::ReverbGain' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbTimeModifier) == 0x000068, "Member 'FResonanceAudioReverbPluginSettings::ReverbTimeModifier' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbBrightness) == 0x00006C, "Member 'FResonanceAudioReverbPluginSettings::ReverbBrightness' has a wrong offset!");

}
