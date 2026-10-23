#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EBuoyancyEvent : uint8
{
	EnteredWaterBody                         = 0,
	ExitedWaterBody                          = 1,
	EBuoyancyEvent_MAX                       = 2,
};

enum class EWaveSpectrumType : uint8
{
	Phillips                                 = 0,
	PiersonMoskowitz                         = 1,
	JONSWAP                                  = 2,
	EWaveSpectrumType_MAX                    = 3,
};

enum class EWaterBrushBlendType : uint8
{
	AlphaBlend                               = 0,
	Min                                      = 1,
	Max                                      = 2,
	Additive                                 = 3,
};

enum class EWaterBodyType : uint8
{
	River                                    = 0,
	Lake                                     = 1,
	Ocean                                    = 2,
	Transition                               = 3,
	Num                                      = 4,
	EWaterBodyType_MAX                       = 5,
};

enum class EWaterBrushFalloffMode : uint8
{
	Angle                                    = 0,
	Width                                    = 1,
	EWaterBrushFalloffMode_MAX               = 2,
};

struct FWaterBodyWeightmapSettings final
{
public:
	float                                         FalloffWidth;
	float                                         EdgeOffset;
	class UTexture2D*                             ModulationTexture;
	float                                         TextureTiling;
	float                                         TextureInfluence;
	float                                         Midpoint;
	float                                         FinalOpacity;
};
static_assert(alignof(FWaterBodyWeightmapSettings) == 0x000008, "Wrong alignment on FWaterBodyWeightmapSettings");
static_assert(sizeof(FWaterBodyWeightmapSettings) == 0x000020, "Wrong size on FWaterBodyWeightmapSettings");
static_assert(offsetof(FWaterBodyWeightmapSettings, FalloffWidth) == 0x000000, "Member 'FWaterBodyWeightmapSettings::FalloffWidth' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, EdgeOffset) == 0x000004, "Member 'FWaterBodyWeightmapSettings::EdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, ModulationTexture) == 0x000008, "Member 'FWaterBodyWeightmapSettings::ModulationTexture' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureTiling) == 0x000010, "Member 'FWaterBodyWeightmapSettings::TextureTiling' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureInfluence) == 0x000014, "Member 'FWaterBodyWeightmapSettings::TextureInfluence' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, Midpoint) == 0x000018, "Member 'FWaterBodyWeightmapSettings::Midpoint' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, FinalOpacity) == 0x00001C, "Member 'FWaterBodyWeightmapSettings::FinalOpacity' has a wrong offset!");

struct FWaterBrushEffectSmoothBlending final
{
public:
	float                                         InnerSmoothDistance;
	float                                         OuterSmoothDistance;
};
static_assert(alignof(FWaterBrushEffectSmoothBlending) == 0x000004, "Wrong alignment on FWaterBrushEffectSmoothBlending");
static_assert(sizeof(FWaterBrushEffectSmoothBlending) == 0x000008, "Wrong size on FWaterBrushEffectSmoothBlending");
static_assert(offsetof(FWaterBrushEffectSmoothBlending, InnerSmoothDistance) == 0x000000, "Member 'FWaterBrushEffectSmoothBlending::InnerSmoothDistance' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectSmoothBlending, OuterSmoothDistance) == 0x000004, "Member 'FWaterBrushEffectSmoothBlending::OuterSmoothDistance' has a wrong offset!");

struct FSphericalPontoon final
{
public:
	class FName                                   CenterSocket;
	uint8                                         Pad_4[0x4];
	struct FVector                                RelativeLocation;
	float                                         Radius;
	bool                                          bFXEnabled;
	uint8                                         Pad_25[0x3];
	struct FVector                                LocalForce;
	struct FVector                                CenterLocation;
	uint8                                         Pad_58[0x8];
	struct FQuat                                  SocketRotation;
	struct FVector                                Offset;
	uint8                                         Pad_98[0x4];
	float                                         WaterHeight;
	float                                         WaterDepth;
	float                                         ImmersionDepth;
	struct FVector                                WaterPlaneLocation;
	struct FVector                                WaterPlaneNormal;
	struct FVector                                WaterSurfacePosition;
	struct FVector                                WaterVelocity;
	int32                                         WaterBodyIndex;
	bool                                          bIsInWater;
	uint8                                         Pad_10D[0x1AB];
	class UWaterBodyComponent*                    CurrentWaterBodyComponent;
	uint8                                         Pad_2C0[0x10];
};
static_assert(alignof(FSphericalPontoon) == 0x000010, "Wrong alignment on FSphericalPontoon");
static_assert(sizeof(FSphericalPontoon) == 0x0002D0, "Wrong size on FSphericalPontoon");
static_assert(offsetof(FSphericalPontoon, CenterSocket) == 0x000000, "Member 'FSphericalPontoon::CenterSocket' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, RelativeLocation) == 0x000008, "Member 'FSphericalPontoon::RelativeLocation' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, Radius) == 0x000020, "Member 'FSphericalPontoon::Radius' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, bFXEnabled) == 0x000024, "Member 'FSphericalPontoon::bFXEnabled' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, LocalForce) == 0x000028, "Member 'FSphericalPontoon::LocalForce' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, CenterLocation) == 0x000040, "Member 'FSphericalPontoon::CenterLocation' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, SocketRotation) == 0x000060, "Member 'FSphericalPontoon::SocketRotation' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, Offset) == 0x000080, "Member 'FSphericalPontoon::Offset' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterHeight) == 0x00009C, "Member 'FSphericalPontoon::WaterHeight' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterDepth) == 0x0000A0, "Member 'FSphericalPontoon::WaterDepth' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, ImmersionDepth) == 0x0000A4, "Member 'FSphericalPontoon::ImmersionDepth' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterPlaneLocation) == 0x0000A8, "Member 'FSphericalPontoon::WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterPlaneNormal) == 0x0000C0, "Member 'FSphericalPontoon::WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterSurfacePosition) == 0x0000D8, "Member 'FSphericalPontoon::WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterVelocity) == 0x0000F0, "Member 'FSphericalPontoon::WaterVelocity' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, WaterBodyIndex) == 0x000108, "Member 'FSphericalPontoon::WaterBodyIndex' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, bIsInWater) == 0x00010C, "Member 'FSphericalPontoon::bIsInWater' has a wrong offset!");
static_assert(offsetof(FSphericalPontoon, CurrentWaterBodyComponent) == 0x0002B8, "Member 'FSphericalPontoon::CurrentWaterBodyComponent' has a wrong offset!");

