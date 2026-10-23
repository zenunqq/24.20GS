#pragma once

#include "Basic.hpp"

#include "Procedural_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UProceduralParameterModifier : public UObject
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_29[0x3];
	float                                         Contribution;
	EProceduralParameterModifierBlendMode         BlendMode;
	uint8                                         Pad_31[0x7];

public:
	float GetContribution() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralParameterModifier">();
	}
	static class UProceduralParameterModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralParameterModifier>();
	}
};
static_assert(alignof(UProceduralParameterModifier) == 0x000008, "Wrong alignment on UProceduralParameterModifier");
static_assert(sizeof(UProceduralParameterModifier) == 0x000038, "Wrong size on UProceduralParameterModifier");
static_assert(offsetof(UProceduralParameterModifier, bEnabled) == 0x000028, "Member 'UProceduralParameterModifier::bEnabled' has a wrong offset!");
static_assert(offsetof(UProceduralParameterModifier, Contribution) == 0x00002C, "Member 'UProceduralParameterModifier::Contribution' has a wrong offset!");
static_assert(offsetof(UProceduralParameterModifier, BlendMode) == 0x000030, "Member 'UProceduralParameterModifier::BlendMode' has a wrong offset!");

class UProceduralDensityModifier : public UProceduralParameterModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralDensityModifier">();
	}
	static class UProceduralDensityModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralDensityModifier>();
	}
};
static_assert(alignof(UProceduralDensityModifier) == 0x000008, "Wrong alignment on UProceduralDensityModifier");
static_assert(sizeof(UProceduralDensityModifier) == 0x000038, "Wrong size on UProceduralDensityModifier");

class UProceduralDataMap : public UObject
{
public:
	bool                                          bUseRemapCurve;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralDataMap">();
	}
	static class UProceduralDataMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralDataMap>();
	}
};
static_assert(alignof(UProceduralDataMap) == 0x000008, "Wrong alignment on UProceduralDataMap");
static_assert(sizeof(UProceduralDataMap) == 0x000030, "Wrong size on UProceduralDataMap");
static_assert(offsetof(UProceduralDataMap, bUseRemapCurve) == 0x000028, "Member 'UProceduralDataMap::bUseRemapCurve' has a wrong offset!");

class UProceduralFloatDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapFloatCurve             RemapCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFloatDataMap">();
	}
	static class UProceduralFloatDataMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralFloatDataMap>();
	}
};
static_assert(alignof(UProceduralFloatDataMap) == 0x000008, "Wrong alignment on UProceduralFloatDataMap");
static_assert(sizeof(UProceduralFloatDataMap) == 0x0000B8, "Wrong size on UProceduralFloatDataMap");
static_assert(offsetof(UProceduralFloatDataMap, RemapCurve) == 0x000030, "Member 'UProceduralFloatDataMap::RemapCurve' has a wrong offset!");

class UProceduralLandscapeLayerMap final : public UProceduralFloatDataMap
{
public:
	class FName                                   LandscapeLayerName;
	class FName                                   LandscapeEditLayerName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralLandscapeLayerMap">();
	}
	static class UProceduralLandscapeLayerMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralLandscapeLayerMap>();
	}
};
static_assert(alignof(UProceduralLandscapeLayerMap) == 0x000008, "Wrong alignment on UProceduralLandscapeLayerMap");
static_assert(sizeof(UProceduralLandscapeLayerMap) == 0x0000C0, "Wrong size on UProceduralLandscapeLayerMap");
static_assert(offsetof(UProceduralLandscapeLayerMap, LandscapeLayerName) == 0x0000B8, "Member 'UProceduralLandscapeLayerMap::LandscapeLayerName' has a wrong offset!");
static_assert(offsetof(UProceduralLandscapeLayerMap, LandscapeEditLayerName) == 0x0000BC, "Member 'UProceduralLandscapeLayerMap::LandscapeEditLayerName' has a wrong offset!");

class UProceduralRotationModifier : public UProceduralParameterModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralRotationModifier">();
	}
	static class UProceduralRotationModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralRotationModifier>();
	}
};
static_assert(alignof(UProceduralRotationModifier) == 0x000008, "Wrong alignment on UProceduralRotationModifier");
static_assert(sizeof(UProceduralRotationModifier) == 0x000038, "Wrong size on UProceduralRotationModifier");

class UProceduralScaleModifier : public UProceduralParameterModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScaleModifier">();
	}
	static class UProceduralScaleModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScaleModifier>();
	}
};
static_assert(alignof(UProceduralScaleModifier) == 0x000008, "Wrong alignment on UProceduralScaleModifier");
static_assert(sizeof(UProceduralScaleModifier) == 0x000038, "Wrong size on UProceduralScaleModifier");

class UProceduralTextureFloatMap final : public UProceduralFloatDataMap
{
public:
	EProceduralTextureColorChannel                Channel;
	uint8                                         Pad_B9[0x7];
	struct FProceduralTextureSource               Source;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralTextureFloatMap">();
	}
	static class UProceduralTextureFloatMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralTextureFloatMap>();
	}
};
static_assert(alignof(UProceduralTextureFloatMap) == 0x000008, "Wrong alignment on UProceduralTextureFloatMap");
static_assert(sizeof(UProceduralTextureFloatMap) == 0x0000F8, "Wrong size on UProceduralTextureFloatMap");
static_assert(offsetof(UProceduralTextureFloatMap, Channel) == 0x0000B8, "Member 'UProceduralTextureFloatMap::Channel' has a wrong offset!");
static_assert(offsetof(UProceduralTextureFloatMap, Source) == 0x0000C0, "Member 'UProceduralTextureFloatMap::Source' has a wrong offset!");

class UProceduralVectorDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapVectorCurve            RemapCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralVectorDataMap">();
	}
	static class UProceduralVectorDataMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralVectorDataMap>();
	}
};
static_assert(alignof(UProceduralVectorDataMap) == 0x000008, "Wrong alignment on UProceduralVectorDataMap");
static_assert(sizeof(UProceduralVectorDataMap) == 0x000238, "Wrong size on UProceduralVectorDataMap");
static_assert(offsetof(UProceduralVectorDataMap, RemapCurve) == 0x000030, "Member 'UProceduralVectorDataMap::RemapCurve' has a wrong offset!");

