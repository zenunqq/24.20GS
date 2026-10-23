#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SquadMarker_C_ExecuteUbergraph_SquadMarker final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(SquadMarker_C_ExecuteUbergraph_SquadMarker) == 0x000004, "Wrong alignment on SquadMarker_C_ExecuteUbergraph_SquadMarker");
static_assert(sizeof(SquadMarker_C_ExecuteUbergraph_SquadMarker) == 0x000004, "Wrong size on SquadMarker_C_ExecuteUbergraph_SquadMarker");
static_assert(offsetof(SquadMarker_C_ExecuteUbergraph_SquadMarker, EntryPoint) == 0x000000, "Member 'SquadMarker_C_ExecuteUbergraph_SquadMarker::EntryPoint' has a wrong offset!");

}
