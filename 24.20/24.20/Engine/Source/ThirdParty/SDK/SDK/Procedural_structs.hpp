#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EProceduralParameterModifierBlendMode : uint8
{
	Min                                      = 0,
	Max                                      = 1,
	Additive                                 = 2,
	Subtractive                              = 3,
	Multiply                                 = 4,
	Interpolate                              = 5,
};

enum class EProceduralRotationFormat : uint8
{
	VectorXAxis                              = 0,
	VectorXAxisNegative                      = 1,
	VectorYAxis                              = 2,
	VectorYAxisNegative                      = 3,
	VectorZAxis                              = 4,
	VectorZAxisNegative                      = 5,
	Vector2DXAxis                            = 6,
	Vector2DXAxisNegative                    = 7,
	Vector2DYAxis                            = 8,
	Vector2DYAxisNegative                    = 9,
	Vector2DZAxis                            = 10,
	Vector2DZAxisNegative                    = 11,
	RangedRotator                            = 12,
	EProceduralRotationFormat_MAX            = 13,
};

enum class EProceduralTextureColorChannel : uint8
{
	Red                                      = 0,
	Green                                    = 1,
	Blue                                     = 2,
	Alpha                                    = 3,
	EProceduralTextureColorChannel_MAX       = 4,
};

enum class EProceduralScatterContentPivotMode : uint8
{
	UsePivot                                 = 0,
	UseBoundingBoxCenter                     = 1,
	UseBoundingBoxBottomCenter               = 2,
	UseFootprintBoundingBoxBottomCenter      = 3,
	EProceduralScatterContentPivotMode_MAX   = 4,
};

enum class EProceduralScatterTileRandomGenerator : uint8
{
	PseudoRandom                             = 0,
	HaltonSequence                           = 1,
	EProceduralScatterTileRandomGenerator_MAX = 2,
};

enum class EProceduralScatterMethod : uint8
{
	Density                                  = 0,
	SourcePoints                             = 1,
	Grid                                     = 2,
	EProceduralScatterMethod_MAX             = 3,
};

enum class EProceduralScatterStaticMeshMode : uint8
{
	FromStaticMesh                           = 0,
	FromActor                                = 1,
	EProceduralScatterStaticMeshMode_MAX     = 2,
};

struct FProceduralPointCloudPoint final
{
public:
	struct FTransform                             Transform;
	struct FVector                                SurfaceNormal;
	class UObject*                                SurfaceObject;
	class UObject*                                Object;
	int32                                         ObjectVariation;
	uint8                                         Pad_8C[0x4];
	TArray<class FName>                           Tags;
	float                                         CollisionRadius;
	float                                         SourcePointGeneratorIndex;
	uint8                                         Pad_A8[0x8];
};
static_assert(alignof(FProceduralPointCloudPoint) == 0x000010, "Wrong alignment on FProceduralPointCloudPoint");
static_assert(sizeof(FProceduralPointCloudPoint) == 0x0000B0, "Wrong size on FProceduralPointCloudPoint");
static_assert(offsetof(FProceduralPointCloudPoint, Transform) == 0x000000, "Member 'FProceduralPointCloudPoint::Transform' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, SurfaceNormal) == 0x000060, "Member 'FProceduralPointCloudPoint::SurfaceNormal' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, SurfaceObject) == 0x000078, "Member 'FProceduralPointCloudPoint::SurfaceObject' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, Object) == 0x000080, "Member 'FProceduralPointCloudPoint::Object' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, ObjectVariation) == 0x000088, "Member 'FProceduralPointCloudPoint::ObjectVariation' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, Tags) == 0x000090, "Member 'FProceduralPointCloudPoint::Tags' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, CollisionRadius) == 0x0000A0, "Member 'FProceduralPointCloudPoint::CollisionRadius' has a wrong offset!");
static_assert(offsetof(FProceduralPointCloudPoint, SourcePointGeneratorIndex) == 0x0000A4, "Member 'FProceduralPointCloudPoint::SourcePointGeneratorIndex' has a wrong offset!");

