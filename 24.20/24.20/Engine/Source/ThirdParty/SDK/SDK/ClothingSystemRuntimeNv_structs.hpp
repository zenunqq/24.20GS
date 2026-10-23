#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EClothingWindMethodNv : uint8
{
	Legacy                                   = 0,
	Accurate                                 = 1,
	EClothingWindMethodNv_MAX                = 2,
};

struct FClothConstraintSetupNv final
{
public:
	float                                         Stiffness;
	float                                         StiffnessMultiplier;
	float                                         StretchLimit;
	float                                         CompressionLimit;
};
static_assert(alignof(FClothConstraintSetupNv) == 0x000004, "Wrong alignment on FClothConstraintSetupNv");
static_assert(sizeof(FClothConstraintSetupNv) == 0x000010, "Wrong size on FClothConstraintSetupNv");
static_assert(offsetof(FClothConstraintSetupNv, Stiffness) == 0x000000, "Member 'FClothConstraintSetupNv::Stiffness' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, StiffnessMultiplier) == 0x000004, "Member 'FClothConstraintSetupNv::StiffnessMultiplier' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, StretchLimit) == 0x000008, "Member 'FClothConstraintSetupNv::StretchLimit' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, CompressionLimit) == 0x00000C, "Member 'FClothConstraintSetupNv::CompressionLimit' has a wrong offset!");

}
