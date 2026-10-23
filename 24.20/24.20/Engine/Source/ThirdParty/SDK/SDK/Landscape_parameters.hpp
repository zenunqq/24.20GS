#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Landscape_structs.hpp"

namespace SDK::Params
{

struct LandscapeProxy_ChangeComponentScreenSizeToUseSubSections final
{
public:
	float                                         InComponentScreenSizeToUseSubSections;
};
static_assert(alignof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(sizeof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong size on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(offsetof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections, InComponentScreenSizeToUseSubSections) == 0x000000, "Member 'LandscapeProxy_ChangeComponentScreenSizeToUseSubSections::InComponentScreenSizeToUseSubSections' has a wrong offset!");

struct LandscapeProxy_ChangeLODDistanceFactor final
{
public:
	float                                         InLODDistanceFactor;
};
static_assert(alignof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(sizeof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong size on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(offsetof(LandscapeProxy_ChangeLODDistanceFactor, InLODDistanceFactor) == 0x000000, "Member 'LandscapeProxy_ChangeLODDistanceFactor::InLODDistanceFactor' has a wrong offset!");

struct LandscapeProxy_EditorApplySpline final
{
public:
	class USplineComponent*                       InSplineComponent;
	float                                         StartWidth;
	float                                         EndWidth;
	float                                         StartSideFalloff;
	float                                         EndSideFalloff;
	float                                         StartRoll;
	float                                         EndRoll;
	int32                                         NumSubdivisions;
	bool                                          bRaiseHeights;
	bool                                          bLowerHeights;
	uint8                                         Pad_26[0x2];
	class ULandscapeLayerInfoObject*              PaintLayer;
	class FName                                   EditLayerName;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(LandscapeProxy_EditorApplySpline) == 0x000008, "Wrong alignment on LandscapeProxy_EditorApplySpline");
static_assert(sizeof(LandscapeProxy_EditorApplySpline) == 0x000038, "Wrong size on LandscapeProxy_EditorApplySpline");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, InSplineComponent) == 0x000000, "Member 'LandscapeProxy_EditorApplySpline::InSplineComponent' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartWidth) == 0x000008, "Member 'LandscapeProxy_EditorApplySpline::StartWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndWidth) == 0x00000C, "Member 'LandscapeProxy_EditorApplySpline::EndWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartSideFalloff) == 0x000010, "Member 'LandscapeProxy_EditorApplySpline::StartSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndSideFalloff) == 0x000014, "Member 'LandscapeProxy_EditorApplySpline::EndSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartRoll) == 0x000018, "Member 'LandscapeProxy_EditorApplySpline::StartRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndRoll) == 0x00001C, "Member 'LandscapeProxy_EditorApplySpline::EndRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, NumSubdivisions) == 0x000020, "Member 'LandscapeProxy_EditorApplySpline::NumSubdivisions' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bRaiseHeights) == 0x000024, "Member 'LandscapeProxy_EditorApplySpline::bRaiseHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bLowerHeights) == 0x000025, "Member 'LandscapeProxy_EditorApplySpline::bLowerHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, PaintLayer) == 0x000028, "Member 'LandscapeProxy_EditorApplySpline::PaintLayer' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EditLayerName) == 0x000030, "Member 'LandscapeProxy_EditorApplySpline::EditLayerName' has a wrong offset!");

