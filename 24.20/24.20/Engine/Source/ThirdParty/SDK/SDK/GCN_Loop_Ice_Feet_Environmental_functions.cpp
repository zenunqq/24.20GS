#pragma once

#include "Basic.hpp"

#include "GCN_Loop_Ice_Feet_Environmental_classes.hpp"
#include "GCN_Loop_Ice_Feet_Environmental_parameters.hpp"

namespace SDK
{

void AGCN_Loop_Ice_Feet_Environmental_C::AttachFX(class USceneComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "AttachFX");

	Params::GCN_Loop_Ice_Feet_Environmental_C_AttachFX Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Ice_Feet_Environmental_C::ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental");

	Params::GCN_Loop_Ice_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Ice_Feet_Environmental_C::On_Footstep_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "On Footstep Event");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Ice_Feet_Environmental_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "OnLoopingStartGeneric");

	Params::GCN_Loop_Ice_Feet_Environmental_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Ice_Feet_Environmental_C::OnPawnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "OnPawnMovementModeChanged");

	Params::GCN_Loop_Ice_Feet_Environmental_C_OnPawnMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Ice_Feet_Environmental_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "OnRemovalGeneric");

	Params::GCN_Loop_Ice_Feet_Environmental_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Ice_Feet_Environmental_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Ice_Feet_Environmental_C", "ReceiveTick");

	Params::GCN_Loop_Ice_Feet_Environmental_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