struct FBuoyancyData final
{
public:
	TArray<struct FSphericalPontoon>              Pontoons;
	bool                                          bCenterPontoonsOnCOM;
	uint8                                         Pad_11[0x3];
	float                                         BuoyancyCoefficient;
	float                                         BuoyancyDamp;
	float                                         BuoyancyDamp2;
	float                                         BuoyancyRampMinVelocity;
	float                                         BuoyancyRampMaxVelocity;
	float                                         BuoyancyRampMax;
	float                                         MaxBuoyantForce;
	bool                                          bApplyDragForcesInWater;
	uint8                                         Pad_31[0x3];
	float                                         DragCoefficient;
	float                                         DragCoefficient2;
	float                                         AngularDragCoefficient;
	float                                         MaxDragSpeed;
	bool                                          bApplyRiverForces;
	uint8                                         Pad_45[0x3];
	int32                                         RiverPontoonIndex;
	float                                         WaterShorePushFactor;
	float                                         RiverTraversalPathWidth;
	float                                         MaxShorePushForce;
	float                                         WaterVelocityStrength;
	float                                         MaxWaterForce;
	bool                                          bAlwaysAllowLateralPush;
	bool                                          bAllowCurrentWhenMovingFastUpstream;
	bool                                          bApplyDownstreamAngularRotation;
	uint8                                         Pad_63[0x5];
	struct FVector                                DownstreamAxisOfRotation;
	float                                         DownstreamRotationStrength;
	float                                         DownstreamRotationStiffness;
	float                                         DownstreamRotationAngularDamping;
	float                                         DownstreamMaxAcceleration;
};
static_assert(alignof(FBuoyancyData) == 0x000008, "Wrong alignment on FBuoyancyData");
static_assert(sizeof(FBuoyancyData) == 0x000090, "Wrong size on FBuoyancyData");
static_assert(offsetof(FBuoyancyData, Pontoons) == 0x000000, "Member 'FBuoyancyData::Pontoons' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bCenterPontoonsOnCOM) == 0x000010, "Member 'FBuoyancyData::bCenterPontoonsOnCOM' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyCoefficient) == 0x000014, "Member 'FBuoyancyData::BuoyancyCoefficient' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyDamp) == 0x000018, "Member 'FBuoyancyData::BuoyancyDamp' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyDamp2) == 0x00001C, "Member 'FBuoyancyData::BuoyancyDamp2' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMinVelocity) == 0x000020, "Member 'FBuoyancyData::BuoyancyRampMinVelocity' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMaxVelocity) == 0x000024, "Member 'FBuoyancyData::BuoyancyRampMaxVelocity' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMax) == 0x000028, "Member 'FBuoyancyData::BuoyancyRampMax' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, MaxBuoyantForce) == 0x00002C, "Member 'FBuoyancyData::MaxBuoyantForce' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bApplyDragForcesInWater) == 0x000030, "Member 'FBuoyancyData::bApplyDragForcesInWater' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DragCoefficient) == 0x000034, "Member 'FBuoyancyData::DragCoefficient' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DragCoefficient2) == 0x000038, "Member 'FBuoyancyData::DragCoefficient2' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, AngularDragCoefficient) == 0x00003C, "Member 'FBuoyancyData::AngularDragCoefficient' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, MaxDragSpeed) == 0x000040, "Member 'FBuoyancyData::MaxDragSpeed' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bApplyRiverForces) == 0x000044, "Member 'FBuoyancyData::bApplyRiverForces' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, RiverPontoonIndex) == 0x000048, "Member 'FBuoyancyData::RiverPontoonIndex' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, WaterShorePushFactor) == 0x00004C, "Member 'FBuoyancyData::WaterShorePushFactor' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, RiverTraversalPathWidth) == 0x000050, "Member 'FBuoyancyData::RiverTraversalPathWidth' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, MaxShorePushForce) == 0x000054, "Member 'FBuoyancyData::MaxShorePushForce' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, WaterVelocityStrength) == 0x000058, "Member 'FBuoyancyData::WaterVelocityStrength' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, MaxWaterForce) == 0x00005C, "Member 'FBuoyancyData::MaxWaterForce' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bAlwaysAllowLateralPush) == 0x000060, "Member 'FBuoyancyData::bAlwaysAllowLateralPush' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bAllowCurrentWhenMovingFastUpstream) == 0x000061, "Member 'FBuoyancyData::bAllowCurrentWhenMovingFastUpstream' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, bApplyDownstreamAngularRotation) == 0x000062, "Member 'FBuoyancyData::bApplyDownstreamAngularRotation' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DownstreamAxisOfRotation) == 0x000068, "Member 'FBuoyancyData::DownstreamAxisOfRotation' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DownstreamRotationStrength) == 0x000080, "Member 'FBuoyancyData::DownstreamRotationStrength' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DownstreamRotationStiffness) == 0x000084, "Member 'FBuoyancyData::DownstreamRotationStiffness' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DownstreamRotationAngularDamping) == 0x000088, "Member 'FBuoyancyData::DownstreamRotationAngularDamping' has a wrong offset!");
static_assert(offsetof(FBuoyancyData, DownstreamMaxAcceleration) == 0x00008C, "Member 'FBuoyancyData::DownstreamMaxAcceleration' has a wrong offset!");

