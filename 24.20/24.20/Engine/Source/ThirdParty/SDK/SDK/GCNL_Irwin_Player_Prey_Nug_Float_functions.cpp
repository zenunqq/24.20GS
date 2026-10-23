#pragma once

#include "Basic.hpp"

#include "GCNL_Irwin_Player_Prey_Nug_Float_classes.hpp"
#include "GCNL_Irwin_Player_Prey_Nug_Float_parameters.hpp"

namespace SDK
{

void AGCNL_Irwin_Player_Prey_Nug_Float_C::ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Irwin_Player_Prey_Nug_Float_C", "ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float");

	Params::GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Irwin_Player_Prey_Nug_Float_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Irwin_Player_Prey_Nug_Float_C", "OnLoopingStartGeneric");

	Params::GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Irwin_Player_Prey_Nug_Float_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Irwin_Player_Prey_Nug_Float_C", "OnRemovalGeneric");

	Params::GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Irwin_Player_Prey_Nug_Float_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Irwin_Player_Prey_Nug_Float_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
