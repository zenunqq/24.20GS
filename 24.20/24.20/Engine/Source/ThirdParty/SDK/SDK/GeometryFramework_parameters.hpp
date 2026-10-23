#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GeometryFramework_structs.hpp"

namespace SDK::Params
{

struct BaseDynamicMeshComponent_GetDynamicMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetDynamicMesh) == 0x000008, "Wrong alignment on BaseDynamicMeshComponent_GetDynamicMesh");
static_assert(sizeof(BaseDynamicMeshComponent_GetDynamicMesh) == 0x000008, "Wrong size on BaseDynamicMeshComponent_GetDynamicMesh");
static_assert(offsetof(BaseDynamicMeshComponent_GetDynamicMesh, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetDynamicMesh::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_SetColorOverrideMode final
{
public:
	EDynamicMeshComponentColorOverrideMode        NewMode;
};
static_assert(alignof(BaseDynamicMeshComponent_SetColorOverrideMode) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetColorOverrideMode");
static_assert(sizeof(BaseDynamicMeshComponent_SetColorOverrideMode) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetColorOverrideMode");
static_assert(offsetof(BaseDynamicMeshComponent_SetColorOverrideMode, NewMode) == 0x000000, "Member 'BaseDynamicMeshComponent_SetColorOverrideMode::NewMode' has a wrong offset!");

struct BaseDynamicMeshComponent_SetConstantOverrideColor final
{
public:
	struct FColor                                 NewColor;
};
static_assert(alignof(BaseDynamicMeshComponent_SetConstantOverrideColor) == 0x000004, "Wrong alignment on BaseDynamicMeshComponent_SetConstantOverrideColor");
static_assert(sizeof(BaseDynamicMeshComponent_SetConstantOverrideColor) == 0x000004, "Wrong size on BaseDynamicMeshComponent_SetConstantOverrideColor");
static_assert(offsetof(BaseDynamicMeshComponent_SetConstantOverrideColor, NewColor) == 0x000000, "Member 'BaseDynamicMeshComponent_SetConstantOverrideColor::NewColor' has a wrong offset!");

struct BaseDynamicMeshComponent_SetEnableFlatShading final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(BaseDynamicMeshComponent_SetEnableFlatShading) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetEnableFlatShading");
static_assert(sizeof(BaseDynamicMeshComponent_SetEnableFlatShading) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetEnableFlatShading");
static_assert(offsetof(BaseDynamicMeshComponent_SetEnableFlatShading, bEnable) == 0x000000, "Member 'BaseDynamicMeshComponent_SetEnableFlatShading::bEnable' has a wrong offset!");

struct BaseDynamicMeshComponent_SetEnableRaytracing final
{
public:
	bool                                          bSetEnabled;
};
static_assert(alignof(BaseDynamicMeshComponent_SetEnableRaytracing) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetEnableRaytracing");
static_assert(sizeof(BaseDynamicMeshComponent_SetEnableRaytracing) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetEnableRaytracing");
static_assert(offsetof(BaseDynamicMeshComponent_SetEnableRaytracing, bSetEnabled) == 0x000000, "Member 'BaseDynamicMeshComponent_SetEnableRaytracing::bSetEnabled' has a wrong offset!");

struct BaseDynamicMeshComponent_SetEnableWireframeRenderPass final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(BaseDynamicMeshComponent_SetEnableWireframeRenderPass) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetEnableWireframeRenderPass");
static_assert(sizeof(BaseDynamicMeshComponent_SetEnableWireframeRenderPass) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetEnableWireframeRenderPass");
static_assert(offsetof(BaseDynamicMeshComponent_SetEnableWireframeRenderPass, bEnable) == 0x000000, "Member 'BaseDynamicMeshComponent_SetEnableWireframeRenderPass::bEnable' has a wrong offset!");

struct BaseDynamicMeshComponent_SetOverrideRenderMaterial final
{
public:
	class UMaterialInterface*                     Material;
};
static_assert(alignof(BaseDynamicMeshComponent_SetOverrideRenderMaterial) == 0x000008, "Wrong alignment on BaseDynamicMeshComponent_SetOverrideRenderMaterial");
static_assert(sizeof(BaseDynamicMeshComponent_SetOverrideRenderMaterial) == 0x000008, "Wrong size on BaseDynamicMeshComponent_SetOverrideRenderMaterial");
static_assert(offsetof(BaseDynamicMeshComponent_SetOverrideRenderMaterial, Material) == 0x000000, "Member 'BaseDynamicMeshComponent_SetOverrideRenderMaterial::Material' has a wrong offset!");

struct BaseDynamicMeshComponent_SetSecondaryBuffersVisibility final
{
public:
	bool                                          bSetVisible;
};
static_assert(alignof(BaseDynamicMeshComponent_SetSecondaryBuffersVisibility) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetSecondaryBuffersVisibility");
static_assert(sizeof(BaseDynamicMeshComponent_SetSecondaryBuffersVisibility) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetSecondaryBuffersVisibility");
static_assert(offsetof(BaseDynamicMeshComponent_SetSecondaryBuffersVisibility, bSetVisible) == 0x000000, "Member 'BaseDynamicMeshComponent_SetSecondaryBuffersVisibility::bSetVisible' has a wrong offset!");

struct BaseDynamicMeshComponent_SetSecondaryRenderMaterial final
{
public:
	class UMaterialInterface*                     Material;
};
static_assert(alignof(BaseDynamicMeshComponent_SetSecondaryRenderMaterial) == 0x000008, "Wrong alignment on BaseDynamicMeshComponent_SetSecondaryRenderMaterial");
static_assert(sizeof(BaseDynamicMeshComponent_SetSecondaryRenderMaterial) == 0x000008, "Wrong size on BaseDynamicMeshComponent_SetSecondaryRenderMaterial");
static_assert(offsetof(BaseDynamicMeshComponent_SetSecondaryRenderMaterial, Material) == 0x000000, "Member 'BaseDynamicMeshComponent_SetSecondaryRenderMaterial::Material' has a wrong offset!");

struct BaseDynamicMeshComponent_SetShadowsEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(BaseDynamicMeshComponent_SetShadowsEnabled) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetShadowsEnabled");
static_assert(sizeof(BaseDynamicMeshComponent_SetShadowsEnabled) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetShadowsEnabled");
static_assert(offsetof(BaseDynamicMeshComponent_SetShadowsEnabled, bEnabled) == 0x000000, "Member 'BaseDynamicMeshComponent_SetShadowsEnabled::bEnabled' has a wrong offset!");

struct BaseDynamicMeshComponent_SetViewModeOverridesEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(BaseDynamicMeshComponent_SetViewModeOverridesEnabled) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_SetViewModeOverridesEnabled");
static_assert(sizeof(BaseDynamicMeshComponent_SetViewModeOverridesEnabled) == 0x000001, "Wrong size on BaseDynamicMeshComponent_SetViewModeOverridesEnabled");
static_assert(offsetof(BaseDynamicMeshComponent_SetViewModeOverridesEnabled, bEnabled) == 0x000000, "Member 'BaseDynamicMeshComponent_SetViewModeOverridesEnabled::bEnabled' has a wrong offset!");

struct BaseDynamicMeshComponent_GetColorOverrideMode final
{
public:
	EDynamicMeshComponentColorOverrideMode        ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetColorOverrideMode) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetColorOverrideMode");
static_assert(sizeof(BaseDynamicMeshComponent_GetColorOverrideMode) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetColorOverrideMode");
static_assert(offsetof(BaseDynamicMeshComponent_GetColorOverrideMode, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetColorOverrideMode::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetConstantOverrideColor final
{
public:
	struct FColor                                 ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetConstantOverrideColor) == 0x000004, "Wrong alignment on BaseDynamicMeshComponent_GetConstantOverrideColor");
static_assert(sizeof(BaseDynamicMeshComponent_GetConstantOverrideColor) == 0x000004, "Wrong size on BaseDynamicMeshComponent_GetConstantOverrideColor");
static_assert(offsetof(BaseDynamicMeshComponent_GetConstantOverrideColor, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetConstantOverrideColor::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetEnableRaytracing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetEnableRaytracing) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetEnableRaytracing");
static_assert(sizeof(BaseDynamicMeshComponent_GetEnableRaytracing) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetEnableRaytracing");
static_assert(offsetof(BaseDynamicMeshComponent_GetEnableRaytracing, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetEnableRaytracing::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetEnableWireframeRenderPass final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetEnableWireframeRenderPass) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetEnableWireframeRenderPass");
static_assert(sizeof(BaseDynamicMeshComponent_GetEnableWireframeRenderPass) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetEnableWireframeRenderPass");
static_assert(offsetof(BaseDynamicMeshComponent_GetEnableWireframeRenderPass, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetEnableWireframeRenderPass::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetFlatShadingEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetFlatShadingEnabled) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetFlatShadingEnabled");
static_assert(sizeof(BaseDynamicMeshComponent_GetFlatShadingEnabled) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetFlatShadingEnabled");
static_assert(offsetof(BaseDynamicMeshComponent_GetFlatShadingEnabled, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetFlatShadingEnabled::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetOverrideRenderMaterial final
{
public:
	int32                                         MaterialIndex;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetOverrideRenderMaterial) == 0x000008, "Wrong alignment on BaseDynamicMeshComponent_GetOverrideRenderMaterial");
static_assert(sizeof(BaseDynamicMeshComponent_GetOverrideRenderMaterial) == 0x000010, "Wrong size on BaseDynamicMeshComponent_GetOverrideRenderMaterial");
static_assert(offsetof(BaseDynamicMeshComponent_GetOverrideRenderMaterial, MaterialIndex) == 0x000000, "Member 'BaseDynamicMeshComponent_GetOverrideRenderMaterial::MaterialIndex' has a wrong offset!");
static_assert(offsetof(BaseDynamicMeshComponent_GetOverrideRenderMaterial, ReturnValue) == 0x000008, "Member 'BaseDynamicMeshComponent_GetOverrideRenderMaterial::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetSecondaryBuffersVisibility final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetSecondaryBuffersVisibility) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetSecondaryBuffersVisibility");
static_assert(sizeof(BaseDynamicMeshComponent_GetSecondaryBuffersVisibility) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetSecondaryBuffersVisibility");
static_assert(offsetof(BaseDynamicMeshComponent_GetSecondaryBuffersVisibility, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetSecondaryBuffersVisibility::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetSecondaryRenderMaterial final
{
public:
	class UMaterialInterface*                     ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetSecondaryRenderMaterial) == 0x000008, "Wrong alignment on BaseDynamicMeshComponent_GetSecondaryRenderMaterial");
static_assert(sizeof(BaseDynamicMeshComponent_GetSecondaryRenderMaterial) == 0x000008, "Wrong size on BaseDynamicMeshComponent_GetSecondaryRenderMaterial");
static_assert(offsetof(BaseDynamicMeshComponent_GetSecondaryRenderMaterial, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetSecondaryRenderMaterial::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetShadowsEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetShadowsEnabled) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetShadowsEnabled");
static_assert(sizeof(BaseDynamicMeshComponent_GetShadowsEnabled) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetShadowsEnabled");
static_assert(offsetof(BaseDynamicMeshComponent_GetShadowsEnabled, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetShadowsEnabled::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_GetViewModeOverridesEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BaseDynamicMeshComponent_GetViewModeOverridesEnabled) == 0x000001, "Wrong alignment on BaseDynamicMeshComponent_GetViewModeOverridesEnabled");
static_assert(sizeof(BaseDynamicMeshComponent_GetViewModeOverridesEnabled) == 0x000001, "Wrong size on BaseDynamicMeshComponent_GetViewModeOverridesEnabled");
static_assert(offsetof(BaseDynamicMeshComponent_GetViewModeOverridesEnabled, ReturnValue) == 0x000000, "Member 'BaseDynamicMeshComponent_GetViewModeOverridesEnabled::ReturnValue' has a wrong offset!");

struct BaseDynamicMeshComponent_HasOverrideRenderMaterial final
{
public:
	int32                                         K;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(BaseDynamicMeshComponent_HasOverrideRenderMaterial) == 0x000004, "Wrong alignment on BaseDynamicMeshComponent_HasOverrideRenderMaterial");
static_assert(sizeof(BaseDynamicMeshComponent_HasOverrideRenderMaterial) == 0x000008, "Wrong size on BaseDynamicMeshComponent_HasOverrideRenderMaterial");
static_assert(offsetof(BaseDynamicMeshComponent_HasOverrideRenderMaterial, K) == 0x000000, "Member 'BaseDynamicMeshComponent_HasOverrideRenderMaterial::K' has a wrong offset!");
static_assert(offsetof(BaseDynamicMeshComponent_HasOverrideRenderMaterial, ReturnValue) == 0x000004, "Member 'BaseDynamicMeshComponent_HasOverrideRenderMaterial::ReturnValue' has a wrong offset!");

struct DynamicMeshComponent_ConfigureMaterialSet final
{
public:
	TArray<class UMaterialInterface*>             NewMaterialSet;
};
static_assert(alignof(DynamicMeshComponent_ConfigureMaterialSet) == 0x000008, "Wrong alignment on DynamicMeshComponent_ConfigureMaterialSet");
static_assert(sizeof(DynamicMeshComponent_ConfigureMaterialSet) == 0x000010, "Wrong size on DynamicMeshComponent_ConfigureMaterialSet");
static_assert(offsetof(DynamicMeshComponent_ConfigureMaterialSet, NewMaterialSet) == 0x000000, "Member 'DynamicMeshComponent_ConfigureMaterialSet::NewMaterialSet' has a wrong offset!");

struct DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled final
{
public:
	bool                                          bEnabled;
	bool                                          bImmediateUpdate;
};
static_assert(alignof(DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled) == 0x000001, "Wrong alignment on DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled");
static_assert(sizeof(DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled) == 0x000002, "Wrong size on DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled");
static_assert(offsetof(DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled, bEnabled) == 0x000000, "Member 'DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled, bImmediateUpdate) == 0x000001, "Member 'DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled::bImmediateUpdate' has a wrong offset!");

struct DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled final
{
public:
	bool                                          bEnabled;
	bool                                          bImmediateUpdate;
};
static_assert(alignof(DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled) == 0x000001, "Wrong alignment on DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled");
static_assert(sizeof(DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled) == 0x000002, "Wrong size on DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled");
static_assert(offsetof(DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled, bEnabled) == 0x000000, "Member 'DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled, bImmediateUpdate) == 0x000001, "Member 'DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled::bImmediateUpdate' has a wrong offset!");

struct DynamicMeshComponent_SetDynamicMesh final
{
public:
	class UDynamicMesh*                           NewMesh;
};
static_assert(alignof(DynamicMeshComponent_SetDynamicMesh) == 0x000008, "Wrong alignment on DynamicMeshComponent_SetDynamicMesh");
static_assert(sizeof(DynamicMeshComponent_SetDynamicMesh) == 0x000008, "Wrong size on DynamicMeshComponent_SetDynamicMesh");
static_assert(offsetof(DynamicMeshComponent_SetDynamicMesh, NewMesh) == 0x000000, "Member 'DynamicMeshComponent_SetDynamicMesh::NewMesh' has a wrong offset!");

struct DynamicMeshComponent_SetTangentsType final
{
public:
	EDynamicMeshComponentTangentsMode             NewTangentsType;
};
static_assert(alignof(DynamicMeshComponent_SetTangentsType) == 0x000001, "Wrong alignment on DynamicMeshComponent_SetTangentsType");
static_assert(sizeof(DynamicMeshComponent_SetTangentsType) == 0x000001, "Wrong size on DynamicMeshComponent_SetTangentsType");
static_assert(offsetof(DynamicMeshComponent_SetTangentsType, NewTangentsType) == 0x000000, "Member 'DynamicMeshComponent_SetTangentsType::NewTangentsType' has a wrong offset!");

struct DynamicMeshComponent_UpdateCollision final
{
public:
	bool                                          bOnlyIfPending;
};
static_assert(alignof(DynamicMeshComponent_UpdateCollision) == 0x000001, "Wrong alignment on DynamicMeshComponent_UpdateCollision");
static_assert(sizeof(DynamicMeshComponent_UpdateCollision) == 0x000001, "Wrong size on DynamicMeshComponent_UpdateCollision");
static_assert(offsetof(DynamicMeshComponent_UpdateCollision, bOnlyIfPending) == 0x000000, "Member 'DynamicMeshComponent_UpdateCollision::bOnlyIfPending' has a wrong offset!");

struct DynamicMeshComponent_ValidateMaterialSlots final
{
public:
	bool                                          bCreateIfMissing;
	bool                                          bDeleteExtraSlots;
	bool                                          ReturnValue;
};
static_assert(alignof(DynamicMeshComponent_ValidateMaterialSlots) == 0x000001, "Wrong alignment on DynamicMeshComponent_ValidateMaterialSlots");
static_assert(sizeof(DynamicMeshComponent_ValidateMaterialSlots) == 0x000003, "Wrong size on DynamicMeshComponent_ValidateMaterialSlots");
static_assert(offsetof(DynamicMeshComponent_ValidateMaterialSlots, bCreateIfMissing) == 0x000000, "Member 'DynamicMeshComponent_ValidateMaterialSlots::bCreateIfMissing' has a wrong offset!");
static_assert(offsetof(DynamicMeshComponent_ValidateMaterialSlots, bDeleteExtraSlots) == 0x000001, "Member 'DynamicMeshComponent_ValidateMaterialSlots::bDeleteExtraSlots' has a wrong offset!");
static_assert(offsetof(DynamicMeshComponent_ValidateMaterialSlots, ReturnValue) == 0x000002, "Member 'DynamicMeshComponent_ValidateMaterialSlots::ReturnValue' has a wrong offset!");

struct DynamicMeshComponent_GetTangentsType final
{
public:
	EDynamicMeshComponentTangentsMode             ReturnValue;
};
static_assert(alignof(DynamicMeshComponent_GetTangentsType) == 0x000001, "Wrong alignment on DynamicMeshComponent_GetTangentsType");
static_assert(sizeof(DynamicMeshComponent_GetTangentsType) == 0x000001, "Wrong size on DynamicMeshComponent_GetTangentsType");
static_assert(offsetof(DynamicMeshComponent_GetTangentsType, ReturnValue) == 0x000000, "Member 'DynamicMeshComponent_GetTangentsType::ReturnValue' has a wrong offset!");

struct DynamicMeshActor_AllocateComputeMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;
};
static_assert(alignof(DynamicMeshActor_AllocateComputeMesh) == 0x000008, "Wrong alignment on DynamicMeshActor_AllocateComputeMesh");
static_assert(sizeof(DynamicMeshActor_AllocateComputeMesh) == 0x000008, "Wrong size on DynamicMeshActor_AllocateComputeMesh");
static_assert(offsetof(DynamicMeshActor_AllocateComputeMesh, ReturnValue) == 0x000000, "Member 'DynamicMeshActor_AllocateComputeMesh::ReturnValue' has a wrong offset!");

struct DynamicMeshActor_GetComputeMeshPool final
{
public:
	class UDynamicMeshPool*                       ReturnValue;
};
static_assert(alignof(DynamicMeshActor_GetComputeMeshPool) == 0x000008, "Wrong alignment on DynamicMeshActor_GetComputeMeshPool");
static_assert(sizeof(DynamicMeshActor_GetComputeMeshPool) == 0x000008, "Wrong size on DynamicMeshActor_GetComputeMeshPool");
static_assert(offsetof(DynamicMeshActor_GetComputeMeshPool, ReturnValue) == 0x000000, "Member 'DynamicMeshActor_GetComputeMeshPool::ReturnValue' has a wrong offset!");

struct DynamicMeshActor_ReleaseComputeMesh final
{
public:
	class UDynamicMesh*                           Mesh;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(DynamicMeshActor_ReleaseComputeMesh) == 0x000008, "Wrong alignment on DynamicMeshActor_ReleaseComputeMesh");
static_assert(sizeof(DynamicMeshActor_ReleaseComputeMesh) == 0x000010, "Wrong size on DynamicMeshActor_ReleaseComputeMesh");
static_assert(offsetof(DynamicMeshActor_ReleaseComputeMesh, Mesh) == 0x000000, "Member 'DynamicMeshActor_ReleaseComputeMesh::Mesh' has a wrong offset!");
static_assert(offsetof(DynamicMeshActor_ReleaseComputeMesh, ReturnValue) == 0x000008, "Member 'DynamicMeshActor_ReleaseComputeMesh::ReturnValue' has a wrong offset!");

struct DynamicMeshActor_GetDynamicMeshComponent final
{
public:
	class UDynamicMeshComponent*                  ReturnValue;
};
static_assert(alignof(DynamicMeshActor_GetDynamicMeshComponent) == 0x000008, "Wrong alignment on DynamicMeshActor_GetDynamicMeshComponent");
static_assert(sizeof(DynamicMeshActor_GetDynamicMeshComponent) == 0x000008, "Wrong size on DynamicMeshActor_GetDynamicMeshComponent");
static_assert(offsetof(DynamicMeshActor_GetDynamicMeshComponent, ReturnValue) == 0x000000, "Member 'DynamicMeshActor_GetDynamicMeshComponent::ReturnValue' has a wrong offset!");

struct DynamicMesh_Reset final
{
public:
	class UDynamicMesh*                           ReturnValue;
};
static_assert(alignof(DynamicMesh_Reset) == 0x000008, "Wrong alignment on DynamicMesh_Reset");
static_assert(sizeof(DynamicMesh_Reset) == 0x000008, "Wrong size on DynamicMesh_Reset");
static_assert(offsetof(DynamicMesh_Reset, ReturnValue) == 0x000000, "Member 'DynamicMesh_Reset::ReturnValue' has a wrong offset!");

struct DynamicMesh_ResetToCube final
{
public:
	class UDynamicMesh*                           ReturnValue;
};
static_assert(alignof(DynamicMesh_ResetToCube) == 0x000008, "Wrong alignment on DynamicMesh_ResetToCube");
static_assert(sizeof(DynamicMesh_ResetToCube) == 0x000008, "Wrong size on DynamicMesh_ResetToCube");
static_assert(offsetof(DynamicMesh_ResetToCube, ReturnValue) == 0x000000, "Member 'DynamicMesh_ResetToCube::ReturnValue' has a wrong offset!");

struct DynamicMesh_GetTriangleCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(DynamicMesh_GetTriangleCount) == 0x000004, "Wrong alignment on DynamicMesh_GetTriangleCount");
static_assert(sizeof(DynamicMesh_GetTriangleCount) == 0x000004, "Wrong size on DynamicMesh_GetTriangleCount");
static_assert(offsetof(DynamicMesh_GetTriangleCount, ReturnValue) == 0x000000, "Member 'DynamicMesh_GetTriangleCount::ReturnValue' has a wrong offset!");

struct DynamicMesh_IsEmpty final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(DynamicMesh_IsEmpty) == 0x000001, "Wrong alignment on DynamicMesh_IsEmpty");
static_assert(sizeof(DynamicMesh_IsEmpty) == 0x000001, "Wrong size on DynamicMesh_IsEmpty");
static_assert(offsetof(DynamicMesh_IsEmpty, ReturnValue) == 0x000000, "Member 'DynamicMesh_IsEmpty::ReturnValue' has a wrong offset!");

struct DynamicMeshPool_RequestMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;
};
static_assert(alignof(DynamicMeshPool_RequestMesh) == 0x000008, "Wrong alignment on DynamicMeshPool_RequestMesh");
static_assert(sizeof(DynamicMeshPool_RequestMesh) == 0x000008, "Wrong size on DynamicMeshPool_RequestMesh");
static_assert(offsetof(DynamicMeshPool_RequestMesh, ReturnValue) == 0x000000, "Member 'DynamicMeshPool_RequestMesh::ReturnValue' has a wrong offset!");

struct DynamicMeshPool_ReturnMesh final
{
public:
	class UDynamicMesh*                           Mesh;
};
static_assert(alignof(DynamicMeshPool_ReturnMesh) == 0x000008, "Wrong alignment on DynamicMeshPool_ReturnMesh");
static_assert(sizeof(DynamicMeshPool_ReturnMesh) == 0x000008, "Wrong size on DynamicMeshPool_ReturnMesh");
static_assert(offsetof(DynamicMeshPool_ReturnMesh, Mesh) == 0x000000, "Member 'DynamicMeshPool_ReturnMesh::Mesh' has a wrong offset!");

}
