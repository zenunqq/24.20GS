#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP) == 0x000004, "Wrong alignment on HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP");
static_assert(sizeof(HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP) == 0x000004, "Wrong size on HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP, EntryPoint) == 0x000000, "Member 'HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP::EntryPoint' has a wrong offset!");

struct HighTower_Tapas_Axe_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(HighTower_Tapas_Axe_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on HighTower_Tapas_Axe_AnimBP_C_AnimGraph");
static_assert(sizeof(HighTower_Tapas_Axe_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on HighTower_Tapas_Axe_AnimBP_C_AnimGraph");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'HighTower_Tapas_Axe_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}
