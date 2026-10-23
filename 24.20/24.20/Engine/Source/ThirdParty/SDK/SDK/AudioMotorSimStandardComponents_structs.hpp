#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FMotorSimGearCurve final
{
public:
	struct FRuntimeFloatCurve                     RpmCurve;
	float                                         SpeedTopThreshold;
	uint8                                         Pad_8C[0x4];
};
static_assert(alignof(FMotorSimGearCurve) == 0x000008, "Wrong alignment on FMotorSimGearCurve");
static_assert(sizeof(FMotorSimGearCurve) == 0x000090, "Wrong size on FMotorSimGearCurve");
static_assert(offsetof(FMotorSimGearCurve, RpmCurve) == 0x000000, "Member 'FMotorSimGearCurve::RpmCurve' has a wrong offset!");
static_assert(offsetof(FMotorSimGearCurve, SpeedTopThreshold) == 0x000088, "Member 'FMotorSimGearCurve::SpeedTopThreshold' has a wrong offset!");

}