struct FWaterCurveSettings final
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
static_assert(alignof(FWaterCurveSettings) == 0x000008, "Wrong alignment on FWaterCurveSettings");
static_assert(sizeof(FWaterCurveSettings) == 0x000020, "Wrong size on FWaterCurveSettings");
static_assert(offsetof(FWaterCurveSettings, bUseCurveChannel) == 0x000000, "Member 'FWaterCurveSettings::bUseCurveChannel' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ElevationCurveAsset) == 0x000008, "Member 'FWaterCurveSettings::ElevationCurveAsset' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ChannelEdgeOffset) == 0x000010, "Member 'FWaterCurveSettings::ChannelEdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ChannelDepth) == 0x000014, "Member 'FWaterCurveSettings::ChannelDepth' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, CurveRampWidth) == 0x000018, "Member 'FWaterCurveSettings::CurveRampWidth' has a wrong offset!");

struct FGerstnerWave final
{
public:
	float                                         WaveLength;
	float                                         Amplitude;
	float                                         Steepness;
	uint8                                         Pad_C[0x4];
	struct FVector                                Direction;
	struct FVector2D                              WaveVector;
	float                                         WaveSpeed;
	float                                         WKA;
	float                                         Q;
	float                                         PhaseOffset;
};
static_assert(alignof(FGerstnerWave) == 0x000008, "Wrong alignment on FGerstnerWave");
static_assert(sizeof(FGerstnerWave) == 0x000048, "Wrong size on FGerstnerWave");
static_assert(offsetof(FGerstnerWave, WaveLength) == 0x000000, "Member 'FGerstnerWave::WaveLength' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, Amplitude) == 0x000004, "Member 'FGerstnerWave::Amplitude' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, Steepness) == 0x000008, "Member 'FGerstnerWave::Steepness' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, Direction) == 0x000010, "Member 'FGerstnerWave::Direction' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, WaveVector) == 0x000028, "Member 'FGerstnerWave::WaveVector' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, WaveSpeed) == 0x000038, "Member 'FGerstnerWave::WaveSpeed' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, WKA) == 0x00003C, "Member 'FGerstnerWave::WKA' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, Q) == 0x000040, "Member 'FGerstnerWave::Q' has a wrong offset!");
static_assert(offsetof(FGerstnerWave, PhaseOffset) == 0x000044, "Member 'FGerstnerWave::PhaseOffset' has a wrong offset!");

