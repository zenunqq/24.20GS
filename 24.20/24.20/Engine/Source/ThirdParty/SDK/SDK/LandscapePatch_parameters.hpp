#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LandscapePatch_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct LandscapePatchComponent_RequestLandscapeUpdate final
{
public:
	bool                                          bInUserTriggeredUpdate;
};
static_assert(alignof(LandscapePatchComponent_RequestLandscapeUpdate) == 0x000001, "Wrong alignment on LandscapePatchComponent_RequestLandscapeUpdate");
static_assert(sizeof(LandscapePatchComponent_RequestLandscapeUpdate) == 0x000001, "Wrong size on LandscapePatchComponent_RequestLandscapeUpdate");
static_assert(offsetof(LandscapePatchComponent_RequestLandscapeUpdate, bInUserTriggeredUpdate) == 0x000000, "Member 'LandscapePatchComponent_RequestLandscapeUpdate::bInUserTriggeredUpdate' has a wrong offset!");

struct LandscapePatchComponent_SetIsEnabled final
{
public:
	bool                                          bEnabledIn;
};
static_assert(alignof(LandscapePatchComponent_SetIsEnabled) == 0x000001, "Wrong alignment on LandscapePatchComponent_SetIsEnabled");
static_assert(sizeof(LandscapePatchComponent_SetIsEnabled) == 0x000001, "Wrong size on LandscapePatchComponent_SetIsEnabled");
static_assert(offsetof(LandscapePatchComponent_SetIsEnabled, bEnabledIn) == 0x000000, "Member 'LandscapePatchComponent_SetIsEnabled::bEnabledIn' has a wrong offset!");

struct LandscapePatchComponent_SetLandscape final
{
public:
	class ALandscape*                             NewLandscape;
};
static_assert(alignof(LandscapePatchComponent_SetLandscape) == 0x000008, "Wrong alignment on LandscapePatchComponent_SetLandscape");
static_assert(sizeof(LandscapePatchComponent_SetLandscape) == 0x000008, "Wrong size on LandscapePatchComponent_SetLandscape");
static_assert(offsetof(LandscapePatchComponent_SetLandscape, NewLandscape) == 0x000000, "Member 'LandscapePatchComponent_SetLandscape::NewLandscape' has a wrong offset!");

struct LandscapePatchComponent_SetPatchManager final
{
public:
	class ALandscapePatchManager*                 NewPatchManager;
};
static_assert(alignof(LandscapePatchComponent_SetPatchManager) == 0x000008, "Wrong alignment on LandscapePatchComponent_SetPatchManager");
static_assert(sizeof(LandscapePatchComponent_SetPatchManager) == 0x000008, "Wrong size on LandscapePatchComponent_SetPatchManager");
static_assert(offsetof(LandscapePatchComponent_SetPatchManager, NewPatchManager) == 0x000000, "Member 'LandscapePatchComponent_SetPatchManager::NewPatchManager' has a wrong offset!");

struct LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld final
{
public:
	struct FTransform                             ReturnValue;
};
static_assert(alignof(LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld) == 0x000010, "Wrong alignment on LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld");
static_assert(sizeof(LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld) == 0x000060, "Wrong size on LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld");
static_assert(offsetof(LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld, ReturnValue) == 0x000000, "Member 'LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld::ReturnValue' has a wrong offset!");

struct LandscapePatchComponent_GetPatchManager final
{
public:
	class ALandscapePatchManager*                 ReturnValue;
};
static_assert(alignof(LandscapePatchComponent_GetPatchManager) == 0x000008, "Wrong alignment on LandscapePatchComponent_GetPatchManager");
static_assert(sizeof(LandscapePatchComponent_GetPatchManager) == 0x000008, "Wrong size on LandscapePatchComponent_GetPatchManager");
static_assert(offsetof(LandscapePatchComponent_GetPatchManager, ReturnValue) == 0x000000, "Member 'LandscapePatchComponent_GetPatchManager::ReturnValue' has a wrong offset!");

