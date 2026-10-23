#pragma once

#include "Basic.hpp"

#include "JoinVoiceChannelButton_classes.hpp"
#include "JoinVoiceChannelButton_parameters.hpp"

namespace SDK
{

void UJoinVoiceChannelButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinVoiceChannelButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinVoiceChannelButton_C::ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "ExecuteUbergraph_JoinVoiceChannelButton");

	Params::JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
