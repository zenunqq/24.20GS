#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ECosmeticsEventBindingFlags : uint8
{
	None                                     = 0,
	ExecuteImmediately                       = 2,
	ExecuteOnce                              = 4,
	ECosmeticsEventBindingFlags_MAX          = 5,
};

struct FCosmeticsEventHandle final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FCosmeticsEventHandle) == 0x000001, "Wrong alignment on FCosmeticsEventHandle");
static_assert(sizeof(FCosmeticsEventHandle) == 0x000001, "Wrong size on FCosmeticsEventHandle");

}