struct LandscapePatchComponent_IsEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LandscapePatchComponent_IsEnabled) == 0x000001, "Wrong alignment on LandscapePatchComponent_IsEnabled");
static_assert(sizeof(LandscapePatchComponent_IsEnabled) == 0x000001, "Wrong size on LandscapePatchComponent_IsEnabled");
static_assert(offsetof(LandscapePatchComponent_IsEnabled, ReturnValue) == 0x000000, "Member 'LandscapePatchComponent_IsEnabled::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_AddWeightPatch final
{
public:
	class FName                                   InWeightmapLayerName;
	ELandscapeTexturePatchSourceMode              SourceMode;
	bool                                          bUseAlphaChannel;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(LandscapeTexturePatch_AddWeightPatch) == 0x000004, "Wrong alignment on LandscapeTexturePatch_AddWeightPatch");
static_assert(sizeof(LandscapeTexturePatch_AddWeightPatch) == 0x000008, "Wrong size on LandscapeTexturePatch_AddWeightPatch");
static_assert(offsetof(LandscapeTexturePatch_AddWeightPatch, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_AddWeightPatch::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_AddWeightPatch, SourceMode) == 0x000004, "Member 'LandscapeTexturePatch_AddWeightPatch::SourceMode' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_AddWeightPatch, bUseAlphaChannel) == 0x000005, "Member 'LandscapeTexturePatch_AddWeightPatch::bUseAlphaChannel' has a wrong offset!");

struct LandscapeTexturePatch_ClearWeightPatchBlendModeOverride final
{
public:
	class FName                                   InWeightmapLayerName;
};
static_assert(alignof(LandscapeTexturePatch_ClearWeightPatchBlendModeOverride) == 0x000004, "Wrong alignment on LandscapeTexturePatch_ClearWeightPatchBlendModeOverride");
static_assert(sizeof(LandscapeTexturePatch_ClearWeightPatchBlendModeOverride) == 0x000004, "Wrong size on LandscapeTexturePatch_ClearWeightPatchBlendModeOverride");
static_assert(offsetof(LandscapeTexturePatch_ClearWeightPatchBlendModeOverride, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_ClearWeightPatchBlendModeOverride::InWeightmapLayerName' has a wrong offset!");

struct LandscapeTexturePatch_GetAllWeightPatchLayerNames final
{
public:
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetAllWeightPatchLayerNames) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetAllWeightPatchLayerNames");
static_assert(sizeof(LandscapeTexturePatch_GetAllWeightPatchLayerNames) == 0x000010, "Wrong size on LandscapeTexturePatch_GetAllWeightPatchLayerNames");
static_assert(offsetof(LandscapeTexturePatch_GetAllWeightPatchLayerNames, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetAllWeightPatchLayerNames::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetHeightRenderTarget final
{
public:
	bool                                          bMarkDirty;
	uint8                                         Pad_1[0x7];
	class UTextureRenderTarget2D*                 ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetHeightRenderTarget) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetHeightRenderTarget");
static_assert(sizeof(LandscapeTexturePatch_GetHeightRenderTarget) == 0x000010, "Wrong size on LandscapeTexturePatch_GetHeightRenderTarget");
static_assert(offsetof(LandscapeTexturePatch_GetHeightRenderTarget, bMarkDirty) == 0x000000, "Member 'LandscapeTexturePatch_GetHeightRenderTarget::bMarkDirty' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_GetHeightRenderTarget, ReturnValue) == 0x000008, "Member 'LandscapeTexturePatch_GetHeightRenderTarget::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetWeightPatchRenderTarget final
{
public:
	class FName                                   InWeightmapLayerName;
	uint8                                         Pad_4[0x4];
	class UTextureRenderTarget2D*                 ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetWeightPatchRenderTarget) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetWeightPatchRenderTarget");
static_assert(sizeof(LandscapeTexturePatch_GetWeightPatchRenderTarget) == 0x000010, "Wrong size on LandscapeTexturePatch_GetWeightPatchRenderTarget");
static_assert(offsetof(LandscapeTexturePatch_GetWeightPatchRenderTarget, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_GetWeightPatchRenderTarget::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_GetWeightPatchRenderTarget, ReturnValue) == 0x000008, "Member 'LandscapeTexturePatch_GetWeightPatchRenderTarget::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetWeightPatchSourceMode final
{
public:
	class FName                                   InWeightmapLayerName;
	ELandscapeTexturePatchSourceMode              ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LandscapeTexturePatch_GetWeightPatchSourceMode) == 0x000004, "Wrong alignment on LandscapeTexturePatch_GetWeightPatchSourceMode");
static_assert(sizeof(LandscapeTexturePatch_GetWeightPatchSourceMode) == 0x000008, "Wrong size on LandscapeTexturePatch_GetWeightPatchSourceMode");
static_assert(offsetof(LandscapeTexturePatch_GetWeightPatchSourceMode, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_GetWeightPatchSourceMode::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_GetWeightPatchSourceMode, ReturnValue) == 0x000004, "Member 'LandscapeTexturePatch_GetWeightPatchSourceMode::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_RemoveWeightPatch final
{
public:
	class FName                                   InWeightmapLayerName;
};
static_assert(alignof(LandscapeTexturePatch_RemoveWeightPatch) == 0x000004, "Wrong alignment on LandscapeTexturePatch_RemoveWeightPatch");
static_assert(sizeof(LandscapeTexturePatch_RemoveWeightPatch) == 0x000004, "Wrong size on LandscapeTexturePatch_RemoveWeightPatch");
static_assert(offsetof(LandscapeTexturePatch_RemoveWeightPatch, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_RemoveWeightPatch::InWeightmapLayerName' has a wrong offset!");

struct LandscapeTexturePatch_ResetHeightEncodingMode final
{
public:
	ELandscapeTextureHeightPatchEncoding          EncodingMode;
};
static_assert(alignof(LandscapeTexturePatch_ResetHeightEncodingMode) == 0x000001, "Wrong alignment on LandscapeTexturePatch_ResetHeightEncodingMode");
static_assert(sizeof(LandscapeTexturePatch_ResetHeightEncodingMode) == 0x000001, "Wrong size on LandscapeTexturePatch_ResetHeightEncodingMode");
static_assert(offsetof(LandscapeTexturePatch_ResetHeightEncodingMode, EncodingMode) == 0x000000, "Member 'LandscapeTexturePatch_ResetHeightEncodingMode::EncodingMode' has a wrong offset!");

struct LandscapeTexturePatch_SetBlendMode final
{
public:
	ELandscapeTexturePatchBlendMode               BlendModeIn;
};
static_assert(alignof(LandscapeTexturePatch_SetBlendMode) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetBlendMode");
static_assert(sizeof(LandscapeTexturePatch_SetBlendMode) == 0x000001, "Wrong size on LandscapeTexturePatch_SetBlendMode");
static_assert(offsetof(LandscapeTexturePatch_SetBlendMode, BlendModeIn) == 0x000000, "Member 'LandscapeTexturePatch_SetBlendMode::BlendModeIn' has a wrong offset!");

struct LandscapeTexturePatch_SetEditVisibilityLayer final
{
public:
	class FName                                   InWeightmapLayerName;
	bool                                          bEditVisibilityLayer;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LandscapeTexturePatch_SetEditVisibilityLayer) == 0x000004, "Wrong alignment on LandscapeTexturePatch_SetEditVisibilityLayer");
static_assert(sizeof(LandscapeTexturePatch_SetEditVisibilityLayer) == 0x000008, "Wrong size on LandscapeTexturePatch_SetEditVisibilityLayer");
static_assert(offsetof(LandscapeTexturePatch_SetEditVisibilityLayer, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_SetEditVisibilityLayer::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_SetEditVisibilityLayer, bEditVisibilityLayer) == 0x000004, "Member 'LandscapeTexturePatch_SetEditVisibilityLayer::bEditVisibilityLayer' has a wrong offset!");

struct LandscapeTexturePatch_SetFalloff final
{
public:
	float                                         FalloffIn;
};
static_assert(alignof(LandscapeTexturePatch_SetFalloff) == 0x000004, "Wrong alignment on LandscapeTexturePatch_SetFalloff");
static_assert(sizeof(LandscapeTexturePatch_SetFalloff) == 0x000004, "Wrong size on LandscapeTexturePatch_SetFalloff");
static_assert(offsetof(LandscapeTexturePatch_SetFalloff, FalloffIn) == 0x000000, "Member 'LandscapeTexturePatch_SetFalloff::FalloffIn' has a wrong offset!");

struct LandscapeTexturePatch_SetHeightEncodingMode final
{
public:
	ELandscapeTextureHeightPatchEncoding          EncodingMode;
};
static_assert(alignof(LandscapeTexturePatch_SetHeightEncodingMode) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetHeightEncodingMode");
static_assert(sizeof(LandscapeTexturePatch_SetHeightEncodingMode) == 0x000001, "Wrong size on LandscapeTexturePatch_SetHeightEncodingMode");
static_assert(offsetof(LandscapeTexturePatch_SetHeightEncodingMode, EncodingMode) == 0x000000, "Member 'LandscapeTexturePatch_SetHeightEncodingMode::EncodingMode' has a wrong offset!");

struct LandscapeTexturePatch_SetHeightEncodingSettings final
{
public:
	struct FLandscapeTexturePatchEncodingSettings Settings;
};
static_assert(alignof(LandscapeTexturePatch_SetHeightEncodingSettings) == 0x000008, "Wrong alignment on LandscapeTexturePatch_SetHeightEncodingSettings");
static_assert(sizeof(LandscapeTexturePatch_SetHeightEncodingSettings) == 0x000010, "Wrong size on LandscapeTexturePatch_SetHeightEncodingSettings");
static_assert(offsetof(LandscapeTexturePatch_SetHeightEncodingSettings, Settings) == 0x000000, "Member 'LandscapeTexturePatch_SetHeightEncodingSettings::Settings' has a wrong offset!");

struct LandscapeTexturePatch_SetHeightRenderTargetFormat final
{
public:
	ETextureRenderTargetFormat                    Format;
};
static_assert(alignof(LandscapeTexturePatch_SetHeightRenderTargetFormat) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetHeightRenderTargetFormat");
static_assert(sizeof(LandscapeTexturePatch_SetHeightRenderTargetFormat) == 0x000001, "Wrong size on LandscapeTexturePatch_SetHeightRenderTargetFormat");
static_assert(offsetof(LandscapeTexturePatch_SetHeightRenderTargetFormat, Format) == 0x000000, "Member 'LandscapeTexturePatch_SetHeightRenderTargetFormat::Format' has a wrong offset!");

struct LandscapeTexturePatch_SetHeightSourceMode final
{
public:
	ELandscapeTexturePatchSourceMode              NewMode;
};
static_assert(alignof(LandscapeTexturePatch_SetHeightSourceMode) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetHeightSourceMode");
static_assert(sizeof(LandscapeTexturePatch_SetHeightSourceMode) == 0x000001, "Wrong size on LandscapeTexturePatch_SetHeightSourceMode");
static_assert(offsetof(LandscapeTexturePatch_SetHeightSourceMode, NewMode) == 0x000000, "Member 'LandscapeTexturePatch_SetHeightSourceMode::NewMode' has a wrong offset!");

struct LandscapeTexturePatch_SetHeightTextureAsset final
{
public:
	class UTexture*                               TextureIn;
};
static_assert(alignof(LandscapeTexturePatch_SetHeightTextureAsset) == 0x000008, "Wrong alignment on LandscapeTexturePatch_SetHeightTextureAsset");
static_assert(sizeof(LandscapeTexturePatch_SetHeightTextureAsset) == 0x000008, "Wrong size on LandscapeTexturePatch_SetHeightTextureAsset");
static_assert(offsetof(LandscapeTexturePatch_SetHeightTextureAsset, TextureIn) == 0x000000, "Member 'LandscapeTexturePatch_SetHeightTextureAsset::TextureIn' has a wrong offset!");

struct LandscapeTexturePatch_SetResolution final
{
public:
	struct FVector2D                              ResolutionIn;
};
static_assert(alignof(LandscapeTexturePatch_SetResolution) == 0x000008, "Wrong alignment on LandscapeTexturePatch_SetResolution");
static_assert(sizeof(LandscapeTexturePatch_SetResolution) == 0x000010, "Wrong size on LandscapeTexturePatch_SetResolution");
static_assert(offsetof(LandscapeTexturePatch_SetResolution, ResolutionIn) == 0x000000, "Member 'LandscapeTexturePatch_SetResolution::ResolutionIn' has a wrong offset!");

struct LandscapeTexturePatch_SetUnscaledCoverage final
{
public:
	struct FVector2D                              Coverage;
};
static_assert(alignof(LandscapeTexturePatch_SetUnscaledCoverage) == 0x000008, "Wrong alignment on LandscapeTexturePatch_SetUnscaledCoverage");
static_assert(sizeof(LandscapeTexturePatch_SetUnscaledCoverage) == 0x000010, "Wrong size on LandscapeTexturePatch_SetUnscaledCoverage");
static_assert(offsetof(LandscapeTexturePatch_SetUnscaledCoverage, Coverage) == 0x000000, "Member 'LandscapeTexturePatch_SetUnscaledCoverage::Coverage' has a wrong offset!");

struct LandscapeTexturePatch_SetUseAlphaChannelForHeight final
{
public:
	bool                                          bUse;
};
static_assert(alignof(LandscapeTexturePatch_SetUseAlphaChannelForHeight) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetUseAlphaChannelForHeight");
static_assert(sizeof(LandscapeTexturePatch_SetUseAlphaChannelForHeight) == 0x000001, "Wrong size on LandscapeTexturePatch_SetUseAlphaChannelForHeight");
static_assert(offsetof(LandscapeTexturePatch_SetUseAlphaChannelForHeight, bUse) == 0x000000, "Member 'LandscapeTexturePatch_SetUseAlphaChannelForHeight::bUse' has a wrong offset!");

struct LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch final
{
public:
	class FName                                   InWeightmapLayerName;
	bool                                          bUseAlphaChannel;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch) == 0x000004, "Wrong alignment on LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch");
static_assert(sizeof(LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch) == 0x000008, "Wrong size on LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch");
static_assert(offsetof(LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch, bUseAlphaChannel) == 0x000004, "Member 'LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch::bUseAlphaChannel' has a wrong offset!");

struct LandscapeTexturePatch_SetWeightPatchBlendModeOverride final
{
public:
	class FName                                   InWeightmapLayerName;
	ELandscapeTexturePatchBlendMode               BlendMode_0;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LandscapeTexturePatch_SetWeightPatchBlendModeOverride) == 0x000004, "Wrong alignment on LandscapeTexturePatch_SetWeightPatchBlendModeOverride");
static_assert(sizeof(LandscapeTexturePatch_SetWeightPatchBlendModeOverride) == 0x000008, "Wrong size on LandscapeTexturePatch_SetWeightPatchBlendModeOverride");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchBlendModeOverride, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_SetWeightPatchBlendModeOverride::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchBlendModeOverride, BlendMode_0) == 0x000004, "Member 'LandscapeTexturePatch_SetWeightPatchBlendModeOverride::BlendMode_0' has a wrong offset!");

struct LandscapeTexturePatch_SetWeightPatchSourceMode final
{
public:
	class FName                                   InWeightmapLayerName;
	ELandscapeTexturePatchSourceMode              NewMode;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LandscapeTexturePatch_SetWeightPatchSourceMode) == 0x000004, "Wrong alignment on LandscapeTexturePatch_SetWeightPatchSourceMode");
static_assert(sizeof(LandscapeTexturePatch_SetWeightPatchSourceMode) == 0x000008, "Wrong size on LandscapeTexturePatch_SetWeightPatchSourceMode");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchSourceMode, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_SetWeightPatchSourceMode::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchSourceMode, NewMode) == 0x000004, "Member 'LandscapeTexturePatch_SetWeightPatchSourceMode::NewMode' has a wrong offset!");

struct LandscapeTexturePatch_SetWeightPatchTextureAsset final
{
public:
	class FName                                   InWeightmapLayerName;
	uint8                                         Pad_4[0x4];
	class UTexture*                               TextureIn;
};
static_assert(alignof(LandscapeTexturePatch_SetWeightPatchTextureAsset) == 0x000008, "Wrong alignment on LandscapeTexturePatch_SetWeightPatchTextureAsset");
static_assert(sizeof(LandscapeTexturePatch_SetWeightPatchTextureAsset) == 0x000010, "Wrong size on LandscapeTexturePatch_SetWeightPatchTextureAsset");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchTextureAsset, InWeightmapLayerName) == 0x000000, "Member 'LandscapeTexturePatch_SetWeightPatchTextureAsset::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_SetWeightPatchTextureAsset, TextureIn) == 0x000008, "Member 'LandscapeTexturePatch_SetWeightPatchTextureAsset::TextureIn' has a wrong offset!");

struct LandscapeTexturePatch_SetZeroHeightMeaning final
{
public:
	ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn;
};
static_assert(alignof(LandscapeTexturePatch_SetZeroHeightMeaning) == 0x000001, "Wrong alignment on LandscapeTexturePatch_SetZeroHeightMeaning");
static_assert(sizeof(LandscapeTexturePatch_SetZeroHeightMeaning) == 0x000001, "Wrong size on LandscapeTexturePatch_SetZeroHeightMeaning");
static_assert(offsetof(LandscapeTexturePatch_SetZeroHeightMeaning, ZeroHeightMeaningIn) == 0x000000, "Member 'LandscapeTexturePatch_SetZeroHeightMeaning::ZeroHeightMeaningIn' has a wrong offset!");

struct LandscapeTexturePatch_GetFullUnscaledWorldSize final
{
public:
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetFullUnscaledWorldSize) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetFullUnscaledWorldSize");
static_assert(sizeof(LandscapeTexturePatch_GetFullUnscaledWorldSize) == 0x000010, "Wrong size on LandscapeTexturePatch_GetFullUnscaledWorldSize");
static_assert(offsetof(LandscapeTexturePatch_GetFullUnscaledWorldSize, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetFullUnscaledWorldSize::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetHeightSourceMode final
{
public:
	ELandscapeTexturePatchSourceMode              ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetHeightSourceMode) == 0x000001, "Wrong alignment on LandscapeTexturePatch_GetHeightSourceMode");
static_assert(sizeof(LandscapeTexturePatch_GetHeightSourceMode) == 0x000001, "Wrong size on LandscapeTexturePatch_GetHeightSourceMode");
static_assert(offsetof(LandscapeTexturePatch_GetHeightSourceMode, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetHeightSourceMode::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetInitResolutionFromLandscape final
{
public:
	float                                         ResolutionMultiplier_0;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              ResolutionOut;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LandscapeTexturePatch_GetInitResolutionFromLandscape) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetInitResolutionFromLandscape");
static_assert(sizeof(LandscapeTexturePatch_GetInitResolutionFromLandscape) == 0x000020, "Wrong size on LandscapeTexturePatch_GetInitResolutionFromLandscape");
static_assert(offsetof(LandscapeTexturePatch_GetInitResolutionFromLandscape, ResolutionMultiplier_0) == 0x000000, "Member 'LandscapeTexturePatch_GetInitResolutionFromLandscape::ResolutionMultiplier_0' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_GetInitResolutionFromLandscape, ResolutionOut) == 0x000008, "Member 'LandscapeTexturePatch_GetInitResolutionFromLandscape::ResolutionOut' has a wrong offset!");
static_assert(offsetof(LandscapeTexturePatch_GetInitResolutionFromLandscape, ReturnValue) == 0x000018, "Member 'LandscapeTexturePatch_GetInitResolutionFromLandscape::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetPatchToWorldTransform final
{
public:
	struct FTransform                             ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetPatchToWorldTransform) == 0x000010, "Wrong alignment on LandscapeTexturePatch_GetPatchToWorldTransform");
static_assert(sizeof(LandscapeTexturePatch_GetPatchToWorldTransform) == 0x000060, "Wrong size on LandscapeTexturePatch_GetPatchToWorldTransform");
static_assert(offsetof(LandscapeTexturePatch_GetPatchToWorldTransform, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetPatchToWorldTransform::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetResolution final
{
public:
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetResolution) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetResolution");
static_assert(sizeof(LandscapeTexturePatch_GetResolution) == 0x000010, "Wrong size on LandscapeTexturePatch_GetResolution");
static_assert(offsetof(LandscapeTexturePatch_GetResolution, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetResolution::ReturnValue' has a wrong offset!");

struct LandscapeTexturePatch_GetUnscaledCoverage final
{
public:
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(LandscapeTexturePatch_GetUnscaledCoverage) == 0x000008, "Wrong alignment on LandscapeTexturePatch_GetUnscaledCoverage");
static_assert(sizeof(LandscapeTexturePatch_GetUnscaledCoverage) == 0x000010, "Wrong size on LandscapeTexturePatch_GetUnscaledCoverage");
static_assert(offsetof(LandscapeTexturePatch_GetUnscaledCoverage, ReturnValue) == 0x000000, "Member 'LandscapeTexturePatch_GetUnscaledCoverage::ReturnValue' has a wrong offset!");

}