struct FGerstnerWaveOctave final
{
public:
	int32                                         NumWaves;
	float                                         AmplitudeScale;
	float                                         MainDirection;
	float                                         SpreadAngle;
	bool                                          bUniformSpread;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FGerstnerWaveOctave) == 0x000004, "Wrong alignment on FGerstnerWaveOctave");
static_assert(sizeof(FGerstnerWaveOctave) == 0x000014, "Wrong size on FGerstnerWaveOctave");
static_assert(offsetof(FGerstnerWaveOctave, NumWaves) == 0x000000, "Member 'FGerstnerWaveOctave::NumWaves' has a wrong offset!");
static_assert(offsetof(FGerstnerWaveOctave, AmplitudeScale) == 0x000004, "Member 'FGerstnerWaveOctave::AmplitudeScale' has a wrong offset!");
static_assert(offsetof(FGerstnerWaveOctave, MainDirection) == 0x000008, "Member 'FGerstnerWaveOctave::MainDirection' has a wrong offset!");
static_assert(offsetof(FGerstnerWaveOctave, SpreadAngle) == 0x00000C, "Member 'FGerstnerWaveOctave::SpreadAngle' has a wrong offset!");
static_assert(offsetof(FGerstnerWaveOctave, bUniformSpread) == 0x000010, "Member 'FGerstnerWaveOctave::bUniformSpread' has a wrong offset!");

