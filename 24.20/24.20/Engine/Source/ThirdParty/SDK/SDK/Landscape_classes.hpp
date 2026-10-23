#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Landscape_structs.hpp"

namespace SDK
{

class UControlPointMeshComponent final : public UStaticMeshComponent
{
public:
	float                                         VirtualTextureMainPassMaxDrawDistance;
	uint8                                         Pad_624[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlPointMeshComponent">();
	}
	static class UControlPointMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlPointMeshComponent>();
	}
};
static_assert(alignof(UControlPointMeshComponent) == 0x000010, "Wrong alignment on UControlPointMeshComponent");
static_assert(sizeof(UControlPointMeshComponent) == 0x000630, "Wrong size on UControlPointMeshComponent");
static_assert(offsetof(UControlPointMeshComponent, VirtualTextureMainPassMaxDrawDistance) == 0x000620, "Member 'UControlPointMeshComponent::VirtualTextureMainPassMaxDrawDistance' has a wrong offset!");

class ILandscapeSplineInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplineInterface">();
	}
	static class ILandscapeSplineInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILandscapeSplineInterface>();
	}
};
static_assert(alignof(ILandscapeSplineInterface) == 0x000008, "Wrong alignment on ILandscapeSplineInterface");
static_assert(sizeof(ILandscapeSplineInterface) == 0x000028, "Wrong size on ILandscapeSplineInterface");