struct FProceduralHitPoint final
{
public:
	bool                                          bIsTraceDone;
	uint8                                         Pad_1[0x7];
	struct FVector                                Position;
	struct FVector                                Normal;
	TWeakObjectPtr<class UPrimitiveComponent>     Component;
};
static_assert(alignof(FProceduralHitPoint) == 0x000008, "Wrong alignment on FProceduralHitPoint");
static_assert(sizeof(FProceduralHitPoint) == 0x000040, "Wrong size on FProceduralHitPoint");
static_assert(offsetof(FProceduralHitPoint, bIsTraceDone) == 0x000000, "Member 'FProceduralHitPoint::bIsTraceDone' has a wrong offset!");
static_assert(offsetof(FProceduralHitPoint, Position) == 0x000008, "Member 'FProceduralHitPoint::Position' has a wrong offset!");
static_assert(offsetof(FProceduralHitPoint, Normal) == 0x000020, "Member 'FProceduralHitPoint::Normal' has a wrong offset!");
static_assert(offsetof(FProceduralHitPoint, Component) == 0x000038, "Member 'FProceduralHitPoint::Component' has a wrong offset!");

struct FProceduralScatterPoint final
{
public:
	struct FVector                                Location;
	struct FRotator                               Rotation;
	float                                         Scale;
	uint8                                         Pad_34[0x4];
	class UProceduralScatterSettings*             ScatterSettings;
	int32                                         VariationIdx;
	uint8                                         Pad_44[0x4];
	struct FVector                                GenerationLocation;
	struct FProceduralHitPoint                    HitPoint;
};
static_assert(alignof(FProceduralScatterPoint) == 0x000008, "Wrong alignment on FProceduralScatterPoint");
static_assert(sizeof(FProceduralScatterPoint) == 0x0000A0, "Wrong size on FProceduralScatterPoint");
static_assert(offsetof(FProceduralScatterPoint, Location) == 0x000000, "Member 'FProceduralScatterPoint::Location' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, Rotation) == 0x000018, "Member 'FProceduralScatterPoint::Rotation' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, Scale) == 0x000030, "Member 'FProceduralScatterPoint::Scale' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, ScatterSettings) == 0x000038, "Member 'FProceduralScatterPoint::ScatterSettings' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, VariationIdx) == 0x000040, "Member 'FProceduralScatterPoint::VariationIdx' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, GenerationLocation) == 0x000048, "Member 'FProceduralScatterPoint::GenerationLocation' has a wrong offset!");
static_assert(offsetof(FProceduralScatterPoint, HitPoint) == 0x000060, "Member 'FProceduralScatterPoint::HitPoint' has a wrong offset!");

struct FProceduralScatterProjectionPoint final
{
public:
	struct FVector                                GenerationLocation;
	struct FRotator                               Rotation;
	float                                         Scale;
	uint8                                         Pad_34[0x4];
	class UProceduralScatterSettings*             ScatterSettings;
	int32                                         VariationIdx;
	uint8                                         Pad_44[0x4];
	struct FVector                                StartTrace;
	struct FVector                                EndTrace;
	struct FProceduralHitPoint                    HitPoint;
	uint8                                         Pad_B8[0x8];
};
static_assert(alignof(FProceduralScatterProjectionPoint) == 0x000008, "Wrong alignment on FProceduralScatterProjectionPoint");
static_assert(sizeof(FProceduralScatterProjectionPoint) == 0x0000C0, "Wrong size on FProceduralScatterProjectionPoint");
static_assert(offsetof(FProceduralScatterProjectionPoint, GenerationLocation) == 0x000000, "Member 'FProceduralScatterProjectionPoint::GenerationLocation' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, Rotation) == 0x000018, "Member 'FProceduralScatterProjectionPoint::Rotation' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, Scale) == 0x000030, "Member 'FProceduralScatterProjectionPoint::Scale' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, ScatterSettings) == 0x000038, "Member 'FProceduralScatterProjectionPoint::ScatterSettings' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, VariationIdx) == 0x000040, "Member 'FProceduralScatterProjectionPoint::VariationIdx' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, StartTrace) == 0x000048, "Member 'FProceduralScatterProjectionPoint::StartTrace' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, EndTrace) == 0x000060, "Member 'FProceduralScatterProjectionPoint::EndTrace' has a wrong offset!");
static_assert(offsetof(FProceduralScatterProjectionPoint, HitPoint) == 0x000078, "Member 'FProceduralScatterProjectionPoint::HitPoint' has a wrong offset!");

