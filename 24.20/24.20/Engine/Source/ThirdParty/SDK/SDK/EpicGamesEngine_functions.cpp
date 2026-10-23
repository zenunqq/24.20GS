#pragma once

#include "Basic.hpp"

#include "EpicGamesEngine_classes.hpp"
#include "EpicGamesEngine_parameters.hpp"

namespace SDK
{

void UVerseUEInputComponentBase::ServerTriggerAction(const class FName& ActionName, EInputEvent InputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAction");

	Params::VerseUEInputComponentBase_ServerTriggerAction Parms{};

	Parms.ActionName = ActionName;
	Parms.InputEvent = InputEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseUEInputComponentBase::ServerTriggerAxis(const class FName& AxisName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAxis");

	Params::VerseUEInputComponentBase_ServerTriggerAxis Parms{};

	Parms.AxisName = AxisName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