struct LandscapeProxy_EditorSetLandscapeMaterial final
{
public:
	class UMaterialInterface*                     NewLandscapeMaterial;
};
static_assert(alignof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong alignment on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(sizeof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong size on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(offsetof(LandscapeProxy_EditorSetLandscapeMaterial, NewLandscapeMaterial) == 0x000000, "Member 'LandscapeProxy_EditorSetLandscapeMaterial::NewLandscapeMaterial' has a wrong offset!");

struct LandscapeProxy_GetLandscapeActor final
{
public:
	class ALandscape*                             ReturnValue;
};
static_assert(alignof(LandscapeProxy_GetLandscapeActor) == 0x000008, "Wrong alignment on LandscapeProxy_GetLandscapeActor");
static_assert(sizeof(LandscapeProxy_GetLandscapeActor) == 0x000008, "Wrong size on LandscapeProxy_GetLandscapeActor");
static_assert(offsetof(LandscapeProxy_GetLandscapeActor, ReturnValue) == 0x000000, "Member 'LandscapeProxy_GetLandscapeActor::ReturnValue' has a wrong offset!");

struct LandscapeProxy_LandscapeExportHeightmapToRenderTarget final
{
public:
	class UTextureRenderTarget2D*                 InRenderTarget;
	bool                                          InExportHeightIntoRGChannel;
	bool                                          InExportLandscapeProxies;
	bool                                          ReturnValue;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget) == 0x000008, "Wrong alignment on LandscapeProxy_LandscapeExportHeightmapToRenderTarget");
static_assert(sizeof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget) == 0x000010, "Wrong size on LandscapeProxy_LandscapeExportHeightmapToRenderTarget");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InRenderTarget) == 0x000000, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InRenderTarget' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InExportHeightIntoRGChannel) == 0x000008, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InExportHeightIntoRGChannel' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InExportLandscapeProxies) == 0x000009, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InExportLandscapeProxies' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, ReturnValue) == 0x00000A, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::ReturnValue' has a wrong offset!");

struct LandscapeProxy_SetLandscapeMaterialScalarParameterValue final
{
public:
	class FName                                   ParameterName;
	float                                         Value;
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000008, "Wrong size on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, Value) == 0x000004, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::Value' has a wrong offset!");

struct LandscapeProxy_SetLandscapeMaterialTextureParameterValue final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	class UTexture*                               Value;
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000008, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000010, "Wrong size on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, Value) == 0x000008, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::Value' has a wrong offset!");

struct LandscapeProxy_SetLandscapeMaterialVectorParameterValue final
{
public:
	class FName                                   ParameterName;
	struct FLinearColor                           Value;
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x000014, "Wrong size on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, Value) == 0x000004, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::Value' has a wrong offset!");

struct LandscapeProxy_SetVirtualTextureRenderPassType final
{
public:
	ERuntimeVirtualTextureMainPassType            InType;
};
static_assert(alignof(LandscapeProxy_SetVirtualTextureRenderPassType) == 0x000001, "Wrong alignment on LandscapeProxy_SetVirtualTextureRenderPassType");
static_assert(sizeof(LandscapeProxy_SetVirtualTextureRenderPassType) == 0x000001, "Wrong size on LandscapeProxy_SetVirtualTextureRenderPassType");
static_assert(offsetof(LandscapeProxy_SetVirtualTextureRenderPassType, InType) == 0x000000, "Member 'LandscapeProxy_SetVirtualTextureRenderPassType::InType' has a wrong offset!");

struct Landscape_RenderHeightmap final
{
public:
	struct FTransform                             InWorldTransform;
	struct FBox2D                                 InExtents;
	class UTextureRenderTarget2D*                 OutRenderTarget;
};
static_assert(alignof(Landscape_RenderHeightmap) == 0x000010, "Wrong alignment on Landscape_RenderHeightmap");
static_assert(sizeof(Landscape_RenderHeightmap) == 0x000090, "Wrong size on Landscape_RenderHeightmap");
static_assert(offsetof(Landscape_RenderHeightmap, InWorldTransform) == 0x000000, "Member 'Landscape_RenderHeightmap::InWorldTransform' has a wrong offset!");
static_assert(offsetof(Landscape_RenderHeightmap, InExtents) == 0x000060, "Member 'Landscape_RenderHeightmap::InExtents' has a wrong offset!");
static_assert(offsetof(Landscape_RenderHeightmap, OutRenderTarget) == 0x000088, "Member 'Landscape_RenderHeightmap::OutRenderTarget' has a wrong offset!");

struct LandscapeComponent_EditorGetPaintLayerWeightAtLocation final
{
public:
	struct FVector                                InLocation;
	class ULandscapeLayerInfoObject*              PaintLayer;
	float                                         ReturnValue;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation) == 0x000008, "Wrong alignment on LandscapeComponent_EditorGetPaintLayerWeightAtLocation");
