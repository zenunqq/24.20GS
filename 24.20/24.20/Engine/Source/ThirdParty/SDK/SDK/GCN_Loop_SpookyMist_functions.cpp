#pragma once

#include "Basic.hpp"

#include "GCN_Loop_SpookyMist_classes.hpp"
#include "GCN_Loop_SpookyMist_parameters.hpp"

namespace SDK
{

void AGCN_Loop_SpookyMist_C::EndedInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "EndedInteract");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_SpookyMist_C::ExecuteUbergraph_GCN_Loop_SpookyMist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "ExecuteUbergraph_GCN_Loop_SpookyMist");

	Params::GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_SpookyMist_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "OnLoopingStart");

	Params::GCN_Loop_SpookyMist_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_SpookyMist_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "OnRemoval");

	Params::GCN_Loop_SpookyMist_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_SpookyMist_C::StartedInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "StartedInteract");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "Timeline Interaction Fade In Out__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SpookyMist_C", "Timeline Interaction Fade In Out__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
