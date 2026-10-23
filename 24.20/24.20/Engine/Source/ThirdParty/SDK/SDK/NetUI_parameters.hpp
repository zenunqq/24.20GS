#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BadNetworkIndicator_GetPacketLoss final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_GetPacketLoss) == 0x000004, "Wrong alignment on BadNetworkIndicator_GetPacketLoss");
static_assert(sizeof(BadNetworkIndicator_GetPacketLoss) == 0x000004, "Wrong size on BadNetworkIndicator_GetPacketLoss");
static_assert(offsetof(BadNetworkIndicator_GetPacketLoss, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_GetPacketLoss::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_GetPing final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_GetPing) == 0x000004, "Wrong alignment on BadNetworkIndicator_GetPing");
static_assert(sizeof(BadNetworkIndicator_GetPing) == 0x000004, "Wrong size on BadNetworkIndicator_GetPing");
static_assert(offsetof(BadNetworkIndicator_GetPing, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_GetPing::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_HasBadPacketLoss final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_HasBadPacketLoss) == 0x000001, "Wrong alignment on BadNetworkIndicator_HasBadPacketLoss");
static_assert(sizeof(BadNetworkIndicator_HasBadPacketLoss) == 0x000001, "Wrong size on BadNetworkIndicator_HasBadPacketLoss");
static_assert(offsetof(BadNetworkIndicator_HasBadPacketLoss, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_HasBadPacketLoss::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_HasBadPing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_HasBadPing) == 0x000001, "Wrong alignment on BadNetworkIndicator_HasBadPing");
static_assert(sizeof(BadNetworkIndicator_HasBadPing) == 0x000001, "Wrong size on BadNetworkIndicator_HasBadPing");
static_assert(offsetof(BadNetworkIndicator_HasBadPing, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_HasBadPing::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_HasSeverePacketLoss final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_HasSeverePacketLoss) == 0x000001, "Wrong alignment on BadNetworkIndicator_HasSeverePacketLoss");
static_assert(sizeof(BadNetworkIndicator_HasSeverePacketLoss) == 0x000001, "Wrong size on BadNetworkIndicator_HasSeverePacketLoss");
static_assert(offsetof(BadNetworkIndicator_HasSeverePacketLoss, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_HasSeverePacketLoss::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_HasSeverePing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_HasSeverePing) == 0x000001, "Wrong alignment on BadNetworkIndicator_HasSeverePing");
static_assert(sizeof(BadNetworkIndicator_HasSeverePing) == 0x000001, "Wrong size on BadNetworkIndicator_HasSeverePing");
static_assert(offsetof(BadNetworkIndicator_HasSeverePing, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_HasSeverePing::ReturnValue' has a wrong offset!");

struct BadNetworkIndicator_ShouldDisplay final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BadNetworkIndicator_ShouldDisplay) == 0x000001, "Wrong alignment on BadNetworkIndicator_ShouldDisplay");
static_assert(sizeof(BadNetworkIndicator_ShouldDisplay) == 0x000001, "Wrong size on BadNetworkIndicator_ShouldDisplay");
static_assert(offsetof(BadNetworkIndicator_ShouldDisplay, ReturnValue) == 0x000000, "Member 'BadNetworkIndicator_ShouldDisplay::ReturnValue' has a wrong offset!");

}
