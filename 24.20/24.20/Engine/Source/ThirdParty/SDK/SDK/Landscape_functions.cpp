#pragma once

#include "Basic.hpp"

#include "Landscape_classes.hpp"
#include "Landscape_parameters.hpp"

namespace SDK
{

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "ChangeComponentScreenSizeToUseSubSections");

	Params::LandscapeProxy_ChangeComponentScreenSizeToUseSubSections Parms{};

	Parms.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");

	Params::LandscapeProxy_ChangeLODDistanceFactor Parms{};

	Parms.InLODDistanceFactor = InLODDistanceFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, class FName EditLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "EditorApplySpline");

	Params::LandscapeProxy_EditorApplySpline Parms{};

	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.NumSubdivisions = NumSubdivisions;
	Parms.bRaiseHeights = bRaiseHeights;
	Parms.bLowerHeights = bLowerHeights;
	Parms.PaintLayer = PaintLayer;
	Parms.EditLayerName = EditLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "EditorSetLandscapeMaterial");

	Params::LandscapeProxy_EditorSetLandscapeMaterial Parms{};

	Parms.NewLandscapeMaterial = NewLandscapeMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class ALandscape* ALandscapeProxy::GetLandscapeActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "GetLandscapeActor");

	Params::LandscapeProxy_GetLandscapeActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "LandscapeExportHeightmapToRenderTarget");

	Params::LandscapeProxy_LandscapeExportHeightmapToRenderTarget Parms{};

	Parms.InRenderTarget = InRenderTarget;
	Parms.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
	Parms.InExportLandscapeProxies = InExportLandscapeProxies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialScalarParameterValue");

	Params::LandscapeProxy_SetLandscapeMaterialScalarParameterValue Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialTextureParameterValue");

	Params::LandscapeProxy_SetLandscapeMaterialTextureParameterValue Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialVectorParameterValue");

	Params::LandscapeProxy_SetLandscapeMaterialVectorParameterValue Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscapeProxy::SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeProxy", "SetVirtualTextureRenderPassType");

	Params::LandscapeProxy_SetVirtualTextureRenderPassType Parms{};

	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALandscape::RenderHeightmap(const struct FTransform& InWorldTransform, const struct FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Landscape", "RenderHeightmap");

	Params::Landscape_RenderHeightmap Parms{};

	Parms.InWorldTransform = std::move(InWorldTransform);
	Parms.InExtents = std::move(InExtents);
	Parms.OutRenderTarget = OutRenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightAtLocation");

	Params::LandscapeComponent_EditorGetPaintLayerWeightAtLocation Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.PaintLayer = PaintLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const class FName InPaintLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightByNameAtLocation");

	Params::LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.InPaintLayerName = InPaintLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULandscapeComponent::SetForcedLOD(int32 InForcedLOD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeComponent", "SetForcedLOD");

	Params::LandscapeComponent_SetForcedLOD Parms{};

	Parms.InForcedLOD = InForcedLOD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULandscapeComponent::SetLODBias(int32 InLODBias)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeComponent", "SetLODBias");

	Params::LandscapeComponent_SetLODBias Parms{};

	Parms.InLODBias = InLODBias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32 InIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeComponent", "GetMaterialInstanceDynamic");

	Params::LandscapeComponent_GetMaterialInstanceDynamic Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeHeightfieldCollisionComponent", "GetRenderComponent");

	Params::LandscapeHeightfieldCollisionComponent_GetRenderComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeSplinesComponent", "GetSplineMeshComponents");

	Params::LandscapeSplinesComponent_GetSplineMeshComponents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "GetBlueprintRenderDependencies");

	Params::LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutStreamableAssets != nullptr)
		*OutStreamableAssets = std::move(Parms.OutStreamableAssets);
}

void ALandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Initialize");

	Params::LandscapeBlueprintBrushBase_Initialize Parms{};

	Parms.InLandscapeTransform = std::move(InLandscapeTransform);
	Parms.InLandscapeSize = std::move(InLandscapeSize);
	Parms.InLandscapeRenderTargetSize = std::move(InLandscapeRenderTargetSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Render");

	Params::LandscapeBlueprintBrushBase_Render Parms{};

	Parms.InIsHeightmap = InIsHeightmap;
	Parms.InCombinedResult = InCombinedResult;
	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::RenderLayer(const struct FLandscapeBrushParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "RenderLayer");

	Params::LandscapeBlueprintBrushBase_RenderLayer Parms{};

	Parms.InParameters = std::move(InParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate(bool bInUserTriggered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "RequestLandscapeUpdate");

	Params::LandscapeBlueprintBrushBase_RequestLandscapeUpdate Parms{};

	Parms.bInUserTriggered = bInUserTriggered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
