#pragma once

#include "Basic.hpp"

#include "NetworkPrediction_classes.hpp"
#include "NetworkPrediction_parameters.hpp"

namespace SDK
{

void UNetworkPredictionComponent::ServerReceiveClientInput(const struct FServerReplicationRPCParameter& ProxyParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetworkPredictionComponent", "ServerReceiveClientInput");

	Params::NetworkPredictionComponent_ServerReceiveClientInput Parms{};

	Parms.ProxyParameter = std::move(ProxyParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