struct FUnderwaterPostProcessSettings final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x3];
	float                                         Priority;
	float                                         BlendRadius;
	float                                         BlendWeight;
	struct FPostProcessSettings                   PostProcessSettings;
	class UMaterialInterface*                     UnderwaterPostProcessMaterial;
	uint8                                         Pad_6F8[0x8];
};
static_assert(alignof(FUnderwaterPostProcessSettings) == 0x000010, "Wrong alignment on FUnderwaterPostProcessSettings");
static_assert(sizeof(FUnderwaterPostProcessSettings) == 0x000700, "Wrong size on FUnderwaterPostProcessSettings");
static_assert(offsetof(FUnderwaterPostProcessSettings, bEnabled) == 0x000000, "Member 'FUnderwaterPostProcessSettings::bEnabled' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, Priority) == 0x000004, "Member 'FUnderwaterPostProcessSettings::Priority' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendRadius) == 0x000008, "Member 'FUnderwaterPostProcessSettings::BlendRadius' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendWeight) == 0x00000C, "Member 'FUnderwaterPostProcessSettings::BlendWeight' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, PostProcessSettings) == 0x000010, "Member 'FUnderwaterPostProcessSettings::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial) == 0x0006F0, "Member 'FUnderwaterPostProcessSettings::UnderwaterPostProcessMaterial' has a wrong offset!");

struct FWaterFalloffSettings final
{
public:
	EWaterBrushFalloffMode                        FalloffMode;
	uint8                                         Pad_1[0x3];
	float                                         FalloffAngle;
	float                                         FalloffWidth;
	float                                         EdgeOffset;
	float                                         ZOffset;
};
static_assert(alignof(FWaterFalloffSettings) == 0x000004, "Wrong alignment on FWaterFalloffSettings");
static_assert(sizeof(FWaterFalloffSettings) == 0x000014, "Wrong size on FWaterFalloffSettings");
static_assert(offsetof(FWaterFalloffSettings, FalloffMode) == 0x000000, "Member 'FWaterFalloffSettings::FalloffMode' has a wrong offset!");
static_assert(offsetof(FWaterFalloffSettings, FalloffAngle) == 0x000004, "Member 'FWaterFalloffSettings::FalloffAngle' has a wrong offset!");
static_assert(offsetof(FWaterFalloffSettings, FalloffWidth) == 0x000008, "Member 'FWaterFalloffSettings::FalloffWidth' has a wrong offset!");
static_assert(offsetof(FWaterFalloffSettings, EdgeOffset) == 0x00000C, "Member 'FWaterFalloffSettings::EdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterFalloffSettings, ZOffset) == 0x000010, "Member 'FWaterFalloffSettings::ZOffset' has a wrong offset!");

struct FWaterBrushEffectBlurring final
{
public:
	bool                                          bBlurShape;
	uint8                                         Pad_1[0x3];
	int32                                         Radius;
};
static_assert(alignof(FWaterBrushEffectBlurring) == 0x000004, "Wrong alignment on FWaterBrushEffectBlurring");
static_assert(sizeof(FWaterBrushEffectBlurring) == 0x000008, "Wrong size on FWaterBrushEffectBlurring");
static_assert(offsetof(FWaterBrushEffectBlurring, bBlurShape) == 0x000000, "Member 'FWaterBrushEffectBlurring::bBlurShape' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectBlurring, Radius) == 0x000004, "Member 'FWaterBrushEffectBlurring::Radius' has a wrong offset!");

struct FWaterBrushEffectCurlNoise final
{
public:
	float                                         Curl1Amount;
	float                                         Curl2Amount;
	float                                         Curl1Tiling;
	float                                         Curl2Tiling;
};
static_assert(alignof(FWaterBrushEffectCurlNoise) == 0x000004, "Wrong alignment on FWaterBrushEffectCurlNoise");
static_assert(sizeof(FWaterBrushEffectCurlNoise) == 0x000010, "Wrong size on FWaterBrushEffectCurlNoise");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl1Amount) == 0x000000, "Member 'FWaterBrushEffectCurlNoise::Curl1Amount' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl2Amount) == 0x000004, "Member 'FWaterBrushEffectCurlNoise::Curl2Amount' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl1Tiling) == 0x000008, "Member 'FWaterBrushEffectCurlNoise::Curl1Tiling' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl2Tiling) == 0x00000C, "Member 'FWaterBrushEffectCurlNoise::Curl2Tiling' has a wrong offset!");