struct FProceduralTextureSource final
{
public:
	bool                                          bUseRenderTarget;
	uint8                                         Pad_1[0x7];
	class UTexture2D*                             Texture;
	class UTextureRenderTarget2D*                 RenderTarget;
	class UMaterialInterface*                     RenderTargetMaterial;
	bool                                          bStretchToFit;
	uint8                                         Pad_21[0x3];
	float                                         TexelSize;
	float                                         XOffset;
	float                                         YOffset;
	float                                         Rotation;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FProceduralTextureSource) == 0x000008, "Wrong alignment on FProceduralTextureSource");
static_assert(sizeof(FProceduralTextureSource) == 0x000038, "Wrong size on FProceduralTextureSource");
static_assert(offsetof(FProceduralTextureSource, bUseRenderTarget) == 0x000000, "Member 'FProceduralTextureSource::bUseRenderTarget' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, Texture) == 0x000008, "Member 'FProceduralTextureSource::Texture' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, RenderTarget) == 0x000010, "Member 'FProceduralTextureSource::RenderTarget' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, RenderTargetMaterial) == 0x000018, "Member 'FProceduralTextureSource::RenderTargetMaterial' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, bStretchToFit) == 0x000020, "Member 'FProceduralTextureSource::bStretchToFit' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, TexelSize) == 0x000024, "Member 'FProceduralTextureSource::TexelSize' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, XOffset) == 0x000028, "Member 'FProceduralTextureSource::XOffset' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, YOffset) == 0x00002C, "Member 'FProceduralTextureSource::YOffset' has a wrong offset!");
static_assert(offsetof(FProceduralTextureSource, Rotation) == 0x000030, "Member 'FProceduralTextureSource::Rotation' has a wrong offset!");

struct FProceduralContentVariationMap final
{
public:
	int32                                         VariationIndex;
	uint8                                         Pad_4[0x4];
	class UProceduralFloatDataMap*                Map;
	float                                         Weight;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FProceduralContentVariationMap) == 0x000008, "Wrong alignment on FProceduralContentVariationMap");
static_assert(sizeof(FProceduralContentVariationMap) == 0x000018, "Wrong size on FProceduralContentVariationMap");
static_assert(offsetof(FProceduralContentVariationMap, VariationIndex) == 0x000000, "Member 'FProceduralContentVariationMap::VariationIndex' has a wrong offset!");
static_assert(offsetof(FProceduralContentVariationMap, Map) == 0x000008, "Member 'FProceduralContentVariationMap::Map' has a wrong offset!");
static_assert(offsetof(FProceduralContentVariationMap, Weight) == 0x000010, "Member 'FProceduralContentVariationMap::Weight' has a wrong offset!");

struct FProceduralRemapFloatCurve final
{
public:
	struct FRuntimeFloatCurve                     RemapCurve;
};
static_assert(alignof(FProceduralRemapFloatCurve) == 0x000008, "Wrong alignment on FProceduralRemapFloatCurve");
static_assert(sizeof(FProceduralRemapFloatCurve) == 0x000088, "Wrong size on FProceduralRemapFloatCurve");
static_assert(offsetof(FProceduralRemapFloatCurve, RemapCurve) == 0x000000, "Member 'FProceduralRemapFloatCurve::RemapCurve' has a wrong offset!");

struct FProceduralRemapVectorCurve final
{
public:
	struct FRuntimeCurveLinearColor               RemapCurve;
};
static_assert(alignof(FProceduralRemapVectorCurve) == 0x000008, "Wrong alignment on FProceduralRemapVectorCurve");
static_assert(sizeof(FProceduralRemapVectorCurve) == 0x000208, "Wrong size on FProceduralRemapVectorCurve");
static_assert(offsetof(FProceduralRemapVectorCurve, RemapCurve) == 0x000000, "Member 'FProceduralRemapVectorCurve::RemapCurve' has a wrong offset!");