class ALandscapeProxy : public APartitionActor
{
public:
	uint8                                         Pad_288[0x8];
	class ULandscapeSplinesComponent*             SplineComponent;
	struct FGuid                                  LandscapeGuid;
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;
	struct FIntPoint                              LandscapeSectionOffset;
	int32                                         MaxLODLevel;
	float                                         ComponentScreenSizeToUseSubSections;
	float                                         LOD0ScreenSize;
	float                                         LOD0DistributionSetting;
	float                                         LODDistributionSetting;
	int32                                         StaticLightingLOD;
	class UPhysicalMaterial*                      DefaultPhysMaterial;
	float                                         StreamingDistanceMultiplier;
	uint8                                         Pad_2E4[0x4];
	class UMaterialInterface*                     LandscapeMaterial;
	uint8                                         Pad_2F0[0x20];
	class UMaterialInterface*                     LandscapeHoleMaterial;
	TArray<class URuntimeVirtualTexture*>         RuntimeVirtualTextures;
	bool                                          bSetCreateRuntimeVirtualTextureVolumes;
	bool                                          bVirtualTextureRenderWithQuad;
	bool                                          bVirtualTextureRenderWithQuadHQ;
	uint8                                         Pad_32B[0x1];
	int32                                         VirtualTextureNumLods;
	int32                                         VirtualTextureLodBias;
	ERuntimeVirtualTextureMainPassType            VirtualTextureRenderPassType;
	uint8                                         Pad_335[0x3];
	float                                         NegativeZBoundsExtension;
	float                                         PositiveZBoundsExtension;
	TArray<class ULandscapeComponent*>            LandscapeComponents;
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
	class ULandscapeNaniteComponent*              NaniteComponent;
	uint8                                         Pad_378[0x64];
	bool                                          bHasLandscapeGrass;
	uint8                                         Pad_3DD[0x3];
	float                                         StaticLightingResolution;
	uint8                                         CastShadow : 1;
	uint8                                         bCastDynamicShadow : 1;
	uint8                                         bCastStaticShadow : 1;
	uint8                                         bCastContactShadow : 1;
	uint8                                         BitPad_3E4_4 : 4;
	uint8                                         Pad_3E5[0x3];
	uint8                                         bCastFarShadow : 1;
	uint8                                         BitPad_3E8_1 : 7;
	uint8                                         Pad_3E9[0x3];
	uint8                                         bCastHiddenShadow : 1;
	uint8                                         BitPad_3EC_1 : 7;
	uint8                                         Pad_3ED[0x3];
	uint8                                         bCastShadowAsTwoSided : 1;
	uint8                                         BitPad_3F0_1 : 7;
	uint8                                         Pad_3F1[0x3];
	uint8                                         bAffectDistanceFieldLighting : 1;
	struct FLightingChannels                      LightingChannels;
	uint8                                         Pad_3F6[0x2];
	uint8                                         bUseMaterialPositionOffsetInStaticLighting : 1;
	uint8                                         bRenderCustomDepth : 1;
	uint8                                         Pad_3F9[0x3];
	ERendererStencilMask                          CustomDepthStencilWriteMask;
	uint8                                         Pad_3FD[0x3];
	int32                                         CustomDepthStencilValue;
	float                                         LDMaxDrawDistance;
	struct FLightmassPrimitiveSettings            LightmassSettings;
	int32                                         CollisionMipLevel;
	int32                                         SimpleCollisionMipLevel;
	uint8                                         Pad_428[0x8];
	struct FBodyInstance                          BodyInstance;
	uint8                                         bGenerateOverlapEvents : 1;
	uint8                                         bBakeMaterialPositionOffsetIntoCollision : 1;
	uint8                                         Pad_5B9[0x3];
	int32                                         ComponentSizeQuads;
	int32                                         SubsectionSizeQuads;
	int32                                         NumSubsections;
	uint8                                         bUsedForNavigation : 1;
	uint8                                         bFillCollisionUnderLandscapeForNavmesh : 1;
	uint8                                         Pad_5C9[0x3];
	bool                                          bUseDynamicMaterialInstance;
	ENavDataGatheringMode                         NavigationGeometryGatheringMode;
	bool                                          bUseLandscapeForCullingInvisibleHLODVertices;
	bool                                          bHasLayersContent;

public:
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, class FName EditLayerName);
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	class ALandscape* GetLandscapeActor();
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
	void SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float Value);
	void SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture* Value);
	void SetLandscapeMaterialVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value);
	void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeProxy">();
	}
	static class ALandscapeProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeProxy>();
	}
};
static_assert(alignof(ALandscapeProxy) == 0x000008, "Wrong alignment on ALandscapeProxy");
static_assert(sizeof(ALandscapeProxy) == 0x0005D0, "Wrong size on ALandscapeProxy");
static_assert(offsetof(ALandscapeProxy, SplineComponent) == 0x000290, "Member 'ALandscapeProxy::SplineComponent' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LandscapeGuid) == 0x000298, "Member 'ALandscapeProxy::LandscapeGuid' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, PerLODOverrideMaterials) == 0x0002A8, "Member 'ALandscapeProxy::PerLODOverrideMaterials' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LandscapeSectionOffset) == 0x0002B8, "Member 'ALandscapeProxy::LandscapeSectionOffset' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, MaxLODLevel) == 0x0002C0, "Member 'ALandscapeProxy::MaxLODLevel' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, ComponentScreenSizeToUseSubSections) == 0x0002C4, "Member 'ALandscapeProxy::ComponentScreenSizeToUseSubSections' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LOD0ScreenSize) == 0x0002C8, "Member 'ALandscapeProxy::LOD0ScreenSize' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LOD0DistributionSetting) == 0x0002CC, "Member 'ALandscapeProxy::LOD0DistributionSetting' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LODDistributionSetting) == 0x0002D0, "Member 'ALandscapeProxy::LODDistributionSetting' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, StaticLightingLOD) == 0x0002D4, "Member 'ALandscapeProxy::StaticLightingLOD' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, DefaultPhysMaterial) == 0x0002D8, "Member 'ALandscapeProxy::DefaultPhysMaterial' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, StreamingDistanceMultiplier) == 0x0002E0, "Member 'ALandscapeProxy::StreamingDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LandscapeMaterial) == 0x0002E8, "Member 'ALandscapeProxy::LandscapeMaterial' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LandscapeHoleMaterial) == 0x000310, "Member 'ALandscapeProxy::LandscapeHoleMaterial' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, RuntimeVirtualTextures) == 0x000318, "Member 'ALandscapeProxy::RuntimeVirtualTextures' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bSetCreateRuntimeVirtualTextureVolumes) == 0x000328, "Member 'ALandscapeProxy::bSetCreateRuntimeVirtualTextureVolumes' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bVirtualTextureRenderWithQuad) == 0x000329, "Member 'ALandscapeProxy::bVirtualTextureRenderWithQuad' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bVirtualTextureRenderWithQuadHQ) == 0x00032A, "Member 'ALandscapeProxy::bVirtualTextureRenderWithQuadHQ' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, VirtualTextureNumLods) == 0x00032C, "Member 'ALandscapeProxy::VirtualTextureNumLods' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, VirtualTextureLodBias) == 0x000330, "Member 'ALandscapeProxy::VirtualTextureLodBias' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, VirtualTextureRenderPassType) == 0x000334, "Member 'ALandscapeProxy::VirtualTextureRenderPassType' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, NegativeZBoundsExtension) == 0x000338, "Member 'ALandscapeProxy::NegativeZBoundsExtension' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, PositiveZBoundsExtension) == 0x00033C, "Member 'ALandscapeProxy::PositiveZBoundsExtension' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LandscapeComponents) == 0x000340, "Member 'ALandscapeProxy::LandscapeComponents' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, CollisionComponents) == 0x000350, "Member 'ALandscapeProxy::CollisionComponents' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, FoliageComponents) == 0x000360, "Member 'ALandscapeProxy::FoliageComponents' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, NaniteComponent) == 0x000370, "Member 'ALandscapeProxy::NaniteComponent' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bHasLandscapeGrass) == 0x0003DC, "Member 'ALandscapeProxy::bHasLandscapeGrass' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, StaticLightingResolution) == 0x0003E0, "Member 'ALandscapeProxy::StaticLightingResolution' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LightingChannels) == 0x0003F5, "Member 'ALandscapeProxy::LightingChannels' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, CustomDepthStencilWriteMask) == 0x0003FC, "Member 'ALandscapeProxy::CustomDepthStencilWriteMask' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, CustomDepthStencilValue) == 0x000400, "Member 'ALandscapeProxy::CustomDepthStencilValue' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LDMaxDrawDistance) == 0x000404, "Member 'ALandscapeProxy::LDMaxDrawDistance' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, LightmassSettings) == 0x000408, "Member 'ALandscapeProxy::LightmassSettings' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, CollisionMipLevel) == 0x000420, "Member 'ALandscapeProxy::CollisionMipLevel' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, SimpleCollisionMipLevel) == 0x000424, "Member 'ALandscapeProxy::SimpleCollisionMipLevel' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, BodyInstance) == 0x000430, "Member 'ALandscapeProxy::BodyInstance' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, ComponentSizeQuads) == 0x0005BC, "Member 'ALandscapeProxy::ComponentSizeQuads' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, SubsectionSizeQuads) == 0x0005C0, "Member 'ALandscapeProxy::SubsectionSizeQuads' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, NumSubsections) == 0x0005C4, "Member 'ALandscapeProxy::NumSubsections' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bUseDynamicMaterialInstance) == 0x0005CC, "Member 'ALandscapeProxy::bUseDynamicMaterialInstance' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, NavigationGeometryGatheringMode) == 0x0005CD, "Member 'ALandscapeProxy::NavigationGeometryGatheringMode' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bUseLandscapeForCullingInvisibleHLODVertices) == 0x0005CE, "Member 'ALandscapeProxy::bUseLandscapeForCullingInvisibleHLODVertices' has a wrong offset!");
static_assert(offsetof(ALandscapeProxy, bHasLayersContent) == 0x0005CF, "Member 'ALandscapeProxy::bHasLayersContent' has a wrong offset!");

class ALandscape final : public ALandscapeProxy
{
public:
	void RenderHeightmap(const struct FTransform& InWorldTransform, const struct FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Landscape">();
	}
	static class ALandscape* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscape>();
	}
};
static_assert(alignof(ALandscape) == 0x000008, "Wrong alignment on ALandscape");
static_assert(sizeof(ALandscape) == 0x0005D0, "Wrong size on ALandscape");

class ULandscapeLODStreamingProxy_DEPRECATED final : public UStreamableRenderAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeLODStreamingProxy_DEPRECATED">();
	}
	static class ULandscapeLODStreamingProxy_DEPRECATED* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeLODStreamingProxy_DEPRECATED>();
	}
};
static_assert(alignof(ULandscapeLODStreamingProxy_DEPRECATED) == 0x000008, "Wrong alignment on ULandscapeLODStreamingProxy_DEPRECATED");
static_assert(sizeof(ULandscapeLODStreamingProxy_DEPRECATED) == 0x0000D0, "Wrong size on ULandscapeLODStreamingProxy_DEPRECATED");

