#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GLTFExporter_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UGLTFExportOptions final : public UObject
{
public:
	float                                         ExportUniformScale;
	bool                                          bExportPreviewMesh;
	bool                                          bStrictCompliance;
	bool                                          bSkipNearDefaultValues;
	bool                                          bIncludeGeneratorVersion;
	bool                                          bExportProxyMaterials;
	bool                                          bExportUnlitMaterials;
	bool                                          bExportClearCoatMaterials;
	bool                                          bExportExtraBlendModes;
	EGLTFMaterialBakeMode                         BakeMaterialInputs;
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;
	ETextureFilter                                DefaultMaterialBakeFilter;
	ETextureAddress                               DefaultMaterialBakeTiling;
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;
	int32                                         DefaultLevelOfDetail;
	bool                                          bExportVertexColors;
	bool                                          bExportVertexSkinWeights;
	bool                                          bUseMeshQuantization;
	bool                                          bExportLevelSequences;
	bool                                          bExportAnimationSequences;
	bool                                          bExportPlaybackSettings;
	EGLTFTextureImageFormat                       TextureImageFormat;
	uint8                                         Pad_93[0x1];
	int32                                         TextureImageQuality;
	int32                                         NoLossyImageFormatFor;
	bool                                          bExportTextureTransforms;
	bool                                          bExportLightmaps;
	EGLTFTextureHDREncoding                       TextureHDREncoding;
	bool                                          bAdjustNormalmaps;
	bool                                          bExportHiddenInGame;
	uint8                                         Pad_A1[0x3];
	int32                                         ExportLights;
	bool                                          bExportCameras;
	bool                                          bExportHDRIBackdrops;
	bool                                          bExportSkySpheres;
	EGLTFVariantSetsMode                          VariantSetsMode;
	EGLTFMaterialVariantMode                      ExportMaterialVariants;
	bool                                          bExportMeshVariants;
	bool                                          bExportVisibilityVariants;
	uint8                                         Pad_AF[0x1];

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExportOptions">();
	}
	static class UGLTFExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExportOptions>();
	}
};
static_assert(alignof(UGLTFExportOptions) == 0x000008, "Wrong alignment on UGLTFExportOptions");
static_assert(sizeof(UGLTFExportOptions) == 0x0000B0, "Wrong size on UGLTFExportOptions");
static_assert(offsetof(UGLTFExportOptions, ExportUniformScale) == 0x000028, "Member 'UGLTFExportOptions::ExportUniformScale' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportPreviewMesh) == 0x00002C, "Member 'UGLTFExportOptions::bExportPreviewMesh' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bStrictCompliance) == 0x00002D, "Member 'UGLTFExportOptions::bStrictCompliance' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bSkipNearDefaultValues) == 0x00002E, "Member 'UGLTFExportOptions::bSkipNearDefaultValues' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bIncludeGeneratorVersion) == 0x00002F, "Member 'UGLTFExportOptions::bIncludeGeneratorVersion' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportProxyMaterials) == 0x000030, "Member 'UGLTFExportOptions::bExportProxyMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportUnlitMaterials) == 0x000031, "Member 'UGLTFExportOptions::bExportUnlitMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportClearCoatMaterials) == 0x000032, "Member 'UGLTFExportOptions::bExportClearCoatMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportExtraBlendModes) == 0x000033, "Member 'UGLTFExportOptions::bExportExtraBlendModes' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, BakeMaterialInputs) == 0x000034, "Member 'UGLTFExportOptions::BakeMaterialInputs' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeSize) == 0x000035, "Member 'UGLTFExportOptions::DefaultMaterialBakeSize' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeFilter) == 0x000036, "Member 'UGLTFExportOptions::DefaultMaterialBakeFilter' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeTiling) == 0x000037, "Member 'UGLTFExportOptions::DefaultMaterialBakeTiling' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultInputBakeSettings) == 0x000038, "Member 'UGLTFExportOptions::DefaultInputBakeSettings' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultLevelOfDetail) == 0x000088, "Member 'UGLTFExportOptions::DefaultLevelOfDetail' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVertexColors) == 0x00008C, "Member 'UGLTFExportOptions::bExportVertexColors' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVertexSkinWeights) == 0x00008D, "Member 'UGLTFExportOptions::bExportVertexSkinWeights' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bUseMeshQuantization) == 0x00008E, "Member 'UGLTFExportOptions::bUseMeshQuantization' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportLevelSequences) == 0x00008F, "Member 'UGLTFExportOptions::bExportLevelSequences' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportAnimationSequences) == 0x000090, "Member 'UGLTFExportOptions::bExportAnimationSequences' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportPlaybackSettings) == 0x000091, "Member 'UGLTFExportOptions::bExportPlaybackSettings' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureImageFormat) == 0x000092, "Member 'UGLTFExportOptions::TextureImageFormat' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureImageQuality) == 0x000094, "Member 'UGLTFExportOptions::TextureImageQuality' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, NoLossyImageFormatFor) == 0x000098, "Member 'UGLTFExportOptions::NoLossyImageFormatFor' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportTextureTransforms) == 0x00009C, "Member 'UGLTFExportOptions::bExportTextureTransforms' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportLightmaps) == 0x00009D, "Member 'UGLTFExportOptions::bExportLightmaps' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureHDREncoding) == 0x00009E, "Member 'UGLTFExportOptions::TextureHDREncoding' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bAdjustNormalmaps) == 0x00009F, "Member 'UGLTFExportOptions::bAdjustNormalmaps' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportHiddenInGame) == 0x0000A0, "Member 'UGLTFExportOptions::bExportHiddenInGame' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, ExportLights) == 0x0000A4, "Member 'UGLTFExportOptions::ExportLights' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportCameras) == 0x0000A8, "Member 'UGLTFExportOptions::bExportCameras' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportHDRIBackdrops) == 0x0000A9, "Member 'UGLTFExportOptions::bExportHDRIBackdrops' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportSkySpheres) == 0x0000AA, "Member 'UGLTFExportOptions::bExportSkySpheres' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, VariantSetsMode) == 0x0000AB, "Member 'UGLTFExportOptions::VariantSetsMode' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, ExportMaterialVariants) == 0x0000AC, "Member 'UGLTFExportOptions::ExportMaterialVariants' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportMeshVariants) == 0x0000AD, "Member 'UGLTFExportOptions::bExportMeshVariants' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVisibilityVariants) == 0x0000AE, "Member 'UGLTFExportOptions::bExportVisibilityVariants' has a wrong offset!");

