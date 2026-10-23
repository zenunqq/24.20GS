#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct B_AnimBP_HightowerRadish_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(B_AnimBP_HightowerRadish_C_AnimGraph) == 0x000008, "Wrong alignment on B_AnimBP_HightowerRadish_C_AnimGraph");
static_assert(sizeof(B_AnimBP_HightowerRadish_C_AnimGraph) == 0x000010, "Wrong size on B_AnimBP_HightowerRadish_C_AnimGraph");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'B_AnimBP_HightowerRadish_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation");
static_assert(sizeof(B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaTimeX;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_RandomBool_ReturnValue;
	uint8                                         Pad_A[0x2];
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x3];
	int32                                         CallFunc_RandomInteger_ReturnValue;
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;
	bool                                          CallFunc_IsTurningSharply_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1B[0x1];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        K2Node_VariableSet_IsDBNOCarriedAlpha_ImplicitCast;
};
static_assert(alignof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish) == 0x000008, "Wrong alignment on B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish");
static_assert(sizeof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish) == 0x000040, "Wrong size on B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, EntryPoint) == 0x000000, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_RandomBool_ReturnValue) == 0x000009, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x00000C, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_RandomInteger_ReturnValue) == 0x000014, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000018, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_IsTurningSharply_ReturnValue) == 0x000019, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_IsTurningSharply_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x00001C, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanOR_ReturnValue) == 0x000020, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanOR_ReturnValue_1) == 0x000021, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_Not_PreBool_ReturnValue_1) == 0x000024, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_Not_PreBool_ReturnValue_2) == 0x000025, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanAND_ReturnValue_1) == 0x000026, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanAND_ReturnValue_2) == 0x000027, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_BooleanAND_ReturnValue_3) == 0x000028, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish, K2Node_VariableSet_IsDBNOCarriedAlpha_ImplicitCast) == 0x000038, "Member 'B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish::K2Node_VariableSet_IsDBNOCarriedAlpha_ImplicitCast' has a wrong offset!");

}