class UProceduralTextureVectorMap final : public UProceduralVectorDataMap
{
public:
	struct FProceduralTextureSource               Source;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralTextureVectorMap">();
	}
	static class UProceduralTextureVectorMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralTextureVectorMap>();
	}
};
static_assert(alignof(UProceduralTextureVectorMap) == 0x000008, "Wrong alignment on UProceduralTextureVectorMap");
static_assert(sizeof(UProceduralTextureVectorMap) == 0x000270, "Wrong size on UProceduralTextureVectorMap");
static_assert(offsetof(UProceduralTextureVectorMap, Source) == 0x000238, "Member 'UProceduralTextureVectorMap::Source' has a wrong offset!");

class UProceduralVertexColorMap final : public UProceduralFloatDataMap
{
public:
	EProceduralTextureColorChannel                Channel;
	uint8                                         Pad_B9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralVertexColorMap">();
	}
	static class UProceduralVertexColorMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralVertexColorMap>();
	}
};
static_assert(alignof(UProceduralVertexColorMap) == 0x000008, "Wrong alignment on UProceduralVertexColorMap");
static_assert(sizeof(UProceduralVertexColorMap) == 0x0000C0, "Wrong size on UProceduralVertexColorMap");
static_assert(offsetof(UProceduralVertexColorMap, Channel) == 0x0000B8, "Member 'UProceduralVertexColorMap::Channel' has a wrong offset!");

class UHISMBuilderSettings final : public UObject
{
public:
	EComponentMobility                            Mobility;
	uint8                                         Pad_29[0x3];
	struct FInt32Interval                         CullDistance;
	uint8                                         bCastShadow : 1;
	uint8                                         bAffectDynamicIndirectLighting : 1;
	uint8                                         bAffectDistanceFieldLighting : 1;
	uint8                                         bCastDynamicShadow : 1;
	uint8                                         bCastStaticShadow : 1;
	uint8                                         bCastShadowAsTwoSided : 1;
	uint8                                         bReceivesDecals : 1;
	uint8                                         bOverrideLightMapRes : 1;
	uint8                                         Pad_35[0x3];
	int32                                         OverriddenLightMapRes;
	ELightmapType                                 LightmapType;
	uint8                                         Pad_3D[0x3];
	uint8                                         bUseAsOccluder : 1;
	uint8                                         Pad_41[0x7];
	struct FBodyInstance                          BodyInstance;
	EHasCustomNavigableGeometry                   CustomNavigableGeometry;
	struct FLightingChannels                      LightingChannels;
	uint8                                         Pad_1D2[0x2];
	uint8                                         bRenderCustomDepth : 1;
	uint8                                         Pad_1D5[0x3];
	ERendererStencilMask                          CustomDepthStencilWriteMask;
	uint8                                         Pad_1D9[0x3];
	int32                                         CustomDepthStencilValue;
	int32                                         TranslucencySortPriority;
	uint8                                         bEnableDensityScaling : 1;
	uint8                                         Pad_1E5[0x3];
	TArray<class URuntimeVirtualTexture*>         RuntimeVirtualTextures;
	int32                                         VirtualTextureCullMips;
	ERuntimeVirtualTextureMainPassType            VirtualTextureRenderPassType;
	uint8                                         Pad_1FD[0x3];

public:
	void SetOverriddenLightMapRes(int32 Value);

	int32 GetOverriddenLightMapRes() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HISMBuilderSettings">();
	}
	static class UHISMBuilderSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHISMBuilderSettings>();
	}
};
static_assert(alignof(UHISMBuilderSettings) == 0x000008, "Wrong alignment on UHISMBuilderSettings");
static_assert(sizeof(UHISMBuilderSettings) == 0x000200, "Wrong size on UHISMBuilderSettings");
static_assert(offsetof(UHISMBuilderSettings, Mobility) == 0x000028, "Member 'UHISMBuilderSettings::Mobility' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, CullDistance) == 0x00002C, "Member 'UHISMBuilderSettings::CullDistance' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, OverriddenLightMapRes) == 0x000038, "Member 'UHISMBuilderSettings::OverriddenLightMapRes' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, LightmapType) == 0x00003C, "Member 'UHISMBuilderSettings::LightmapType' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, BodyInstance) == 0x000048, "Member 'UHISMBuilderSettings::BodyInstance' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, CustomNavigableGeometry) == 0x0001D0, "Member 'UHISMBuilderSettings::CustomNavigableGeometry' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, LightingChannels) == 0x0001D1, "Member 'UHISMBuilderSettings::LightingChannels' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, CustomDepthStencilWriteMask) == 0x0001D8, "Member 'UHISMBuilderSettings::CustomDepthStencilWriteMask' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, CustomDepthStencilValue) == 0x0001DC, "Member 'UHISMBuilderSettings::CustomDepthStencilValue' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, TranslucencySortPriority) == 0x0001E0, "Member 'UHISMBuilderSettings::TranslucencySortPriority' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, RuntimeVirtualTextures) == 0x0001E8, "Member 'UHISMBuilderSettings::RuntimeVirtualTextures' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, VirtualTextureCullMips) == 0x0001F8, "Member 'UHISMBuilderSettings::VirtualTextureCullMips' has a wrong offset!");
static_assert(offsetof(UHISMBuilderSettings, VirtualTextureRenderPassType) == 0x0001FC, "Member 'UHISMBuilderSettings::VirtualTextureRenderPassType' has a wrong offset!");

class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralContentVariationsWeightsModifier">();
	}
	static class UProceduralContentVariationsWeightsModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralContentVariationsWeightsModifier>();
	}
};
static_assert(alignof(UProceduralContentVariationsWeightsModifier) == 0x000008, "Wrong alignment on UProceduralContentVariationsWeightsModifier");
static_assert(sizeof(UProceduralContentVariationsWeightsModifier) == 0x000038, "Wrong size on UProceduralContentVariationsWeightsModifier");

class UProceduralContentVariationsWeightsMapModifier final : public UProceduralContentVariationsWeightsModifier
{
public:
	TArray<struct FProceduralContentVariationMap> VariationsMaps;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralContentVariationsWeightsMapModifier">();
	}
	static class UProceduralContentVariationsWeightsMapModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralContentVariationsWeightsMapModifier>();
	}
};
static_assert(alignof(UProceduralContentVariationsWeightsMapModifier) == 0x000008, "Wrong alignment on UProceduralContentVariationsWeightsMapModifier");
static_assert(sizeof(UProceduralContentVariationsWeightsMapModifier) == 0x000048, "Wrong size on UProceduralContentVariationsWeightsMapModifier");
static_assert(offsetof(UProceduralContentVariationsWeightsMapModifier, VariationsMaps) == 0x000038, "Member 'UProceduralContentVariationsWeightsMapModifier::VariationsMaps' has a wrong offset!");

