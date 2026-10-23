#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Object_ExecuteUbergraph final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Object_ExecuteUbergraph) == 0x000004, "Wrong alignment on Object_ExecuteUbergraph");
static_assert(sizeof(Object_ExecuteUbergraph) == 0x000004, "Wrong size on Object_ExecuteUbergraph");
static_assert(offsetof(Object_ExecuteUbergraph, EntryPoint) == 0x000000, "Member 'Object_ExecuteUbergraph::EntryPoint' has a wrong offset!");

}