class ULandscapeComponent final : public UPrimitiveComponent
{
public:
	int32                                         SectionBaseX;
	int32                                         SectionBaseY;
	int32                                         ComponentSizeQuads;
	int32                                         SubsectionSizeQuads;
	int32                                         NumSubsections;
	uint8                                         Pad_57C[0x4];
	class UMaterialInterface*                     OverrideMaterial;
	class UMaterialInterface*                     OverrideHoleMaterial;
	TArray<class UMaterialInstanceConstant*>      MaterialInstances;
	TArray<class UMaterialInstanceDynamic*>       MaterialInstancesDynamic;
	TArray<int8>                                  LODIndexToMaterialIndex;
	class UTexture2D*                             XYOffsetmapTexture;
	uint8                                         Pad_5C8[0x8];
	struct FVector4                               WeightmapScaleBias;
	float                                         WeightmapSubsectionOffset;
	uint8                                         Pad_5F4[0xC];
	struct FVector4                               HeightmapScaleBias;
	struct FBox                                   CachedLocalBox;
	class ULandscapeHeightfieldCollisionComponent* CollisionComponentRef;
	bool                                          bUserTriggeredChangeRequested;
	bool                                          bNaniteActive;
	uint8                                         Pad_662[0x6];
	class UTexture2D*                             HeightmapTexture;
	TArray<struct FWeightmapLayerAllocationInfo>  WeightmapLayerAllocations;
	TArray<class UTexture2D*>                     WeightmapTextures;
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;
	struct FGuid                                  MapBuildDataId;
	int32                                         CollisionMipLevel;
	int32                                         SimpleCollisionMipLevel;
	float                                         NegativeZBoundsExtension;
	float                                         PositiveZBoundsExtension;
	float                                         StaticLightingResolution;
	int32                                         ForcedLOD;
	int32                                         LODBias;
	struct FGuid                                  StateId;
	uint8                                         Pad_6DC[0x24];
	class UMaterialInterface*                     MobileMaterialInterface;
	TArray<class UMaterialInterface*>             MobileMaterialInterfaces;
	TArray<class UTexture2D*>                     MobileWeightmapTextures;
	uint8                                         Pad_728[0x28];

public:
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const class FName InPaintLayerName);
	void SetForcedLOD(int32 InForcedLOD);
	void SetLODBias(int32 InLODBias);

	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeComponent">();
	}
	static class ULandscapeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeComponent>();
	}
};
static_assert(alignof(ULandscapeComponent) == 0x000010, "Wrong alignment on ULandscapeComponent");
static_assert(sizeof(ULandscapeComponent) == 0x000750, "Wrong size on ULandscapeComponent");
static_assert(offsetof(ULandscapeComponent, SectionBaseX) == 0x000568, "Member 'ULandscapeComponent::SectionBaseX' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, SectionBaseY) == 0x00056C, "Member 'ULandscapeComponent::SectionBaseY' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, ComponentSizeQuads) == 0x000570, "Member 'ULandscapeComponent::ComponentSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, SubsectionSizeQuads) == 0x000574, "Member 'ULandscapeComponent::SubsectionSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, NumSubsections) == 0x000578, "Member 'ULandscapeComponent::NumSubsections' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 0x000580, "Member 'ULandscapeComponent::OverrideMaterial' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 0x000588, "Member 'ULandscapeComponent::OverrideHoleMaterial' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 0x000590, "Member 'ULandscapeComponent::MaterialInstances' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 0x0005A0, "Member 'ULandscapeComponent::MaterialInstancesDynamic' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 0x0005B0, "Member 'ULandscapeComponent::LODIndexToMaterialIndex' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 0x0005C0, "Member 'ULandscapeComponent::XYOffsetmapTexture' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 0x0005D0, "Member 'ULandscapeComponent::WeightmapScaleBias' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, WeightmapSubsectionOffset) == 0x0005F0, "Member 'ULandscapeComponent::WeightmapSubsectionOffset' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 0x000600, "Member 'ULandscapeComponent::HeightmapScaleBias' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 0x000620, "Member 'ULandscapeComponent::CachedLocalBox' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, CollisionComponentRef) == 0x000658, "Member 'ULandscapeComponent::CollisionComponentRef' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, bUserTriggeredChangeRequested) == 0x000660, "Member 'ULandscapeComponent::bUserTriggeredChangeRequested' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, bNaniteActive) == 0x000661, "Member 'ULandscapeComponent::bNaniteActive' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 0x000668, "Member 'ULandscapeComponent::HeightmapTexture' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 0x000670, "Member 'ULandscapeComponent::WeightmapLayerAllocations' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 0x000680, "Member 'ULandscapeComponent::WeightmapTextures' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, PerLODOverrideMaterials) == 0x000690, "Member 'ULandscapeComponent::PerLODOverrideMaterials' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 0x0006A0, "Member 'ULandscapeComponent::MapBuildDataId' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, CollisionMipLevel) == 0x0006B0, "Member 'ULandscapeComponent::CollisionMipLevel' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, SimpleCollisionMipLevel) == 0x0006B4, "Member 'ULandscapeComponent::SimpleCollisionMipLevel' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, NegativeZBoundsExtension) == 0x0006B8, "Member 'ULandscapeComponent::NegativeZBoundsExtension' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, PositiveZBoundsExtension) == 0x0006BC, "Member 'ULandscapeComponent::PositiveZBoundsExtension' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, StaticLightingResolution) == 0x0006C0, "Member 'ULandscapeComponent::StaticLightingResolution' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, ForcedLOD) == 0x0006C4, "Member 'ULandscapeComponent::ForcedLOD' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, LODBias) == 0x0006C8, "Member 'ULandscapeComponent::LODBias' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, StateId) == 0x0006CC, "Member 'ULandscapeComponent::StateId' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterface) == 0x000700, "Member 'ULandscapeComponent::MobileMaterialInterface' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 0x000708, "Member 'ULandscapeComponent::MobileMaterialInterfaces' has a wrong offset!");
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 0x000718, "Member 'ULandscapeComponent::MobileWeightmapTextures' has a wrong offset!");

