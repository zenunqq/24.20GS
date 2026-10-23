#pragma once

#include "Basic.hpp"

#include "GeometryFramework_classes.hpp"
#include "GeometryFramework_parameters.hpp"

namespace SDK
{

void UBaseDynamicMeshComponent::ClearOverrideRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearOverrideRenderMaterial");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearSecondaryRenderMaterial");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UDynamicMesh* UBaseDynamicMeshComponent::GetDynamicMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetDynamicMesh");

	Params::BaseDynamicMeshComponent_GetDynamicMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBaseDynamicMeshComponent::SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetColorOverrideMode");

	Params::BaseDynamicMeshComponent_SetColorOverrideMode Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetConstantOverrideColor(const struct FColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetConstantOverrideColor");

	Params::BaseDynamicMeshComponent_SetConstantOverrideColor Parms{};

	Parms.NewColor = std::move(NewColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetEnableFlatShading(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableFlatShading");

	Params::BaseDynamicMeshComponent_SetEnableFlatShading Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetEnableRaytracing(bool bSetEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableRaytracing");

	Params::BaseDynamicMeshComponent_SetEnableRaytracing Parms{};

	Parms.bSetEnabled = bSetEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetEnableWireframeRenderPass(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableWireframeRenderPass");

	Params::BaseDynamicMeshComponent_SetEnableWireframeRenderPass Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetOverrideRenderMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetOverrideRenderMaterial");

	Params::BaseDynamicMeshComponent_SetOverrideRenderMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility(bool bSetVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryBuffersVisibility");

	Params::BaseDynamicMeshComponent_SetSecondaryBuffersVisibility Parms{};

	Parms.bSetVisible = bSetVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetSecondaryRenderMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryRenderMaterial");

	Params::BaseDynamicMeshComponent_SetSecondaryRenderMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetShadowsEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetShadowsEnabled");

	Params::BaseDynamicMeshComponent_SetShadowsEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetViewModeOverridesEnabled");

	Params::BaseDynamicMeshComponent_SetViewModeOverridesEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EDynamicMeshComponentColorOverrideMode UBaseDynamicMeshComponent::GetColorOverrideMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetColorOverrideMode");

	Params::BaseDynamicMeshComponent_GetColorOverrideMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FColor UBaseDynamicMeshComponent::GetConstantOverrideColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetConstantOverrideColor");

	Params::BaseDynamicMeshComponent_GetConstantOverrideColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetEnableRaytracing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableRaytracing");

	Params::BaseDynamicMeshComponent_GetEnableRaytracing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetEnableWireframeRenderPass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableWireframeRenderPass");

	Params::BaseDynamicMeshComponent_GetEnableWireframeRenderPass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetFlatShadingEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetFlatShadingEnabled");

	Params::BaseDynamicMeshComponent_GetFlatShadingEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInterface* UBaseDynamicMeshComponent::GetOverrideRenderMaterial(int32 MaterialIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetOverrideRenderMaterial");

	Params::BaseDynamicMeshComponent_GetOverrideRenderMaterial Parms{};

	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryBuffersVisibility");

	Params::BaseDynamicMeshComponent_GetSecondaryBuffersVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInterface* UBaseDynamicMeshComponent::GetSecondaryRenderMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryRenderMaterial");

	Params::BaseDynamicMeshComponent_GetSecondaryRenderMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetShadowsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetShadowsEnabled");

	Params::BaseDynamicMeshComponent_GetShadowsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::GetViewModeOverridesEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetViewModeOverridesEnabled");

	Params::BaseDynamicMeshComponent_GetViewModeOverridesEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBaseDynamicMeshComponent::HasOverrideRenderMaterial(int32 K) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "HasOverrideRenderMaterial");

	Params::BaseDynamicMeshComponent_HasOverrideRenderMaterial Parms{};

	Parms.K = K;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicMeshComponent::ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "ConfigureMaterialSet");

	Params::DynamicMeshComponent_ConfigureMaterialSet Parms{};

	Parms.NewMaterialSet = std::move(NewMaterialSet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::EnableComplexAsSimpleCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "EnableComplexAsSimpleCollision");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "SetComplexAsSimpleCollisionEnabled");

	Params::DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bImmediateUpdate = bImmediateUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDeferredCollisionUpdatesEnabled");

	Params::DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bImmediateUpdate = bImmediateUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDynamicMesh");

	Params::DynamicMeshComponent_SetDynamicMesh Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "SetTangentsType");

	Params::DynamicMeshComponent_SetTangentsType Parms{};

	Parms.NewTangentsType = NewTangentsType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshComponent::UpdateCollision(bool bOnlyIfPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "UpdateCollision");

	Params::DynamicMeshComponent_UpdateCollision Parms{};

	Parms.bOnlyIfPending = bOnlyIfPending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UDynamicMeshComponent::ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "ValidateMaterialSlots");

	Params::DynamicMeshComponent_ValidateMaterialSlots Parms{};

	Parms.bCreateIfMissing = bCreateIfMissing;
	Parms.bDeleteExtraSlots = bDeleteExtraSlots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EDynamicMeshComponentTangentsMode UDynamicMeshComponent::GetTangentsType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshComponent", "GetTangentsType");

	Params::DynamicMeshComponent_GetTangentsType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDynamicMesh* ADynamicMeshActor::AllocateComputeMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "AllocateComputeMesh");

	Params::DynamicMeshActor_AllocateComputeMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ADynamicMeshActor::FreeAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "FreeAllComputeMeshes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UDynamicMeshPool* ADynamicMeshActor::GetComputeMeshPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "GetComputeMeshPool");

	Params::DynamicMeshActor_GetComputeMeshPool Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ADynamicMeshActor::ReleaseAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseAllComputeMeshes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool ADynamicMeshActor::ReleaseComputeMesh(class UDynamicMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseComputeMesh");

	Params::DynamicMeshActor_ReleaseComputeMesh Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDynamicMeshComponent* ADynamicMeshActor::GetDynamicMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshActor", "GetDynamicMeshComponent");

	Params::DynamicMeshActor_GetDynamicMeshComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDynamicMesh* UDynamicMesh::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMesh", "Reset");

	Params::DynamicMesh_Reset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDynamicMesh* UDynamicMesh::ResetToCube()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMesh", "ResetToCube");

	Params::DynamicMesh_ResetToCube Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UDynamicMesh::GetTriangleCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMesh", "GetTriangleCount");

	Params::DynamicMesh_GetTriangleCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDynamicMesh::IsEmpty() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMesh", "IsEmpty");

	Params::DynamicMesh_IsEmpty Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicMeshPool::FreeAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshPool", "FreeAllMeshes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UDynamicMesh* UDynamicMeshPool::RequestMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshPool", "RequestMesh");

	Params::DynamicMeshPool_RequestMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicMeshPool::ReturnAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnAllMeshes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDynamicMeshPool::ReturnMesh(class UDynamicMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnMesh");

	Params::DynamicMeshPool_ReturnMesh Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
