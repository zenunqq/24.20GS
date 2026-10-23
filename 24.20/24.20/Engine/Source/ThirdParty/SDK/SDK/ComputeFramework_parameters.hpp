#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ComputeGraphComponent_CreateDataProviders final
{
public:
	int32                                         InBindingIndex;
	uint8                                         Pad_4[0x4];
	class UObject*                                InBindingObject;
};
static_assert(alignof(ComputeGraphComponent_CreateDataProviders) == 0x000008, "Wrong alignment on ComputeGraphComponent_CreateDataProviders");
static_assert(sizeof(ComputeGraphComponent_CreateDataProviders) == 0x000010, "Wrong size on ComputeGraphComponent_CreateDataProviders");
static_assert(offsetof(ComputeGraphComponent_CreateDataProviders, InBindingIndex) == 0x000000, "Member 'ComputeGraphComponent_CreateDataProviders::InBindingIndex' has a wrong offset!");
static_assert(offsetof(ComputeGraphComponent_CreateDataProviders, InBindingObject) == 0x000008, "Member 'ComputeGraphComponent_CreateDataProviders::InBindingObject' has a wrong offset!");

}
