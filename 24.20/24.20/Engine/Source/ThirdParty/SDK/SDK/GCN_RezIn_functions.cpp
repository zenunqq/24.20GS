#pragma once

#include "Basic.hpp"

#include "GCN_RezIn_classes.hpp"
#include "GCN_RezIn_parameters.hpp"

namespace SDK
{

void AGCN_RezIn_C::Clean_Up_Teleportation_Light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Clean-Up Teleportation Light");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::ExecuteUbergraph_GCN_RezIn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "ExecuteUbergraph_GCN_RezIn");

	Params::GCN_RezIn_C_ExecuteUbergraph_GCN_RezIn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_RezIn_C::OnCosmeticPart(class AFortPlayerPawn* Pawn_0, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "OnCosmeticPart");

	Params::GCN_RezIn_C_OnCosmeticPart Parms{};

	Parms.Pawn_0 = Pawn_0;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_RezIn_C::Pre_Sequence_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Pre-Sequence Change");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Restore_Character_Materials(bool* Fully_Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Restore Character Materials");

	Params::GCN_RezIn_C_Restore_Character_Materials Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Fully_Completed != nullptr)
		*Fully_Completed = Parms.Fully_Completed;
}

void AGCN_RezIn_C::Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Set Additional Niagara Parameter on Drone FX");

	Params::GCN_RezIn_C_Set_Additional_Niagara_Parameter_on_Drone_FX Parms{};

	Parms.Drone_FX = Drone_FX;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_RezIn_C::Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Set Additional Niagara Parameters on Spawned FX");

	Params::GCN_RezIn_C_Set_Additional_Niagara_Parameters_on_Spawned_FX Parms{};

	Parms.Spawned_Teleport_In_FX = Spawned_Teleport_In_FX;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_RezIn_C::Set_Timelines__Playrates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Set Timelines' Playrates");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Spawn_Drone_VFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Spawn Drone VFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Spawn_Teleport_In_VFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleport In VFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Spawn_Teleportation_Drone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleportation Drone");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Spawn_Teleportation_Light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleportation Light");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::Stop_Looping_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "Stop Looping Audio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::TFX_GlowCharacterMesh__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "TFX_GlowCharacterMesh__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::TFX_GlowCharacterMesh__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "TFX_GlowCharacterMesh__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::TFX_ResOutCharacterMesh__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "TFX_ResOutCharacterMesh__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::TFX_ResOutCharacterMesh__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "TFX_ResOutCharacterMesh__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_RezIn_C::OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezIn_C", "OnBurstGeneric");

	Params::GCN_RezIn_C_OnBurstGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
