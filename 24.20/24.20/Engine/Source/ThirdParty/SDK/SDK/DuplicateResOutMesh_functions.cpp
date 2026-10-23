#pragma once

#include "Basic.hpp"

#include "DuplicateResOutMesh_classes.hpp"
#include "DuplicateResOutMesh_parameters.hpp"

namespace SDK
{

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "CharacterSpawnInTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "CharacterSpawnInTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ExecuteUbergraph_DuplicateResOutMesh");

	Params::DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ADuplicateResOutMesh_C::External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "External Mesh Masked Setup");

	Params::DuplicateResOutMesh_C_External_Mesh_Masked_Setup Parms{};

	Parms.External_MEsh_Component_Array = std::move(External_MEsh_Component_Array);

	UObject::ProcessEvent(Func, &Parms);

	External_MEsh_Component_Array = std::move(Parms.External_MEsh_Component_Array);

	if (Corrected_Mid_Array != nullptr)
		*Corrected_Mid_Array = std::move(Parms.Corrected_Mid_Array);
}

void ADuplicateResOutMesh_C::Find_Bounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Find Bounds");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::initializeExternalSkeletalMeshArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "initializeExternalSkeletalMeshArray");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::Make_and_slave_internal_meshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Make and slave internal meshes");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Make internal mids and append external and intermal mids to mid array");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::ProcessSpawnInTimeline(double ZHeight, double LightIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ProcessSpawnInTimeline");

	Params::DuplicateResOutMesh_C_ProcessSpawnInTimeline Parms{};

	Parms.ZHeight = ZHeight;
	Parms.LightIntensity = LightIntensity;

	UObject::ProcessEvent(Func, &Parms);
}

void ADuplicateResOutMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ReceiveTick");

	Params::DuplicateResOutMesh_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void ADuplicateResOutMesh_C::RestoreInProgressRes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "RestoreInProgressRes");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::Spawn__Light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Spawn  Light");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::Store_Original_Material_for_Teleport_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Store Original Material for Teleport In");

	UObject::ProcessEvent(Func, nullptr);
}

void ADuplicateResOutMesh_C::UpdateExternalParameters(const TArray<class UMaterialInstanceDynamic*>& MID_Array, const TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "UpdateExternalParameters");

	Params::DuplicateResOutMesh_C_UpdateExternalParameters Parms{};

	Parms.MID_Array = std::move(MID_Array);
	Parms.External_MEsh_Component_Array = std::move(External_MEsh_Component_Array);

	UObject::ProcessEvent(Func, &Parms);
}

}
