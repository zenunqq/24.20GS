#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                                 = 0,
	LSE_NoLandscapeInfo                      = 1,
	LSE_CollsionXY                           = 2,
	LSE_NoLayerInfo                          = 3,
	LSE_MAX                                  = 4,
};

enum class ERTDrawingType : uint8
{
	RTAtlas                                  = 0,
	RTAtlasToNonAtlas                        = 1,
	RTNonAtlasToAtlas                        = 2,
	RTNonAtlas                               = 3,
	RTMips                                   = 4,
	ERTDrawingType_MAX                       = 5,
};

enum class EHeightmapRTType : uint8
{
	HeightmapRT_CombinedAtlas                = 0,
	HeightmapRT_CombinedNonAtlas             = 1,
	HeightmapRT_Scratch1                     = 2,
	HeightmapRT_Scratch2                     = 3,
	HeightmapRT_Scratch3                     = 4,
	HeightmapRT_Mip1                         = 5,
	HeightmapRT_Mip2                         = 6,
	HeightmapRT_Mip3                         = 7,
	HeightmapRT_Mip4                         = 8,
	HeightmapRT_Mip5                         = 9,
	HeightmapRT_Mip6                         = 10,
	HeightmapRT_Mip7                         = 11,
	HeightmapRT_Count                        = 12,
	HeightmapRT_MAX                          = 13,
};

enum class EWeightmapRTType : uint8
{
	WeightmapRT_Scratch_RGBA                 = 0,
	WeightmapRT_Scratch1                     = 1,
	WeightmapRT_Scratch2                     = 2,
	WeightmapRT_Scratch3                     = 3,
	WeightmapRT_Mip0                         = 4,
	WeightmapRT_Mip1                         = 5,
	WeightmapRT_Mip2                         = 6,
	WeightmapRT_Mip3                         = 7,
	WeightmapRT_Mip4                         = 8,
	WeightmapRT_Mip5                         = 9,
	WeightmapRT_Mip6                         = 10,
	WeightmapRT_Mip7                         = 11,
	WeightmapRT_Count                        = 12,
	WeightmapRT_MAX                          = 13,
};

enum class ELandscapeBlendMode : uint8
{
	LSBM_AdditiveBlend                       = 0,
	LSBM_AlphaBlend                          = 1,
	LSBM_MAX                                 = 2,
};

enum class ELandscapeClearMode : uint8
{
	Clear_Weightmap                          = 1,
	Clear_Heightmap                          = 2,
	Clear_All                                = 3,
	Clear_MAX                                = 4,
};

enum class ELandscapeToolTargetType : uint8
{
	Heightmap                                = 0,
	Weightmap                                = 1,
	Visibility                               = 2,
	Invalid                                  = 3,
	ELandscapeToolTargetType_MAX             = 4,
};

enum class ELandscapeGizmoType : uint8
{
	LGT_None                                 = 0,
	LGT_Height                               = 1,
	LGT_Weight                               = 2,
	LGT_MAX                                  = 3,
};

enum class ELandscapeGizmoSnapType : uint8
{
	None                                     = 0,
	Component                                = 1,
	Texel                                    = 2,
	ELandscapeGizmoSnapType_MAX              = 3,
};

enum class EGrassScaling : uint8
{
	Uniform                                  = 0,
	Free                                     = 1,
	LockXY                                   = 2,
	EGrassScaling_MAX                        = 3,
};

enum class ESplineModulationColorMask : uint8
{
	Red                                      = 0,
	Green                                    = 1,
	Blue                                     = 2,
	Alpha                                    = 3,
	ESplineModulationColorMask_MAX           = 4,
};

enum class ELandscapeDirtyingMode : uint8
{
	Auto                                     = 0,
	InLandscapeModeOnly                      = 1,
	InLandscapeModeAndUserTriggeredChanges   = 2,
	ELandscapeDirtyingMode_MAX               = 3,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                                 = 0,
	LSMO_YUp                                 = 1,
	LSMO_MAX                                 = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                           = 0,
	LB_AlphaBlend                            = 1,
	LB_HeightBlend                           = 2,
	LB_MAX                                   = 3,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                                = 0,
	TCMT_XY                                  = 1,
	TCMT_XZ                                  = 2,
	TCMT_YZ                                  = 3,
	TCMT_MAX                                 = 4,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                                = 0,
	LCCT_CustomUV0                           = 1,
	LCCT_CustomUV1                           = 2,
	LCCT_CustomUV2                           = 3,
	LCCT_WeightMapUV                         = 4,
	LCCT_MAX                                 = 5,
};