class UGLTFExporter : public UExporter
{
public:
	static bool ExportToGLTF(class UObject* Object, const class FString& FilePath, const class UGLTFExportOptions* Options, const TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExporter">();
	}
	static class UGLTFExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExporter>();
	}
};
static_assert(alignof(UGLTFExporter) == 0x000008, "Wrong alignment on UGLTFExporter");
static_assert(sizeof(UGLTFExporter) == 0x000078, "Wrong size on UGLTFExporter");

class UGLTFAnimSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFAnimSequenceExporter">();
	}
	static class UGLTFAnimSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFAnimSequenceExporter>();
	}
};
static_assert(alignof(UGLTFAnimSequenceExporter) == 0x000008, "Wrong alignment on UGLTFAnimSequenceExporter");
static_assert(sizeof(UGLTFAnimSequenceExporter) == 0x000078, "Wrong size on UGLTFAnimSequenceExporter");

class UGLTFLevelExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelExporter">();
	}
	static class UGLTFLevelExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelExporter>();
	}
};
static_assert(alignof(UGLTFLevelExporter) == 0x000008, "Wrong alignment on UGLTFLevelExporter");
static_assert(sizeof(UGLTFLevelExporter) == 0x000078, "Wrong size on UGLTFLevelExporter");

class UGLTFLevelSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelSequenceExporter">();
	}
	static class UGLTFLevelSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelSequenceExporter>();
	}
};
static_assert(alignof(UGLTFLevelSequenceExporter) == 0x000008, "Wrong alignment on UGLTFLevelSequenceExporter");
static_assert(sizeof(UGLTFLevelSequenceExporter) == 0x000078, "Wrong size on UGLTFLevelSequenceExporter");

class UGLTFLevelVariantSetsExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelVariantSetsExporter">();
	}
	static class UGLTFLevelVariantSetsExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelVariantSetsExporter>();
	}
};
static_assert(alignof(UGLTFLevelVariantSetsExporter) == 0x000008, "Wrong alignment on UGLTFLevelVariantSetsExporter");
static_assert(sizeof(UGLTFLevelVariantSetsExporter) == 0x000078, "Wrong size on UGLTFLevelVariantSetsExporter");

