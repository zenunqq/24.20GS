#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EasyAntiCheatNetComponent_ClientMessage final
{
public:
	TArray<uint8>                                 message;
};
static_assert(alignof(EasyAntiCheatNetComponent_ClientMessage) == 0x000008, "Wrong alignment on EasyAntiCheatNetComponent_ClientMessage");
static_assert(sizeof(EasyAntiCheatNetComponent_ClientMessage) == 0x000010, "Wrong size on EasyAntiCheatNetComponent_ClientMessage");
static_assert(offsetof(EasyAntiCheatNetComponent_ClientMessage, message) == 0x000000, "Member 'EasyAntiCheatNetComponent_ClientMessage::message' has a wrong offset!");

struct EasyAntiCheatNetComponent_ServerMessage final
{
public:
	TArray<uint8>                                 message;
};
static_assert(alignof(EasyAntiCheatNetComponent_ServerMessage) == 0x000008, "Wrong alignment on EasyAntiCheatNetComponent_ServerMessage");
static_assert(sizeof(EasyAntiCheatNetComponent_ServerMessage) == 0x000010, "Wrong size on EasyAntiCheatNetComponent_ServerMessage");
static_assert(offsetof(EasyAntiCheatNetComponent_ServerMessage, message) == 0x000000, "Member 'EasyAntiCheatNetComponent_ServerMessage::message' has a wrong offset!");

}
