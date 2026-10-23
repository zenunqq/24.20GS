#pragma once

#include "Basic.hpp"

#include "GC_Athena_OutsideSafeZone_classes.hpp"
#include "GC_Athena_OutsideSafeZone_parameters.hpp"

namespace SDK
{

void AGC_Athena_OutsideSafeZone_C::ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "ExecuteUbergraph_GC_Athena_OutsideSafeZone");

	Params::GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_C::FlashTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "FlashTimeline");

	UObject::ProcessEvent(Func, nullptr);
}

void AGC_Athena_OutsideSafeZone_C::Get_Location_in_Circle_XY(struct FVector* Location_Local_Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "Get Location in Circle XY");

	Params::GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location_Local_Space != nullptr)
		*Location_Local_Space = std::move(Parms.Location_Local_Space);
}

void AGC_Athena_OutsideSafeZone_C::LightningFlashTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "LightningFlashTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGC_Athena_OutsideSafeZone_C::LightningFlashTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "LightningFlashTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGC_Athena_OutsideSafeZone_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "OnLoopingStartGeneric");

	Params::GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "OnRemovalGeneric");

	Params::GC_Athena_OutsideSafeZone_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_C::OnStormEffectsEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "OnStormEffectsEnabled");

	Params::GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Athena_OutsideSafeZone_C::Random_Lighting_Flashes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Athena_OutsideSafeZone_C", "Random Lighting Flashes");

	UObject::ProcessEvent(Func, nullptr);
}

}