enum class ELandscapeResizeMode : uint8
{
	Resample                                 = 0,
	Clip                                     = 1,
	Expand                                   = 2,
	ELandscapeResizeMode_MAX                 = 3,
};

enum class ELandscapeImportAlphamapType : uint8
{
	Additive                                 = 0,
	Layered                                  = 1,
	ELandscapeImportAlphamapType_MAX         = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                                     = 0,
	UseMaxLayers                             = 1,
	ExistingOnly                             = 2,
	UseComponentAllowList                    = 3,
	ELandscapeLayerPaintingRestriction_MAX   = 4,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	Default                                  = 0,
	Alphabetical                             = 1,
	UserSpecific                             = 2,
	ELandscapeLayerDisplayMode_MAX           = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	Linear                                   = 0,
	SquareRoot                               = 1,
	ELandscapeLODFalloff_MAX                 = 2,
};

struct FHeightmapData final
{
public:
	class UTexture2D*                             Texture;
};
static_assert(alignof(FHeightmapData) == 0x000008, "Wrong alignment on FHeightmapData");
static_assert(sizeof(FHeightmapData) == 0x000008, "Wrong size on FHeightmapData");
static_assert(offsetof(FHeightmapData, Texture) == 0x000000, "Member 'FHeightmapData::Texture' has a wrong offset!");

struct FLandscapeLayerBrush final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLandscapeLayerBrush) == 0x000001, "Wrong alignment on FLandscapeLayerBrush");
static_assert(sizeof(FLandscapeLayerBrush) == 0x000001, "Wrong size on FLandscapeLayerBrush");

struct FLandscapeLayer final
{
public:
	struct FGuid                                  Guid;
	class FName                                   Name;
	bool                                          bVisible;
	bool                                          bLocked;
	uint8                                         Pad_16[0x2];
	float                                         HeightmapAlpha;
	float                                         WeightmapAlpha;
	ELandscapeBlendMode                           BlendMode;
	uint8                                         Pad_21[0x7];
	TArray<struct FLandscapeLayerBrush>           Brushes;
	TMap<class ULandscapeLayerInfoObject*, bool>  WeightmapLayerAllocationBlend;
};
static_assert(alignof(FLandscapeLayer) == 0x000008, "Wrong alignment on FLandscapeLayer");
static_assert(sizeof(FLandscapeLayer) == 0x000088, "Wrong size on FLandscapeLayer");
static_assert(offsetof(FLandscapeLayer, Guid) == 0x000000, "Member 'FLandscapeLayer::Guid' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, Name) == 0x000010, "Member 'FLandscapeLayer::Name' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, bVisible) == 0x000014, "Member 'FLandscapeLayer::bVisible' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, bLocked) == 0x000015, "Member 'FLandscapeLayer::bLocked' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, HeightmapAlpha) == 0x000018, "Member 'FLandscapeLayer::HeightmapAlpha' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, WeightmapAlpha) == 0x00001C, "Member 'FLandscapeLayer::WeightmapAlpha' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, BlendMode) == 0x000020, "Member 'FLandscapeLayer::BlendMode' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, Brushes) == 0x000028, "Member 'FLandscapeLayer::Brushes' has a wrong offset!");
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 0x000038, "Member 'FLandscapeLayer::WeightmapLayerAllocationBlend' has a wrong offset!");

