#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct SlidingLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_AnimGraph");
static_assert(sizeof(SlidingLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on SlidingLayerAnimBP_C_AnimGraph");
static_assert(offsetof(SlidingLayerAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'SlidingLayerAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(SlidingLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on SlidingLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(SlidingLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on SlidingLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(SlidingLayerAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'SlidingLayerAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaTimeX;
	double                                        CallFunc_Abs_ReturnValue;
	double                                        CallFunc_NormalizeToRange_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Abs_A_ImplicitCast;
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast;
};
static_assert(alignof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP");
static_assert(sizeof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP) == 0x000030, "Wrong size on SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, EntryPoint) == 0x000000, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, CallFunc_Abs_ReturnValue) == 0x000008, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, CallFunc_NormalizeToRange_ReturnValue) == 0x000010, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, CallFunc_Abs_A_ImplicitCast) == 0x000020, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP, K2Node_StructMemberSet_Alpha_ImplicitCast) == 0x000028, "Member 'SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP::K2Node_StructMemberSet_Alpha_ImplicitCast' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_AimOffset final
{
public:
	struct FPoseLink                              InAimOffsetsPose;
	struct FPoseLink                              InSourcePosePreAimOffsets;
	struct FPoseLink                              MovementMode_AimOffset_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_AimOffset) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_AimOffset");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_AimOffset) == 0x000030, "Wrong size on SlidingLayerAnimBP_C_MovementMode_AimOffset");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_AimOffset, InAimOffsetsPose) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_AimOffset::InAimOffsetsPose' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_AimOffset, InSourcePosePreAimOffsets) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_AimOffset::InSourcePosePreAimOffsets' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_AimOffset, MovementMode_AimOffset_0) == 0x000020, "Member 'SlidingLayerAnimBP_C_MovementMode_AimOffset::MovementMode_AimOffset_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              MovementMode_FinalPoseOverride_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride) == 0x000020, "Wrong size on SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride, InFinalPose) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride, MovementMode_FinalPoseOverride_0) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_FinalPoseOverride::MovementMode_FinalPoseOverride_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_FullBodyOverride final
{
public:
	struct FPoseLink                              InputPoseFullBody;
	struct FPoseLink                              MovementMode_FullBodyOverride_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_FullBodyOverride) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_FullBodyOverride");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_FullBodyOverride) == 0x000020, "Wrong size on SlidingLayerAnimBP_C_MovementMode_FullBodyOverride");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_FullBodyOverride, InputPoseFullBody) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_FullBodyOverride::InputPoseFullBody' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_FullBodyOverride, MovementMode_FullBodyOverride_0) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_FullBodyOverride::MovementMode_FullBodyOverride_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives final
{
public:
	struct FPoseLink                              InLocomotionAdditivesPose;
	struct FPoseLink                              MovementMode_LocomotionAdditives_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives) == 0x000020, "Wrong size on SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives, InLocomotionAdditivesPose) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives::InLocomotionAdditivesPose' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives, MovementMode_LocomotionAdditives_0) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_LocomotionAdditives::MovementMode_LocomotionAdditives_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride final
{
public:
	struct FPoseLink                              InLowerBodyPose;
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              MovementMode_LowerBodyOverride_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride) == 0x000030, "Wrong size on SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride, InLowerBodyPose) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride::InLowerBodyPose' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride, InSourcePose) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride::InSourcePose' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride, MovementMode_LowerBodyOverride_0) == 0x000020, "Member 'SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride::MovementMode_LowerBodyOverride_0' has a wrong offset!");

struct SlidingLayerAnimBP_C_MovementMode_SourcePose final
{
public:
	struct FPoseLink                              InSourcePoseBase;
	struct FPoseLink                              MovementMode_SourcePose_0;
};
static_assert(alignof(SlidingLayerAnimBP_C_MovementMode_SourcePose) == 0x000008, "Wrong alignment on SlidingLayerAnimBP_C_MovementMode_SourcePose");
static_assert(sizeof(SlidingLayerAnimBP_C_MovementMode_SourcePose) == 0x000020, "Wrong size on SlidingLayerAnimBP_C_MovementMode_SourcePose");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_SourcePose, InSourcePoseBase) == 0x000000, "Member 'SlidingLayerAnimBP_C_MovementMode_SourcePose::InSourcePoseBase' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP_C_MovementMode_SourcePose, MovementMode_SourcePose_0) == 0x000010, "Member 'SlidingLayerAnimBP_C_MovementMode_SourcePose::MovementMode_SourcePose_0' has a wrong offset!");

}
