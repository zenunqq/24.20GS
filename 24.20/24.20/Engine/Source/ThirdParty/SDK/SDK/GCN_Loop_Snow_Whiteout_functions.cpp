#pragma once

#include "Basic.hpp"

#include "GCN_Loop_Snow_Whiteout_classes.hpp"
#include "GCN_Loop_Snow_Whiteout_parameters.hpp"

namespace SDK
{

void AGCN_Loop_Snow_Whiteout_C::ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "ExecuteUbergraph_GCN_Loop_Snow_Whiteout");

	Params::GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Snow_Whiteout_C::FadeinOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "FadeinOut__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Snow_Whiteout_C::FadeinOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "FadeinOut__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Snow_Whiteout_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "OnLoopingStart");

	Params::GCN_Loop_Snow_Whiteout_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Snow_Whiteout_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "OnRemoval");

	Params::GCN_Loop_Snow_Whiteout_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Snow_Whiteout_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Snow_Whiteout_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}
