#pragma once

#include "Basic.hpp"

#include "Athena_GameState_classes.hpp"
#include "Athena_GameState_parameters.hpp"

namespace SDK
{

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_GameState_C", "ExecuteUbergraph_Athena_GameState");

	Params::Athena_GameState_C_ExecuteUbergraph_Athena_GameState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_GameState_C", "OnWinnerAnnounced");

	UObject::ProcessEvent(Func, nullptr);
}

}
