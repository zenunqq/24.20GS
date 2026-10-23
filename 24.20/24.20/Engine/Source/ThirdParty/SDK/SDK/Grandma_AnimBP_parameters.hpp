#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Grandma_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Grandma_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Grandma_AnimBP_C_AnimGraph");
static_assert(sizeof(Grandma_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Grandma_AnimBP_C_AnimGraph");
static_assert(offsetof(Grandma_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Grandma_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP) == 0x000004, "Wrong alignment on Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP");
static_assert(sizeof(Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP) == 0x000004, "Wrong size on Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP");
static_assert(offsetof(Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP, EntryPoint) == 0x000000, "Member 'Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP::EntryPoint' has a wrong offset!");

struct Grandma_AnimBP_C_Fauna_Idle final
{
public:
	struct FPoseLink                              InPose_Idle;
	struct FPoseLink                              Fauna_Idle_0;
};
static_assert(alignof(Grandma_AnimBP_C_Fauna_Idle) == 0x000008, "Wrong alignment on Grandma_AnimBP_C_Fauna_Idle");
static_assert(sizeof(Grandma_AnimBP_C_Fauna_Idle) == 0x000020, "Wrong size on Grandma_AnimBP_C_Fauna_Idle");
static_assert(offsetof(Grandma_AnimBP_C_Fauna_Idle, InPose_Idle) == 0x000000, "Member 'Grandma_AnimBP_C_Fauna_Idle::InPose_Idle' has a wrong offset!");
static_assert(offsetof(Grandma_AnimBP_C_Fauna_Idle, Fauna_Idle_0) == 0x000010, "Member 'Grandma_AnimBP_C_Fauna_Idle::Fauna_Idle_0' has a wrong offset!");

struct Grandma_AnimBP_C_Fauna_IdleTurn final
{
public:
	struct FPoseLink                              InPose_IdleTurn;
	struct FPoseLink                              Fauna_IdleTurn_0;
};
static_assert(alignof(Grandma_AnimBP_C_Fauna_IdleTurn) == 0x000008, "Wrong alignment on Grandma_AnimBP_C_Fauna_IdleTurn");
static_assert(sizeof(Grandma_AnimBP_C_Fauna_IdleTurn) == 0x000020, "Wrong size on Grandma_AnimBP_C_Fauna_IdleTurn");
static_assert(offsetof(Grandma_AnimBP_C_Fauna_IdleTurn, InPose_IdleTurn) == 0x000000, "Member 'Grandma_AnimBP_C_Fauna_IdleTurn::InPose_IdleTurn' has a wrong offset!");
static_assert(offsetof(Grandma_AnimBP_C_Fauna_IdleTurn, Fauna_IdleTurn_0) == 0x000010, "Member 'Grandma_AnimBP_C_Fauna_IdleTurn::Fauna_IdleTurn_0' has a wrong offset!");

struct Grandma_AnimBP_C_Fauna_Jump final
{
public:
	struct FPoseLink                              Fauna_Jump_0;
};
static_assert(alignof(Grandma_AnimBP_C_Fauna_Jump) == 0x000008, "Wrong alignment on Grandma_AnimBP_C_Fauna_Jump");
static_assert(sizeof(Grandma_AnimBP_C_Fauna_Jump) == 0x000010, "Wrong size on Grandma_AnimBP_C_Fauna_Jump");
static_assert(offsetof(Grandma_AnimBP_C_Fauna_Jump, Fauna_Jump_0) == 0x000000, "Member 'Grandma_AnimBP_C_Fauna_Jump::Fauna_Jump_0' has a wrong offset!");

}
