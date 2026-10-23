#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct TracerGeneric_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
};
static_assert(alignof(TracerGeneric_C_UserConstructionScript) == 0x000008, "Wrong alignment on TracerGeneric_C_UserConstructionScript");
static_assert(sizeof(TracerGeneric_C_UserConstructionScript) == 0x0000E0, "Wrong size on TracerGeneric_C_UserConstructionScript");
static_assert(offsetof(TracerGeneric_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000000, "Member 'TracerGeneric_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

}