class UProceduralGenerator : public UObject
{
public:
	struct FProceduralDebugSettings               DebugSettings;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGenerator">();
	}
	static class UProceduralGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGenerator>();
	}
};
static_assert(alignof(UProceduralGenerator) == 0x000008, "Wrong alignment on UProceduralGenerator");
static_assert(sizeof(UProceduralGenerator) == 0x000038, "Wrong size on UProceduralGenerator");
static_assert(offsetof(UProceduralGenerator, DebugSettings) == 0x000028, "Member 'UProceduralGenerator::DebugSettings' has a wrong offset!");

class UProceduralCustomGenerator final : public UProceduralGenerator
{
public:
	TSubclassOf<class UProceduralGeneratorContext> GeneratorContextClass;
	class UProceduralGeneratorContext*            GeneratorContext;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralCustomGenerator">();
	}
	static class UProceduralCustomGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralCustomGenerator>();
	}
};
static_assert(alignof(UProceduralCustomGenerator) == 0x000008, "Wrong alignment on UProceduralCustomGenerator");
static_assert(sizeof(UProceduralCustomGenerator) == 0x000048, "Wrong size on UProceduralCustomGenerator");
static_assert(offsetof(UProceduralCustomGenerator, GeneratorContextClass) == 0x000038, "Member 'UProceduralCustomGenerator::GeneratorContextClass' has a wrong offset!");
static_assert(offsetof(UProceduralCustomGenerator, GeneratorContext) == 0x000040, "Member 'UProceduralCustomGenerator::GeneratorContext' has a wrong offset!");

class UProceduralDensityMapModifier final : public UProceduralDensityModifier
{
public:
	class UProceduralFloatDataMap*                Map;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralDensityMapModifier">();
	}
	static class UProceduralDensityMapModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralDensityMapModifier>();
	}
};
static_assert(alignof(UProceduralDensityMapModifier) == 0x000008, "Wrong alignment on UProceduralDensityMapModifier");
static_assert(sizeof(UProceduralDensityMapModifier) == 0x000040, "Wrong size on UProceduralDensityMapModifier");
static_assert(offsetof(UProceduralDensityMapModifier, Map) == 0x000038, "Member 'UProceduralDensityMapModifier::Map' has a wrong offset!");

class AProceduralGenerationBlockingVolume final : public AVolume
{
public:
	TArray<class AProceduralGenerationVolume*>    BlockedVolumes;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGenerationBlockingVolume">();
	}
	static class AProceduralGenerationBlockingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralGenerationBlockingVolume>();
	}
};
static_assert(alignof(AProceduralGenerationBlockingVolume) == 0x000008, "Wrong alignment on AProceduralGenerationBlockingVolume");
static_assert(sizeof(AProceduralGenerationBlockingVolume) == 0x0002D0, "Wrong size on AProceduralGenerationBlockingVolume");
static_assert(offsetof(AProceduralGenerationBlockingVolume, BlockedVolumes) == 0x0002C0, "Member 'AProceduralGenerationBlockingVolume::BlockedVolumes' has a wrong offset!");

class UProceduralGenerationComponent final : public UActorComponent
{
public:
	class UProceduralGenerator*                   Generator;
	bool                                          bShowDebugVisualization;
	uint8                                         Pad_A9[0x3];
	struct FGuid                                  ProceduralGenerationGuid;
	uint8                                         Pad_BC[0x4];
	class AVolume*                                GenerationVolume;
	class UProceduralGenerationContext*           GenerationContext;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGenerationComponent">();
	}
	static class UProceduralGenerationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGenerationComponent>();
	}
};
static_assert(alignof(UProceduralGenerationComponent) == 0x000008, "Wrong alignment on UProceduralGenerationComponent");
static_assert(sizeof(UProceduralGenerationComponent) == 0x0000D0, "Wrong size on UProceduralGenerationComponent");
static_assert(offsetof(UProceduralGenerationComponent, Generator) == 0x0000A0, "Member 'UProceduralGenerationComponent::Generator' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationComponent, bShowDebugVisualization) == 0x0000A8, "Member 'UProceduralGenerationComponent::bShowDebugVisualization' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationComponent, ProceduralGenerationGuid) == 0x0000AC, "Member 'UProceduralGenerationComponent::ProceduralGenerationGuid' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationComponent, GenerationVolume) == 0x0000C0, "Member 'UProceduralGenerationComponent::GenerationVolume' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationComponent, GenerationContext) == 0x0000C8, "Member 'UProceduralGenerationComponent::GenerationContext' has a wrong offset!");

class UProceduralGenerationContext final : public UObject
{
public:
	class UProceduralGeneratorContext*            GeneratorContext;
	TArray<class UProceduralGeneratorContext*>    GeneratedContexts;
	TArray<class UProceduralGeneratorContext*>    RegisteredContexts;
	TMap<struct FGuid, class UProceduralGeneratorContext*> GeneratorContexts;
	uint8                                         Pad_A0[0x50];

public:
	class UProceduralGenerationComponent* GetGenerationComponent() const;
	class AVolume* GetGenerationVolume() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGenerationContext">();
	}
	static class UProceduralGenerationContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGenerationContext>();
	}
};
static_assert(alignof(UProceduralGenerationContext) == 0x000008, "Wrong alignment on UProceduralGenerationContext");
static_assert(sizeof(UProceduralGenerationContext) == 0x0000F0, "Wrong size on UProceduralGenerationContext");
static_assert(offsetof(UProceduralGenerationContext, GeneratorContext) == 0x000028, "Member 'UProceduralGenerationContext::GeneratorContext' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationContext, GeneratedContexts) == 0x000030, "Member 'UProceduralGenerationContext::GeneratedContexts' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationContext, RegisteredContexts) == 0x000040, "Member 'UProceduralGenerationContext::RegisteredContexts' has a wrong offset!");
static_assert(offsetof(UProceduralGenerationContext, GeneratorContexts) == 0x000050, "Member 'UProceduralGenerationContext::GeneratorContexts' has a wrong offset!");

class AProceduralGenerationVolume final : public AVolume
{
public:
	class UProceduralGenerationComponent*         ProceduralComponent;

public:
	void ClearGeneratedContent();
	void Generate();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGenerationVolume">();
	}
	static class AProceduralGenerationVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralGenerationVolume>();
	}
};
static_assert(alignof(AProceduralGenerationVolume) == 0x000008, "Wrong alignment on AProceduralGenerationVolume");
static_assert(sizeof(AProceduralGenerationVolume) == 0x0002C8, "Wrong size on AProceduralGenerationVolume");
static_assert(offsetof(AProceduralGenerationVolume, ProceduralComponent) == 0x0002C0, "Member 'AProceduralGenerationVolume::ProceduralComponent' has a wrong offset!");

