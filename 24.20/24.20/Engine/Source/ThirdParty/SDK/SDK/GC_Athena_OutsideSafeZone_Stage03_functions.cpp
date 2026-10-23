#pragma once

#include "Basic.hpp"

#include "GC_Athena_OutsideSafeZone_Stage03_classes.hpp"
#include "GC_Athena_OutsideSafeZone_Stage03_parameters.hpp"

namespace SDK
{

void AGC_Athena_OutsideSafeZone_Stage03_C::ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_Stage03_C", "ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03");

	Params::GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_Stage03_C::On_Distant_Lightning_Spawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_Stage03_C", "On Distant Lightning Spawn");

	Params::GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = std::move(Location);
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_Stage03_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_Stage03_C", "OnLoopingStart");

	Params::GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}