struct FLandscapeEditToolRenderData final
{
public:
	class UMaterialInterface*                     ToolMaterial;
	class UMaterialInterface*                     GizmoMaterial;
	int32                                         SelectedType;
	int32                                         DebugChannelR;
	int32                                         DebugChannelG;
	int32                                         DebugChannelB;
	class UTexture2D*                             DataTexture;
	class UTexture2D*                             LayerContributionTexture;
	class UTexture2D*                             DirtyTexture;
};
static_assert(alignof(FLandscapeEditToolRenderData) == 0x000008, "Wrong alignment on FLandscapeEditToolRenderData");
static_assert(sizeof(FLandscapeEditToolRenderData) == 0x000038, "Wrong size on FLandscapeEditToolRenderData");
static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0x000000, "Member 'FLandscapeEditToolRenderData::ToolMaterial' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 0x000008, "Member 'FLandscapeEditToolRenderData::GizmoMaterial' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, SelectedType) == 0x000010, "Member 'FLandscapeEditToolRenderData::SelectedType' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelR) == 0x000014, "Member 'FLandscapeEditToolRenderData::DebugChannelR' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelG) == 0x000018, "Member 'FLandscapeEditToolRenderData::DebugChannelG' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelB) == 0x00001C, "Member 'FLandscapeEditToolRenderData::DebugChannelB' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 0x000020, "Member 'FLandscapeEditToolRenderData::DataTexture' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 0x000028, "Member 'FLandscapeEditToolRenderData::LayerContributionTexture' has a wrong offset!");
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 0x000030, "Member 'FLandscapeEditToolRenderData::DirtyTexture' has a wrong offset!");

struct FWeightmapLayerAllocationInfo final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfo;
	uint8                                         WeightmapTextureIndex;
	uint8                                         WeightmapTextureChannel;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FWeightmapLayerAllocationInfo) == 0x000008, "Wrong alignment on FWeightmapLayerAllocationInfo");
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x000010, "Wrong size on FWeightmapLayerAllocationInfo");
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x000000, "Member 'FWeightmapLayerAllocationInfo::LayerInfo' has a wrong offset!");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureIndex) == 0x000008, "Member 'FWeightmapLayerAllocationInfo::WeightmapTextureIndex' has a wrong offset!");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureChannel) == 0x000009, "Member 'FWeightmapLayerAllocationInfo::WeightmapTextureChannel' has a wrong offset!");

struct FLandscapeComponentMaterialOverride final
{
public:
	struct FPerPlatformInt                        LODIndex;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     Material;
};
static_assert(alignof(FLandscapeComponentMaterialOverride) == 0x000008, "Wrong alignment on FLandscapeComponentMaterialOverride");
static_assert(sizeof(FLandscapeComponentMaterialOverride) == 0x000010, "Wrong size on FLandscapeComponentMaterialOverride");
static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0x000000, "Member 'FLandscapeComponentMaterialOverride::LODIndex' has a wrong offset!");
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 0x000008, "Member 'FLandscapeComponentMaterialOverride::Material' has a wrong offset!");

struct FLandscapePerLODMaterialOverride final
{
public:
	int32                                         LODIndex;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     Material;
};
static_assert(alignof(FLandscapePerLODMaterialOverride) == 0x000008, "Wrong alignment on FLandscapePerLODMaterialOverride");
static_assert(sizeof(FLandscapePerLODMaterialOverride) == 0x000010, "Wrong size on FLandscapePerLODMaterialOverride");
static_assert(offsetof(FLandscapePerLODMaterialOverride, LODIndex) == 0x000000, "Member 'FLandscapePerLODMaterialOverride::LODIndex' has a wrong offset!");
static_assert(offsetof(FLandscapePerLODMaterialOverride, Material) == 0x000008, "Member 'FLandscapePerLODMaterialOverride::Material' has a wrong offset!");

struct FWeightmapData final
{
public:
	TArray<class UTexture2D*>                     Textures;
	TArray<struct FWeightmapLayerAllocationInfo>  LayerAllocations;
	TArray<class ULandscapeWeightmapUsage*>       TextureUsages;
};
static_assert(alignof(FWeightmapData) == 0x000008, "Wrong alignment on FWeightmapData");
static_assert(sizeof(FWeightmapData) == 0x000030, "Wrong size on FWeightmapData");
static_assert(offsetof(FWeightmapData, Textures) == 0x000000, "Member 'FWeightmapData::Textures' has a wrong offset!");
static_assert(offsetof(FWeightmapData, LayerAllocations) == 0x000010, "Member 'FWeightmapData::LayerAllocations' has a wrong offset!");
static_assert(offsetof(FWeightmapData, TextureUsages) == 0x000020, "Member 'FWeightmapData::TextureUsages' has a wrong offset!");