class UProceduralGeneratorContext : public UObject
{
public:
	class UProceduralGenerator*                   Generator;
	class UProceduralGenerationContext*           GenerationContext;
	class UProceduralGeneratorContext*            OwnerContext;
	TArray<class UObject*>                        GeneratedObjects;
	class UProceduralPointCloud*                  ExportedPointCloud;

public:
	void ClearGeneratedContent();
	bool Generate();
	void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator_0, class UProceduralGeneratorContext** Context);
	void OnClearGeneratedContent();
	bool OnGenerate();

	TArray<class UProceduralGeneratorContext*> GetGeneratedContexts() const;
	void OnDrawVisualization() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGeneratorContext">();
	}
	static class UProceduralGeneratorContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGeneratorContext>();
	}
};
static_assert(alignof(UProceduralGeneratorContext) == 0x000008, "Wrong alignment on UProceduralGeneratorContext");
static_assert(sizeof(UProceduralGeneratorContext) == 0x000058, "Wrong size on UProceduralGeneratorContext");
static_assert(offsetof(UProceduralGeneratorContext, Generator) == 0x000028, "Member 'UProceduralGeneratorContext::Generator' has a wrong offset!");
static_assert(offsetof(UProceduralGeneratorContext, GenerationContext) == 0x000030, "Member 'UProceduralGeneratorContext::GenerationContext' has a wrong offset!");
static_assert(offsetof(UProceduralGeneratorContext, OwnerContext) == 0x000038, "Member 'UProceduralGeneratorContext::OwnerContext' has a wrong offset!");
static_assert(offsetof(UProceduralGeneratorContext, GeneratedObjects) == 0x000040, "Member 'UProceduralGeneratorContext::GeneratedObjects' has a wrong offset!");
static_assert(offsetof(UProceduralGeneratorContext, ExportedPointCloud) == 0x000050, "Member 'UProceduralGeneratorContext::ExportedPointCloud' has a wrong offset!");

class UProceduralGeneratorStack final : public UProceduralGenerator
{
public:
	TArray<struct FProceduralGenerationStackElement> Generators;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGeneratorStack">();
	}
	static class UProceduralGeneratorStack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGeneratorStack>();
	}
};
static_assert(alignof(UProceduralGeneratorStack) == 0x000008, "Wrong alignment on UProceduralGeneratorStack");
static_assert(sizeof(UProceduralGeneratorStack) == 0x000048, "Wrong size on UProceduralGeneratorStack");
static_assert(offsetof(UProceduralGeneratorStack, Generators) == 0x000038, "Member 'UProceduralGeneratorStack::Generators' has a wrong offset!");

class UProceduralGeneratorStackContext final : public UProceduralGeneratorContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralGeneratorStackContext">();
	}
	static class UProceduralGeneratorStackContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralGeneratorStackContext>();
	}
};
static_assert(alignof(UProceduralGeneratorStackContext) == 0x000008, "Wrong alignment on UProceduralGeneratorStackContext");
static_assert(sizeof(UProceduralGeneratorStackContext) == 0x000058, "Wrong size on UProceduralGeneratorStackContext");

class UProceduralPointCloud final : public UObject
{
public:
	TArray<struct FProceduralPointCloudPoint>     Points;

public:
	void Empty();
	TArray<struct FProceduralPointCloudPoint> GetPointsByTag(class FName InTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralPointCloud">();
	}
	static class UProceduralPointCloud* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralPointCloud>();
	}
};
static_assert(alignof(UProceduralPointCloud) == 0x000008, "Wrong alignment on UProceduralPointCloud");
static_assert(sizeof(UProceduralPointCloud) == 0x000038, "Wrong size on UProceduralPointCloud");
static_assert(offsetof(UProceduralPointCloud, Points) == 0x000028, "Member 'UProceduralPointCloud::Points' has a wrong offset!");

class UProceduralRotationMapModifier final : public UProceduralRotationModifier
{
public:
	class UProceduralVectorDataMap*               Map;
	EProceduralRotationFormat                     RotationFormat;
	uint8                                         Pad_41[0x3];
	struct FFloatInterval                         Roll;
	struct FFloatInterval                         Pitch;
	struct FFloatInterval                         Yaw;
	uint8                                         Pad_5C[0x4];

public:
	void SetPitchMax(float InValue);
	void SetPitchMin(float InValue);
	void SetRollMax(float InValue);
	void SetRollMin(float InValue);
	void SetYawMax(float InValue);
	void SetYawMin(float InValue);

	float GetPitchMax() const;
	float GetPitchMin() const;
	float GetRollMax() const;
	float GetRollMin() const;
	float GetYawMax() const;
	float GetYawMin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralRotationMapModifier">();
	}
	static class UProceduralRotationMapModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralRotationMapModifier>();
	}
};
static_assert(alignof(UProceduralRotationMapModifier) == 0x000008, "Wrong alignment on UProceduralRotationMapModifier");
static_assert(sizeof(UProceduralRotationMapModifier) == 0x000060, "Wrong size on UProceduralRotationMapModifier");
static_assert(offsetof(UProceduralRotationMapModifier, Map) == 0x000038, "Member 'UProceduralRotationMapModifier::Map' has a wrong offset!");
static_assert(offsetof(UProceduralRotationMapModifier, RotationFormat) == 0x000040, "Member 'UProceduralRotationMapModifier::RotationFormat' has a wrong offset!");
static_assert(offsetof(UProceduralRotationMapModifier, Roll) == 0x000044, "Member 'UProceduralRotationMapModifier::Roll' has a wrong offset!");
static_assert(offsetof(UProceduralRotationMapModifier, Pitch) == 0x00004C, "Member 'UProceduralRotationMapModifier::Pitch' has a wrong offset!");
static_assert(offsetof(UProceduralRotationMapModifier, Yaw) == 0x000054, "Member 'UProceduralRotationMapModifier::Yaw' has a wrong offset!");

class UProceduralRotationNoiseModifier final : public UProceduralRotationModifier
{
public:
	uint8                                         bRandomRoll : 1;
	uint8                                         Pad_39[0x3];
	struct FFloatInterval                         RandomRoll;
	uint8                                         bRandomPitch : 1;
	uint8                                         Pad_45[0x3];
	struct FFloatInterval                         RandomPitch;
	uint8                                         bRandomYaw : 1;
	uint8                                         Pad_51[0x3];
	struct FFloatInterval                         RandomYaw;
	uint8                                         Pad_5C[0x4];

public:
	void SetRandomPitchMax(float InValue);
	void SetRandomPitchMin(float InValue);
	void SetRandomRollMax(float InValue);
	void SetRandomRollMin(float InValue);
	void SetRandomYawMax(float InValue);
	void SetRandomYawMin(float InValue);

