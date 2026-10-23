#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FDynamicCapsuleState final
{
public:
	float                                         CapsuleRadius;
	float                                         CapsuleHalfHeight;
	double                                        RelativeMeshHeight;
};
static_assert(alignof(FDynamicCapsuleState) == 0x000008, "Wrong alignment on FDynamicCapsuleState");
static_assert(sizeof(FDynamicCapsuleState) == 0x000010, "Wrong size on FDynamicCapsuleState");
static_assert(offsetof(FDynamicCapsuleState, CapsuleRadius) == 0x000000, "Member 'FDynamicCapsuleState::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(FDynamicCapsuleState, CapsuleHalfHeight) == 0x000004, "Member 'FDynamicCapsuleState::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(FDynamicCapsuleState, RelativeMeshHeight) == 0x000008, "Member 'FDynamicCapsuleState::RelativeMeshHeight' has a wrong offset!");

}