class ALandscapeGizmoActor : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeGizmoActor">();
	}
	static class ALandscapeGizmoActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeGizmoActor>();
	}
};
static_assert(alignof(ALandscapeGizmoActor) == 0x000008, "Wrong alignment on ALandscapeGizmoActor");
static_assert(sizeof(ALandscapeGizmoActor) == 0x000288, "Wrong size on ALandscapeGizmoActor");

class ALandscapeGizmoActiveActor final : public ALandscapeGizmoActor
{
public:
	uint8                                         Pad_288[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeGizmoActiveActor">();
	}
	static class ALandscapeGizmoActiveActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeGizmoActiveActor>();
	}
};
static_assert(alignof(ALandscapeGizmoActiveActor) == 0x000008, "Wrong alignment on ALandscapeGizmoActiveActor");
static_assert(sizeof(ALandscapeGizmoActiveActor) == 0x0002D8, "Wrong size on ALandscapeGizmoActiveActor");

class ULandscapeGizmoRenderComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeGizmoRenderComponent">();
	}
	static class ULandscapeGizmoRenderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeGizmoRenderComponent>();
	}
};
static_assert(alignof(ULandscapeGizmoRenderComponent) == 0x000010, "Wrong alignment on ULandscapeGizmoRenderComponent");
static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x000570, "Wrong size on ULandscapeGizmoRenderComponent");

class ULandscapeGrassType final : public UObject
{
public:
	TArray<struct FGrassVariety>                  GrassVarieties;
	uint8                                         bEnableDensityScaling : 1;
	uint8                                         Pad_39[0x7];
	class UStaticMesh*                            GrassMesh;
	float                                         GrassDensity;
	float                                         PlacementJitter;
	int32                                         StartCullDistance;
	int32                                         EndCullDistance;
	bool                                          RandomRotation;
	bool                                          AlignToSurface;
	uint8                                         Pad_5A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeGrassType">();
	}
	static class ULandscapeGrassType* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeGrassType>();
	}
};
static_assert(alignof(ULandscapeGrassType) == 0x000008, "Wrong alignment on ULandscapeGrassType");
static_assert(sizeof(ULandscapeGrassType) == 0x000060, "Wrong size on ULandscapeGrassType");
static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 0x000028, "Member 'ULandscapeGrassType::GrassVarieties' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 0x000040, "Member 'ULandscapeGrassType::GrassMesh' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, GrassDensity) == 0x000048, "Member 'ULandscapeGrassType::GrassDensity' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, PlacementJitter) == 0x00004C, "Member 'ULandscapeGrassType::PlacementJitter' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, StartCullDistance) == 0x000050, "Member 'ULandscapeGrassType::StartCullDistance' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, EndCullDistance) == 0x000054, "Member 'ULandscapeGrassType::EndCullDistance' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, RandomRotation) == 0x000058, "Member 'ULandscapeGrassType::RandomRotation' has a wrong offset!");
static_assert(offsetof(ULandscapeGrassType, AlignToSurface) == 0x000059, "Member 'ULandscapeGrassType::AlignToSurface' has a wrong offset!");

class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>      ComponentLayerInfos;
	int32                                         SectionBaseX;
	int32                                         SectionBaseY;
	int32                                         CollisionSizeQuads;
	float                                         CollisionScale;
	int32                                         SimpleCollisionSizeQuads;
	uint8                                         Pad_58C[0x4];
	TArray<uint8>                                 CollisionQuadFlags;
	struct FGuid                                  HeightfieldGuid;
	struct FBox                                   CachedLocalBox;
	class ULandscapeComponent*                    RenderComponentRef;
	uint8                                         Pad_5F0[0x10];
	TArray<class UPhysicalMaterial*>              CookedPhysicalMaterials;
	uint8                                         Pad_610[0x40];

public:
	class ULandscapeComponent* GetRenderComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeHeightfieldCollisionComponent">();
	}
	static class ULandscapeHeightfieldCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeHeightfieldCollisionComponent>();
	}
};
static_assert(alignof(ULandscapeHeightfieldCollisionComponent) == 0x000010, "Wrong alignment on ULandscapeHeightfieldCollisionComponent");
static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x000650, "Wrong size on ULandscapeHeightfieldCollisionComponent");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 0x000568, "Member 'ULandscapeHeightfieldCollisionComponent::ComponentLayerInfos' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseX) == 0x000578, "Member 'ULandscapeHeightfieldCollisionComponent::SectionBaseX' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseY) == 0x00057C, "Member 'ULandscapeHeightfieldCollisionComponent::SectionBaseY' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads) == 0x000580, "Member 'ULandscapeHeightfieldCollisionComponent::CollisionSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionScale) == 0x000584, "Member 'ULandscapeHeightfieldCollisionComponent::CollisionScale' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads) == 0x000588, "Member 'ULandscapeHeightfieldCollisionComponent::SimpleCollisionSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 0x000590, "Member 'ULandscapeHeightfieldCollisionComponent::CollisionQuadFlags' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 0x0005A0, "Member 'ULandscapeHeightfieldCollisionComponent::HeightfieldGuid' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 0x0005B0, "Member 'ULandscapeHeightfieldCollisionComponent::CachedLocalBox' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponentRef) == 0x0005E8, "Member 'ULandscapeHeightfieldCollisionComponent::RenderComponentRef' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 0x000600, "Member 'ULandscapeHeightfieldCollisionComponent::CookedPhysicalMaterials' has a wrong offset!");