	float GetRandomPitchMax() const;
	float GetRandomPitchMin() const;
	float GetRandomRollMax() const;
	float GetRandomRollMin() const;
	float GetRandomYawMax() const;
	float GetRandomYawMin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralRotationNoiseModifier">();
	}
	static class UProceduralRotationNoiseModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralRotationNoiseModifier>();
	}
};
static_assert(alignof(UProceduralRotationNoiseModifier) == 0x000008, "Wrong alignment on UProceduralRotationNoiseModifier");
static_assert(sizeof(UProceduralRotationNoiseModifier) == 0x000060, "Wrong size on UProceduralRotationNoiseModifier");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomRoll) == 0x00003C, "Member 'UProceduralRotationNoiseModifier::RandomRoll' has a wrong offset!");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomPitch) == 0x000048, "Member 'UProceduralRotationNoiseModifier::RandomPitch' has a wrong offset!");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomYaw) == 0x000054, "Member 'UProceduralRotationNoiseModifier::RandomYaw' has a wrong offset!");

class UProceduralScaleMapModifier final : public UProceduralScaleModifier
{
public:
	bool                                          bRemapScale;
	uint8                                         Pad_39[0x3];
	struct FFloatInterval                         RemapScale;
	uint8                                         Pad_44[0x4];
	class UProceduralFloatDataMap*                Map;

public:
	void SetRemapScaleMax(float InValue);
	void SetRemapScaleMin(float InValue);

	float GetRemapScaleMax() const;
	float GetRemapScaleMin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScaleMapModifier">();
	}
	static class UProceduralScaleMapModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScaleMapModifier>();
	}
};
static_assert(alignof(UProceduralScaleMapModifier) == 0x000008, "Wrong alignment on UProceduralScaleMapModifier");
static_assert(sizeof(UProceduralScaleMapModifier) == 0x000050, "Wrong size on UProceduralScaleMapModifier");
static_assert(offsetof(UProceduralScaleMapModifier, bRemapScale) == 0x000038, "Member 'UProceduralScaleMapModifier::bRemapScale' has a wrong offset!");
static_assert(offsetof(UProceduralScaleMapModifier, RemapScale) == 0x00003C, "Member 'UProceduralScaleMapModifier::RemapScale' has a wrong offset!");
static_assert(offsetof(UProceduralScaleMapModifier, Map) == 0x000048, "Member 'UProceduralScaleMapModifier::Map' has a wrong offset!");

class UProceduralScaleNoiseModifier final : public UProceduralScaleModifier
{
public:
	struct FFloatInterval                         Scale;

public:
	void SetScaleMax(float InValue);
	void SetScaleMin(float InValue);

	float GetScaleMax() const;
	float GetScaleMin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScaleNoiseModifier">();
	}
	static class UProceduralScaleNoiseModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScaleNoiseModifier>();
	}
};
static_assert(alignof(UProceduralScaleNoiseModifier) == 0x000008, "Wrong alignment on UProceduralScaleNoiseModifier");
static_assert(sizeof(UProceduralScaleNoiseModifier) == 0x000040, "Wrong size on UProceduralScaleNoiseModifier");
static_assert(offsetof(UProceduralScaleNoiseModifier, Scale) == 0x000038, "Member 'UProceduralScaleNoiseModifier::Scale' has a wrong offset!");

class UProceduralScatterContentVariation : public UObject
{
public:
	float                                         Weight;
	EProceduralScatterContentPivotMode            PivotMode;
	uint8                                         Pad_2D[0x3];
	struct FVector                                AdditionalPivotOffset;
	float                                         FootprintBoundingBoxRatio;
	uint8                                         Pad_4C[0x4];
	TArray<class FName>                           SetActorTags;
	uint8                                         Pad_60[0x88];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterContentVariation">();
	}
	static class UProceduralScatterContentVariation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterContentVariation>();
	}
};
static_assert(alignof(UProceduralScatterContentVariation) == 0x000008, "Wrong alignment on UProceduralScatterContentVariation");
static_assert(sizeof(UProceduralScatterContentVariation) == 0x0000E8, "Wrong size on UProceduralScatterContentVariation");
static_assert(offsetof(UProceduralScatterContentVariation, Weight) == 0x000028, "Member 'UProceduralScatterContentVariation::Weight' has a wrong offset!");
static_assert(offsetof(UProceduralScatterContentVariation, PivotMode) == 0x00002C, "Member 'UProceduralScatterContentVariation::PivotMode' has a wrong offset!");
static_assert(offsetof(UProceduralScatterContentVariation, AdditionalPivotOffset) == 0x000030, "Member 'UProceduralScatterContentVariation::AdditionalPivotOffset' has a wrong offset!");
static_assert(offsetof(UProceduralScatterContentVariation, FootprintBoundingBoxRatio) == 0x000048, "Member 'UProceduralScatterContentVariation::FootprintBoundingBoxRatio' has a wrong offset!");
static_assert(offsetof(UProceduralScatterContentVariation, SetActorTags) == 0x000050, "Member 'UProceduralScatterContentVariation::SetActorTags' has a wrong offset!");

class UProceduralScatterActorContentVariation final : public UProceduralScatterContentVariation
{
public:
	TSubclassOf<class AActor>                     ActorClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterActorContentVariation">();
	}
	static class UProceduralScatterActorContentVariation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterActorContentVariation>();
	}
};
static_assert(alignof(UProceduralScatterActorContentVariation) == 0x000008, "Wrong alignment on UProceduralScatterActorContentVariation");
static_assert(sizeof(UProceduralScatterActorContentVariation) == 0x0000F0, "Wrong size on UProceduralScatterActorContentVariation");
static_assert(offsetof(UProceduralScatterActorContentVariation, ActorClass) == 0x0000E8, "Member 'UProceduralScatterActorContentVariation::ActorClass' has a wrong offset!");

