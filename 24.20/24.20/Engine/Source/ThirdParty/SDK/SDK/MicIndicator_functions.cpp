#pragma once

#include "Basic.hpp"

#include "MicIndicator_classes.hpp"
#include "MicIndicator_parameters.hpp"

namespace SDK
{

void UMicIndicator_C::ExecuteUbergraph_MicIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "ExecuteUbergraph_MicIndicator");

	Params::MicIndicator_C_ExecuteUbergraph_MicIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMicIndicator_C::OnPlayerMuted(bool bIsMuted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "OnPlayerMuted");

	Params::MicIndicator_C_OnPlayerMuted Parms{};

	Parms.bIsMuted_0 = bIsMuted_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UMicIndicator_C::OnPlayerTalkingChanged(bool bIsTalking_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "OnPlayerTalkingChanged");

	Params::MicIndicator_C_OnPlayerTalkingChanged Parms{};

	Parms.bIsTalking_0 = bIsTalking_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
