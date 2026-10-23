#pragma once

#include "Basic.hpp"

#include "GCNL_Vent_Enter_classes.hpp"
#include "GCNL_Vent_Enter_parameters.hpp"

namespace SDK
{

void AGCNL_Vent_Enter_C::ExecuteUbergraph_GCNL_Vent_Enter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Vent_Enter_C", "ExecuteUbergraph_GCNL_Vent_Enter");

	Params::GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Vent_Enter_C::FadePPVol__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Vent_Enter_C", "FadePPVol__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Vent_Enter_C::FadePPVol__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Vent_Enter_C", "FadePPVol__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Vent_Enter_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Vent_Enter_C", "OnLoopingStart");

	Params::GCNL_Vent_Enter_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Vent_Enter_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Vent_Enter_C", "OnRemoval");

	Params::GCNL_Vent_Enter_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