struct FWaterBrushEffectDisplacement final
{
public:
	float                                         DisplacementHeight;
	float                                         DisplacementTiling;
	class UTexture2D*                             Texture;
	float                                         Midpoint;
	struct FLinearColor                           Channel;
	float                                         WeightmapInfluence;
};
static_assert(alignof(FWaterBrushEffectDisplacement) == 0x000008, "Wrong alignment on FWaterBrushEffectDisplacement");
static_assert(sizeof(FWaterBrushEffectDisplacement) == 0x000028, "Wrong size on FWaterBrushEffectDisplacement");
static_assert(offsetof(FWaterBrushEffectDisplacement, DisplacementHeight) == 0x000000, "Member 'FWaterBrushEffectDisplacement::DisplacementHeight' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectDisplacement, DisplacementTiling) == 0x000004, "Member 'FWaterBrushEffectDisplacement::DisplacementTiling' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectDisplacement, Texture) == 0x000008, "Member 'FWaterBrushEffectDisplacement::Texture' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectDisplacement, Midpoint) == 0x000010, "Member 'FWaterBrushEffectDisplacement::Midpoint' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectDisplacement, Channel) == 0x000014, "Member 'FWaterBrushEffectDisplacement::Channel' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectDisplacement, WeightmapInfluence) == 0x000024, "Member 'FWaterBrushEffectDisplacement::WeightmapInfluence' has a wrong offset!");

struct FWaterBrushEffectTerracing final
{
public:
	float                                         TerraceAlpha;
	float                                         TerraceSpacing;
	float                                         TerraceSmoothness;
	float                                         MaskLength;
	float                                         MaskStartOffset;
};
static_assert(alignof(FWaterBrushEffectTerracing) == 0x000004, "Wrong alignment on FWaterBrushEffectTerracing");
static_assert(sizeof(FWaterBrushEffectTerracing) == 0x000014, "Wrong size on FWaterBrushEffectTerracing");
static_assert(offsetof(FWaterBrushEffectTerracing, TerraceAlpha) == 0x000000, "Member 'FWaterBrushEffectTerracing::TerraceAlpha' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectTerracing, TerraceSpacing) == 0x000004, "Member 'FWaterBrushEffectTerracing::TerraceSpacing' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectTerracing, TerraceSmoothness) == 0x000008, "Member 'FWaterBrushEffectTerracing::TerraceSmoothness' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectTerracing, MaskLength) == 0x00000C, "Member 'FWaterBrushEffectTerracing::MaskLength' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectTerracing, MaskStartOffset) == 0x000010, "Member 'FWaterBrushEffectTerracing::MaskStartOffset' has a wrong offset!");

struct FWaterBrushEffects final
{
public:
	struct FWaterBrushEffectBlurring              Blurring;
	struct FWaterBrushEffectCurlNoise             CurlNoise;
	struct FWaterBrushEffectDisplacement          Displacement;
	struct FWaterBrushEffectSmoothBlending        SmoothBlending;
	struct FWaterBrushEffectTerracing             Terracing;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FWaterBrushEffects) == 0x000008, "Wrong alignment on FWaterBrushEffects");
static_assert(sizeof(FWaterBrushEffects) == 0x000060, "Wrong size on FWaterBrushEffects");
static_assert(offsetof(FWaterBrushEffects, Blurring) == 0x000000, "Member 'FWaterBrushEffects::Blurring' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffects, CurlNoise) == 0x000008, "Member 'FWaterBrushEffects::CurlNoise' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffects, Displacement) == 0x000018, "Member 'FWaterBrushEffects::Displacement' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffects, SmoothBlending) == 0x000040, "Member 'FWaterBrushEffects::SmoothBlending' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffects, Terracing) == 0x000048, "Member 'FWaterBrushEffects::Terracing' has a wrong offset!");