struct FProceduralDebugSettings final
{
public:
	bool                                          bShowDebugPointCloud;
	uint8                                         Pad_1[0x3];
	struct FColor                                 DebugPointColor;
	float                                         DebugCullingDistance;
};
static_assert(alignof(FProceduralDebugSettings) == 0x000004, "Wrong alignment on FProceduralDebugSettings");
static_assert(sizeof(FProceduralDebugSettings) == 0x00000C, "Wrong size on FProceduralDebugSettings");
static_assert(offsetof(FProceduralDebugSettings, bShowDebugPointCloud) == 0x000000, "Member 'FProceduralDebugSettings::bShowDebugPointCloud' has a wrong offset!");
static_assert(offsetof(FProceduralDebugSettings, DebugPointColor) == 0x000004, "Member 'FProceduralDebugSettings::DebugPointColor' has a wrong offset!");
static_assert(offsetof(FProceduralDebugSettings, DebugCullingDistance) == 0x000008, "Member 'FProceduralDebugSettings::DebugCullingDistance' has a wrong offset!");

struct FProceduralGenerationStackElement final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x7];
	class UProceduralGenerator*                   Generator;
};
static_assert(alignof(FProceduralGenerationStackElement) == 0x000008, "Wrong alignment on FProceduralGenerationStackElement");
static_assert(sizeof(FProceduralGenerationStackElement) == 0x000010, "Wrong size on FProceduralGenerationStackElement");
static_assert(offsetof(FProceduralGenerationStackElement, bEnabled) == 0x000000, "Member 'FProceduralGenerationStackElement::bEnabled' has a wrong offset!");
static_assert(offsetof(FProceduralGenerationStackElement, Generator) == 0x000008, "Member 'FProceduralGenerationStackElement::Generator' has a wrong offset!");

struct FProceduralScatter2DPoint final
{
public:
	struct FVector                                Location;
	float                                         Scale;
	uint8                                         Pad_1C[0x4];
	class UProceduralScatterSettings*             ScatterSettings;
	struct FBox2D                                 MaxAABB;
	float                                         CollisionRadius;
	bool                                          bBlocker;
	uint8                                         Pad_55[0x3];
	int32                                         RandomNumber;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FProceduralScatter2DPoint) == 0x000008, "Wrong alignment on FProceduralScatter2DPoint");
static_assert(sizeof(FProceduralScatter2DPoint) == 0x000060, "Wrong size on FProceduralScatter2DPoint");
static_assert(offsetof(FProceduralScatter2DPoint, Location) == 0x000000, "Member 'FProceduralScatter2DPoint::Location' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, Scale) == 0x000018, "Member 'FProceduralScatter2DPoint::Scale' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, ScatterSettings) == 0x000020, "Member 'FProceduralScatter2DPoint::ScatterSettings' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, MaxAABB) == 0x000028, "Member 'FProceduralScatter2DPoint::MaxAABB' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, CollisionRadius) == 0x000050, "Member 'FProceduralScatter2DPoint::CollisionRadius' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, bBlocker) == 0x000054, "Member 'FProceduralScatter2DPoint::bBlocker' has a wrong offset!");
static_assert(offsetof(FProceduralScatter2DPoint, RandomNumber) == 0x000058, "Member 'FProceduralScatter2DPoint::RandomNumber' has a wrong offset!");

struct FProceduralScatterSettingsElement final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x7];
	class UProceduralScatterSettings*             ScatterSettings;
	int32                                         MaxPoints;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FProceduralScatterSettingsElement) == 0x000008, "Wrong alignment on FProceduralScatterSettingsElement");
static_assert(sizeof(FProceduralScatterSettingsElement) == 0x000018, "Wrong size on FProceduralScatterSettingsElement");
static_assert(offsetof(FProceduralScatterSettingsElement, bEnabled) == 0x000000, "Member 'FProceduralScatterSettingsElement::bEnabled' has a wrong offset!");
static_assert(offsetof(FProceduralScatterSettingsElement, ScatterSettings) == 0x000008, "Member 'FProceduralScatterSettingsElement::ScatterSettings' has a wrong offset!");
static_assert(offsetof(FProceduralScatterSettingsElement, MaxPoints) == 0x000010, "Member 'FProceduralScatterSettingsElement::MaxPoints' has a wrong offset!");

