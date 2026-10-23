#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness final
{
public:
	float                                         InStiffness;
};
static_assert(alignof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness) == 0x000004, "Wrong alignment on ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness");
static_assert(sizeof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness) == 0x000004, "Wrong size on ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness");
static_assert(offsetof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, InStiffness) == 0x000000, "Member 'ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness::InStiffness' has a wrong offset!");

}
