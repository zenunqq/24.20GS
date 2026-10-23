#pragma once

#include "Basic.hpp"

#include "OnlineSubsystem_classes.hpp"
#include "OnlineSubsystem_parameters.hpp"

namespace SDK
{

void ITurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::TurnBasedMatchInterface_OnMatchEnded Parms{};

	Parms.Match = std::move(Match);

	UObject::ProcessEvent(Func, &Parms);
}

void ITurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::TurnBasedMatchInterface_OnMatchReceivedTurn Parms{};

	Parms.Match = std::move(Match);
	Parms.bDidBecomeActive = bDidBecomeActive;

	UObject::ProcessEvent(Func, &Parms);
}

}
