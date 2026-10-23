#pragma once

#include "Basic.hpp"

namespace SDK
{

struct alignas(0x08) FScriptTypedElementHandle final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FScriptTypedElementHandle) == 0x000008, "Wrong alignment on FScriptTypedElementHandle");
static_assert(sizeof(FScriptTypedElementHandle) == 0x000008, "Wrong size on FScriptTypedElementHandle");

struct alignas(0x08) FScriptTypedElementListProxy final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FScriptTypedElementListProxy) == 0x000008, "Wrong alignment on FScriptTypedElementListProxy");
static_assert(sizeof(FScriptTypedElementListProxy) == 0x000010, "Wrong size on FScriptTypedElementListProxy");

}
