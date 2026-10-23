#pragma once

#include "Basic.hpp"

#include "I_FrontendBackplateMatchmakingInteraction_classes.hpp"
#include "I_FrontendBackplateMatchmakingInteraction_parameters.hpp"

namespace SDK
{

void II_FrontendBackplateMatchmakingInteraction_C::MatchmakingEnded(bool bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "MatchmakingEnded");

	Params::I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded Parms{};

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

void II_FrontendBackplateMatchmakingInteraction_C::HasMatcmakingInteraction(bool* HasInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "HasMatcmakingInteraction");

	Params::I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasInteraction != nullptr)
		*HasInteraction = Parms.HasInteraction;
}

void II_FrontendBackplateMatchmakingInteraction_C::EnteringMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "EnteringMatchmaking");

	UObject::ProcessEvent(Func, nullptr);
}

}
