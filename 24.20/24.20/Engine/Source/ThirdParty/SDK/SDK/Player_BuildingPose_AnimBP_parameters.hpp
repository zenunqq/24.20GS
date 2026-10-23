#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Player_BuildingPose_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Player_BuildingPose_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Player_BuildingPose_AnimBP_C_AnimGraph");
static_assert(sizeof(Player_BuildingPose_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Player_BuildingPose_AnimBP_C_AnimGraph");
static_assert(offsetof(Player_BuildingPose_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Player_BuildingPose_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP) == 0x000004, "Wrong alignment on Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP");
static_assert(sizeof(Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP) == 0x000004, "Wrong size on Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP");
static_assert(offsetof(Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP, EntryPoint) == 0x000000, "Member 'Player_BuildingPose_AnimBP_C_ExecuteUbergraph_Player_BuildingPose_AnimBP::EntryPoint' has a wrong offset!");

}
