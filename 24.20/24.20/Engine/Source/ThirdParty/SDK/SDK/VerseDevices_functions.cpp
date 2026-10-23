#pragma once

#include "Basic.hpp"

#include "VerseDevices_classes.hpp"
#include "VerseDevices_parameters.hpp"

namespace SDK
{

void AScriptDevice::HandleMinigameEndGame(class AFortPlayerController* PlayerController, EFortMinigameEnd EndMethod, EFortMinigameState NextState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptDevice", "HandleMinigameEndGame");

	Params::ScriptDevice_HandleMinigameEndGame Parms{};

	Parms.PlayerController = PlayerController;
	Parms.EndMethod = EndMethod;
	Parms.NextState = NextState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AScriptDevice::HandlePreMinigameStartedSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptDevice", "HandlePreMinigameStartedSetup");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AScriptDevice::SetEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptDevice", "SetEnabled");

	Params::ScriptDevice_SetEnabled Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseCreativeObject::OnActorEndPlayDestroyActorAndReset(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreativeObject", "OnActorEndPlayDestroyActorAndReset");

	Params::VerseCreativeObject_OnActorEndPlayDestroyActorAndReset Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
