#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph");
static_assert(sizeof(Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph");
static_assert(offsetof(Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaTimeX;
};
static_assert(alignof(Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP) == 0x000004, "Wrong alignment on Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP");
static_assert(sizeof(Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP) == 0x000008, "Wrong size on Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP");
static_assert(offsetof(Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP, EntryPoint) == 0x000000, "Member 'Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");

}