class UProceduralScatterContentSettings : public UObject
{
public:
	TArray<class FName>                           SetActorTags;
	TArray<class UProceduralScatterContentVariation*> Variations;
	uint8                                         Pad_48[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterContentSettings">();
	}
	static class UProceduralScatterContentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterContentSettings>();
	}
};
static_assert(alignof(UProceduralScatterContentSettings) == 0x000008, "Wrong alignment on UProceduralScatterContentSettings");
static_assert(sizeof(UProceduralScatterContentSettings) == 0x000068, "Wrong size on UProceduralScatterContentSettings");
static_assert(offsetof(UProceduralScatterContentSettings, SetActorTags) == 0x000028, "Member 'UProceduralScatterContentSettings::SetActorTags' has a wrong offset!");
static_assert(offsetof(UProceduralScatterContentSettings, Variations) == 0x000038, "Member 'UProceduralScatterContentSettings::Variations' has a wrong offset!");

class UProceduralScatterActorContentSettings final : public UProceduralScatterContentSettings
{
public:
	bool                                          bHideFromWorldOutliner;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterActorContentSettings">();
	}
	static class UProceduralScatterActorContentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterActorContentSettings>();
	}
};
static_assert(alignof(UProceduralScatterActorContentSettings) == 0x000008, "Wrong alignment on UProceduralScatterActorContentSettings");
static_assert(sizeof(UProceduralScatterActorContentSettings) == 0x000070, "Wrong size on UProceduralScatterActorContentSettings");
static_assert(offsetof(UProceduralScatterActorContentSettings, bHideFromWorldOutliner) == 0x000068, "Member 'UProceduralScatterActorContentSettings::bHideFromWorldOutliner' has a wrong offset!");

class UProceduralScatterGenerator final : public UProceduralGenerator
{
public:
	EProceduralScatterMethod                      ScatterMethod;
	uint8                                         Pad_39[0x3];
	struct FProceduralScatterTileSettings         TileSettings;
	int32                                         RandomSeed;
	int32                                         NumUniqueSourcePointPatterns;
	struct FVector2D                              GridSize;
	struct FVector2D                              GridJitter;
	float                                         GridRotation;
	uint8                                         Pad_7C[0x4];
	struct FVector2D                              GridOffset;
	TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements;
	TArray<class FName>                           BlockingActorTags;
	bool                                          bAllScatterPointsBlocking;
	bool                                          bLocalDistribution;
	uint8                                         Pad_B2[0x6];
	TArray<class FName>                           BlockingScatterPointTags;
	struct FProceduralScatterDebugSettings        ScatterDebugSettings;
	uint8                                         Pad_D4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterGenerator">();
	}
	static class UProceduralScatterGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterGenerator>();
	}
};
static_assert(alignof(UProceduralScatterGenerator) == 0x000008, "Wrong alignment on UProceduralScatterGenerator");
static_assert(sizeof(UProceduralScatterGenerator) == 0x0000D8, "Wrong size on UProceduralScatterGenerator");
static_assert(offsetof(UProceduralScatterGenerator, ScatterMethod) == 0x000038, "Member 'UProceduralScatterGenerator::ScatterMethod' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, TileSettings) == 0x00003C, "Member 'UProceduralScatterGenerator::TileSettings' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, RandomSeed) == 0x000050, "Member 'UProceduralScatterGenerator::RandomSeed' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, NumUniqueSourcePointPatterns) == 0x000054, "Member 'UProceduralScatterGenerator::NumUniqueSourcePointPatterns' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, GridSize) == 0x000058, "Member 'UProceduralScatterGenerator::GridSize' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, GridJitter) == 0x000068, "Member 'UProceduralScatterGenerator::GridJitter' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, GridRotation) == 0x000078, "Member 'UProceduralScatterGenerator::GridRotation' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, GridOffset) == 0x000080, "Member 'UProceduralScatterGenerator::GridOffset' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, ScatterSettingsElements) == 0x000090, "Member 'UProceduralScatterGenerator::ScatterSettingsElements' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, BlockingActorTags) == 0x0000A0, "Member 'UProceduralScatterGenerator::BlockingActorTags' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, bAllScatterPointsBlocking) == 0x0000B0, "Member 'UProceduralScatterGenerator::bAllScatterPointsBlocking' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, bLocalDistribution) == 0x0000B1, "Member 'UProceduralScatterGenerator::bLocalDistribution' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, BlockingScatterPointTags) == 0x0000B8, "Member 'UProceduralScatterGenerator::BlockingScatterPointTags' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGenerator, ScatterDebugSettings) == 0x0000C8, "Member 'UProceduralScatterGenerator::ScatterDebugSettings' has a wrong offset!");

class alignas(0x10) UProceduralScatterGeneratorContext final : public UProceduralGeneratorContext
{
public:
	struct FScatteredPointCloud                   ScatteredPointCloud;
	TArray<class UProceduralScatterGeneratorTile*> UniqueTiles;
	TArray<struct FSourcePointGenerator>          SourcePointGenerators;
	TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud;
	class UProceduralPointCloud*                  SourcePointCloud;
	class UProceduralPointCloud*                  BlockerPointCloud;
	class UMaterialInstanceDynamic*               ProjectionVectorMaterial;
	uint8                                         Pad_B0[0x2D0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterGeneratorContext">();
	}
	static class UProceduralScatterGeneratorContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterGeneratorContext>();
	}
};
static_assert(alignof(UProceduralScatterGeneratorContext) == 0x000010, "Wrong alignment on UProceduralScatterGeneratorContext");
static_assert(sizeof(UProceduralScatterGeneratorContext) == 0x000380, "Wrong size on UProceduralScatterGeneratorContext");
static_assert(offsetof(UProceduralScatterGeneratorContext, ScatteredPointCloud) == 0x000058, "Member 'UProceduralScatterGeneratorContext::ScatteredPointCloud' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, UniqueTiles) == 0x000068, "Member 'UProceduralScatterGeneratorContext::UniqueTiles' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, SourcePointGenerators) == 0x000078, "Member 'UProceduralScatterGeneratorContext::SourcePointGenerators' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, ProjectionPointCloud) == 0x000088, "Member 'UProceduralScatterGeneratorContext::ProjectionPointCloud' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, SourcePointCloud) == 0x000098, "Member 'UProceduralScatterGeneratorContext::SourcePointCloud' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, BlockerPointCloud) == 0x0000A0, "Member 'UProceduralScatterGeneratorContext::BlockerPointCloud' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorContext, ProjectionVectorMaterial) == 0x0000A8, "Member 'UProceduralScatterGeneratorContext::ProjectionVectorMaterial' has a wrong offset!");