class UGLTFMaterialExporter final : public UGLTFExporter
{
public:
	class UStaticMesh*                            DefaultPreviewMesh;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExporter">();
	}
	static class UGLTFMaterialExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExporter>();
	}
};
static_assert(alignof(UGLTFMaterialExporter) == 0x000008, "Wrong alignment on UGLTFMaterialExporter");
static_assert(sizeof(UGLTFMaterialExporter) == 0x000080, "Wrong size on UGLTFMaterialExporter");
static_assert(offsetof(UGLTFMaterialExporter, DefaultPreviewMesh) == 0x000078, "Member 'UGLTFMaterialExporter::DefaultPreviewMesh' has a wrong offset!");

class UGLTFSkeletalMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFSkeletalMeshExporter">();
	}
	static class UGLTFSkeletalMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFSkeletalMeshExporter>();
	}
};
static_assert(alignof(UGLTFSkeletalMeshExporter) == 0x000008, "Wrong alignment on UGLTFSkeletalMeshExporter");
static_assert(sizeof(UGLTFSkeletalMeshExporter) == 0x000078, "Wrong size on UGLTFSkeletalMeshExporter");

class UGLTFStaticMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFStaticMeshExporter">();
	}
	static class UGLTFStaticMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFStaticMeshExporter>();
	}
};
static_assert(alignof(UGLTFStaticMeshExporter) == 0x000008, "Wrong alignment on UGLTFStaticMeshExporter");
static_assert(sizeof(UGLTFStaticMeshExporter) == 0x000078, "Wrong size on UGLTFStaticMeshExporter");

class UGLTFProxyOptions final : public UObject
{
public:
	bool                                          bBakeMaterialInputs;
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;
	ETextureFilter                                DefaultMaterialBakeFilter;
	ETextureAddress                               DefaultMaterialBakeTiling;
	uint8                                         Pad_2C[0x4];
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFProxyOptions">();
	}
	static class UGLTFProxyOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFProxyOptions>();
	}
};
static_assert(alignof(UGLTFProxyOptions) == 0x000008, "Wrong alignment on UGLTFProxyOptions");
static_assert(sizeof(UGLTFProxyOptions) == 0x000080, "Wrong size on UGLTFProxyOptions");
static_assert(offsetof(UGLTFProxyOptions, bBakeMaterialInputs) == 0x000028, "Member 'UGLTFProxyOptions::bBakeMaterialInputs' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeSize) == 0x000029, "Member 'UGLTFProxyOptions::DefaultMaterialBakeSize' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeFilter) == 0x00002A, "Member 'UGLTFProxyOptions::DefaultMaterialBakeFilter' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeTiling) == 0x00002B, "Member 'UGLTFProxyOptions::DefaultMaterialBakeTiling' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultInputBakeSettings) == 0x000030, "Member 'UGLTFProxyOptions::DefaultInputBakeSettings' has a wrong offset!");

class UGLTFMaterialExportOptions final : public UAssetUserData
{
public:
	class UMaterialInterface*                     Proxy;
	struct FGLTFOverrideMaterialBakeSettings      Default;
	uint8                                         Pad_36[0x2];
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExportOptions">();
	}
	static class UGLTFMaterialExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExportOptions>();
	}
};
static_assert(alignof(UGLTFMaterialExportOptions) == 0x000008, "Wrong alignment on UGLTFMaterialExportOptions");
static_assert(sizeof(UGLTFMaterialExportOptions) == 0x000088, "Wrong size on UGLTFMaterialExportOptions");
static_assert(offsetof(UGLTFMaterialExportOptions, Proxy) == 0x000028, "Member 'UGLTFMaterialExportOptions::Proxy' has a wrong offset!");
static_assert(offsetof(UGLTFMaterialExportOptions, Default) == 0x000030, "Member 'UGLTFMaterialExportOptions::Default' has a wrong offset!");
static_assert(offsetof(UGLTFMaterialExportOptions, Inputs) == 0x000038, "Member 'UGLTFMaterialExportOptions::Inputs' has a wrong offset!");

}
