#pragma once

#include "Basic.hpp"

#include "EasyAntiCheatCommon_classes.hpp"
#include "EasyAntiCheatCommon_parameters.hpp"

namespace SDK
{

void UEasyAntiCheatNetComponent::ClientMessage(const TArray<uint8>& message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EasyAntiCheatNetComponent", "ClientMessage");

	Params::EasyAntiCheatNetComponent_ClientMessage Parms{};

	Parms.message = std::move(message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEasyAntiCheatNetComponent::ServerMessage(const TArray<uint8>& message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EasyAntiCheatNetComponent", "ServerMessage");

	Params::EasyAntiCheatNetComponent_ServerMessage Parms{};

	Parms.message = std::move(message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
