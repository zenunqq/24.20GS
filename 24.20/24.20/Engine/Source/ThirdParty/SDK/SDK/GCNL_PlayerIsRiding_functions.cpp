#pragma once

#include "Basic.hpp"

#include "GCNL_PlayerIsRiding_classes.hpp"
#include "GCNL_PlayerIsRiding_parameters.hpp"

namespace SDK
{

void AGCNL_PlayerIsRiding_C::CalculateVelocityParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "CalculateVelocityParam");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::ExecuteUbergraph_GCNL_PlayerIsRiding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "ExecuteUbergraph_GCNL_PlayerIsRiding");

	Params::GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_PlayerIsRiding_C::OnJumpApex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "OnJumpApex");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "OnLoopingStartGeneric");

	Params::GCNL_PlayerIsRiding_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_PlayerIsRiding_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "OnRemovalGeneric");

	Params::GCNL_PlayerIsRiding_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_PlayerIsRiding_C::PlayerRidingDCNLEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "PlayerRidingDCNLEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::PlayerRidingGCNLStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "PlayerRidingGCNLStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "ReceiveTick");

	Params::GCNL_PlayerIsRiding_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_PlayerIsRiding_C::SetUpRidableAudioEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "SetUpRidableAudioEvents");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PlayerIsRiding_C::StartLoopingAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "StartLoopingAudio");

	UObject::ProcessEvent(Func, nullptr);
}

bool AGCNL_PlayerIsRiding_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PlayerIsRiding_C", "WhileActive");

	Params::GCNL_PlayerIsRiding_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
