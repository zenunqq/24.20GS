#pragma once

#include "Basic.hpp"

#include "ThreatPostProcessManagerAndParticleBlueprint_classes.hpp"
#include "ThreatPostProcessManagerAndParticleBlueprint_parameters.hpp"

namespace SDK
{

void AThreatPostProcessManagerAndParticleBlueprint_C::SetForceOff(bool bForceOff_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "SetForceOff");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_SetForceOff Parms{};

	Parms.bForceOff_0 = bForceOff_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ReceiveTick");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::VFX_RainTracePeriodic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "VFX_RainTracePeriodic");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::StartTraceTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "StartTraceTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::ForceUpdateLensEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ForceUpdateLensEffect");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatOverrideChanged(bool bForceThreatOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnThreatOverrideChanged");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_OnThreatOverrideChanged Parms{};

	Parms.bForceThreatOn = bForceThreatOn;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnThreatCloudsChanged");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged Parms{};

	Parms.ThreatLocationInfo = std::move(ThreatLocationInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, double* VolumePlayerCoveragePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "CalculatePlayerPositionNearBox");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox Parms{};

	Parms.BoxMin = std::move(BoxMin);
	Parms.BoxMax = std::move(BoxMax);

	UObject::ProcessEvent(Func, &Parms);

	if (VolumePlayerCoveragePercentage != nullptr)
		*VolumePlayerCoveragePercentage = Parms.VolumePlayerCoveragePercentage;
}

}
