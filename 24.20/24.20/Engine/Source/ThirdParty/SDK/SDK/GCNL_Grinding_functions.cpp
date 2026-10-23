#pragma once

#include "Basic.hpp"

#include "GCNL_Grinding_classes.hpp"
#include "GCNL_Grinding_parameters.hpp"

namespace SDK
{

void AGCNL_Grinding_C::AllowAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "AllowAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::AlphaCurve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "AlphaCurve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::AlphaCurve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "AlphaCurve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::ExecuteUbergraph_GCNL_Grinding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "ExecuteUbergraph_GCNL_Grinding");

	Params::GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::GrindAudioState(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "GrindAudioState");

	Params::GCNL_Grinding_C_GrindAudioState Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::HandleGrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "HandleGrindRailChanged");

	Params::GCNL_Grinding_C_HandleGrindRailChanged Parms{};

	Parms.OldRail = OldRail;
	Parms.NewRail = NewRail;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnApplicationGeneric");

	Params::GCNL_Grinding_C_OnApplicationGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnFeetLanded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnFeetLanded");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::OnForwardChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnForwardChanged");

	Params::GCNL_Grinding_C_OnForwardChanged Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnGrindRailBoosterMode(EGrindRailBoosterMode PreviousBoosterMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnGrindRailBoosterMode");

	Params::GCNL_Grinding_C_OnGrindRailBoosterMode Parms{};

	Parms.PreviousBoosterMode = PreviousBoosterMode;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnGrindRailSprint(bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnGrindRailSprint");

	Params::GCNL_Grinding_C_OnGrindRailSprint Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnJumpedOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnJumpedOff");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnLoopingStartGeneric");

	Params::GCNL_Grinding_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "OnRemovalGeneric");

	Params::GCNL_Grinding_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "ReceiveTick");

	Params::GCNL_Grinding_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Grinding_C::UpdateAudioParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "UpdateAudioParams");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Grinding_C::UpdateGrindAudioLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Grinding_C", "UpdateGrindAudioLoop");

	UObject::ProcessEvent(Func, nullptr);
}

}
