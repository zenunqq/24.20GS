#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESplitStormProxyPhase : uint8
{
	None                                     = 0,
	MovingToHold                             = 1,
	MovingToEnd                              = 2,
	ESplitStormProxyPhase_MAX                = 3,
};

struct FSplitStormProxyCircle final
{
public:
	struct FVector                                Center;
	float                                         Radius;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FSplitStormProxyCircle) == 0x000008, "Wrong alignment on FSplitStormProxyCircle");
static_assert(sizeof(FSplitStormProxyCircle) == 0x000020, "Wrong size on FSplitStormProxyCircle");
static_assert(offsetof(FSplitStormProxyCircle, Center) == 0x000000, "Member 'FSplitStormProxyCircle::Center' has a wrong offset!");
static_assert(offsetof(FSplitStormProxyCircle, Radius) == 0x000018, "Member 'FSplitStormProxyCircle::Radius' has a wrong offset!");

}
