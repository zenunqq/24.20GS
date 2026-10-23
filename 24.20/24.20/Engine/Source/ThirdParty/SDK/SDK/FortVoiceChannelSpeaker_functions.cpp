#pragma once

#include "Basic.hpp"

#include "FortVoiceChannelSpeaker_classes.hpp"
#include "FortVoiceChannelSpeaker_parameters.hpp"

namespace SDK
{

void UFortVoiceChannelSpeaker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "PreConstruct");

	Params::FortVoiceChannelSpeaker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVoiceChannelSpeaker_C::OnStyleAssigned(EChannelSpeakerStyle NewStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnStyleAssigned");

	Params::FortVoiceChannelSpeaker_C_OnStyleAssigned Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVoiceChannelSpeaker_C::OnAnimateTalkingChanged(bool bIsNowTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnAnimateTalkingChanged");

	Params::FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged Parms{};

	Parms.bIsNowTalking = bIsNowTalking;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVoiceChannelSpeaker_C::ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "ExecuteUbergraph_FortVoiceChannelSpeaker");

	Params::FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
