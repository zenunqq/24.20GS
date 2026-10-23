#pragma once

#include "Basic.hpp"

#include "LandscapePatch_classes.hpp"
#include "LandscapePatch_parameters.hpp"

namespace SDK
{

void ULandscapePatchComponent::MoveToTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "MoveToTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ULandscapePatchComponent::RequestLandscapeUpdate(bool bInUserTriggeredUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "RequestLandscapeUpdate");

	Params::LandscapePatchComponent_RequestLandscapeUpdate Parms{};

	Parms.bInUserTriggeredUpdate = bInUserTriggeredUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapePatchComponent::SetIsEnabled(bool bEnabledIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "SetIsEnabled");

	Params::LandscapePatchComponent_SetIsEnabled Parms{};

	Parms.bEnabledIn = bEnabledIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapePatchComponent::SetLandscape(class ALandscape* NewLandscape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "SetLandscape");

	Params::LandscapePatchComponent_SetLandscape Parms{};

	Parms.NewLandscape = NewLandscape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapePatchComponent::SetPatchManager(class ALandscapePatchManager* NewPatchManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "SetPatchManager");

	Params::LandscapePatchComponent_SetPatchManager Parms{};

	Parms.NewPatchManager = NewPatchManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTransform ULandscapePatchComponent::GetLandscapeHeightmapCoordsToWorld() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "GetLandscapeHeightmapCoordsToWorld");

	Params::LandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ALandscapePatchManager* ULandscapePatchComponent::GetPatchManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "GetPatchManager");

	Params::LandscapePatchComponent_GetPatchManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULandscapePatchComponent::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapePatchComponent", "IsEnabled");

	Params::LandscapePatchComponent_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULandscapeTexturePatch::AddWeightPatch(const class FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "AddWeightPatch");

	Params::LandscapeTexturePatch_AddWeightPatch Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.SourceMode = SourceMode;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::ClearWeightPatchBlendModeOverride(const class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "ClearWeightPatchBlendModeOverride");

	Params::LandscapeTexturePatch_ClearWeightPatchBlendModeOverride Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::DisableAllWeightPatches()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "DisableAllWeightPatches");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

