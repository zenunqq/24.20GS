#pragma once

#include "Basic.hpp"

#include "VKEditUI_classes.hpp"
#include "VKEditUI_parameters.hpp"

namespace SDK
{

void UVKConnectionIndicator::HandleMemorySamplerProgressUpdated(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VKConnectionIndicator", "HandleMemorySamplerProgressUpdated");

	Params::VKConnectionIndicator_HandleMemorySamplerProgressUpdated Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVKConnectionIndicator::OnMinigameStateChanged(const EFortMinigameState MinigameState, const EFortMinigameState PreviousMinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VKConnectionIndicator", "OnMinigameStateChanged");

	Params::VKConnectionIndicator_OnMinigameStateChanged Parms{};

	Parms.MinigameState = MinigameState;
	Parms.PreviousMinigameState = PreviousMinigameState;

	UObject::ProcessEvent(Func, &Parms);
}

void UVKDebugMessagesBase::BP_OnGameStateInitialized(class AFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VKDebugMessagesBase", "BP_OnGameStateInitialized");

	Params::VKDebugMessagesBase_BP_OnGameStateInitialized Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}

void UVKDebugMessagesBase::HandleGameStateInitialized(class AFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VKDebugMessagesBase", "HandleGameStateInitialized");

	Params::VKDebugMessagesBase_HandleGameStateInitialized Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