class ULandscapeLayerInfoObject final : public UObject
{
public:
	class FName                                   LayerName;
	uint8                                         Pad_2C[0x4];
	class UPhysicalMaterial*                      PhysMaterial;
	float                                         Hardness;
	struct FLinearColor                           LayerUsageDebugColor;
	uint8                                         Pad_4C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeLayerInfoObject">();
	}
	static class ULandscapeLayerInfoObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeLayerInfoObject>();
	}
};
static_assert(alignof(ULandscapeLayerInfoObject) == 0x000008, "Wrong alignment on ULandscapeLayerInfoObject");
static_assert(sizeof(ULandscapeLayerInfoObject) == 0x000050, "Wrong size on ULandscapeLayerInfoObject");
static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 0x000028, "Member 'ULandscapeLayerInfoObject::LayerName' has a wrong offset!");
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 0x000030, "Member 'ULandscapeLayerInfoObject::PhysMaterial' has a wrong offset!");
static_assert(offsetof(ULandscapeLayerInfoObject, Hardness) == 0x000038, "Member 'ULandscapeLayerInfoObject::Hardness' has a wrong offset!");
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 0x00003C, "Member 'ULandscapeLayerInfoObject::LayerUsageDebugColor' has a wrong offset!");

class ULandscapeMaterialInstanceConstant final : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;
	uint8                                         bIsLayerThumbnail : 1;
	uint8                                         bDisableTessellation : 1;
	uint8                                         bMobile : 1;
	uint8                                         bEditorToolUsage : 1;
	uint8                                         Pad_211[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeMaterialInstanceConstant">();
	}
	static class ULandscapeMaterialInstanceConstant* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeMaterialInstanceConstant>();
	}
};
static_assert(alignof(ULandscapeMaterialInstanceConstant) == 0x000008, "Wrong alignment on ULandscapeMaterialInstanceConstant");
static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x000218, "Wrong size on ULandscapeMaterialInstanceConstant");
static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 0x000200, "Member 'ULandscapeMaterialInstanceConstant::TextureStreamingInfo' has a wrong offset!");

class ULandscapeMeshCollisionComponent final : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                  MeshGuid;
	uint8                                         Pad_660[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeMeshCollisionComponent">();
	}
	static class ULandscapeMeshCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeMeshCollisionComponent>();
	}
};
static_assert(alignof(ULandscapeMeshCollisionComponent) == 0x000010, "Wrong alignment on ULandscapeMeshCollisionComponent");
static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x000670, "Wrong size on ULandscapeMeshCollisionComponent");
static_assert(offsetof(ULandscapeMeshCollisionComponent, MeshGuid) == 0x000650, "Member 'ULandscapeMeshCollisionComponent::MeshGuid' has a wrong offset!");

class ALandscapeMeshProxyActor final : public AActor
{
public:
	class ULandscapeMeshProxyComponent*           LandscapeMeshProxyComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeMeshProxyActor">();
	}
	static class ALandscapeMeshProxyActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeMeshProxyActor>();
	}
};
static_assert(alignof(ALandscapeMeshProxyActor) == 0x000008, "Wrong alignment on ALandscapeMeshProxyActor");
static_assert(sizeof(ALandscapeMeshProxyActor) == 0x000290, "Wrong size on ALandscapeMeshProxyActor");
static_assert(offsetof(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 0x000288, "Member 'ALandscapeMeshProxyActor::LandscapeMeshProxyComponent' has a wrong offset!");

class ULandscapeMeshProxyComponent final : public UStaticMeshComponent
{
public:
	struct FGuid                                  LandscapeGuid;
	TArray<struct FIntPoint>                      ProxyComponentBases;
	int8                                          ProxyLOD;
	uint8                                         Pad_641[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeMeshProxyComponent">();
	}
	static class ULandscapeMeshProxyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeMeshProxyComponent>();
	}
};
static_assert(alignof(ULandscapeMeshProxyComponent) == 0x000010, "Wrong alignment on ULandscapeMeshProxyComponent");
static_assert(sizeof(ULandscapeMeshProxyComponent) == 0x000650, "Wrong size on ULandscapeMeshProxyComponent");
static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 0x000620, "Member 'ULandscapeMeshProxyComponent::LandscapeGuid' has a wrong offset!");
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 0x000630, "Member 'ULandscapeMeshProxyComponent::ProxyComponentBases' has a wrong offset!");
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyLOD) == 0x000640, "Member 'ULandscapeMeshProxyComponent::ProxyLOD' has a wrong offset!");

class ULandscapeSettings final : public UDeveloperSettings
{
public:
	int32                                         MaxNumberOfLayers;
	ELandscapeDirtyingMode                        LandscapeDirtyingMode;
	uint8                                         Pad_35[0x3];
	int32                                         SideResolutionLimit;
	uint8                                         Pad_3C[0x4];
	TSoftObjectPtr<class UMaterialInterface>      DefaultLandscapeMaterial;
	TSoftObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject;
	bool                                          bRestrictiveMode;
	uint8                                         Pad_91[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSettings">();
	}
	static class ULandscapeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeSettings>();
	}
};
static_assert(alignof(ULandscapeSettings) == 0x000008, "Wrong alignment on ULandscapeSettings");
static_assert(sizeof(ULandscapeSettings) == 0x000098, "Wrong size on ULandscapeSettings");
static_assert(offsetof(ULandscapeSettings, MaxNumberOfLayers) == 0x000030, "Member 'ULandscapeSettings::MaxNumberOfLayers' has a wrong offset!");
static_assert(offsetof(ULandscapeSettings, LandscapeDirtyingMode) == 0x000034, "Member 'ULandscapeSettings::LandscapeDirtyingMode' has a wrong offset!");
static_assert(offsetof(ULandscapeSettings, SideResolutionLimit) == 0x000038, "Member 'ULandscapeSettings::SideResolutionLimit' has a wrong offset!");
static_assert(offsetof(ULandscapeSettings, DefaultLandscapeMaterial) == 0x000040, "Member 'ULandscapeSettings::DefaultLandscapeMaterial' has a wrong offset!");
static_assert(offsetof(ULandscapeSettings, DefaultLayerInfoObject) == 0x000068, "Member 'ULandscapeSettings::DefaultLayerInfoObject' has a wrong offset!");
static_assert(offsetof(ULandscapeSettings, bRestrictiveMode) == 0x000090, "Member 'ULandscapeSettings::bRestrictiveMode' has a wrong offset!");

class ULandscapeSplinesComponent final : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>   ControlPoints;
	TArray<class ULandscapeSplineSegment*>        Segments;
	TArray<class UMeshComponent*>                 CookedForeignMeshComponents;
	uint8                                         Pad_598[0x8];

