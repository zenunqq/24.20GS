#pragma once

#include "Basic.hpp"

#include "AudioSynesthesia_classes.hpp"
#include "AudioSynesthesia_parameters.hpp"

namespace SDK
{

void UConstantQNRT::GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstantQNRT", "GetChannelConstantQAtTime");

	Params::ConstantQNRT_GetChannelConstantQAtTime Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConstantQ != nullptr)
		*OutConstantQ = std::move(Parms.OutConstantQ);
}

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstantQNRT", "GetNormalizedChannelConstantQAtTime");

	Params::ConstantQNRT_GetNormalizedChannelConstantQAtTime Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConstantQ != nullptr)
		*OutConstantQ = std::move(Parms.OutConstantQ);
}

void ULoudnessNRT::GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoudnessNRT", "GetChannelLoudnessAtTime");

	Params::LoudnessNRT_GetChannelLoudnessAtTime Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;
}

void ULoudnessNRT::GetLoudnessAtTime(const float InSeconds, float* OutLoudness) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoudnessNRT", "GetLoudnessAtTime");

	Params::LoudnessNRT_GetLoudnessAtTime Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;
}

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedChannelLoudnessAtTime");

	Params::LoudnessNRT_GetNormalizedChannelLoudnessAtTime Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;
}

void ULoudnessNRT::GetNormalizedLoudnessAtTime(const float InSeconds, float* OutLoudness) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedLoudnessAtTime");

	Params::LoudnessNRT_GetNormalizedLoudnessAtTime Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;
}

void UOnsetNRT::GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnsetNRT", "GetChannelOnsetsBetweenTimes");

	Params::OnsetNRT_GetChannelOnsetsBetweenTimes Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = std::move(Parms.OutOnsetTimestamps);

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = std::move(Parms.OutOnsetStrengths);
}

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnsetNRT", "GetNormalizedChannelOnsetsBetweenTimes");

	Params::OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = std::move(Parms.OutOnsetTimestamps);

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = std::move(Parms.OutOnsetStrengths);
}

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(const float InSampleRate, TArray<float>* OutCenterFrequencies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetCenterFrequencies");

	Params::SynesthesiaSpectrumAnalyzer_GetCenterFrequencies Parms{};

	Parms.InSampleRate = InSampleRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCenterFrequencies != nullptr)
		*OutCenterFrequencies = std::move(Parms.OutCenterFrequencies);
}

const int32 USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetNumCenterFrequencies");

	Params::SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
