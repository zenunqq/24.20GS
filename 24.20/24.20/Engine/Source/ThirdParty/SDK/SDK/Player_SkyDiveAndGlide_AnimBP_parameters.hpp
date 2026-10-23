#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Player_SkyDiveAndGlide_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Player_SkyDiveAndGlide_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Player_SkyDiveAndGlide_AnimBP_C_AnimGraph");
static_assert(sizeof(Player_SkyDiveAndGlide_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Player_SkyDiveAndGlide_AnimBP_C_AnimGraph");
static_assert(offsetof(Player_SkyDiveAndGlide_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Player_SkyDiveAndGlide_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaTimeX;
};
static_assert(alignof(Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP) == 0x000004, "Wrong alignment on Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP");
static_assert(sizeof(Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP) == 0x000008, "Wrong size on Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP");
static_assert(offsetof(Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP, EntryPoint) == 0x000000, "Member 'Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");

}
