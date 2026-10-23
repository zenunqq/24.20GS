#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Landscape_classes.hpp"
#include "LandscapePatch_structs.hpp"

namespace SDK
{

class ULandscapePatchComponent : public USceneComponent
{
public:
	TSoftObjectPtr<class ALandscape>              Landscape;
	TSoftObjectPtr<class ALandscapePatchManager>  PatchManager;
	bool                                          bIsEnabled;
	uint8                                         Pad_2F1[0x2];
	bool                                          bPropertiesCopiedIndicator;
	uint8                                         Pad_2F4[0x4];
	TSoftObjectPtr<class ALandscapePatchManager>  PreviousPatchManager;

public:
	void MoveToTop();
	void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);
	void SetIsEnabled(bool bEnabledIn);
	void SetLandscape(class ALandscape* NewLandscape);
	void SetPatchManager(class ALandscapePatchManager* NewPatchManager);

	struct FTransform GetLandscapeHeightmapCoordsToWorld() const;
	class ALandscapePatchManager* GetPatchManager() const;
	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapePatchComponent">();
	}
	static class ULandscapePatchComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapePatchComponent>();
	}
};
static_assert(alignof(ULandscapePatchComponent) == 0x000010, "Wrong alignment on ULandscapePatchComponent");
static_assert(sizeof(ULandscapePatchComponent) == 0x000320, "Wrong size on ULandscapePatchComponent");
static_assert(offsetof(ULandscapePatchComponent, Landscape) == 0x0002A0, "Member 'ULandscapePatchComponent::Landscape' has a wrong offset!");
static_assert(offsetof(ULandscapePatchComponent, PatchManager) == 0x0002C8, "Member 'ULandscapePatchComponent::PatchManager' has a wrong offset!");
static_assert(offsetof(ULandscapePatchComponent, bIsEnabled) == 0x0002F0, "Member 'ULandscapePatchComponent::bIsEnabled' has a wrong offset!");
static_assert(offsetof(ULandscapePatchComponent, bPropertiesCopiedIndicator) == 0x0002F3, "Member 'ULandscapePatchComponent::bPropertiesCopiedIndicator' has a wrong offset!");
static_assert(offsetof(ULandscapePatchComponent, PreviousPatchManager) == 0x0002F8, "Member 'ULandscapePatchComponent::PreviousPatchManager' has a wrong offset!");

class ULandscapeCircleHeightPatch final : public ULandscapePatchComponent
{
public:
	float                                         Radius;
	float                                         Falloff;
	bool                                          bEditVisibility;
	bool                                          bExclusiveRadius;
	uint8                                         Pad_32A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeCircleHeightPatch">();
	}
	static class ULandscapeCircleHeightPatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeCircleHeightPatch>();
	}
};
static_assert(alignof(ULandscapeCircleHeightPatch) == 0x000010, "Wrong alignment on ULandscapeCircleHeightPatch");
static_assert(sizeof(ULandscapeCircleHeightPatch) == 0x000330, "Wrong size on ULandscapeCircleHeightPatch");
static_assert(offsetof(ULandscapeCircleHeightPatch, Radius) == 0x000320, "Member 'ULandscapeCircleHeightPatch::Radius' has a wrong offset!");
static_assert(offsetof(ULandscapeCircleHeightPatch, Falloff) == 0x000324, "Member 'ULandscapeCircleHeightPatch::Falloff' has a wrong offset!");
static_assert(offsetof(ULandscapeCircleHeightPatch, bEditVisibility) == 0x000328, "Member 'ULandscapeCircleHeightPatch::bEditVisibility' has a wrong offset!");
static_assert(offsetof(ULandscapeCircleHeightPatch, bExclusiveRadius) == 0x000329, "Member 'ULandscapeCircleHeightPatch::bExclusiveRadius' has a wrong offset!");

class ALandscapePatchManager final : public ALandscapeBlueprintBrushBase
{
public:
	TArray<TSoftObjectPtr<class ULandscapePatchComponent>> PatchComponents;
	uint8                                         Pad_298[0x8];
	struct FTransform                             HeightmapCoordsToWorld;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapePatchManager">();
	}
	static class ALandscapePatchManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapePatchManager>();
	}
};
static_assert(alignof(ALandscapePatchManager) == 0x000010, "Wrong alignment on ALandscapePatchManager");
static_assert(sizeof(ALandscapePatchManager) == 0x000300, "Wrong size on ALandscapePatchManager");
static_assert(offsetof(ALandscapePatchManager, PatchComponents) == 0x000288, "Member 'ALandscapePatchManager::PatchComponents' has a wrong offset!");
static_assert(offsetof(ALandscapePatchManager, HeightmapCoordsToWorld) == 0x0002A0, "Member 'ALandscapePatchManager::HeightmapCoordsToWorld' has a wrong offset!");