struct FWaterBodyHeightmapSettings final
{
public:
	EWaterBrushBlendType                          BlendMode;
	bool                                          bInvertShape;
	uint8                                         Pad_2[0x2];
	struct FWaterFalloffSettings                  FalloffSettings;
	struct FWaterBrushEffects                     Effects;
	int32                                         Priority;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FWaterBodyHeightmapSettings) == 0x000008, "Wrong alignment on FWaterBodyHeightmapSettings");
static_assert(sizeof(FWaterBodyHeightmapSettings) == 0x000080, "Wrong size on FWaterBodyHeightmapSettings");
static_assert(offsetof(FWaterBodyHeightmapSettings, BlendMode) == 0x000000, "Member 'FWaterBodyHeightmapSettings::BlendMode' has a wrong offset!");
static_assert(offsetof(FWaterBodyHeightmapSettings, bInvertShape) == 0x000001, "Member 'FWaterBodyHeightmapSettings::bInvertShape' has a wrong offset!");
static_assert(offsetof(FWaterBodyHeightmapSettings, FalloffSettings) == 0x000004, "Member 'FWaterBodyHeightmapSettings::FalloffSettings' has a wrong offset!");
static_assert(offsetof(FWaterBodyHeightmapSettings, Effects) == 0x000018, "Member 'FWaterBodyHeightmapSettings::Effects' has a wrong offset!");
static_assert(offsetof(FWaterBodyHeightmapSettings, Priority) == 0x000078, "Member 'FWaterBodyHeightmapSettings::Priority' has a wrong offset!");

struct FWaterBrushEffectCurves final
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
static_assert(alignof(FWaterBrushEffectCurves) == 0x000008, "Wrong alignment on FWaterBrushEffectCurves");
static_assert(sizeof(FWaterBrushEffectCurves) == 0x000020, "Wrong size on FWaterBrushEffectCurves");
static_assert(offsetof(FWaterBrushEffectCurves, bUseCurveChannel) == 0x000000, "Member 'FWaterBrushEffectCurves::bUseCurveChannel' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurves, ElevationCurveAsset) == 0x000008, "Member 'FWaterBrushEffectCurves::ElevationCurveAsset' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurves, ChannelEdgeOffset) == 0x000010, "Member 'FWaterBrushEffectCurves::ChannelEdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurves, ChannelDepth) == 0x000014, "Member 'FWaterBrushEffectCurves::ChannelDepth' has a wrong offset!");
static_assert(offsetof(FWaterBrushEffectCurves, CurveRampWidth) == 0x000018, "Member 'FWaterBrushEffectCurves::CurveRampWidth' has a wrong offset!");

struct FWaterSplineCurveDefaults final
{
public:
	float                                         DefaultDepth;
	float                                         DefaultWidth;
	float                                         DefaultVelocity;
	float                                         DefaultAudioIntensity;
};
static_assert(alignof(FWaterSplineCurveDefaults) == 0x000004, "Wrong alignment on FWaterSplineCurveDefaults");
static_assert(sizeof(FWaterSplineCurveDefaults) == 0x000010, "Wrong size on FWaterSplineCurveDefaults");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultDepth) == 0x000000, "Member 'FWaterSplineCurveDefaults::DefaultDepth' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultWidth) == 0x000004, "Member 'FWaterSplineCurveDefaults::DefaultWidth' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultVelocity) == 0x000008, "Member 'FWaterSplineCurveDefaults::DefaultVelocity' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultAudioIntensity) == 0x00000C, "Member 'FWaterSplineCurveDefaults::DefaultAudioIntensity' has a wrong offset!");

}
