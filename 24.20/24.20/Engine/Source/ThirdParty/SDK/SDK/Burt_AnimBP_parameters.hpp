#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Burt_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Burt_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Burt_AnimBP_C_AnimGraph");
static_assert(sizeof(Burt_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Burt_AnimBP_C_AnimGraph");
static_assert(offsetof(Burt_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Burt_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	float                                         K2Node_StructMemberSet___FloatProperty_3_ImplicitCast;
};
static_assert(alignof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP) == 0x000008, "Wrong alignment on Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP");
static_assert(sizeof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP) == 0x000020, "Wrong size on Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP");
static_assert(offsetof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP, EntryPoint) == 0x000000, "Member 'Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP, K2Node_StructMemberSet___FloatProperty_3_ImplicitCast) == 0x000018, "Member 'Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP::K2Node_StructMemberSet___FloatProperty_3_ImplicitCast' has a wrong offset!");

struct Burt_AnimBP_C_Fauna_Idle final
{
public:
	struct FPoseLink                              InPose_Idle;
	struct FPoseLink                              Fauna_Idle_0;
};
static_assert(alignof(Burt_AnimBP_C_Fauna_Idle) == 0x000008, "Wrong alignment on Burt_AnimBP_C_Fauna_Idle");
static_assert(sizeof(Burt_AnimBP_C_Fauna_Idle) == 0x000020, "Wrong size on Burt_AnimBP_C_Fauna_Idle");
static_assert(offsetof(Burt_AnimBP_C_Fauna_Idle, InPose_Idle) == 0x000000, "Member 'Burt_AnimBP_C_Fauna_Idle::InPose_Idle' has a wrong offset!");
static_assert(offsetof(Burt_AnimBP_C_Fauna_Idle, Fauna_Idle_0) == 0x000010, "Member 'Burt_AnimBP_C_Fauna_Idle::Fauna_Idle_0' has a wrong offset!");

struct Burt_AnimBP_C_Fauna_IdleTurn final
{
public:
	struct FPoseLink                              InPose_IdleTurn;
	struct FPoseLink                              Fauna_IdleTurn_0;
};
static_assert(alignof(Burt_AnimBP_C_Fauna_IdleTurn) == 0x000008, "Wrong alignment on Burt_AnimBP_C_Fauna_IdleTurn");
static_assert(sizeof(Burt_AnimBP_C_Fauna_IdleTurn) == 0x000020, "Wrong size on Burt_AnimBP_C_Fauna_IdleTurn");
static_assert(offsetof(Burt_AnimBP_C_Fauna_IdleTurn, InPose_IdleTurn) == 0x000000, "Member 'Burt_AnimBP_C_Fauna_IdleTurn::InPose_IdleTurn' has a wrong offset!");
static_assert(offsetof(Burt_AnimBP_C_Fauna_IdleTurn, Fauna_IdleTurn_0) == 0x000010, "Member 'Burt_AnimBP_C_Fauna_IdleTurn::Fauna_IdleTurn_0' has a wrong offset!");

}
