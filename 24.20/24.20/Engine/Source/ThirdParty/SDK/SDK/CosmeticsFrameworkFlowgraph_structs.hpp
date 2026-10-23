#pragma once

#include "Basic.hpp"

#include "StructUtils_structs.hpp"

namespace SDK
{

struct FCosmeticFlowData final
{
public:
	TMap<class FName, struct FInstancedStruct>    NamedData;
};
static_assert(alignof(FCosmeticFlowData) == 0x000008, "Wrong alignment on FCosmeticFlowData");
static_assert(sizeof(FCosmeticFlowData) == 0x000050, "Wrong size on FCosmeticFlowData");
static_assert(offsetof(FCosmeticFlowData, NamedData) == 0x000000, "Member 'FCosmeticFlowData::NamedData' has a wrong offset!");

}
