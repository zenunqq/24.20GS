#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class USkeletalMeshComponent*                 CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	float                                         K2Node_Event_DeltaTimeX;
	float                                         CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput;
	float                                         CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;
};
static_assert(alignof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP) == 0x000008, "Wrong alignment on Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP");
static_assert(sizeof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP) == 0x000050, "Wrong size on Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, EntryPoint) == 0x000000, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_GetPartSkeletalMeshComponent_ReturnValue) == 0x000008, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_GetPartSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput) == 0x000014, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput) == 0x000018, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000048, "Member 'Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

struct Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct Mechanical_Engineer_Female_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Mechanical_Engineer_Female_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Mechanical_Engineer_Female_AnimBP_C_AnimGraph");
static_assert(sizeof(Mechanical_Engineer_Female_AnimBP_C_AnimGraph) == 0x000020, "Wrong size on Mechanical_Engineer_Female_AnimBP_C_AnimGraph");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'Mechanical_Engineer_Female_AnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'Mechanical_Engineer_Female_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}