struct FLandscapeLayerComponentData final
{
public:
	struct FHeightmapData                         HeightmapData;
	struct FWeightmapData                         WeightmapData;
};
static_assert(alignof(FLandscapeLayerComponentData) == 0x000008, "Wrong alignment on FLandscapeLayerComponentData");
static_assert(sizeof(FLandscapeLayerComponentData) == 0x000038, "Wrong size on FLandscapeLayerComponentData");
static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0x000000, "Member 'FLandscapeLayerComponentData::HeightmapData' has a wrong offset!");
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 0x000008, "Member 'FLandscapeLayerComponentData::WeightmapData' has a wrong offset!");

struct alignas(0x08) FGizmoSelectData final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FGizmoSelectData) == 0x000008, "Wrong alignment on FGizmoSelectData");
static_assert(sizeof(FGizmoSelectData) == 0x000050, "Wrong size on FGizmoSelectData");

struct FGrassVariety final
{
public:
	class UStaticMesh*                            GrassMesh;
	TArray<class UMaterialInterface*>             OverrideMaterials;
	struct FPerPlatformFloat                      GrassDensity;
	uint8                                         Pad_1C[0x4];
	struct FPerQualityLevelFloat                  GrassDensityQuality;
	bool                                          bUseGrid;
	uint8                                         Pad_89[0x3];
	float                                         PlacementJitter;
	struct FPerPlatformInt                        StartCullDistance;
	uint8                                         Pad_94[0x4];
	struct FPerQualityLevelInt                    StartCullDistanceQuality;
	struct FPerPlatformInt                        EndCullDistance;
	uint8                                         Pad_104[0x4];
	struct FPerQualityLevelInt                    EndCullDistanceQuality;
	int32                                         MinLOD;
	EGrassScaling                                 Scaling;
	uint8                                         Pad_175[0x3];
	struct FFloatInterval                         ScaleX;
	struct FFloatInterval                         ScaleY;
	struct FFloatInterval                         ScaleZ;
	bool                                          RandomRotation;
	bool                                          AlignToSurface;
	bool                                          bUseLandscapeLightmap;
	struct FLightingChannels                      LightingChannels;
	bool                                          bReceivesDecals;
	bool                                          bAffectDistanceFieldLighting;
	bool                                          bCastDynamicShadow;
	bool                                          bCastContactShadow;
	bool                                          bKeepInstanceBufferCPUCopy;
	uint8                                         Pad_199[0x3];
	uint32                                        InstanceWorldPositionOffsetDisableDistance;
};
static_assert(alignof(FGrassVariety) == 0x000008, "Wrong alignment on FGrassVariety");
static_assert(sizeof(FGrassVariety) == 0x0001A0, "Wrong size on FGrassVariety");
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x000000, "Member 'FGrassVariety::GrassMesh' has a wrong offset!");
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 0x000008, "Member 'FGrassVariety::OverrideMaterials' has a wrong offset!");
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x000018, "Member 'FGrassVariety::GrassDensity' has a wrong offset!");
static_assert(offsetof(FGrassVariety, GrassDensityQuality) == 0x000020, "Member 'FGrassVariety::GrassDensityQuality' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bUseGrid) == 0x000088, "Member 'FGrassVariety::bUseGrid' has a wrong offset!");
static_assert(offsetof(FGrassVariety, PlacementJitter) == 0x00008C, "Member 'FGrassVariety::PlacementJitter' has a wrong offset!");
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x000090, "Member 'FGrassVariety::StartCullDistance' has a wrong offset!");
static_assert(offsetof(FGrassVariety, StartCullDistanceQuality) == 0x000098, "Member 'FGrassVariety::StartCullDistanceQuality' has a wrong offset!");
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x000100, "Member 'FGrassVariety::EndCullDistance' has a wrong offset!");
static_assert(offsetof(FGrassVariety, EndCullDistanceQuality) == 0x000108, "Member 'FGrassVariety::EndCullDistanceQuality' has a wrong offset!");
static_assert(offsetof(FGrassVariety, MinLOD) == 0x000170, "Member 'FGrassVariety::MinLOD' has a wrong offset!");
static_assert(offsetof(FGrassVariety, Scaling) == 0x000174, "Member 'FGrassVariety::Scaling' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleX) == 0x000178, "Member 'FGrassVariety::ScaleX' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleY) == 0x000180, "Member 'FGrassVariety::ScaleY' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x000188, "Member 'FGrassVariety::ScaleZ' has a wrong offset!");
static_assert(offsetof(FGrassVariety, RandomRotation) == 0x000190, "Member 'FGrassVariety::RandomRotation' has a wrong offset!");
static_assert(offsetof(FGrassVariety, AlignToSurface) == 0x000191, "Member 'FGrassVariety::AlignToSurface' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bUseLandscapeLightmap) == 0x000192, "Member 'FGrassVariety::bUseLandscapeLightmap' has a wrong offset!");
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x000193, "Member 'FGrassVariety::LightingChannels' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bReceivesDecals) == 0x000194, "Member 'FGrassVariety::bReceivesDecals' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bAffectDistanceFieldLighting) == 0x000195, "Member 'FGrassVariety::bAffectDistanceFieldLighting' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bCastDynamicShadow) == 0x000196, "Member 'FGrassVariety::bCastDynamicShadow' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bCastContactShadow) == 0x000197, "Member 'FGrassVariety::bCastContactShadow' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bKeepInstanceBufferCPUCopy) == 0x000198, "Member 'FGrassVariety::bKeepInstanceBufferCPUCopy' has a wrong offset!");
static_assert(offsetof(FGrassVariety, InstanceWorldPositionOffsetDisableDistance) == 0x00019C, "Member 'FGrassVariety::InstanceWorldPositionOffsetDisableDistance' has a wrong offset!");

