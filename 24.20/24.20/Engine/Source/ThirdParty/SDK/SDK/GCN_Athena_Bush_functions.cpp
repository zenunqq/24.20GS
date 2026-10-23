#pragma once

#include "Basic.hpp"

#include "GCN_Athena_Bush_classes.hpp"
#include "GCN_Athena_Bush_parameters.hpp"

namespace SDK
{

void AGCN_Athena_Bush_C::ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "ExecuteUbergraph_GCN_Athena_Bush");

	Params::GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Athena_Bush_C::On_Player_Step()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "On Player Step");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Bush_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OnLoopingStart");

	Params::GCN_Athena_Bush_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Athena_Bush_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OnRemoval");

	Params::GCN_Athena_Bush_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Athena_Bush_C::OpacityFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OpacityFade__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Bush_C::OpacityFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OpacityFade__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Bush_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "ReceiveTick");

	Params::GCN_Athena_Bush_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
