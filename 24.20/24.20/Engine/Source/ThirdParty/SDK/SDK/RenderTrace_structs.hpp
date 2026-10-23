#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FPhysicalMaterialTraceInput final
{
public:
	class UPhysicalMaterial*                      PhysicalMaterial;
	struct FExpressionInput                       Input;
};
static_assert(alignof(FPhysicalMaterialTraceInput) == 0x000008, "Wrong alignment on FPhysicalMaterialTraceInput");
static_assert(sizeof(FPhysicalMaterialTraceInput) == 0x000030, "Wrong size on FPhysicalMaterialTraceInput");
static_assert(offsetof(FPhysicalMaterialTraceInput, PhysicalMaterial) == 0x000000, "Member 'FPhysicalMaterialTraceInput::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FPhysicalMaterialTraceInput, Input) == 0x000008, "Member 'FPhysicalMaterialTraceInput::Input' has a wrong offset!");

}
