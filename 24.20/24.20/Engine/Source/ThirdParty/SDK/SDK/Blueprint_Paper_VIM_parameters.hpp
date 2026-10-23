#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Blueprint_Paper_VIM_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Blueprint_Paper_VIM_C_AnimGraph) == 0x000008, "Wrong alignment on Blueprint_Paper_VIM_C_AnimGraph");
static_assert(sizeof(Blueprint_Paper_VIM_C_AnimGraph) == 0x000010, "Wrong size on Blueprint_Paper_VIM_C_AnimGraph");
static_assert(offsetof(Blueprint_Paper_VIM_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Blueprint_Paper_VIM_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast;
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast_1;
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast_2;
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast_3;
};
static_assert(alignof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM) == 0x000008, "Wrong alignment on Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM");
static_assert(sizeof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM) == 0x000020, "Wrong size on Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, EntryPoint) == 0x000000, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::EntryPoint' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, K2Node_StructMemberSet_Alpha_ImplicitCast) == 0x000010, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::K2Node_StructMemberSet_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, K2Node_StructMemberSet_Alpha_ImplicitCast_1) == 0x000014, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::K2Node_StructMemberSet_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, K2Node_StructMemberSet_Alpha_ImplicitCast_2) == 0x000018, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::K2Node_StructMemberSet_Alpha_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM, K2Node_StructMemberSet_Alpha_ImplicitCast_3) == 0x00001C, "Member 'Blueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM::K2Node_StructMemberSet_Alpha_ImplicitCast_3' has a wrong offset!");

}