struct FLandscapeMaterialTextureStreamingInfo final
{
public:
	class FName                                   TextureName;
	float                                         TexelFactor;
};
static_assert(alignof(FLandscapeMaterialTextureStreamingInfo) == 0x000004, "Wrong alignment on FLandscapeMaterialTextureStreamingInfo");
static_assert(sizeof(FLandscapeMaterialTextureStreamingInfo) == 0x000008, "Wrong size on FLandscapeMaterialTextureStreamingInfo");
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0x000000, "Member 'FLandscapeMaterialTextureStreamingInfo::TextureName' has a wrong offset!");
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TexelFactor) == 0x000004, "Member 'FLandscapeMaterialTextureStreamingInfo::TexelFactor' has a wrong offset!");

struct FLandscapeSplineConnection final
{
public:
	class ULandscapeSplineSegment*                Segment;
	uint8                                         End : 1;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FLandscapeSplineConnection) == 0x000008, "Wrong alignment on FLandscapeSplineConnection");
static_assert(sizeof(FLandscapeSplineConnection) == 0x000010, "Wrong size on FLandscapeSplineConnection");
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x000000, "Member 'FLandscapeSplineConnection::Segment' has a wrong offset!");

struct FForeignControlPointData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FForeignControlPointData) == 0x000001, "Wrong alignment on FForeignControlPointData");
static_assert(sizeof(FForeignControlPointData) == 0x000001, "Wrong size on FForeignControlPointData");

struct FForeignSplineSegmentData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FForeignSplineSegmentData) == 0x000001, "Wrong alignment on FForeignSplineSegmentData");
static_assert(sizeof(FForeignSplineSegmentData) == 0x000001, "Wrong size on FForeignSplineSegmentData");

struct FForeignWorldSplineData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FForeignWorldSplineData) == 0x000001, "Wrong alignment on FForeignWorldSplineData");
static_assert(sizeof(FForeignWorldSplineData) == 0x000001, "Wrong size on FForeignWorldSplineData");

struct FLandscapeSplineInterpPoint final
{
public:
	struct FVector                                Center;
	struct FVector                                Left;
	struct FVector                                Right;
	struct FVector                                FalloffLeft;
	struct FVector                                FalloffRight;
	struct FVector                                LayerLeft;
	struct FVector                                LayerRight;
	struct FVector                                LayerFalloffLeft;
	struct FVector                                LayerFalloffRight;
	float                                         StartEndFalloff;
	uint8                                         Pad_DC[0x4];
};
static_assert(alignof(FLandscapeSplineInterpPoint) == 0x000008, "Wrong alignment on FLandscapeSplineInterpPoint");
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x0000E0, "Wrong size on FLandscapeSplineInterpPoint");
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x000000, "Member 'FLandscapeSplineInterpPoint::Center' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x000018, "Member 'FLandscapeSplineInterpPoint::Left' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x000030, "Member 'FLandscapeSplineInterpPoint::Right' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x000048, "Member 'FLandscapeSplineInterpPoint::FalloffLeft' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x000060, "Member 'FLandscapeSplineInterpPoint::FalloffRight' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 0x000078, "Member 'FLandscapeSplineInterpPoint::LayerLeft' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 0x000090, "Member 'FLandscapeSplineInterpPoint::LayerRight' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 0x0000A8, "Member 'FLandscapeSplineInterpPoint::LayerFalloffLeft' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 0x0000C0, "Member 'FLandscapeSplineInterpPoint::LayerFalloffRight' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, StartEndFalloff) == 0x0000D8, "Member 'FLandscapeSplineInterpPoint::StartEndFalloff' has a wrong offset!");

