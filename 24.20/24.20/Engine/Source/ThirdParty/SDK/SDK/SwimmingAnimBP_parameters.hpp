#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK::Params
{

struct SwimmingAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(SwimmingAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_AnimGraph");
static_assert(sizeof(SwimmingAnimBP_C_AnimGraph) == 0x000010, "Wrong size on SwimmingAnimBP_C_AnimGraph");
static_assert(offsetof(SwimmingAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'SwimmingAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_7[0x1];
	float                                         CallFunc_GetRelevantAnimTime_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_D[0x3];
	float                                         CallFunc_GetRelevantAnimTime_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_15[0x3];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
};
static_assert(alignof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP");
static_assert(sizeof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP) == 0x000030, "Wrong size on SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, EntryPoint) == 0x000000, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000005, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_GetRelevantAnimTime_ReturnValue) == 0x000008, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_GetRelevantAnimTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00000C, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_GetRelevantAnimTime_ReturnValue_1) == 0x000010, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_GetRelevantAnimTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000014, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast) == 0x000020, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x000028, "Member 'SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_AimOffset final
{
public:
	struct FPoseLink                              InAimOffsetsPose;
	struct FPoseLink                              InSourcePosePreAimOffsets;
	struct FPoseLink                              MovementMode_AimOffset_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_AimOffset) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_AimOffset");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_AimOffset) == 0x000030, "Wrong size on SwimmingAnimBP_C_MovementMode_AimOffset");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_AimOffset, InAimOffsetsPose) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_AimOffset::InAimOffsetsPose' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_AimOffset, InSourcePosePreAimOffsets) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_AimOffset::InSourcePosePreAimOffsets' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_AimOffset, MovementMode_AimOffset_0) == 0x000020, "Member 'SwimmingAnimBP_C_MovementMode_AimOffset::MovementMode_AimOffset_0' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_FinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              MovementMode_FinalPoseOverride_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_FinalPoseOverride) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_FinalPoseOverride");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_FinalPoseOverride) == 0x000020, "Wrong size on SwimmingAnimBP_C_MovementMode_FinalPoseOverride");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_FinalPoseOverride, InFinalPose) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_FinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_FinalPoseOverride, MovementMode_FinalPoseOverride_0) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_FinalPoseOverride::MovementMode_FinalPoseOverride_0' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_FullBodyOverride final
{
public:
	struct FPoseLink                              InputPoseFullBody;
	struct FPoseLink                              MovementMode_FullBodyOverride_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_FullBodyOverride) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_FullBodyOverride");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_FullBodyOverride) == 0x000020, "Wrong size on SwimmingAnimBP_C_MovementMode_FullBodyOverride");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_FullBodyOverride, InputPoseFullBody) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_FullBodyOverride::InputPoseFullBody' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_FullBodyOverride, MovementMode_FullBodyOverride_0) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_FullBodyOverride::MovementMode_FullBodyOverride_0' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_LocomotionAdditives final
{
public:
	struct FPoseLink                              InLocomotionAdditivesPose;
	struct FPoseLink                              MovementMode_LocomotionAdditives_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_LocomotionAdditives) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_LocomotionAdditives");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_LocomotionAdditives) == 0x000020, "Wrong size on SwimmingAnimBP_C_MovementMode_LocomotionAdditives");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_LocomotionAdditives, InLocomotionAdditivesPose) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_LocomotionAdditives::InLocomotionAdditivesPose' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_LocomotionAdditives, MovementMode_LocomotionAdditives_0) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_LocomotionAdditives::MovementMode_LocomotionAdditives_0' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_LowerBodyOverride final
{
public:
	struct FPoseLink                              InLowerBodyPose;
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              MovementMode_LowerBodyOverride_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_LowerBodyOverride) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_LowerBodyOverride");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_LowerBodyOverride) == 0x000030, "Wrong size on SwimmingAnimBP_C_MovementMode_LowerBodyOverride");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_LowerBodyOverride, InLowerBodyPose) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_LowerBodyOverride::InLowerBodyPose' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_LowerBodyOverride, InSourcePose) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_LowerBodyOverride::InSourcePose' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_LowerBodyOverride, MovementMode_LowerBodyOverride_0) == 0x000020, "Member 'SwimmingAnimBP_C_MovementMode_LowerBodyOverride::MovementMode_LowerBodyOverride_0' has a wrong offset!");

struct SwimmingAnimBP_C_MovementMode_SourcePose final
{
public:
	struct FPoseLink                              InSourcePoseBase;
	struct FPoseLink                              MovementMode_SourcePose_0;
};
static_assert(alignof(SwimmingAnimBP_C_MovementMode_SourcePose) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_MovementMode_SourcePose");
static_assert(sizeof(SwimmingAnimBP_C_MovementMode_SourcePose) == 0x000020, "Wrong size on SwimmingAnimBP_C_MovementMode_SourcePose");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_SourcePose, InSourcePoseBase) == 0x000000, "Member 'SwimmingAnimBP_C_MovementMode_SourcePose::InSourcePoseBase' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_MovementMode_SourcePose, MovementMode_SourcePose_0) == 0x000010, "Member 'SwimmingAnimBP_C_MovementMode_SourcePose::MovementMode_SourcePose_0' has a wrong offset!");

struct SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update final
{
public:
	struct FAnimUpdateContext                     Context;
	struct FAnimNodeReference                     Node;
	struct FAnimationStateResultReference         CallFunc_ConvertToAnimationStateResult_AnimationState;
	EAnimNodeReferenceConversionResult            CallFunc_ConvertToAnimationStateResult_Result;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update) == 0x000008, "Wrong alignment on SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update");
static_assert(sizeof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update) == 0x000040, "Wrong size on SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, Context) == 0x000000, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::Context' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, Node) == 0x000010, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::Node' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, CallFunc_ConvertToAnimationStateResult_AnimationState) == 0x000020, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::CallFunc_ConvertToAnimationStateResult_AnimationState' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, CallFunc_ConvertToAnimationStateResult_Result) == 0x000030, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::CallFunc_ConvertToAnimationStateResult_Result' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000034, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
