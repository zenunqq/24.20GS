#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct RidingPlayerLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP_C_AnimGraph");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on RidingPlayerLayerAnimBP_C_AnimGraph");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_6[0x2];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue_1;
	uint8                                         Pad_2A[0x6];
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_61[0x3];
	float                                         K2Node_Event_DeltaTimeX;
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_71[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_89[0x7];
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_A2[0x6];
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_CC[0x4];
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue_1;
	float                                         CallFunc_BreakRotator_Roll_1;
	float                                         CallFunc_BreakRotator_Pitch_1;
	float                                         CallFunc_BreakRotator_Yaw_1;
	uint8                                         Pad_F4[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_NormalizeAxis_ReturnValue;
	bool                                          CallFunc_HasCurrentMontage_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	uint8                                         Pad_10A[0x6];
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;
	struct FRotator                               CallFunc_TransformRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll_2;
	float                                         CallFunc_BreakRotator_Pitch_2;
	float                                         CallFunc_BreakRotator_Yaw_2;
	uint8                                         Pad_194[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_1A1[0x7];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_1C5[0x3];
	float                                         K2Node_StructMemberSet_Yaw_ImplicitCast;
	uint8                                         Pad_1CC[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_NormalizeAxis_Angle_ImplicitCast;
	uint8                                         Pad_1E4[0x4];
	double                                        K2Node_VariableSet_LowerBodyYaw_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP) == 0x000010, "Wrong alignment on RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP) == 0x000200, "Wrong size on RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, EntryPoint) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetVelocity_ReturnValue) == 0x000008, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_VSize_ReturnValue) == 0x000020, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_HasTag_ReturnValue) == 0x000028, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_HasTag_ReturnValue_1) == 0x000029, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_HasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_AsCreature_Base_Ridable_Component) == 0x000038, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_AsCreature_Base_Ridable_Component' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_AsFort_AIPawn) == 0x000058, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_Event_DeltaTimeX) == 0x000064, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000068, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_SelectFloat_ReturnValue) == 0x000078, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000080, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000090, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000098, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x0000A1, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetBaseAimRotation_ReturnValue) == 0x0000A8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Roll) == 0x0000C0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Pitch) == 0x0000C4, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Yaw) == 0x0000C8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetBaseAimRotation_ReturnValue_1) == 0x0000D0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetBaseAimRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Roll_1) == 0x0000E8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Pitch_1) == 0x0000EC, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Yaw_1) == 0x0000F0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000F8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_NormalizeAxis_ReturnValue) == 0x000100, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_HasCurrentMontage_ReturnValue) == 0x000104, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_HasCurrentMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanOR_ReturnValue) == 0x000105, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanOR_ReturnValue_1) == 0x000106, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Not_PreBool_ReturnValue) == 0x000107, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanAND_ReturnValue) == 0x000108, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanOR_ReturnValue_2) == 0x000109, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GetSocketTransform_ReturnValue) == 0x000110, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_TransformRotation_ReturnValue) == 0x000170, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_TransformRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Roll_2) == 0x000188, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Roll_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Pitch_2) == 0x00018C, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Pitch_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BreakRotator_Yaw_2) == 0x000190, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BreakRotator_Yaw_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000198, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001A0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_MakeRotator_ReturnValue) == 0x0001A8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001C0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_LessEqual_DoubleDouble_ReturnValue_2) == 0x0001C1, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_LessEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001C2, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanOR_ReturnValue_3) == 0x0001C3, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_BooleanAND_ReturnValue_1) == 0x0001C4, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_StructMemberSet_Yaw_ImplicitCast) == 0x0001C8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_StructMemberSet_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0001D0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0001D8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_NormalizeAxis_Angle_ImplicitCast) == 0x0001E0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_NormalizeAxis_Angle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, K2Node_VariableSet_LowerBodyYaw_ImplicitCast) == 0x0001E8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::K2Node_VariableSet_LowerBodyYaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0001F0, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0001F8, "Member 'RidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              VehicleFinalPoseOverride_0;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride) == 0x000020, "Wrong size on RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride, InFinalPose) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride, VehicleFinalPoseOverride_0) == 0x000010, "Member 'RidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride::VehicleFinalPoseOverride_0' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;
	struct FPoseLink                              VehicleFullBodyOverride_0;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000020, "Wrong size on RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride, VehicleFullBodyOverride_0) == 0x000010, "Member 'RidingPlayerLayerAnimBP_C_VehicleFullBodyOverride::VehicleFullBodyOverride_0' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;
	struct FPoseLink                              InPoseUpperBody;
	struct FPoseLink                              VehicleLowerBodyOverride_0;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, VehicleLowerBodyOverride_0) == 0x000020, "Member 'RidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::VehicleLowerBodyOverride_0' has a wrong offset!");

struct RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;
	struct FPoseLink                              InPoseUpperAndLowerBody;
	struct FFortAnimInput_TurnInPlace             TurnInPlace;
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;
	struct FPoseLink                              VehicleSplitBodyOverride_0;
};
static_assert(alignof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(sizeof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x0000B8, "Wrong size on RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, TurnInPlace) == 0x000020, "Member 'RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::TurnInPlace' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000098, "Member 'RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, VehicleSplitBodyOverride_0) == 0x0000A8, "Member 'RidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::VehicleSplitBodyOverride_0' has a wrong offset!");

}
