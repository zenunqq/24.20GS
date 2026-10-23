#pragma once

#include "Basic.hpp"

#include "ShowdownLobbyViolator_classes.hpp"
#include "ShowdownLobbyViolator_parameters.hpp"

namespace SDK
{

void UShowdownLobbyViolator_C::ExecuteUbergraph_ShowdownLobbyViolator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyViolator_C", "ExecuteUbergraph_ShowdownLobbyViolator");

	Params::ShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyViolator_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyViolator_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