struct FProceduralScatterDebugSettings final
{
public:
	bool                                          bShowDebugPlane;
	bool                                          bShowDebugTrace;
	bool                                          bShowDebugFootprint;
	bool                                          bShowDebugHitNormal;
	bool                                          bShowDebugPoints;
	bool                                          bShowDebugPivots;
	uint8                                         Pad_6[0x2];
	float                                         DebugMaxCullingDistance;
};
static_assert(alignof(FProceduralScatterDebugSettings) == 0x000004, "Wrong alignment on FProceduralScatterDebugSettings");
static_assert(sizeof(FProceduralScatterDebugSettings) == 0x00000C, "Wrong size on FProceduralScatterDebugSettings");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPlane) == 0x000000, "Member 'FProceduralScatterDebugSettings::bShowDebugPlane' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugTrace) == 0x000001, "Member 'FProceduralScatterDebugSettings::bShowDebugTrace' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugFootprint) == 0x000002, "Member 'FProceduralScatterDebugSettings::bShowDebugFootprint' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugHitNormal) == 0x000003, "Member 'FProceduralScatterDebugSettings::bShowDebugHitNormal' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPoints) == 0x000004, "Member 'FProceduralScatterDebugSettings::bShowDebugPoints' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPivots) == 0x000005, "Member 'FProceduralScatterDebugSettings::bShowDebugPivots' has a wrong offset!");
static_assert(offsetof(FProceduralScatterDebugSettings, DebugMaxCullingDistance) == 0x000008, "Member 'FProceduralScatterDebugSettings::DebugMaxCullingDistance' has a wrong offset!");

struct FProceduralScatterTileSettings final
{
public:
	int32                                         NumUniqueTiles;
	float                                         TileSize;
	float                                         TileOverlapPercentage;
	float                                         MinimumQuadTreeSize;
	EProceduralScatterTileRandomGenerator         RandomGenerator;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FProceduralScatterTileSettings) == 0x000004, "Wrong alignment on FProceduralScatterTileSettings");
static_assert(sizeof(FProceduralScatterTileSettings) == 0x000014, "Wrong size on FProceduralScatterTileSettings");
static_assert(offsetof(FProceduralScatterTileSettings, NumUniqueTiles) == 0x000000, "Member 'FProceduralScatterTileSettings::NumUniqueTiles' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTileSettings, TileSize) == 0x000004, "Member 'FProceduralScatterTileSettings::TileSize' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTileSettings, TileOverlapPercentage) == 0x000008, "Member 'FProceduralScatterTileSettings::TileOverlapPercentage' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTileSettings, MinimumQuadTreeSize) == 0x00000C, "Member 'FProceduralScatterTileSettings::MinimumQuadTreeSize' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTileSettings, RandomGenerator) == 0x000010, "Member 'FProceduralScatterTileSettings::RandomGenerator' has a wrong offset!");

struct alignas(0x08) FSourcePointGenerator final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FSourcePointGenerator) == 0x000008, "Wrong alignment on FSourcePointGenerator");
static_assert(sizeof(FSourcePointGenerator) == 0x000018, "Wrong size on FSourcePointGenerator");

struct FScatteredPointCloud final
{
public:
	TArray<struct FProceduralScatterPoint>        Points;
};
static_assert(alignof(FScatteredPointCloud) == 0x000008, "Wrong alignment on FScatteredPointCloud");
static_assert(sizeof(FScatteredPointCloud) == 0x000010, "Wrong size on FScatteredPointCloud");
static_assert(offsetof(FScatteredPointCloud, Points) == 0x000000, "Member 'FScatteredPointCloud::Points' has a wrong offset!");

