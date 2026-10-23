#pragma once

#include "Basic.hpp"

#include "QuartzMusicTrackComponent_classes.hpp"
#include "QuartzMusicTrackComponent_parameters.hpp"

namespace SDK
{

void UQuartzMusicTrackComponent_C::SetTrackParameter(int32 ParameterIndex, double InFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetTrackParameter");

	Params::QuartzMusicTrackComponent_C_SetTrackParameter Parms{};

	Parms.ParameterIndex = ParameterIndex;
	Parms.InFloat = InFloat;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::SetStemVolume(int32 Index_0, double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetStemVolume");

	Params::QuartzMusicTrackComponent_C_SetStemVolume Parms{};

	Parms.Index_0 = Index_0;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::SetDebugEnabled(bool Debug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetDebugEnabled");

	Params::QuartzMusicTrackComponent_C_SetDebugEnabled Parms{};

	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ReceiveEndPlay");

	Params::QuartzMusicTrackComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuartzMusicTrackComponent_C::QueueTrackStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "QueueTrackStop");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuartzMusicTrackComponent_C::QueueTrackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "QueueTrackStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuartzMusicTrackComponent_C::OnQuartzQuantizationEvent(class FName ClockName_0, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "OnQuartzQuantizationEvent");

	Params::QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent Parms{};

	Parms.ClockName_0 = ClockName_0;
	Parms.QuantizationType = QuantizationType;
	Parms.NumBars = NumBars;
	Parms.Beat = Beat;
	Parms.BeatFraction = BeatFraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::OnQuartzClockDelegate(EQuartzCommandDelegateSubType EventType, class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "OnQuartzClockDelegate");

	Params::QuartzMusicTrackComponent_C_OnQuartzClockDelegate Parms{};

	Parms.EventType = EventType;
	Parms.Name_0 = Name_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuartzMusicTrackComponent_C::GetTrackSound(class USoundBase** sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetTrackSound");

	Params::QuartzMusicTrackComponent_C_GetTrackSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (sound != nullptr)
		*sound = Parms.sound;
}

void UQuartzMusicTrackComponent_C::GetTrackPriority(double* Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetTrackPriority");

	Params::QuartzMusicTrackComponent_C_GetTrackPriority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Priority != nullptr)
		*Priority = Parms.Priority;
}

EAudioComponentPlayState UQuartzMusicTrackComponent_C::GetPlayState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetPlayState");

	Params::QuartzMusicTrackComponent_C_GetPlayState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UQuartzMusicTrackComponent_C::GetIsPlaying(bool* Is_Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetIsPlaying");

	Params::QuartzMusicTrackComponent_C_GetIsPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Playing != nullptr)
		*Is_Playing = Parms.Is_Playing;
}

void UQuartzMusicTrackComponent_C::GetClockHandle(class UQuartzClockHandle** Clock_Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetClockHandle");

	Params::QuartzMusicTrackComponent_C_GetClockHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Clock_Handle != nullptr)
		*Clock_Handle = Parms.Clock_Handle;
}

void UQuartzMusicTrackComponent_C::GetAudioComponent(class UAudioComponent** AudioComponent_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetAudioComponent");

	Params::QuartzMusicTrackComponent_C_GetAudioComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AudioComponent_0 != nullptr)
		*AudioComponent_0 = Parms.AudioComponent_0;
}

void UQuartzMusicTrackComponent_C::ExecuteUbergraph_QuartzMusicTrackComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ExecuteUbergraph_QuartzMusicTrackComponent");

	Params::QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
