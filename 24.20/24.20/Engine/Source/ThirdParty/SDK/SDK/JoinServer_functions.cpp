#pragma once

#include "Basic.hpp"

#include "JoinServer_classes.hpp"
#include "JoinServer_parameters.hpp"

namespace SDK
{

void UJoinServer_C::OnShowTutorialDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnShowTutorialDialog");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinServer_C::OnEnterState(EFortUIState PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnEnterState");

	Params::JoinServer_C_OnEnterState Parms{};

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinServer_C::ExecuteUbergraph_JoinServer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ExecuteUbergraph_JoinServer");

	Params::JoinServer_C_ExecuteUbergraph_JoinServer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
