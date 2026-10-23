#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EUdpMessageFormat : uint8
{
	None                                     = 0,
	Json                                     = 1,
	TaggedProperty                           = 2,
	CborPlatformEndianness                   = 3,
	CborStandardEndianness                   = 4,
	EUdpMessageFormat_MAX                    = 5,
};

struct FUdpMockMessage final
{
public:
	TArray<uint8>                                 Data;
};
static_assert(alignof(FUdpMockMessage) == 0x000008, "Wrong alignment on FUdpMockMessage");
static_assert(sizeof(FUdpMockMessage) == 0x000010, "Wrong size on FUdpMockMessage");
static_assert(offsetof(FUdpMockMessage, Data) == 0x000000, "Member 'FUdpMockMessage::Data' has a wrong offset!");

}
