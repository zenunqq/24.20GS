#pragma once

#include "Basic.hpp"

#include "UACCommon_classes.hpp"
#include "UACCommon_parameters.hpp"

namespace SDK
{

void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendClientHello");

	Params::UACNetworkComponent_SendClientHello Parms{};

	Parms.SessionKey = SessionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUACNetworkComponent::SendPacketToClient(uint8 EnhPacketType, const TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToClient");

	Params::UACNetworkComponent_SendPacketToClient Parms{};

	Parms.EnhPacketType = EnhPacketType;
	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUACNetworkComponent::SendPacketToServer(uint8 EnhPacketType, const TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToServer");

	Params::UACNetworkComponent_SendPacketToServer Parms{};

	Parms.EnhPacketType = EnhPacketType;
	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
