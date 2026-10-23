#pragma once

#include "Basic.hpp"

#include "AudioAnalyzer_classes.hpp"
#include "AudioAnalyzer_parameters.hpp"

namespace SDK
{

void UAudioAnalyzer::StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioAnalyzer", "StartAnalyzing");

	Params::AudioAnalyzer_StartAnalyzing Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBusToAnalyze = AudioBusToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioAnalyzer::StopAnalyzing(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioAnalyzer", "StopAnalyzing");

	Params::AudioAnalyzer_StopAnalyzing Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