class ULandscapeTextureBackedRenderTargetBase : public UObject
{
public:
	class UTextureRenderTarget2D*                 PostLoadRT;
	class UTexture2D*                             InternalTexture;
	class UTextureRenderTarget2D*                 RenderTarget;
	int32                                         SizeX;
	int32                                         SizeY;
	bool                                          bUseInternalTextureOnly;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeTextureBackedRenderTargetBase">();
	}
	static class ULandscapeTextureBackedRenderTargetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeTextureBackedRenderTargetBase>();
	}
};
static_assert(alignof(ULandscapeTextureBackedRenderTargetBase) == 0x000008, "Wrong alignment on ULandscapeTextureBackedRenderTargetBase");
static_assert(sizeof(ULandscapeTextureBackedRenderTargetBase) == 0x000050, "Wrong size on ULandscapeTextureBackedRenderTargetBase");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, PostLoadRT) == 0x000028, "Member 'ULandscapeTextureBackedRenderTargetBase::PostLoadRT' has a wrong offset!");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, InternalTexture) == 0x000030, "Member 'ULandscapeTextureBackedRenderTargetBase::InternalTexture' has a wrong offset!");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, RenderTarget) == 0x000038, "Member 'ULandscapeTextureBackedRenderTargetBase::RenderTarget' has a wrong offset!");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, SizeX) == 0x000040, "Member 'ULandscapeTextureBackedRenderTargetBase::SizeX' has a wrong offset!");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, SizeY) == 0x000044, "Member 'ULandscapeTextureBackedRenderTargetBase::SizeY' has a wrong offset!");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, bUseInternalTextureOnly) == 0x000048, "Member 'ULandscapeTextureBackedRenderTargetBase::bUseInternalTextureOnly' has a wrong offset!");

class ULandscapeWeightTextureBackedRenderTarget final : public ULandscapeTextureBackedRenderTargetBase
{
public:
	bool                                          bUseAlphaChannel;
	uint8                                         Pad_51[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWeightTextureBackedRenderTarget">();
	}
	static class ULandscapeWeightTextureBackedRenderTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeWeightTextureBackedRenderTarget>();
	}
};
static_assert(alignof(ULandscapeWeightTextureBackedRenderTarget) == 0x000008, "Wrong alignment on ULandscapeWeightTextureBackedRenderTarget");
static_assert(sizeof(ULandscapeWeightTextureBackedRenderTarget) == 0x000058, "Wrong size on ULandscapeWeightTextureBackedRenderTarget");
static_assert(offsetof(ULandscapeWeightTextureBackedRenderTarget, bUseAlphaChannel) == 0x000050, "Member 'ULandscapeWeightTextureBackedRenderTarget::bUseAlphaChannel' has a wrong offset!");

class ULandscapeHeightTextureBackedRenderTarget final : public ULandscapeTextureBackedRenderTargetBase
{
public:
	struct FLandscapeHeightPatchConvertToNativeParams ConversionParams;
	ETextureRenderTargetFormat                    RenderTargetFormat;
	uint8                                         Pad_5D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeHeightTextureBackedRenderTarget">();
	}
	static class ULandscapeHeightTextureBackedRenderTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeHeightTextureBackedRenderTarget>();
	}
};
static_assert(alignof(ULandscapeHeightTextureBackedRenderTarget) == 0x000008, "Wrong alignment on ULandscapeHeightTextureBackedRenderTarget");
static_assert(sizeof(ULandscapeHeightTextureBackedRenderTarget) == 0x000060, "Wrong size on ULandscapeHeightTextureBackedRenderTarget");
static_assert(offsetof(ULandscapeHeightTextureBackedRenderTarget, ConversionParams) == 0x000050, "Member 'ULandscapeHeightTextureBackedRenderTarget::ConversionParams' has a wrong offset!");
static_assert(offsetof(ULandscapeHeightTextureBackedRenderTarget, RenderTargetFormat) == 0x00005C, "Member 'ULandscapeHeightTextureBackedRenderTarget::RenderTargetFormat' has a wrong offset!");