static_assert(sizeof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation) == 0x000028, "Wrong size on LandscapeComponent_EditorGetPaintLayerWeightAtLocation");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, InLocation) == 0x000000, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::InLocation' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, PaintLayer) == 0x000018, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::PaintLayer' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, ReturnValue) == 0x000020, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::ReturnValue' has a wrong offset!");

struct LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation final
{
public:
	struct FVector                                InLocation;
	class FName                                   InPaintLayerName;
	float                                         ReturnValue;
};
static_assert(alignof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation) == 0x000008, "Wrong alignment on LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation");
static_assert(sizeof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation) == 0x000020, "Wrong size on LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, InLocation) == 0x000000, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::InLocation' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, InPaintLayerName) == 0x000018, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::InPaintLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, ReturnValue) == 0x00001C, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::ReturnValue' has a wrong offset!");

struct LandscapeComponent_SetForcedLOD final
{
public:
	int32                                         InForcedLOD;
};
static_assert(alignof(LandscapeComponent_SetForcedLOD) == 0x000004, "Wrong alignment on LandscapeComponent_SetForcedLOD");
static_assert(sizeof(LandscapeComponent_SetForcedLOD) == 0x000004, "Wrong size on LandscapeComponent_SetForcedLOD");
static_assert(offsetof(LandscapeComponent_SetForcedLOD, InForcedLOD) == 0x000000, "Member 'LandscapeComponent_SetForcedLOD::InForcedLOD' has a wrong offset!");

struct LandscapeComponent_SetLODBias final
{
public:
	int32                                         InLODBias;
};
static_assert(alignof(LandscapeComponent_SetLODBias) == 0x000004, "Wrong alignment on LandscapeComponent_SetLODBias");
static_assert(sizeof(LandscapeComponent_SetLODBias) == 0x000004, "Wrong size on LandscapeComponent_SetLODBias");
static_assert(offsetof(LandscapeComponent_SetLODBias, InLODBias) == 0x000000, "Member 'LandscapeComponent_SetLODBias::InLODBias' has a wrong offset!");

struct LandscapeComponent_GetMaterialInstanceDynamic final
{
public:
	int32                                         InIndex;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000008, "Wrong alignment on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(sizeof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000010, "Wrong size on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, InIndex) == 0x000000, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::InIndex' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, ReturnValue) == 0x000008, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::ReturnValue' has a wrong offset!");

struct LandscapeHeightfieldCollisionComponent_GetRenderComponent final
{
public:
	class ULandscapeComponent*                    ReturnValue;
};
static_assert(alignof(LandscapeHeightfieldCollisionComponent_GetRenderComponent) == 0x000008, "Wrong alignment on LandscapeHeightfieldCollisionComponent_GetRenderComponent");
static_assert(sizeof(LandscapeHeightfieldCollisionComponent_GetRenderComponent) == 0x000008, "Wrong size on LandscapeHeightfieldCollisionComponent_GetRenderComponent");
static_assert(offsetof(LandscapeHeightfieldCollisionComponent_GetRenderComponent, ReturnValue) == 0x000000, "Member 'LandscapeHeightfieldCollisionComponent_GetRenderComponent::ReturnValue' has a wrong offset!");

struct LandscapeSplinesComponent_GetSplineMeshComponents final
{
public:
	TArray<class USplineMeshComponent*>           ReturnValue;
};
static_assert(alignof(LandscapeSplinesComponent_GetSplineMeshComponents) == 0x000008, "Wrong alignment on LandscapeSplinesComponent_GetSplineMeshComponents");
static_assert(sizeof(LandscapeSplinesComponent_GetSplineMeshComponents) == 0x000010, "Wrong size on LandscapeSplinesComponent_GetSplineMeshComponents");
static_assert(offsetof(LandscapeSplinesComponent_GetSplineMeshComponents, ReturnValue) == 0x000000, "Member 'LandscapeSplinesComponent_GetSplineMeshComponents::ReturnValue' has a wrong offset!");

