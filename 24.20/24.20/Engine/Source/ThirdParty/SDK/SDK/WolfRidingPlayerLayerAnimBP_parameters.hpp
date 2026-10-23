#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct WolfRidingPlayerLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_AnimGraph");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on WolfRidingPlayerLayerAnimBP_C_AnimGraph");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData final
{
public:
	const class UAnimInstance*                    RidableAnimInstance;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData) == 0x000008, "Wrong size on WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData, RidableAnimInstance) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData::RidableAnimInstance' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_5[0x3];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	const class UAnimInstance*                    K2Node_Event_RidableAnimInstance;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	float                                         K2Node_StructMemberSet___FloatProperty_24_ImplicitCast;
	float                                         K2Node_StructMemberSet___FloatProperty_25_ImplicitCast;
	float                                         K2Node_VariableSet_BoostPlayRate_ImplicitCast;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP) == 0x000030, "Wrong size on WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, EntryPoint) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000004, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, K2Node_Event_RidableAnimInstance) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::K2Node_Event_RidableAnimInstance' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, CallFunc_MapRangeClamped_ReturnValue) == 0x000018, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, K2Node_StructMemberSet___FloatProperty_24_ImplicitCast) == 0x000020, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::K2Node_StructMemberSet___FloatProperty_24_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, K2Node_StructMemberSet___FloatProperty_25_ImplicitCast) == 0x000024, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::K2Node_StructMemberSet___FloatProperty_25_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP, K2Node_VariableSet_BoostPlayRate_ImplicitCast) == 0x000028, "Member 'WolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP::K2Node_VariableSet_BoostPlayRate_ImplicitCast' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf final
{
public:
	class UObject*                                AnimInstance;
	class UGrandma_AnimBP_C*                      K2Node_DynamicCast_AsGrandma_Anim_BP;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	double                                        K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast;
	double                                        K2Node_VariableSet_BodyRoll_ImplicitCast;
	double                                        K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast;
	double                                        K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast;
	double                                        K2Node_VariableSet_WolfSpeed2D_ImplicitCast;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf) == 0x000040, "Wrong size on WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, AnimInstance) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::AnimInstance' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_DynamicCast_AsGrandma_Anim_BP) == 0x000008, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_DynamicCast_AsGrandma_Anim_BP' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast) == 0x000018, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_VariableSet_BodyRoll_ImplicitCast) == 0x000020, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_VariableSet_BodyRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast) == 0x000028, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast) == 0x000030, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf, K2Node_VariableSet_WolfSpeed2D_ImplicitCast) == 0x000038, "Member 'WolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf::K2Node_VariableSet_WolfSpeed2D_ImplicitCast' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              VehicleFinalPoseOverride_0;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride) == 0x000020, "Wrong size on WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride, InFinalPose) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride, VehicleFinalPoseOverride_0) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride::VehicleFinalPoseOverride_0' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;
	struct FPoseLink                              VehicleFullBodyOverride_0;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000020, "Wrong size on WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride, VehicleFullBodyOverride_0) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride::VehicleFullBodyOverride_0' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;
	struct FPoseLink                              InPoseUpperBody;
	struct FPoseLink                              VehicleLowerBodyOverride_0;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride, VehicleLowerBodyOverride_0) == 0x000020, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride::VehicleLowerBodyOverride_0' has a wrong offset!");

struct WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;
	struct FPoseLink                              InPoseUpperAndLowerBody;
	struct FFortAnimInput_TurnInPlace             TurnInPlace;
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;
	struct FPoseLink                              VehicleSplitBodyOverride_0;
};
static_assert(alignof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(sizeof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x0000B8, "Wrong size on WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, TurnInPlace) == 0x000020, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::TurnInPlace' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000098, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride, VehicleSplitBodyOverride_0) == 0x0000A8, "Member 'WolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride::VehicleSplitBodyOverride_0' has a wrong offset!");

}