struct FLandscapeSplineSegmentConnection final
{
public:
	class ULandscapeSplineControlPoint*           ControlPoint;
	float                                         TangentLen;
	class FName                                   SocketName;
};
static_assert(alignof(FLandscapeSplineSegmentConnection) == 0x000008, "Wrong alignment on FLandscapeSplineSegmentConnection");
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x000010, "Wrong size on FLandscapeSplineSegmentConnection");
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x000000, "Member 'FLandscapeSplineSegmentConnection::ControlPoint' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineSegmentConnection, TangentLen) == 0x000008, "Member 'FLandscapeSplineSegmentConnection::TangentLen' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x00000C, "Member 'FLandscapeSplineSegmentConnection::SocketName' has a wrong offset!");

struct FLandscapeSplineMeshEntry final
{
public:
	class UStaticMesh*                            Mesh;
	TArray<class UMaterialInterface*>             MaterialOverrides;
	uint8                                         bCenterH : 1;
	uint8                                         Pad_19[0x7];
	struct FVector2D                              CenterAdjust;
	uint8                                         bScaleToWidth : 1;
	uint8                                         Pad_31[0x7];
	struct FVector                                Scale;
	ELandscapeSplineMeshOrientation               Orientation;
	ESplineMeshAxis                               ForwardAxis;
	ESplineMeshAxis                               UpAxis;
	uint8                                         Pad_53[0x5];
};
static_assert(alignof(FLandscapeSplineMeshEntry) == 0x000008, "Wrong alignment on FLandscapeSplineMeshEntry");
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x000058, "Wrong size on FLandscapeSplineMeshEntry");
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x000000, "Member 'FLandscapeSplineMeshEntry::Mesh' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x000008, "Member 'FLandscapeSplineMeshEntry::MaterialOverrides' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x000020, "Member 'FLandscapeSplineMeshEntry::CenterAdjust' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x000038, "Member 'FLandscapeSplineMeshEntry::Scale' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, Orientation) == 0x000050, "Member 'FLandscapeSplineMeshEntry::Orientation' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 0x000051, "Member 'FLandscapeSplineMeshEntry::ForwardAxis' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 0x000052, "Member 'FLandscapeSplineMeshEntry::UpAxis' has a wrong offset!");

struct FGrassInput final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class ULandscapeGrassType*                    GrassType;
	struct FExpressionInput                       Input;
};
static_assert(alignof(FGrassInput) == 0x000008, "Wrong alignment on FGrassInput");
static_assert(sizeof(FGrassInput) == 0x000038, "Wrong size on FGrassInput");
static_assert(offsetof(FGrassInput, Name) == 0x000000, "Member 'FGrassInput::Name' has a wrong offset!");
static_assert(offsetof(FGrassInput, GrassType) == 0x000008, "Member 'FGrassInput::GrassType' has a wrong offset!");
static_assert(offsetof(FGrassInput, Input) == 0x000010, "Member 'FGrassInput::Input' has a wrong offset!");

struct FLayerBlendInput final
{
public:
	class FName                                   LayerName;
	ELandscapeLayerBlendType                      BlendType;
	uint8                                         Pad_5[0x3];
	struct FExpressionInput                       LayerInput;
	struct FExpressionInput                       HeightInput;
	float                                         PreviewWeight;
	uint8                                         Pad_5C[0x4];
	struct FVector                                ConstLayerInput;
	float                                         ConstHeightInput;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FLayerBlendInput) == 0x000008, "Wrong alignment on FLayerBlendInput");
