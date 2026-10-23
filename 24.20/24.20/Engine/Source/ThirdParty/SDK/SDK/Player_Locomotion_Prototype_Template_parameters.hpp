#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Player_Locomotion_Prototype_Template_C_AnimGraph final
{
public:
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Player_Locomotion_Prototype_Template_C_AnimGraph) == 0x000008, "Wrong alignment on Player_Locomotion_Prototype_Template_C_AnimGraph");
static_assert(sizeof(Player_Locomotion_Prototype_Template_C_AnimGraph) == 0x000020, "Wrong size on Player_Locomotion_Prototype_Template_C_AnimGraph");
static_assert(offsetof(Player_Locomotion_Prototype_Template_C_AnimGraph, InSourcePose) == 0x000000, "Member 'Player_Locomotion_Prototype_Template_C_AnimGraph::InSourcePose' has a wrong offset!");
static_assert(offsetof(Player_Locomotion_Prototype_Template_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'Player_Locomotion_Prototype_Template_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template) == 0x000004, "Wrong alignment on Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template");
static_assert(sizeof(Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template) == 0x000004, "Wrong size on Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template");
static_assert(offsetof(Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template, EntryPoint) == 0x000000, "Member 'Player_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template::EntryPoint' has a wrong offset!");

}
