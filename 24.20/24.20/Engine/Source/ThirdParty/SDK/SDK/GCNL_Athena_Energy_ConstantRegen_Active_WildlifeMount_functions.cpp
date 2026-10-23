#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_classes.hpp"
#include "GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::Added_7482F31A49360978B87F339D76FC2BB7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "Added_7482F31A49360978B87F339D76FC2BB7");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount");

	Params::GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "OnApplicationGeneric");

	Params::GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::Removed_AD34CCD44592FD2F05DB47BDF9413ACC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "Removed_AD34CCD44592FD2F05DB47BDF9413ACC");

	UObject::ProcessEvent(Func, nullptr);
}

}
