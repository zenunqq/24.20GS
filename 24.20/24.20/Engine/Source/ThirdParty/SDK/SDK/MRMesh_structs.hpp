#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMeshTrackerVertexColorMode : uint8
{
	None                                     = 0,
	Confidence                               = 1,
	Block                                    = 2,
	EMeshTrackerVertexColorMode_MAX          = 3,
};

struct FMRMeshConfiguration final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMRMeshConfiguration) == 0x000001, "Wrong alignment on FMRMeshConfiguration");
static_assert(sizeof(FMRMeshConfiguration) == 0x000001, "Wrong size on FMRMeshConfiguration");

}