class UProceduralScatterGeneratorTile final : public UObject
{
public:
	class UProceduralScatterGenerator*            Generator;
	TArray<struct FProceduralScatter2DPoint>      GeneratedPoints;
	uint8                                         Pad_40[0x128];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterGeneratorTile">();
	}
	static class UProceduralScatterGeneratorTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterGeneratorTile>();
	}
};
static_assert(alignof(UProceduralScatterGeneratorTile) == 0x000008, "Wrong alignment on UProceduralScatterGeneratorTile");
static_assert(sizeof(UProceduralScatterGeneratorTile) == 0x000168, "Wrong size on UProceduralScatterGeneratorTile");
static_assert(offsetof(UProceduralScatterGeneratorTile, Generator) == 0x000028, "Member 'UProceduralScatterGeneratorTile::Generator' has a wrong offset!");
static_assert(offsetof(UProceduralScatterGeneratorTile, GeneratedPoints) == 0x000030, "Member 'UProceduralScatterGeneratorTile::GeneratedPoints' has a wrong offset!");

class UProceduralScatterSettings final : public UObject
{
public:
	class UProceduralScatterContentSettings*      Content;
	uint8                                         bContentVariationsModifiersEnabled : 1;
	uint8                                         Pad_31[0x7];
	struct FProceduralContentVariationsModifiers  ContentVariationsModifiers;
	TArray<class FName>                           SetPointTags;
	float                                         CollisionRadius;
	uint8                                         bAutomaticCollisionRadius : 1;
	uint8                                         bUseSphericalBoundsForAutomaticCollisionRadius : 1;
	uint8                                         Pad_5D[0x3];
	float                                         AutomaticCollisionRadiusScaleFactor;
	int32                                         DistributionSeed;
	uint8                                         bDensityModifiersEnabled : 1;
	uint8                                         Pad_69[0x7];
	struct FProceduralDensityModifiers            DensityModifiers;
	float                                         Density;
	uint8                                         Pad_84[0x4];
	TArray<class FName>                           SourcePointTagIncludes;
	TArray<class FName>                           SourcePointTagExcludes;
	TArray<class FName>                           SourceActorTagIncludes;
	TArray<class FName>                           SourceActorTagExcludes;
	TArray<class FName>                           SourceComponentTagIncludes;
	TArray<class FName>                           SourceComponentTagExcludes;
	struct FFloatInterval                         SourcePointDistance;
	uint8                                         bUseSourcePointExactNumber : 1;
	uint8                                         Pad_F1[0x3];
	int32                                         SourcePointExactNumber;
	uint8                                         bScaleModifiersEnabled : 1;
	uint8                                         Pad_F9[0x7];
	struct FProceduralScaleModifiers              ScaleModifiers;
	uint8                                         bRotationModifiersEnabled : 1;
	uint8                                         Pad_121[0x7];
	struct FProceduralRotationModifiers           RotationModifiers;
	uint8                                         bAlignToNormal : 1;
	uint8                                         Pad_139[0x3];
	float                                         AlignMaxAngle;
	struct FProceduralScatterTargetSurface        TargetSurface;
	uint8                                         bDetectOverhangingLedge : 1;
	uint8                                         Pad_189[0x3];
	int32                                         OverhangingLedgeDetectionRayCount;
	float                                         OverhangingLedgeDetectionLength;
	float                                         OverhangingLedgeDetectionVerticalThreshold;
	float                                         OverhangingLedgeDetectionRadiusScale;
	float                                         FilterMinimumScale;
	float                                         OverlapPriority;
	uint8                                         bCollisionWithWorld : 1;
	uint8                                         Pad_1A5[0x3];
	struct FVector                                CollisionScale;
	struct FColor                                 DebugColor;
	uint8                                         Pad_1C4[0x14];

public:
	void SetSourcePointDistanceMax(float InValue);
	void SetSourcePointDistanceMin(float InValue);

	float GetSourcePointDistanceMax() const;
	float GetSourcePointDistanceMin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterSettings">();
	}
	static class UProceduralScatterSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterSettings>();
	}
};
static_assert(alignof(UProceduralScatterSettings) == 0x000008, "Wrong alignment on UProceduralScatterSettings");
static_assert(sizeof(UProceduralScatterSettings) == 0x0001D8, "Wrong size on UProceduralScatterSettings");
static_assert(offsetof(UProceduralScatterSettings, Content) == 0x000028, "Member 'UProceduralScatterSettings::Content' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, ContentVariationsModifiers) == 0x000038, "Member 'UProceduralScatterSettings::ContentVariationsModifiers' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SetPointTags) == 0x000048, "Member 'UProceduralScatterSettings::SetPointTags' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, CollisionRadius) == 0x000058, "Member 'UProceduralScatterSettings::CollisionRadius' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, AutomaticCollisionRadiusScaleFactor) == 0x000060, "Member 'UProceduralScatterSettings::AutomaticCollisionRadiusScaleFactor' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, DistributionSeed) == 0x000064, "Member 'UProceduralScatterSettings::DistributionSeed' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, DensityModifiers) == 0x000070, "Member 'UProceduralScatterSettings::DensityModifiers' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, Density) == 0x000080, "Member 'UProceduralScatterSettings::Density' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourcePointTagIncludes) == 0x000088, "Member 'UProceduralScatterSettings::SourcePointTagIncludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourcePointTagExcludes) == 0x000098, "Member 'UProceduralScatterSettings::SourcePointTagExcludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourceActorTagIncludes) == 0x0000A8, "Member 'UProceduralScatterSettings::SourceActorTagIncludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourceActorTagExcludes) == 0x0000B8, "Member 'UProceduralScatterSettings::SourceActorTagExcludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourceComponentTagIncludes) == 0x0000C8, "Member 'UProceduralScatterSettings::SourceComponentTagIncludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourceComponentTagExcludes) == 0x0000D8, "Member 'UProceduralScatterSettings::SourceComponentTagExcludes' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourcePointDistance) == 0x0000E8, "Member 'UProceduralScatterSettings::SourcePointDistance' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, SourcePointExactNumber) == 0x0000F4, "Member 'UProceduralScatterSettings::SourcePointExactNumber' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, ScaleModifiers) == 0x000100, "Member 'UProceduralScatterSettings::ScaleModifiers' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, RotationModifiers) == 0x000128, "Member 'UProceduralScatterSettings::RotationModifiers' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, AlignMaxAngle) == 0x00013C, "Member 'UProceduralScatterSettings::AlignMaxAngle' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, TargetSurface) == 0x000140, "Member 'UProceduralScatterSettings::TargetSurface' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionRayCount) == 0x00018C, "Member 'UProceduralScatterSettings::OverhangingLedgeDetectionRayCount' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionLength) == 0x000190, "Member 'UProceduralScatterSettings::OverhangingLedgeDetectionLength' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionVerticalThreshold) == 0x000194, "Member 'UProceduralScatterSettings::OverhangingLedgeDetectionVerticalThreshold' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionRadiusScale) == 0x000198, "Member 'UProceduralScatterSettings::OverhangingLedgeDetectionRadiusScale' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, FilterMinimumScale) == 0x00019C, "Member 'UProceduralScatterSettings::FilterMinimumScale' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, OverlapPriority) == 0x0001A0, "Member 'UProceduralScatterSettings::OverlapPriority' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, CollisionScale) == 0x0001A8, "Member 'UProceduralScatterSettings::CollisionScale' has a wrong offset!");
static_assert(offsetof(UProceduralScatterSettings, DebugColor) == 0x0001C0, "Member 'UProceduralScatterSettings::DebugColor' has a wrong offset!");