public:
	TArray<class USplineMeshComponent*> GetSplineMeshComponents();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplinesComponent">();
	}
	static class ULandscapeSplinesComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeSplinesComponent>();
	}
};
static_assert(alignof(ULandscapeSplinesComponent) == 0x000010, "Wrong alignment on ULandscapeSplinesComponent");
static_assert(sizeof(ULandscapeSplinesComponent) == 0x0005A0, "Wrong size on ULandscapeSplinesComponent");
static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 0x000568, "Member 'ULandscapeSplinesComponent::ControlPoints' has a wrong offset!");
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 0x000578, "Member 'ULandscapeSplinesComponent::Segments' has a wrong offset!");
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 0x000588, "Member 'ULandscapeSplinesComponent::CookedForeignMeshComponents' has a wrong offset!");

class ULandscapeSplineControlPoint final : public UObject
{
public:
	struct FVector                                Location;
	struct FRotator                               Rotation;
	float                                         Width;
	float                                         LayerWidthRatio;
	float                                         SideFalloff;
	float                                         LeftSideFalloffFactor;
	float                                         RightSideFalloffFactor;
	float                                         LeftSideLayerFalloffFactor;
	float                                         RightSideLayerFalloffFactor;
	float                                         EndFalloff;
	TArray<struct FLandscapeSplineConnection>     ConnectedSegments;
	TArray<struct FLandscapeSplineInterpPoint>    Points;
	struct FBox                                   Bounds;
	class UControlPointMeshComponent*             LocalMeshComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplineControlPoint">();
	}
	static class ULandscapeSplineControlPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeSplineControlPoint>();
	}
};
static_assert(alignof(ULandscapeSplineControlPoint) == 0x000008, "Wrong alignment on ULandscapeSplineControlPoint");
static_assert(sizeof(ULandscapeSplineControlPoint) == 0x0000D8, "Wrong size on ULandscapeSplineControlPoint");
static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 0x000028, "Member 'ULandscapeSplineControlPoint::Location' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 0x000040, "Member 'ULandscapeSplineControlPoint::Rotation' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, Width) == 0x000058, "Member 'ULandscapeSplineControlPoint::Width' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, LayerWidthRatio) == 0x00005C, "Member 'ULandscapeSplineControlPoint::LayerWidthRatio' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, SideFalloff) == 0x000060, "Member 'ULandscapeSplineControlPoint::SideFalloff' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, LeftSideFalloffFactor) == 0x000064, "Member 'ULandscapeSplineControlPoint::LeftSideFalloffFactor' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, RightSideFalloffFactor) == 0x000068, "Member 'ULandscapeSplineControlPoint::RightSideFalloffFactor' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, LeftSideLayerFalloffFactor) == 0x00006C, "Member 'ULandscapeSplineControlPoint::LeftSideLayerFalloffFactor' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, RightSideLayerFalloffFactor) == 0x000070, "Member 'ULandscapeSplineControlPoint::RightSideLayerFalloffFactor' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, EndFalloff) == 0x000074, "Member 'ULandscapeSplineControlPoint::EndFalloff' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 0x000078, "Member 'ULandscapeSplineControlPoint::ConnectedSegments' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 0x000088, "Member 'ULandscapeSplineControlPoint::Points' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 0x000098, "Member 'ULandscapeSplineControlPoint::Bounds' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 0x0000D0, "Member 'ULandscapeSplineControlPoint::LocalMeshComponent' has a wrong offset!");

class ULandscapeSplineSegment final : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection      Connections[0x2];
	struct FInterpCurveVector                     SplineInfo;
	TArray<struct FLandscapeSplineInterpPoint>    Points;
	struct FBox                                   Bounds;
	TArray<class USplineMeshComponent*>           LocalMeshComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplineSegment">();
	}
	static class ULandscapeSplineSegment* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeSplineSegment>();
	}
};
static_assert(alignof(ULandscapeSplineSegment) == 0x000008, "Wrong alignment on ULandscapeSplineSegment");
static_assert(sizeof(ULandscapeSplineSegment) == 0x0000B8, "Wrong size on ULandscapeSplineSegment");
static_assert(offsetof(ULandscapeSplineSegment, Connections) == 0x000028, "Member 'ULandscapeSplineSegment::Connections' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 0x000048, "Member 'ULandscapeSplineSegment::SplineInfo' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineSegment, Points) == 0x000060, "Member 'ULandscapeSplineSegment::Points' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 0x000070, "Member 'ULandscapeSplineSegment::Bounds' has a wrong offset!");
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 0x0000A8, "Member 'ULandscapeSplineSegment::LocalMeshComponents' has a wrong offset!");

class ALandscapeStreamingProxy final : public ALandscapeProxy
{
public:
	TSoftObjectPtr<class ALandscape>              LandscapeActorRef;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeStreamingProxy">();
	}
	static class ALandscapeStreamingProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeStreamingProxy>();
	}
};
static_assert(alignof(ALandscapeStreamingProxy) == 0x000008, "Wrong alignment on ALandscapeStreamingProxy");
static_assert(sizeof(ALandscapeStreamingProxy) == 0x0005F8, "Wrong size on ALandscapeStreamingProxy");
static_assert(offsetof(ALandscapeStreamingProxy, LandscapeActorRef) == 0x0005D0, "Member 'ALandscapeStreamingProxy::LandscapeActorRef' has a wrong offset!");

class ULandscapeWeightmapUsage final : public UObject
{
public:
	class ULandscapeComponent*                    ChannelUsage[0x4];
	struct FGuid                                  LayerGuid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWeightmapUsage">();
	}
	static class ULandscapeWeightmapUsage* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeWeightmapUsage>();
	}
};
static_assert(alignof(ULandscapeWeightmapUsage) == 0x000008, "Wrong alignment on ULandscapeWeightmapUsage");
static_assert(sizeof(ULandscapeWeightmapUsage) == 0x000058, "Wrong size on ULandscapeWeightmapUsage");
static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 0x000028, "Member 'ULandscapeWeightmapUsage::ChannelUsage' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 0x000048, "Member 'ULandscapeWeightmapUsage::LayerGuid' has a wrong offset!");

class UMaterialExpressionLandscapeGrassOutput final : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                    GrassTypes;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeGrassOutput">();
	}
	static class UMaterialExpressionLandscapeGrassOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeGrassOutput>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeGrassOutput) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeGrassOutput");
