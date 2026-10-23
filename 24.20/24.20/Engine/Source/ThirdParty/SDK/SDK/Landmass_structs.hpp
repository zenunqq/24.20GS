#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EBrushFalloffMode : uint8
{
	Angle                                    = 0,
	Width                                    = 1,
	EBrushFalloffMode_MAX                    = 2,
};

enum class EBrushBlendType : uint8
{
	AlphaBlend                               = 0,
	Min                                      = 1,
	Max                                      = 2,
	Additive                                 = 3,
};

struct FBrushEffectBlurring final
{
public:
	bool                                          bBlurShape;
	uint8                                         Pad_1[0x3];
	int32                                         Radius;
};
static_assert(alignof(FBrushEffectBlurring) == 0x000004, "Wrong alignment on FBrushEffectBlurring");
static_assert(sizeof(FBrushEffectBlurring) == 0x000008, "Wrong size on FBrushEffectBlurring");
static_assert(offsetof(FBrushEffectBlurring, bBlurShape) == 0x000000, "Member 'FBrushEffectBlurring::bBlurShape' has a wrong offset!");
static_assert(offsetof(FBrushEffectBlurring, Radius) == 0x000004, "Member 'FBrushEffectBlurring::Radius' has a wrong offset!");

struct FBrushEffectCurlNoise final
{
public:
	float                                         Curl1Amount;
	float                                         Curl2Amount;
	float                                         Curl1Tiling;
	float                                         Curl2Tiling;
};
static_assert(alignof(FBrushEffectCurlNoise) == 0x000004, "Wrong alignment on FBrushEffectCurlNoise");
static_assert(sizeof(FBrushEffectCurlNoise) == 0x000010, "Wrong size on FBrushEffectCurlNoise");
static_assert(offsetof(FBrushEffectCurlNoise, Curl1Amount) == 0x000000, "Member 'FBrushEffectCurlNoise::Curl1Amount' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Amount) == 0x000004, "Member 'FBrushEffectCurlNoise::Curl2Amount' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl1Tiling) == 0x000008, "Member 'FBrushEffectCurlNoise::Curl1Tiling' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Tiling) == 0x00000C, "Member 'FBrushEffectCurlNoise::Curl2Tiling' has a wrong offset!");

struct FBrushEffectCurves final
{
public:
	bool                                          bUseCurveChannel;
	uint8                                         Pad_1[0x7];
	class UCurveFloat*                            ElevationCurveAsset;
	float                                         ChannelEdgeOffset;
	float                                         ChannelDepth;
	float                                         CurveRampWidth;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FBrushEffectCurves) == 0x000008, "Wrong alignment on FBrushEffectCurves");
static_assert(sizeof(FBrushEffectCurves) == 0x000020, "Wrong size on FBrushEffectCurves");
static_assert(offsetof(FBrushEffectCurves, bUseCurveChannel) == 0x000000, "Member 'FBrushEffectCurves::bUseCurveChannel' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ElevationCurveAsset) == 0x000008, "Member 'FBrushEffectCurves::ElevationCurveAsset' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ChannelEdgeOffset) == 0x000010, "Member 'FBrushEffectCurves::ChannelEdgeOffset' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ChannelDepth) == 0x000014, "Member 'FBrushEffectCurves::ChannelDepth' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, CurveRampWidth) == 0x000018, "Member 'FBrushEffectCurves::CurveRampWidth' has a wrong offset!");

struct FBrushEffectDisplacement final
{
public:
	float                                         DisplacementHeight;
	float                                         DisplacementTiling;
	class UTexture2D*                             Texture;
	float                                         Midpoint;
	struct FLinearColor                           Channel;
	float                                         WeightmapInfluence;
};
static_assert(alignof(FBrushEffectDisplacement) == 0x000008, "Wrong alignment on FBrushEffectDisplacement");
static_assert(sizeof(FBrushEffectDisplacement) == 0x000028, "Wrong size on FBrushEffectDisplacement");
static_assert(offsetof(FBrushEffectDisplacement, DisplacementHeight) == 0x000000, "Member 'FBrushEffectDisplacement::DisplacementHeight' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, DisplacementTiling) == 0x000004, "Member 'FBrushEffectDisplacement::DisplacementTiling' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Texture) == 0x000008, "Member 'FBrushEffectDisplacement::Texture' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Midpoint) == 0x000010, "Member 'FBrushEffectDisplacement::Midpoint' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Channel) == 0x000014, "Member 'FBrushEffectDisplacement::Channel' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, WeightmapInfluence) == 0x000024, "Member 'FBrushEffectDisplacement::WeightmapInfluence' has a wrong offset!");

struct FBrushEffectSmoothBlending final
{
public:
	float                                         InnerSmoothDistance;
	float                                         OuterSmoothDistance;
};
static_assert(alignof(FBrushEffectSmoothBlending) == 0x000004, "Wrong alignment on FBrushEffectSmoothBlending");
static_assert(sizeof(FBrushEffectSmoothBlending) == 0x000008, "Wrong size on FBrushEffectSmoothBlending");
static_assert(offsetof(FBrushEffectSmoothBlending, InnerSmoothDistance) == 0x000000, "Member 'FBrushEffectSmoothBlending::InnerSmoothDistance' has a wrong offset!");
static_assert(offsetof(FBrushEffectSmoothBlending, OuterSmoothDistance) == 0x000004, "Member 'FBrushEffectSmoothBlending::OuterSmoothDistance' has a wrong offset!");