class ULandscapeWeightPatchTextureInfo final : public UObject
{
public:
	class FName                                   WeightmapLayerName;
	bool                                          bEditVisibilityLayer;
	uint8                                         Pad_2D[0x3];
	class UTexture*                               TextureAsset;
	class ULandscapeWeightTextureBackedRenderTarget* InternalData;
	ELandscapeTexturePatchSourceMode              SourceMode;
	ELandscapeTexturePatchSourceMode              DetailPanelSourceMode;
	bool                                          bUseAlphaChannel;
	bool                                          bOverrideBlendMode;
	ELandscapeTexturePatchBlendMode               OverrideBlendMode;
	uint8                                         Pad_45[0x3];
	TWeakObjectPtr<class ULandscapeTexturePatch>  OwningPatch;
	uint8                                         Pad_50[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeWeightPatchTextureInfo">();
	}
	static class ULandscapeWeightPatchTextureInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeWeightPatchTextureInfo>();
	}
};
static_assert(alignof(ULandscapeWeightPatchTextureInfo) == 0x000008, "Wrong alignment on ULandscapeWeightPatchTextureInfo");
static_assert(sizeof(ULandscapeWeightPatchTextureInfo) == 0x000058, "Wrong size on ULandscapeWeightPatchTextureInfo");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, WeightmapLayerName) == 0x000028, "Member 'ULandscapeWeightPatchTextureInfo::WeightmapLayerName' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bEditVisibilityLayer) == 0x00002C, "Member 'ULandscapeWeightPatchTextureInfo::bEditVisibilityLayer' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, TextureAsset) == 0x000030, "Member 'ULandscapeWeightPatchTextureInfo::TextureAsset' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, InternalData) == 0x000038, "Member 'ULandscapeWeightPatchTextureInfo::InternalData' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, SourceMode) == 0x000040, "Member 'ULandscapeWeightPatchTextureInfo::SourceMode' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, DetailPanelSourceMode) == 0x000041, "Member 'ULandscapeWeightPatchTextureInfo::DetailPanelSourceMode' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bUseAlphaChannel) == 0x000042, "Member 'ULandscapeWeightPatchTextureInfo::bUseAlphaChannel' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bOverrideBlendMode) == 0x000043, "Member 'ULandscapeWeightPatchTextureInfo::bOverrideBlendMode' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, OverrideBlendMode) == 0x000044, "Member 'ULandscapeWeightPatchTextureInfo::OverrideBlendMode' has a wrong offset!");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, OwningPatch) == 0x000048, "Member 'ULandscapeWeightPatchTextureInfo::OwningPatch' has a wrong offset!");

