#pragma once

#include "Basic.hpp"

#include "Qos_structs.hpp"

namespace SDK::Params
{

struct QosBeaconClient_ClientQosResponse final
{
public:
	EQosResponseType                              Response;
};
static_assert(alignof(QosBeaconClient_ClientQosResponse) == 0x000001, "Wrong alignment on QosBeaconClient_ClientQosResponse");
static_assert(sizeof(QosBeaconClient_ClientQosResponse) == 0x000001, "Wrong size on QosBeaconClient_ClientQosResponse");
static_assert(offsetof(QosBeaconClient_ClientQosResponse, Response) == 0x000000, "Member 'QosBeaconClient_ClientQosResponse::Response' has a wrong offset!");

struct QosBeaconClient_ServerQosRequest final
{
public:
	class FString                                 InSessionId;
};
static_assert(alignof(QosBeaconClient_ServerQosRequest) == 0x000008, "Wrong alignment on QosBeaconClient_ServerQosRequest");
static_assert(sizeof(QosBeaconClient_ServerQosRequest) == 0x000010, "Wrong size on QosBeaconClient_ServerQosRequest");
static_assert(offsetof(QosBeaconClient_ServerQosRequest, InSessionId) == 0x000000, "Member 'QosBeaconClient_ServerQosRequest::InSessionId' has a wrong offset!");

}
