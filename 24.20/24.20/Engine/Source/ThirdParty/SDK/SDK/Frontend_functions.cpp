#pragma once

#include "Basic.hpp"

#include "Frontend_classes.hpp"
#include "Frontend_parameters.hpp"

namespace SDK
{

void AFrontend_C::ExecuteUbergraph_Frontend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_C", "ExecuteUbergraph_Frontend");

	Params::Frontend_C_ExecuteUbergraph_Frontend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontend_C::EnableTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_C", "EnableTutorial");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_C::PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_C", "PlaySpeech");

	Params::Frontend_C_PlaySpeech Parms{};

	Parms.Filename = std::move(Filename);
	Parms.SampleRate = SampleRate;
	Parms.AssetFile = AssetFile;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontend_C::OnMatchStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_C", "OnMatchStarted");

	UObject::ProcessEvent(Func, nullptr);
}

}
