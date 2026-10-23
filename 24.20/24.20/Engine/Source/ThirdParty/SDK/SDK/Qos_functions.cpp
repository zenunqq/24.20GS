#pragma once

#include "Basic.hpp"

#include "Qos_classes.hpp"
#include "Qos_parameters.hpp"

namespace SDK
{

void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QosBeaconClient", "ClientQosResponse");

	Params::QosBeaconClient_ClientQosResponse Parms{};

	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AQosBeaconClient::ServerQosRequest(const class FString& InSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QosBeaconClient", "ServerQosRequest");

	Params::QosBeaconClient_ServerQosRequest Parms{};

	Parms.InSessionId = std::move(InSessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
