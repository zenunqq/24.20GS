#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ESolarisDebugMessageClientId : uint32
{
	None                                     = 0,
	Max                                      = 2147483646,
};

enum class ESolarisDebugMessageCommand : uint32
{
	Connect                                  = 0,
	Disconnect                               = 1,
	Message                                  = 2,
	PackageMapping                           = 3,
	ESolarisDebugMessageCommand_MAX          = 4,
};

struct FSolarisDebugMessage final
{
public:
	ESolarisDebugMessageClientId                  ClientId;
	ESolarisDebugMessageCommand                   Command;
	TArray<uint8>                                 MessageBodyUTF8;
};
static_assert(alignof(FSolarisDebugMessage) == 0x000008, "Wrong alignment on FSolarisDebugMessage");
static_assert(sizeof(FSolarisDebugMessage) == 0x000018, "Wrong size on FSolarisDebugMessage");
static_assert(offsetof(FSolarisDebugMessage, ClientId) == 0x000000, "Member 'FSolarisDebugMessage::ClientId' has a wrong offset!");
static_assert(offsetof(FSolarisDebugMessage, Command) == 0x000004, "Member 'FSolarisDebugMessage::Command' has a wrong offset!");
static_assert(offsetof(FSolarisDebugMessage, MessageBodyUTF8) == 0x000008, "Member 'FSolarisDebugMessage::MessageBodyUTF8' has a wrong offset!");

}
