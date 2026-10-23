#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP) == 0x000004, "Wrong alignment on MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP");
static_assert(sizeof(MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP) == 0x000004, "Wrong size on MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP");
static_assert(offsetof(MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP, EntryPoint) == 0x000000, "Member 'MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP::EntryPoint' has a wrong offset!");

struct MetalScout_Axe_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(MetalScout_Axe_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on MetalScout_Axe_AnimBP_C_AnimGraph");
static_assert(sizeof(MetalScout_Axe_AnimBP_C_AnimGraph) == 0x000020, "Wrong size on MetalScout_Axe_AnimBP_C_AnimGraph");
static_assert(offsetof(MetalScout_Axe_AnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'MetalScout_Axe_AnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(MetalScout_Axe_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'MetalScout_Axe_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}
