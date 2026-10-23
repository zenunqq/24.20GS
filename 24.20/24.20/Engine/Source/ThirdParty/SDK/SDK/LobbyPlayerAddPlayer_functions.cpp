#pragma once

#include "Basic.hpp"

#include "LobbyPlayerAddPlayer_classes.hpp"
#include "LobbyPlayerAddPlayer_parameters.hpp"

namespace SDK
{

void ULobbyPlayerAddPlayer_C::ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "ExecuteUbergraph_LobbyPlayerAddPlayer");

	Params::LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyPlayerAddPlayer_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULobbyPlayerAddPlayer_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}