class ULandscapeTexturePatch final : public ULandscapePatchComponent
{
public:
	int32                                         ResolutionX;
	int32                                         ResolutionY;
	struct FVector2D                              UnscaledPatchCoverage;
	ELandscapeTexturePatchBlendMode               BlendMode;
	ELandscapeTexturePatchFalloffMode             FalloffMode;
	uint8                                         Pad_33A[0x2];
	float                                         Falloff;
	ELandscapeTexturePatchSourceMode              HeightSourceMode;
	ELandscapeTexturePatchSourceMode              DetailPanelHeightSourceMode;
	uint8                                         Pad_342[0x6];
	class ULandscapeHeightTextureBackedRenderTarget* HeightInternalData;
	class UTexture*                               HeightTextureAsset;
	bool                                          bUseTextureAlphaForHeight;
	ELandscapeTextureHeightPatchEncoding          HeightEncoding;
	uint8                                         Pad_35A[0x6];
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings;
	ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning;
	bool                                          bApplyComponentZScale;
	uint8                                         Pad_372[0x6];
	TArray<class ULandscapeWeightPatchTextureInfo*> WeightPatches;
	int32                                         NumWeightPatches;
	uint8                                         Pad_38C[0x1];
	bool                                          bBaseResolutionOffLandscape;
	uint8                                         Pad_38E[0x2];
	float                                         ResolutionMultiplier;
	int32                                         InitTextureSizeX;
	int32                                         InitTextureSizeY;
	ETextureRenderTargetFormat                    HeightRenderTargetFormat;
	uint8                                         Pad_39D[0x3];

public:
	void AddWeightPatch(const class FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);
	void ClearWeightPatchBlendModeOverride(const class FName& InWeightmapLayerName);
	void DisableAllWeightPatches();
	TArray<class FName> GetAllWeightPatchLayerNames();
	class UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);
	class UTextureRenderTarget2D* GetWeightPatchRenderTarget(const class FName& InWeightmapLayerName);
	ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(const class FName& InWeightmapLayerName);
	void ReinitializeHeight();
	void ReinitializeWeights();
	void RemoveAllWeightPatches();
	void RemoveWeightPatch(const class FName& InWeightmapLayerName);
	void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
	void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);
	void SetEditVisibilityLayer(const class FName& InWeightmapLayerName, const bool bEditVisibilityLayer);
	void SetFalloff(float FalloffIn);
	void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
	void SetHeightEncodingSettings(const struct FLandscapeTexturePatchEncodingSettings& Settings);
	void SetHeightRenderTargetFormat(ETextureRenderTargetFormat Format);
	void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);
	void SetHeightTextureAsset(class UTexture* TextureIn);
	void SetResolution(const struct FVector2D& ResolutionIn);
	void SetUnscaledCoverage(const struct FVector2D& Coverage);
	void SetUseAlphaChannelForHeight(bool bUse);
	void SetUseAlphaChannelForWeightPatch(const class FName& InWeightmapLayerName, bool bUseAlphaChannel);
	void SetWeightPatchBlendModeOverride(const class FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode_0);
	void SetWeightPatchSourceMode(const class FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);
	void SetWeightPatchTextureAsset(const class FName& InWeightmapLayerName, class UTexture* TextureIn);
	void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);
	void SnapToLandscape();

	struct FVector2D GetFullUnscaledWorldSize() const;
	ELandscapeTexturePatchSourceMode GetHeightSourceMode() const;
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier_0, struct FVector2D* ResolutionOut) const;
	struct FTransform GetPatchToWorldTransform() const;
	struct FVector2D GetResolution() const;
	struct FVector2D GetUnscaledCoverage() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LandscapeTexturePatch">();
	}
	static class ULandscapeTexturePatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandscapeTexturePatch>();
	}
};
static_assert(alignof(ULandscapeTexturePatch) == 0x000010, "Wrong alignment on ULandscapeTexturePatch");
static_assert(sizeof(ULandscapeTexturePatch) == 0x0003A0, "Wrong size on ULandscapeTexturePatch");
static_assert(offsetof(ULandscapeTexturePatch, ResolutionX) == 0x000320, "Member 'ULandscapeTexturePatch::ResolutionX' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, ResolutionY) == 0x000324, "Member 'ULandscapeTexturePatch::ResolutionY' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, UnscaledPatchCoverage) == 0x000328, "Member 'ULandscapeTexturePatch::UnscaledPatchCoverage' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, BlendMode) == 0x000338, "Member 'ULandscapeTexturePatch::BlendMode' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, FalloffMode) == 0x000339, "Member 'ULandscapeTexturePatch::FalloffMode' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, Falloff) == 0x00033C, "Member 'ULandscapeTexturePatch::Falloff' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightSourceMode) == 0x000340, "Member 'ULandscapeTexturePatch::HeightSourceMode' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, DetailPanelHeightSourceMode) == 0x000341, "Member 'ULandscapeTexturePatch::DetailPanelHeightSourceMode' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightInternalData) == 0x000348, "Member 'ULandscapeTexturePatch::HeightInternalData' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightTextureAsset) == 0x000350, "Member 'ULandscapeTexturePatch::HeightTextureAsset' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, bUseTextureAlphaForHeight) == 0x000358, "Member 'ULandscapeTexturePatch::bUseTextureAlphaForHeight' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightEncoding) == 0x000359, "Member 'ULandscapeTexturePatch::HeightEncoding' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightEncodingSettings) == 0x000360, "Member 'ULandscapeTexturePatch::HeightEncodingSettings' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, ZeroHeightMeaning) == 0x000370, "Member 'ULandscapeTexturePatch::ZeroHeightMeaning' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, bApplyComponentZScale) == 0x000371, "Member 'ULandscapeTexturePatch::bApplyComponentZScale' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, WeightPatches) == 0x000378, "Member 'ULandscapeTexturePatch::WeightPatches' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, NumWeightPatches) == 0x000388, "Member 'ULandscapeTexturePatch::NumWeightPatches' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, bBaseResolutionOffLandscape) == 0x00038D, "Member 'ULandscapeTexturePatch::bBaseResolutionOffLandscape' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, ResolutionMultiplier) == 0x000390, "Member 'ULandscapeTexturePatch::ResolutionMultiplier' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, InitTextureSizeX) == 0x000394, "Member 'ULandscapeTexturePatch::InitTextureSizeX' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, InitTextureSizeY) == 0x000398, "Member 'ULandscapeTexturePatch::InitTextureSizeY' has a wrong offset!");
static_assert(offsetof(ULandscapeTexturePatch, HeightRenderTargetFormat) == 0x00039C, "Member 'ULandscapeTexturePatch::HeightRenderTargetFormat' has a wrong offset!");

}
