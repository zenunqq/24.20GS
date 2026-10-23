#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_Player_Sliding_Speedlines_classes.hpp"
#include "GCNL_Athena_Player_Sliding_Speedlines_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_Player_Sliding_Speedlines_C::ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Speedlines_C::On_View_Target_Changed(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "On View Target Changed");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed Parms{};

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnLoopingStartGeneric");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnRemovalGeneric");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Speedlines_C::RefreshDustStateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "RefreshDustStateTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Speedlines_C::UpdateDustState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "UpdateDustState");

	UObject::ProcessEvent(Func, nullptr);
}

}