static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x0000C0, "Wrong size on UMaterialExpressionLandscapeGrassOutput");
static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 0x0000B0, "Member 'UMaterialExpressionLandscapeGrassOutput::GrassTypes' has a wrong offset!");

class UMaterialExpressionLandscapeLayerBlend final : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>               Layers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeLayerBlend">();
	}
	static class UMaterialExpressionLandscapeLayerBlend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeLayerBlend>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeLayerBlend) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeLayerBlend");
static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x0000C0, "Wrong size on UMaterialExpressionLandscapeLayerBlend");
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 0x0000B0, "Member 'UMaterialExpressionLandscapeLayerBlend::Layers' has a wrong offset!");

class UMaterialExpressionLandscapeLayerCoords final : public UMaterialExpression
{
public:
	ETerrainCoordMappingType                      MappingType;
	ELandscapeCustomizedCoordType                 CustomUVType;
	uint8                                         Pad_B2[0x2];
	float                                         MappingScale;
	float                                         MappingRotation;
	float                                         MappingPanU;
	float                                         MappingPanV;
	uint8                                         Pad_C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeLayerCoords">();
	}
	static class UMaterialExpressionLandscapeLayerCoords* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeLayerCoords>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeLayerCoords) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeLayerCoords");
static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x0000C8, "Wrong size on UMaterialExpressionLandscapeLayerCoords");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType) == 0x0000B0, "Member 'UMaterialExpressionLandscapeLayerCoords::MappingType' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType) == 0x0000B1, "Member 'UMaterialExpressionLandscapeLayerCoords::CustomUVType' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingScale) == 0x0000B4, "Member 'UMaterialExpressionLandscapeLayerCoords::MappingScale' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingRotation) == 0x0000B8, "Member 'UMaterialExpressionLandscapeLayerCoords::MappingRotation' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanU) == 0x0000BC, "Member 'UMaterialExpressionLandscapeLayerCoords::MappingPanU' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanV) == 0x0000C0, "Member 'UMaterialExpressionLandscapeLayerCoords::MappingPanV' has a wrong offset!");

class AControlPointMeshActor final : public AActor
{
public:
	class UControlPointMeshComponent*             ControlPointMeshComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlPointMeshActor">();
	}
	static class AControlPointMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AControlPointMeshActor>();
	}
};
static_assert(alignof(AControlPointMeshActor) == 0x000008, "Wrong alignment on AControlPointMeshActor");
static_assert(sizeof(AControlPointMeshActor) == 0x000290, "Wrong size on AControlPointMeshActor");
static_assert(offsetof(AControlPointMeshActor, ControlPointMeshComponent) == 0x000288, "Member 'AControlPointMeshActor::ControlPointMeshComponent' has a wrong offset!");

class ALandscapeBlueprintBrushBase : public AActor
{
public:
	void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const class FName& InWeightmapLayerName);
	class UTextureRenderTarget2D* RenderLayer(const struct FLandscapeBrushParameters& InParameters);
	void RequestLandscapeUpdate(bool bInUserTriggered);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeBlueprintBrushBase">();
	}
	static class ALandscapeBlueprintBrushBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeBlueprintBrushBase>();
	}
};
static_assert(alignof(ALandscapeBlueprintBrushBase) == 0x000008, "Wrong alignment on ALandscapeBlueprintBrushBase");
static_assert(sizeof(ALandscapeBlueprintBrushBase) == 0x000288, "Wrong size on ALandscapeBlueprintBrushBase");

class ULandscapeHLODBuilder final : public UHLODBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeHLODBuilder">();
	}
	static class ULandscapeHLODBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeHLODBuilder>();
	}
};
static_assert(alignof(ULandscapeHLODBuilder) == 0x000008, "Wrong alignment on ULandscapeHLODBuilder");
static_assert(sizeof(ULandscapeHLODBuilder) == 0x000028, "Wrong size on ULandscapeHLODBuilder");

class ULandscapeInfo final : public UObject
{
public:
	TWeakObjectPtr<class ALandscape>              LandscapeActor;
	struct FGuid                                  LandscapeGuid;
	int32                                         ComponentSizeQuads;
	int32                                         SubsectionSizeQuads;
	int32                                         ComponentNumSubsections;
	uint8                                         Pad_4C[0x4];
	struct FVector                                DrawScale;
	uint8                                         Pad_68[0xB0];
	TArray<TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies;
	uint8                                         Pad_128[0x100];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeInfo">();
	}
	static class ULandscapeInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeInfo>();
	}
};
static_assert(alignof(ULandscapeInfo) == 0x000008, "Wrong alignment on ULandscapeInfo");
static_assert(sizeof(ULandscapeInfo) == 0x000228, "Wrong size on ULandscapeInfo");
static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 0x000028, "Member 'ULandscapeInfo::LandscapeActor' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 0x000030, "Member 'ULandscapeInfo::LandscapeGuid' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, ComponentSizeQuads) == 0x000040, "Member 'ULandscapeInfo::ComponentSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, SubsectionSizeQuads) == 0x000044, "Member 'ULandscapeInfo::SubsectionSizeQuads' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, ComponentNumSubsections) == 0x000048, "Member 'ULandscapeInfo::ComponentNumSubsections' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, DrawScale) == 0x000050, "Member 'ULandscapeInfo::DrawScale' has a wrong offset!");
static_assert(offsetof(ULandscapeInfo, StreamingProxies) == 0x000118, "Member 'ULandscapeInfo::StreamingProxies' has a wrong offset!");

class ULandscapeInfoMap final : public UObject
{
public:
	uint8                                         Pad_28[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeInfoMap">();
	}
	static class ULandscapeInfoMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeInfoMap>();
	}
};
static_assert(alignof(ULandscapeInfoMap) == 0x000008, "Wrong alignment on ULandscapeInfoMap");
static_assert(sizeof(ULandscapeInfoMap) == 0x000080, "Wrong size on ULandscapeInfoMap");

