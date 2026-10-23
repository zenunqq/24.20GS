#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_Tether_classes.hpp"
#include "GCNL_Athena_Tether_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_Tether_C::BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, class FName ParameterName, int32 OneshotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature");

	Params::GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.ParameterName = ParameterName;
	Parms.OneshotIndex = OneshotIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::ExecuteUbergraph_GCNL_Athena_Tether(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ExecuteUbergraph_GCNL_Athena_Tether");

	Params::GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::InitializeTetherGCNL(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "InitializeTetherGCNL");

	Params::GCNL_Athena_Tether_C_InitializeTetherGCNL Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnApplication");

	Params::GCNL_Athena_Tether_C_OnApplication Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnRemoval");

	Params::GCNL_Athena_Tether_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCNL_Athena_Tether_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnRemove");

	Params::GCNL_Athena_Tether_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCNL_Athena_Tether_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ReceiveTick");

	Params::GCNL_Athena_Tether_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::ScaleInSkis__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkis__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::ScaleInSkis__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkis__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::ScaleInSkisForPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkisForPlayer");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::StartFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "StartFF");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::StopFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "StopFF");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Tether_C::UpdateAudio(int32 Surface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "UpdateAudio");

	Params::GCNL_Athena_Tether_C_UpdateAudio Parms{};

	Parms.Surface = Surface;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Tether_C::UpdateFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "UpdateFF");

	UObject::ProcessEvent(Func, nullptr);
}

bool AGCNL_Athena_Tether_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "WhileActive");

	Params::GCNL_Athena_Tether_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
