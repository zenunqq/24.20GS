#pragma once

#include "Basic.hpp"

#include "NetworkPrediction_structs.hpp"

namespace SDK::Params
{

struct NetworkPredictionComponent_ServerReceiveClientInput final
{
public:
	struct FServerReplicationRPCParameter         ProxyParameter;
};
static_assert(alignof(NetworkPredictionComponent_ServerReceiveClientInput) == 0x000008, "Wrong alignment on NetworkPredictionComponent_ServerReceiveClientInput");
static_assert(sizeof(NetworkPredictionComponent_ServerReceiveClientInput) == 0x000018, "Wrong size on NetworkPredictionComponent_ServerReceiveClientInput");
static_assert(offsetof(NetworkPredictionComponent_ServerReceiveClientInput, ProxyParameter) == 0x000000, "Member 'NetworkPredictionComponent_ServerReceiveClientInput::ProxyParameter' has a wrong offset!");

}