class ULandscapeNaniteComponent final : public UStaticMeshComponent
{
public:
	struct FGuid                                  ProxyContentId;
	bool                                          bEnabled;
	uint8                                         Pad_631[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeNaniteComponent">();
	}
	static class ULandscapeNaniteComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeNaniteComponent>();
	}
};
static_assert(alignof(ULandscapeNaniteComponent) == 0x000010, "Wrong alignment on ULandscapeNaniteComponent");
static_assert(sizeof(ULandscapeNaniteComponent) == 0x000640, "Wrong size on ULandscapeNaniteComponent");
static_assert(offsetof(ULandscapeNaniteComponent, ProxyContentId) == 0x000620, "Member 'ULandscapeNaniteComponent::ProxyContentId' has a wrong offset!");
static_assert(offsetof(ULandscapeNaniteComponent, bEnabled) == 0x000630, "Member 'ULandscapeNaniteComponent::bEnabled' has a wrong offset!");

class ALandscapeSplineActor final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	struct FGuid                                  LandscapeGuid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplineActor">();
	}
	static class ALandscapeSplineActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeSplineActor>();
	}
};
static_assert(alignof(ALandscapeSplineActor) == 0x000008, "Wrong alignment on ALandscapeSplineActor");
static_assert(sizeof(ALandscapeSplineActor) == 0x0002A0, "Wrong size on ALandscapeSplineActor");
static_assert(offsetof(ALandscapeSplineActor, LandscapeGuid) == 0x000290, "Member 'ALandscapeSplineActor::LandscapeGuid' has a wrong offset!");

class ALandscapeSplineMeshesActor final : public APartitionActor
{
public:
	TArray<class UStaticMeshComponent*>           StaticMeshComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSplineMeshesActor">();
	}
	static class ALandscapeSplineMeshesActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeSplineMeshesActor>();
	}
};
static_assert(alignof(ALandscapeSplineMeshesActor) == 0x000008, "Wrong alignment on ALandscapeSplineMeshesActor");
static_assert(sizeof(ALandscapeSplineMeshesActor) == 0x000298, "Wrong size on ALandscapeSplineMeshesActor");
static_assert(offsetof(ALandscapeSplineMeshesActor, StaticMeshComponents) == 0x000288, "Member 'ALandscapeSplineMeshesActor::StaticMeshComponents' has a wrong offset!");

class ULandscapeSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_40[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeSubsystem">();
	}
	static class ULandscapeSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeSubsystem>();
	}
};
static_assert(alignof(ULandscapeSubsystem) == 0x000008, "Wrong alignment on ULandscapeSubsystem");
static_assert(sizeof(ULandscapeSubsystem) == 0x000060, "Wrong size on ULandscapeSubsystem");

class UMaterialExpressionLandscapeLayerSample final : public UMaterialExpression
{
public:
	class FName                                   ParameterName;
	float                                         PreviewWeight;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeLayerSample">();
	}
	static class UMaterialExpressionLandscapeLayerSample* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeLayerSample>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeLayerSample) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeLayerSample");
static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x0000B8, "Wrong size on UMaterialExpressionLandscapeLayerSample");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 0x0000B0, "Member 'UMaterialExpressionLandscapeLayerSample::ParameterName' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, PreviewWeight) == 0x0000B4, "Member 'UMaterialExpressionLandscapeLayerSample::PreviewWeight' has a wrong offset!");

class UMaterialExpressionLandscapeLayerSwitch final : public UMaterialExpression
{
public:
	struct FExpressionInput                       LayerUsed;
	struct FExpressionInput                       LayerNotUsed;
	class FName                                   ParameterName;
	uint8                                         PreviewUsed : 1;
	uint8                                         Pad_105[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeLayerSwitch">();
	}
	static class UMaterialExpressionLandscapeLayerSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeLayerSwitch>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeLayerSwitch) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeLayerSwitch");
static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0x000108, "Wrong size on UMaterialExpressionLandscapeLayerSwitch");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 0x0000B0, "Member 'UMaterialExpressionLandscapeLayerSwitch::LayerUsed' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 0x0000D8, "Member 'UMaterialExpressionLandscapeLayerSwitch::LayerNotUsed' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 0x000100, "Member 'UMaterialExpressionLandscapeLayerSwitch::ParameterName' has a wrong offset!");

class UMaterialExpressionLandscapeLayerWeight final : public UMaterialExpression
{
public:
	struct FExpressionInput                       Base;
	struct FExpressionInput                       Layer;
	class FName                                   ParameterName;
	float                                         PreviewWeight;
	struct FVector                                ConstBase;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeLayerWeight">();
	}
	static class UMaterialExpressionLandscapeLayerWeight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeLayerWeight>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeLayerWeight) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeLayerWeight");
static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x000120, "Wrong size on UMaterialExpressionLandscapeLayerWeight");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Base) == 0x0000B0, "Member 'UMaterialExpressionLandscapeLayerWeight::Base' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 0x0000D8, "Member 'UMaterialExpressionLandscapeLayerWeight::Layer' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 0x000100, "Member 'UMaterialExpressionLandscapeLayerWeight::ParameterName' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, PreviewWeight) == 0x000104, "Member 'UMaterialExpressionLandscapeLayerWeight::PreviewWeight' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 0x000108, "Member 'UMaterialExpressionLandscapeLayerWeight::ConstBase' has a wrong offset!");

class UMaterialExpressionLandscapePhysicalMaterialOutput final : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>         Inputs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapePhysicalMaterialOutput">();
	}
	static class UMaterialExpressionLandscapePhysicalMaterialOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapePhysicalMaterialOutput>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapePhysicalMaterialOutput");
static_assert(sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x0000C0, "Wrong size on UMaterialExpressionLandscapePhysicalMaterialOutput");
static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 0x0000B0, "Member 'UMaterialExpressionLandscapePhysicalMaterialOutput::Inputs' has a wrong offset!");

class UMaterialExpressionLandscapeVisibilityMask final : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionLandscapeVisibilityMask">();
	}
	static class UMaterialExpressionLandscapeVisibilityMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLandscapeVisibilityMask>();
	}
};
static_assert(alignof(UMaterialExpressionLandscapeVisibilityMask) == 0x000008, "Wrong alignment on UMaterialExpressionLandscapeVisibilityMask");
static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x0000B0, "Wrong size on UMaterialExpressionLandscapeVisibilityMask");

}