struct LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies final
{
public:
	TArray<class UObject*>                        OutStreamableAssets;
};
static_assert(alignof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies) == 0x000008, "Wrong alignment on LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies");
static_assert(sizeof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies) == 0x000010, "Wrong size on LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies");
static_assert(offsetof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies, OutStreamableAssets) == 0x000000, "Member 'LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies::OutStreamableAssets' has a wrong offset!");

struct LandscapeBlueprintBrushBase_Initialize final
{
public:
	struct FTransform                             InLandscapeTransform;
	struct FIntPoint                              InLandscapeSize;
	struct FIntPoint                              InLandscapeRenderTargetSize;
};
static_assert(alignof(LandscapeBlueprintBrushBase_Initialize) == 0x000010, "Wrong alignment on LandscapeBlueprintBrushBase_Initialize");
static_assert(sizeof(LandscapeBlueprintBrushBase_Initialize) == 0x000070, "Wrong size on LandscapeBlueprintBrushBase_Initialize");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeTransform) == 0x000000, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeTransform' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeSize) == 0x000060, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeSize' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeRenderTargetSize) == 0x000068, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeRenderTargetSize' has a wrong offset!");

struct LandscapeBlueprintBrushBase_Render final
{
public:
	bool                                          InIsHeightmap;
	uint8                                         Pad_1[0x7];
	class UTextureRenderTarget2D*                 InCombinedResult;
	class FName                                   InWeightmapLayerName;
	uint8                                         Pad_14[0x4];
	class UTextureRenderTarget2D*                 ReturnValue;
};
static_assert(alignof(LandscapeBlueprintBrushBase_Render) == 0x000008, "Wrong alignment on LandscapeBlueprintBrushBase_Render");
static_assert(sizeof(LandscapeBlueprintBrushBase_Render) == 0x000020, "Wrong size on LandscapeBlueprintBrushBase_Render");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InIsHeightmap) == 0x000000, "Member 'LandscapeBlueprintBrushBase_Render::InIsHeightmap' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InCombinedResult) == 0x000008, "Member 'LandscapeBlueprintBrushBase_Render::InCombinedResult' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InWeightmapLayerName) == 0x000010, "Member 'LandscapeBlueprintBrushBase_Render::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, ReturnValue) == 0x000018, "Member 'LandscapeBlueprintBrushBase_Render::ReturnValue' has a wrong offset!");

struct LandscapeBlueprintBrushBase_RenderLayer final
{
public:
	struct FLandscapeBrushParameters              InParameters;
	class UTextureRenderTarget2D*                 ReturnValue;
};
static_assert(alignof(LandscapeBlueprintBrushBase_RenderLayer) == 0x000008, "Wrong alignment on LandscapeBlueprintBrushBase_RenderLayer");
static_assert(sizeof(LandscapeBlueprintBrushBase_RenderLayer) == 0x000020, "Wrong size on LandscapeBlueprintBrushBase_RenderLayer");
static_assert(offsetof(LandscapeBlueprintBrushBase_RenderLayer, InParameters) == 0x000000, "Member 'LandscapeBlueprintBrushBase_RenderLayer::InParameters' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_RenderLayer, ReturnValue) == 0x000018, "Member 'LandscapeBlueprintBrushBase_RenderLayer::ReturnValue' has a wrong offset!");

struct LandscapeBlueprintBrushBase_RequestLandscapeUpdate final
{
public:
	bool                                          bInUserTriggered;
};
static_assert(alignof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate) == 0x000001, "Wrong alignment on LandscapeBlueprintBrushBase_RequestLandscapeUpdate");
static_assert(sizeof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate) == 0x000001, "Wrong size on LandscapeBlueprintBrushBase_RequestLandscapeUpdate");
static_assert(offsetof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate, bInUserTriggered) == 0x000000, "Member 'LandscapeBlueprintBrushBase_RequestLandscapeUpdate::bInUserTriggered' has a wrong offset!");

}
