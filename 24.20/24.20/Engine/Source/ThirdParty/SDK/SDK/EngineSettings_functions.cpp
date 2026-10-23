#pragma once

#include "Basic.hpp"

#include "EngineSettings_classes.hpp"
#include "EngineSettings_parameters.hpp"

namespace SDK
{

class UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameMapsSettings", "GetGameMapsSettings");

	Params::GameMapsSettings_GetGameMapsSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameMapsSettings", "SetSkipAssigningGamepadToPlayer1");

	Params::GameMapsSettings_SetSkipAssigningGamepadToPlayer1 Parms{};

	Parms.bSkipFirstPlayer = bSkipFirstPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameMapsSettings", "GetSkipAssigningGamepadToPlayer1");

	Params::GameMapsSettings_GetSkipAssigningGamepadToPlayer1 Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