struct FBrushEffectTerracing final
{
public:
	float                                         TerraceAlpha;
	float                                         TerraceSpacing;
	float                                         TerraceSmoothness;
	float                                         MaskLength;
	float                                         MaskStartOffset;
};
static_assert(alignof(FBrushEffectTerracing) == 0x000004, "Wrong alignment on FBrushEffectTerracing");
static_assert(sizeof(FBrushEffectTerracing) == 0x000014, "Wrong size on FBrushEffectTerracing");
static_assert(offsetof(FBrushEffectTerracing, TerraceAlpha) == 0x000000, "Member 'FBrushEffectTerracing::TerraceAlpha' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, TerraceSpacing) == 0x000004, "Member 'FBrushEffectTerracing::TerraceSpacing' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, TerraceSmoothness) == 0x000008, "Member 'FBrushEffectTerracing::TerraceSmoothness' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, MaskLength) == 0x00000C, "Member 'FBrushEffectTerracing::MaskLength' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, MaskStartOffset) == 0x000010, "Member 'FBrushEffectTerracing::MaskStartOffset' has a wrong offset!");

struct FLandmassBrushEffectsList final
{
public:
	struct FBrushEffectBlurring                   Blurring;
	struct FBrushEffectCurlNoise                  CurlNoise;
	struct FBrushEffectDisplacement               Displacement;
	struct FBrushEffectSmoothBlending             SmoothBlending;
	struct FBrushEffectTerracing                  Terracing;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FLandmassBrushEffectsList) == 0x000008, "Wrong alignment on FLandmassBrushEffectsList");
static_assert(sizeof(FLandmassBrushEffectsList) == 0x000060, "Wrong size on FLandmassBrushEffectsList");
static_assert(offsetof(FLandmassBrushEffectsList, Blurring) == 0x000000, "Member 'FLandmassBrushEffectsList::Blurring' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, CurlNoise) == 0x000008, "Member 'FLandmassBrushEffectsList::CurlNoise' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, Displacement) == 0x000018, "Member 'FLandmassBrushEffectsList::Displacement' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, SmoothBlending) == 0x000040, "Member 'FLandmassBrushEffectsList::SmoothBlending' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, Terracing) == 0x000048, "Member 'FLandmassBrushEffectsList::Terracing' has a wrong offset!");

struct FLandmassFalloffSettings final
{
public:
	EBrushFalloffMode                             FalloffMode;
	uint8                                         Pad_1[0x3];
	float                                         FalloffAngle;
	float                                         FalloffWidth;
	float                                         EdgeOffset;
	float                                         ZOffset;
};
static_assert(alignof(FLandmassFalloffSettings) == 0x000004, "Wrong alignment on FLandmassFalloffSettings");
static_assert(sizeof(FLandmassFalloffSettings) == 0x000014, "Wrong size on FLandmassFalloffSettings");
static_assert(offsetof(FLandmassFalloffSettings, FalloffMode) == 0x000000, "Member 'FLandmassFalloffSettings::FalloffMode' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, FalloffAngle) == 0x000004, "Member 'FLandmassFalloffSettings::FalloffAngle' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, FalloffWidth) == 0x000008, "Member 'FLandmassFalloffSettings::FalloffWidth' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, EdgeOffset) == 0x00000C, "Member 'FLandmassFalloffSettings::EdgeOffset' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, ZOffset) == 0x000010, "Member 'FLandmassFalloffSettings::ZOffset' has a wrong offset!");

struct FLandmassTerrainCarvingSettings final
{
public:
	EBrushBlendType                               BlendMode;
	bool                                          bInvertShape;
	uint8                                         Pad_2[0x2];
	struct FLandmassFalloffSettings               FalloffSettings;
	struct FLandmassBrushEffectsList              Effects;
	int32                                         Priority;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FLandmassTerrainCarvingSettings) == 0x000008, "Wrong alignment on FLandmassTerrainCarvingSettings");
static_assert(sizeof(FLandmassTerrainCarvingSettings) == 0x000080, "Wrong size on FLandmassTerrainCarvingSettings");
static_assert(offsetof(FLandmassTerrainCarvingSettings, BlendMode) == 0x000000, "Member 'FLandmassTerrainCarvingSettings::BlendMode' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, bInvertShape) == 0x000001, "Member 'FLandmassTerrainCarvingSettings::bInvertShape' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, FalloffSettings) == 0x000004, "Member 'FLandmassTerrainCarvingSettings::FalloffSettings' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Effects) == 0x000018, "Member 'FLandmassTerrainCarvingSettings::Effects' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Priority) == 0x000078, "Member 'FLandmassTerrainCarvingSettings::Priority' has a wrong offset!");

}
