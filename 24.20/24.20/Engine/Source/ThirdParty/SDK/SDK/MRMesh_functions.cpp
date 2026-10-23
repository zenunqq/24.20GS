#pragma once

#include "Basic.hpp"

#include "MRMesh_classes.hpp"
#include "MRMesh_parameters.hpp"

namespace SDK
{

void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MockDataMeshTrackerComponent", "ConnectMRMesh");

	Params::MockDataMeshTrackerComponent_ConnectMRMesh Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MockDataMeshTrackerComponent", "DisconnectMRMesh");

	Params::MockDataMeshTrackerComponent_DisconnectMRMesh Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "ForceNavMeshUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::RequestNavMeshUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "RequestNavMeshUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "SetEnableMeshOcclusion");

	Params::MRMeshComponent_SetEnableMeshOcclusion Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::SetUseWireframe(bool bUseWireframe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "SetUseWireframe");

	Params::MRMeshComponent_SetUseWireframe Parms{};

	Parms.bUseWireframe = bUseWireframe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::SetWireframeColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "SetWireframeColor");

	Params::MRMeshComponent_SetWireframeColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMRMeshComponent::SetWireframeMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "SetWireframeMaterial");

	Params::MRMeshComponent_SetWireframeMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMRMeshComponent::GetEnableMeshOcclusion() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "GetEnableMeshOcclusion");

	Params::MRMeshComponent_GetEnableMeshOcclusion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMRMeshComponent::GetUseWireframe() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "GetUseWireframe");

	Params::MRMeshComponent_GetUseWireframe Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FLinearColor UMRMeshComponent::GetWireframeColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "GetWireframeColor");

	Params::MRMeshComponent_GetWireframeColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMRMeshComponent::IsConnected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MRMeshComponent", "IsConnected");

	Params::MRMeshComponent_IsConnected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "ConnectMRMesh");

	Params::MeshReconstructorBase_ConnectMRMesh Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "DisconnectMRMesh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMeshReconstructorBase::PauseReconstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "PauseReconstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMeshReconstructorBase::StartReconstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "StartReconstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMeshReconstructorBase::StopReconstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "StopReconstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMeshReconstructorBase::IsReconstructionPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionPaused");

	Params::MeshReconstructorBase_IsReconstructionPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshReconstructorBase::IsReconstructionStarted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionStarted");

	Params::MeshReconstructorBase_IsReconstructionStarted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