class UProceduralScatterStaticMeshContentVariation final : public UProceduralScatterContentVariation
{
public:
	EProceduralScatterStaticMeshMode              StaticMeshMode;
	uint8                                         Pad_E9[0x7];
	class UStaticMesh*                            Mesh;
	TSubclassOf<class AActor>                     ActorClass;
	TArray<class UMaterialInterface*>             OverrideMaterials;
	class UHISMBuilderSettings*                   OverrideInstancingSettings;
	uint8                                         Pad_118[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterStaticMeshContentVariation">();
	}
	static class UProceduralScatterStaticMeshContentVariation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterStaticMeshContentVariation>();
	}
};
static_assert(alignof(UProceduralScatterStaticMeshContentVariation) == 0x000008, "Wrong alignment on UProceduralScatterStaticMeshContentVariation");
static_assert(sizeof(UProceduralScatterStaticMeshContentVariation) == 0x000168, "Wrong size on UProceduralScatterStaticMeshContentVariation");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, StaticMeshMode) == 0x0000E8, "Member 'UProceduralScatterStaticMeshContentVariation::StaticMeshMode' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, Mesh) == 0x0000F0, "Member 'UProceduralScatterStaticMeshContentVariation::Mesh' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, ActorClass) == 0x0000F8, "Member 'UProceduralScatterStaticMeshContentVariation::ActorClass' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, OverrideMaterials) == 0x000100, "Member 'UProceduralScatterStaticMeshContentVariation::OverrideMaterials' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, OverrideInstancingSettings) == 0x000110, "Member 'UProceduralScatterStaticMeshContentVariation::OverrideInstancingSettings' has a wrong offset!");

class UProceduralScatterStaticMeshContentSettings final : public UProceduralScatterContentSettings
{
public:
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;
	class FName                                   ComponentTag;
	uint8                                         Pad_74[0x4];
	class UHISMBuilderSettings*                   VariationsInstancingSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralScatterStaticMeshContentSettings">();
	}
	static class UProceduralScatterStaticMeshContentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralScatterStaticMeshContentSettings>();
	}
};
static_assert(alignof(UProceduralScatterStaticMeshContentSettings) == 0x000008, "Wrong alignment on UProceduralScatterStaticMeshContentSettings");
static_assert(sizeof(UProceduralScatterStaticMeshContentSettings) == 0x000080, "Wrong size on UProceduralScatterStaticMeshContentSettings");
static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, ComponentClass) == 0x000068, "Member 'UProceduralScatterStaticMeshContentSettings::ComponentClass' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, ComponentTag) == 0x000070, "Member 'UProceduralScatterStaticMeshContentSettings::ComponentTag' has a wrong offset!");
static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, VariationsInstancingSettings) == 0x000078, "Member 'UProceduralScatterStaticMeshContentSettings::VariationsInstancingSettings' has a wrong offset!");

class UProceduralSurfaceHeightMap final : public UProceduralFloatDataMap
{
public:
	bool                                          bNormalizedHeight;
	uint8                                         Pad_B9[0x3];
	struct FFloatInterval                         HeightRange;
	uint8                                         Pad_C4[0x4];

public:
	void SetHeightRangeMax(float InValue);
	void SetHeightRangeMin(float InValue);

	float GetHeightRangeMax() const;
	float GetHeightRangeMin() const;
	float GetValue(float InHeight) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralSurfaceHeightMap">();
	}
	static class UProceduralSurfaceHeightMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralSurfaceHeightMap>();
	}
};
static_assert(alignof(UProceduralSurfaceHeightMap) == 0x000008, "Wrong alignment on UProceduralSurfaceHeightMap");
static_assert(sizeof(UProceduralSurfaceHeightMap) == 0x0000C8, "Wrong size on UProceduralSurfaceHeightMap");
static_assert(offsetof(UProceduralSurfaceHeightMap, bNormalizedHeight) == 0x0000B8, "Member 'UProceduralSurfaceHeightMap::bNormalizedHeight' has a wrong offset!");
static_assert(offsetof(UProceduralSurfaceHeightMap, HeightRange) == 0x0000BC, "Member 'UProceduralSurfaceHeightMap::HeightRange' has a wrong offset!");

class UProceduralSurfaceSlopeAngleMap final : public UProceduralFloatDataMap
{
public:
	bool                                          bNormalizedSlopeAngle;
	uint8                                         Pad_B9[0x3];
	struct FFloatInterval                         SlopeAngleRange;
	uint8                                         Pad_C4[0x4];

public:
	void SetSlopeAngleRangeMax(float InValue);
	void SetSlopeAngleRangeMin(float InValue);

	float GetSlopeAngleRangeMax() const;
	float GetSlopeAngleRangeMin() const;
	float GetValue(float InSlopeAngle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralSurfaceSlopeAngleMap">();
	}
	static class UProceduralSurfaceSlopeAngleMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralSurfaceSlopeAngleMap>();
	}
};
static_assert(alignof(UProceduralSurfaceSlopeAngleMap) == 0x000008, "Wrong alignment on UProceduralSurfaceSlopeAngleMap");
static_assert(sizeof(UProceduralSurfaceSlopeAngleMap) == 0x0000C8, "Wrong size on UProceduralSurfaceSlopeAngleMap");
static_assert(offsetof(UProceduralSurfaceSlopeAngleMap, bNormalizedSlopeAngle) == 0x0000B8, "Member 'UProceduralSurfaceSlopeAngleMap::bNormalizedSlopeAngle' has a wrong offset!");
static_assert(offsetof(UProceduralSurfaceSlopeAngleMap, SlopeAngleRange) == 0x0000BC, "Member 'UProceduralSurfaceSlopeAngleMap::SlopeAngleRange' has a wrong offset!");

}