TArray<class FName> ULandscapeTexturePatch::GetAllWeightPatchLayerNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetAllWeightPatchLayerNames");

	Params::LandscapeTexturePatch_GetAllWeightPatchLayerNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetHeightRenderTarget(bool bMarkDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightRenderTarget");

	Params::LandscapeTexturePatch_GetHeightRenderTarget Parms{};

	Parms.bMarkDirty = bMarkDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetWeightPatchRenderTarget(const class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchRenderTarget");

	Params::LandscapeTexturePatch_GetWeightPatchRenderTarget Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetWeightPatchSourceMode(const class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchSourceMode");

	Params::LandscapeTexturePatch_GetWeightPatchSourceMode Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULandscapeTexturePatch::ReinitializeHeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeHeight");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::ReinitializeWeights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeWeights");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::RemoveAllWeightPatches()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "RemoveAllWeightPatches");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::RemoveWeightPatch(const class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "RemoveWeightPatch");

	Params::LandscapeTexturePatch_RemoveWeightPatch Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "ResetHeightEncodingMode");

	Params::LandscapeTexturePatch_ResetHeightEncodingMode Parms{};

	Parms.EncodingMode = EncodingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetBlendMode");

	Params::LandscapeTexturePatch_SetBlendMode Parms{};

	Parms.BlendModeIn = BlendModeIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetEditVisibilityLayer(const class FName& InWeightmapLayerName, const bool bEditVisibilityLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetEditVisibilityLayer");

	Params::LandscapeTexturePatch_SetEditVisibilityLayer Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bEditVisibilityLayer = bEditVisibilityLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetFalloff(float FalloffIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetFalloff");

	Params::LandscapeTexturePatch_SetFalloff Parms{};

	Parms.FalloffIn = FalloffIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingMode");

	Params::LandscapeTexturePatch_SetHeightEncodingMode Parms{};

	Parms.EncodingMode = EncodingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetHeightEncodingSettings(const struct FLandscapeTexturePatchEncodingSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingSettings");

	Params::LandscapeTexturePatch_SetHeightEncodingSettings Parms{};

	Parms.Settings = std::move(Settings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetHeightRenderTargetFormat(ETextureRenderTargetFormat Format)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightRenderTargetFormat");

	Params::LandscapeTexturePatch_SetHeightRenderTargetFormat Parms{};

	Parms.Format = Format;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightSourceMode");

	Params::LandscapeTexturePatch_SetHeightSourceMode Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetHeightTextureAsset(class UTexture* TextureIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightTextureAsset");

	Params::LandscapeTexturePatch_SetHeightTextureAsset Parms{};

	Parms.TextureIn = TextureIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetResolution(const struct FVector2D& ResolutionIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetResolution");

	Params::LandscapeTexturePatch_SetResolution Parms{};

	Parms.ResolutionIn = std::move(ResolutionIn);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetUnscaledCoverage(const struct FVector2D& Coverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUnscaledCoverage");

	Params::LandscapeTexturePatch_SetUnscaledCoverage Parms{};

	Parms.Coverage = std::move(Coverage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetUseAlphaChannelForHeight(bool bUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForHeight");

	Params::LandscapeTexturePatch_SetUseAlphaChannelForHeight Parms{};

	Parms.bUse = bUse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetUseAlphaChannelForWeightPatch(const class FName& InWeightmapLayerName, bool bUseAlphaChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForWeightPatch");

	Params::LandscapeTexturePatch_SetUseAlphaChannelForWeightPatch Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetWeightPatchBlendModeOverride(const class FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchBlendModeOverride");

	Params::LandscapeTexturePatch_SetWeightPatchBlendModeOverride Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.BlendMode_0 = BlendMode_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetWeightPatchSourceMode(const class FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchSourceMode");

	Params::LandscapeTexturePatch_SetWeightPatchSourceMode Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetWeightPatchTextureAsset(const class FName& InWeightmapLayerName, class UTexture* TextureIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchTextureAsset");

	Params::LandscapeTexturePatch_SetWeightPatchTextureAsset Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.TextureIn = TextureIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetZeroHeightMeaning");

	Params::LandscapeTexturePatch_SetZeroHeightMeaning Parms{};

	Parms.ZeroHeightMeaningIn = ZeroHeightMeaningIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeTexturePatch::SnapToLandscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "SnapToLandscape");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FVector2D ULandscapeTexturePatch::GetFullUnscaledWorldSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetFullUnscaledWorldSize");

	Params::LandscapeTexturePatch_GetFullUnscaledWorldSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetHeightSourceMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightSourceMode");

	Params::LandscapeTexturePatch_GetHeightSourceMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULandscapeTexturePatch::GetInitResolutionFromLandscape(float ResolutionMultiplier_0, struct FVector2D* ResolutionOut) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetInitResolutionFromLandscape");

	Params::LandscapeTexturePatch_GetInitResolutionFromLandscape Parms{};

	Parms.ResolutionMultiplier_0 = ResolutionMultiplier_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ResolutionOut != nullptr)
		*ResolutionOut = std::move(Parms.ResolutionOut);

	return Parms.ReturnValue;
}

struct FTransform ULandscapeTexturePatch::GetPatchToWorldTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetPatchToWorldTransform");

	Params::LandscapeTexturePatch_GetPatchToWorldTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D ULandscapeTexturePatch::GetResolution() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetResolution");

	Params::LandscapeTexturePatch_GetResolution Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D ULandscapeTexturePatch::GetUnscaledCoverage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetUnscaledCoverage");

	Params::LandscapeTexturePatch_GetUnscaledCoverage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