static_assert(sizeof(FLayerBlendInput) == 0x000080, "Wrong size on FLayerBlendInput");
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x000000, "Member 'FLayerBlendInput::LayerName' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, BlendType) == 0x000004, "Member 'FLayerBlendInput::BlendType' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x000008, "Member 'FLayerBlendInput::LayerInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x000030, "Member 'FLayerBlendInput::HeightInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, PreviewWeight) == 0x000058, "Member 'FLayerBlendInput::PreviewWeight' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x000060, "Member 'FLayerBlendInput::ConstLayerInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, ConstHeightInput) == 0x000078, "Member 'FLayerBlendInput::ConstHeightInput' has a wrong offset!");

struct FLandscapeBrushParameters final
{
public:
	ELandscapeToolTargetType                      LayerType;
	uint8                                         Pad_1[0x7];
	class UTextureRenderTarget2D*                 CombinedResult;
	class FName                                   WeightmapLayerName;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FLandscapeBrushParameters) == 0x000008, "Wrong alignment on FLandscapeBrushParameters");
static_assert(sizeof(FLandscapeBrushParameters) == 0x000018, "Wrong size on FLandscapeBrushParameters");
static_assert(offsetof(FLandscapeBrushParameters, LayerType) == 0x000000, "Member 'FLandscapeBrushParameters::LayerType' has a wrong offset!");
static_assert(offsetof(FLandscapeBrushParameters, CombinedResult) == 0x000008, "Member 'FLandscapeBrushParameters::CombinedResult' has a wrong offset!");
static_assert(offsetof(FLandscapeBrushParameters, WeightmapLayerName) == 0x000010, "Member 'FLandscapeBrushParameters::WeightmapLayerName' has a wrong offset!");

struct FLandscapeInfoLayerSettings final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfoObj;
	class FName                                   LayerName;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FLandscapeInfoLayerSettings) == 0x000008, "Wrong alignment on FLandscapeInfoLayerSettings");
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x000010, "Wrong size on FLandscapeInfoLayerSettings");
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x000000, "Member 'FLandscapeInfoLayerSettings::LayerInfoObj' has a wrong offset!");
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x000008, "Member 'FLandscapeInfoLayerSettings::LayerName' has a wrong offset!");

struct FLandscapeEditorLayerSettings final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLandscapeEditorLayerSettings) == 0x000001, "Wrong alignment on FLandscapeEditorLayerSettings");
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x000001, "Wrong size on FLandscapeEditorLayerSettings");

struct FLandscapeLayerStruct final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfoObj;
};
static_assert(alignof(FLandscapeLayerStruct) == 0x000008, "Wrong alignment on FLandscapeLayerStruct");
static_assert(sizeof(FLandscapeLayerStruct) == 0x000008, "Wrong size on FLandscapeLayerStruct");
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x000000, "Member 'FLandscapeLayerStruct::LayerInfoObj' has a wrong offset!");

struct FLandscapeImportLayerInfo final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLandscapeImportLayerInfo) == 0x000001, "Wrong alignment on FLandscapeImportLayerInfo");
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x000001, "Wrong size on FLandscapeImportLayerInfo");

struct FLandscapeProxyMaterialOverride final
{
public:
	struct FPerPlatformInt                        LODIndex;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     Material;
};
static_assert(alignof(FLandscapeProxyMaterialOverride) == 0x000008, "Wrong alignment on FLandscapeProxyMaterialOverride");
static_assert(sizeof(FLandscapeProxyMaterialOverride) == 0x000010, "Wrong size on FLandscapeProxyMaterialOverride");
static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0x000000, "Member 'FLandscapeProxyMaterialOverride::LODIndex' has a wrong offset!");
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 0x000008, "Member 'FLandscapeProxyMaterialOverride::Material' has a wrong offset!");

struct FPhysicalMaterialInput final
{
public:
	class UPhysicalMaterial*                      PhysicalMaterial;
	struct FExpressionInput                       Input;
};
static_assert(alignof(FPhysicalMaterialInput) == 0x000008, "Wrong alignment on FPhysicalMaterialInput");
static_assert(sizeof(FPhysicalMaterialInput) == 0x000030, "Wrong size on FPhysicalMaterialInput");
static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0x000000, "Member 'FPhysicalMaterialInput::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FPhysicalMaterialInput, Input) == 0x000008, "Member 'FPhysicalMaterialInput::Input' has a wrong offset!");

}