struct FProceduralScatterTargetSurface final
{
public:
	bool                                          bAllowLandscape;
	bool                                          bAllowBSP;
	bool                                          bAllowStaticMesh;
	bool                                          bAllowTranslucent;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           AllowedActorTags;
	TArray<class FName>                           DisallowedActorTags;
	TArray<class FName>                           AllowedComponentTags;
	TArray<class FName>                           DisallowedComponentTags;
};
static_assert(alignof(FProceduralScatterTargetSurface) == 0x000008, "Wrong alignment on FProceduralScatterTargetSurface");
static_assert(sizeof(FProceduralScatterTargetSurface) == 0x000048, "Wrong size on FProceduralScatterTargetSurface");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowLandscape) == 0x000000, "Member 'FProceduralScatterTargetSurface::bAllowLandscape' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowBSP) == 0x000001, "Member 'FProceduralScatterTargetSurface::bAllowBSP' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowStaticMesh) == 0x000002, "Member 'FProceduralScatterTargetSurface::bAllowStaticMesh' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowTranslucent) == 0x000003, "Member 'FProceduralScatterTargetSurface::bAllowTranslucent' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, AllowedActorTags) == 0x000008, "Member 'FProceduralScatterTargetSurface::AllowedActorTags' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, DisallowedActorTags) == 0x000018, "Member 'FProceduralScatterTargetSurface::DisallowedActorTags' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, AllowedComponentTags) == 0x000028, "Member 'FProceduralScatterTargetSurface::AllowedComponentTags' has a wrong offset!");
static_assert(offsetof(FProceduralScatterTargetSurface, DisallowedComponentTags) == 0x000038, "Member 'FProceduralScatterTargetSurface::DisallowedComponentTags' has a wrong offset!");

struct FProceduralContentVariationsModifiers final
{
public:
	TArray<class UProceduralContentVariationsWeightsModifier*> Modifiers;
};
static_assert(alignof(FProceduralContentVariationsModifiers) == 0x000008, "Wrong alignment on FProceduralContentVariationsModifiers");
static_assert(sizeof(FProceduralContentVariationsModifiers) == 0x000010, "Wrong size on FProceduralContentVariationsModifiers");
static_assert(offsetof(FProceduralContentVariationsModifiers, Modifiers) == 0x000000, "Member 'FProceduralContentVariationsModifiers::Modifiers' has a wrong offset!");

struct FProceduralDensityModifiers final
{
public:
	TArray<class UProceduralDensityModifier*>     Modifiers;
};
static_assert(alignof(FProceduralDensityModifiers) == 0x000008, "Wrong alignment on FProceduralDensityModifiers");
static_assert(sizeof(FProceduralDensityModifiers) == 0x000010, "Wrong size on FProceduralDensityModifiers");
static_assert(offsetof(FProceduralDensityModifiers, Modifiers) == 0x000000, "Member 'FProceduralDensityModifiers::Modifiers' has a wrong offset!");

struct FProceduralScaleModifiers final
{
public:
	bool                                          bRandomScaleEnabled;
	uint8                                         Pad_1[0x3];
	struct FFloatInterval                         RandomScale;
	uint8                                         Pad_C[0x4];
	TArray<class UProceduralScaleModifier*>       Modifiers;
};
static_assert(alignof(FProceduralScaleModifiers) == 0x000008, "Wrong alignment on FProceduralScaleModifiers");
static_assert(sizeof(FProceduralScaleModifiers) == 0x000020, "Wrong size on FProceduralScaleModifiers");
static_assert(offsetof(FProceduralScaleModifiers, bRandomScaleEnabled) == 0x000000, "Member 'FProceduralScaleModifiers::bRandomScaleEnabled' has a wrong offset!");
static_assert(offsetof(FProceduralScaleModifiers, RandomScale) == 0x000004, "Member 'FProceduralScaleModifiers::RandomScale' has a wrong offset!");
static_assert(offsetof(FProceduralScaleModifiers, Modifiers) == 0x000010, "Member 'FProceduralScaleModifiers::Modifiers' has a wrong offset!");

struct FProceduralRotationModifiers final
{
public:
	TArray<class UProceduralRotationModifier*>    Modifiers;
};
static_assert(alignof(FProceduralRotationModifiers) == 0x000008, "Wrong alignment on FProceduralRotationModifiers");
static_assert(sizeof(FProceduralRotationModifiers) == 0x000010, "Wrong size on FProceduralRotationModifiers");
static_assert(offsetof(FProceduralRotationModifiers, Modifiers) == 0x000000, "Member 'FProceduralRotationModifiers::Modifiers' has a wrong offset!");

}
