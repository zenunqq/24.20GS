#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK::Params
{

struct Player_SourcePose_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Player_SourcePose_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Player_SourcePose_AnimBP_C_AnimGraph");
static_assert(sizeof(Player_SourcePose_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Player_SourcePose_AnimBP_C_AnimGraph");
static_assert(offsetof(Player_SourcePose_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Player_SourcePose_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP) == 0x000004, "Wrong alignment on Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP");
static_assert(sizeof(Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP) == 0x000004, "Wrong size on Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP, EntryPoint) == 0x000000, "Member 'Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP::EntryPoint' has a wrong offset!");

struct Player_SourcePose_AnimBP_C_ResetBlendListNode final
{
public:
	struct FAnimUpdateContext                     Context;
	struct FAnimNodeReference                     Node;
	EAnimNodeReferenceConversionResult            CallFunc_ConvertToBlendListBase_Result;
	uint8                                         Pad_21[0x7];
	struct FBlendListBaseReference                CallFunc_ConvertToBlendListBase_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(Player_SourcePose_AnimBP_C_ResetBlendListNode) == 0x000008, "Wrong alignment on Player_SourcePose_AnimBP_C_ResetBlendListNode");
static_assert(sizeof(Player_SourcePose_AnimBP_C_ResetBlendListNode) == 0x000040, "Wrong size on Player_SourcePose_AnimBP_C_ResetBlendListNode");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ResetBlendListNode, Context) == 0x000000, "Member 'Player_SourcePose_AnimBP_C_ResetBlendListNode::Context' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ResetBlendListNode, Node) == 0x000010, "Member 'Player_SourcePose_AnimBP_C_ResetBlendListNode::Node' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ResetBlendListNode, CallFunc_ConvertToBlendListBase_Result) == 0x000020, "Member 'Player_SourcePose_AnimBP_C_ResetBlendListNode::CallFunc_ConvertToBlendListBase_Result' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ResetBlendListNode, CallFunc_ConvertToBlendListBase_ReturnValue) == 0x000028, "Member 'Player_SourcePose_AnimBP_C_ResetBlendListNode::CallFunc_ConvertToBlendListBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP_C_ResetBlendListNode, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'Player_SourcePose_AnimBP_C_ResetBlendListNode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
