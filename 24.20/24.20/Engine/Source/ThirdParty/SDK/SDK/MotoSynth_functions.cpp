#pragma once

#include "Basic.hpp"

#include "MotoSynth_classes.hpp"
#include "MotoSynth_parameters.hpp"

namespace SDK
{

void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMoto", "GetRPMRange");

	Params::SynthComponentMoto_GetRPMRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMinRPM != nullptr)
		*OutMinRPM = Parms.OutMinRPM;

	if (OutMaxRPM != nullptr)
		*OutMaxRPM = Parms.OutMaxRPM;
}

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMoto", "SetRPM");

	Params::SynthComponentMoto_SetRPM Parms{};

	Parms.InRPM = InRPM;
	Parms.InTimeSec = InTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMoto", "SetSettings");

	Params::SynthComponentMoto_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USynthComponentMoto::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMoto", "IsEnabled");

	Params::SynthComponentMoto_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
