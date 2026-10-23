#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct UACNetworkComponent_SendClientHello final
{
public:
	uint32                                        SessionKey;
};
static_assert(alignof(UACNetworkComponent_SendClientHello) == 0x000004, "Wrong alignment on UACNetworkComponent_SendClientHello");
static_assert(sizeof(UACNetworkComponent_SendClientHello) == 0x000004, "Wrong size on UACNetworkComponent_SendClientHello");
static_assert(offsetof(UACNetworkComponent_SendClientHello, SessionKey) == 0x000000, "Member 'UACNetworkComponent_SendClientHello::SessionKey' has a wrong offset!");

struct UACNetworkComponent_SendPacketToClient final
{
public:
	uint8                                         EnhPacketType;
	uint8                                         Pad_1[0x7];
	TArray<uint8>                                 Data;
};
static_assert(alignof(UACNetworkComponent_SendPacketToClient) == 0x000008, "Wrong alignment on UACNetworkComponent_SendPacketToClient");
static_assert(sizeof(UACNetworkComponent_SendPacketToClient) == 0x000018, "Wrong size on UACNetworkComponent_SendPacketToClient");
static_assert(offsetof(UACNetworkComponent_SendPacketToClient, EnhPacketType) == 0x000000, "Member 'UACNetworkComponent_SendPacketToClient::EnhPacketType' has a wrong offset!");
static_assert(offsetof(UACNetworkComponent_SendPacketToClient, Data) == 0x000008, "Member 'UACNetworkComponent_SendPacketToClient::Data' has a wrong offset!");

struct UACNetworkComponent_SendPacketToServer final
{
public:
	uint8                                         EnhPacketType;
	uint8                                         Pad_1[0x7];
	TArray<uint8>                                 Data;
};
static_assert(alignof(UACNetworkComponent_SendPacketToServer) == 0x000008, "Wrong alignment on UACNetworkComponent_SendPacketToServer");
static_assert(sizeof(UACNetworkComponent_SendPacketToServer) == 0x000018, "Wrong size on UACNetworkComponent_SendPacketToServer");
static_assert(offsetof(UACNetworkComponent_SendPacketToServer, EnhPacketType) == 0x000000, "Member 'UACNetworkComponent_SendPacketToServer::EnhPacketType' has a wrong offset!");
static_assert(offsetof(UACNetworkComponent_SendPacketToServer, Data) == 0x000008, "Member 'UACNetworkComponent_SendPacketToServer::Data' has a wrong offset!");

}
