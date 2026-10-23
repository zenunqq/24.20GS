#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaSeconds;
	TArray<struct FVector>                        K2Node_Event_SplinePoints;
	TArray<struct FVector>                        K2Node_Event_SplineTangents;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_51[0x7];
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	bool                                          K2Node_CustomEvent_bIsTrajectoryValid;
	uint8                                         Pad_139[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_144[0x4];
	class USplineMeshComponent*                   CallFunc_Array_Get_Item;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_155[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;
	uint8                                         Pad_15E[0x2];
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory) == 0x000008, "Wrong alignment on BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory");
static_assert(sizeof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory) == 0x000170, "Wrong size on BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, EntryPoint) == 0x000000, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, K2Node_Event_SplinePoints) == 0x000008, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::K2Node_Event_SplinePoints' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, K2Node_Event_SplineTangents) == 0x000018, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::K2Node_Event_SplineTangents' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00002C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x00003C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000058, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, K2Node_CustomEvent_bIsTrajectoryValid) == 0x000138, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::K2Node_CustomEvent_bIsTrajectoryValid' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Array_Length_ReturnValue_1) == 0x00013C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, Temp_int_Array_Index_Variable) == 0x000140, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Array_Get_Item) == 0x000148, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, Temp_int_Loop_Counter_Variable) == 0x000150, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Less_IntInt_ReturnValue) == 0x000154, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Add_IntInt_ReturnValue) == 0x000158, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_Not_PreBool_ReturnValue) == 0x00015C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00015D, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000160, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000168, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00016C, "Member 'BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct BP_ProjectileTrajectory_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(BP_ProjectileTrajectory_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ProjectileTrajectory_C_ReceiveTick");
static_assert(sizeof(BP_ProjectileTrajectory_C_ReceiveTick) == 0x000004, "Wrong size on BP_ProjectileTrajectory_C_ReceiveTick");
static_assert(offsetof(BP_ProjectileTrajectory_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ProjectileTrajectory_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner final
{
public:
	bool                                          ShouldUpdate_0;
	uint8                                         Pad_1[0x7];
	class UObject*                                Owner_0;
};
static_assert(alignof(BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner) == 0x000008, "Wrong alignment on BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner");
static_assert(sizeof(BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner) == 0x000010, "Wrong size on BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner");
static_assert(offsetof(BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner, ShouldUpdate_0) == 0x000000, "Member 'BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner::ShouldUpdate_0' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner, Owner_0) == 0x000008, "Member 'BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner::Owner_0' has a wrong offset!");

struct BP_ProjectileTrajectory_C_SetTrajectorySpline final
{
public:
	TArray<struct FVector>                        SplinePoints;
	TArray<struct FVector>                        SplineTangents;
};
static_assert(alignof(BP_ProjectileTrajectory_C_SetTrajectorySpline) == 0x000008, "Wrong alignment on BP_ProjectileTrajectory_C_SetTrajectorySpline");
static_assert(sizeof(BP_ProjectileTrajectory_C_SetTrajectorySpline) == 0x000020, "Wrong size on BP_ProjectileTrajectory_C_SetTrajectorySpline");
static_assert(offsetof(BP_ProjectileTrajectory_C_SetTrajectorySpline, SplinePoints) == 0x000000, "Member 'BP_ProjectileTrajectory_C_SetTrajectorySpline::SplinePoints' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_SetTrajectorySpline, SplineTangents) == 0x000010, "Member 'BP_ProjectileTrajectory_C_SetTrajectorySpline::SplineTangents' has a wrong offset!");

struct BP_ProjectileTrajectory_C_SetTrajectoryValid final
{
public:
	bool                                          bIsTrajectoryValid_0;
};
static_assert(alignof(BP_ProjectileTrajectory_C_SetTrajectoryValid) == 0x000001, "Wrong alignment on BP_ProjectileTrajectory_C_SetTrajectoryValid");
static_assert(sizeof(BP_ProjectileTrajectory_C_SetTrajectoryValid) == 0x000001, "Wrong size on BP_ProjectileTrajectory_C_SetTrajectoryValid");
static_assert(offsetof(BP_ProjectileTrajectory_C_SetTrajectoryValid, bIsTrajectoryValid_0) == 0x000000, "Member 'BP_ProjectileTrajectory_C_SetTrajectoryValid::bIsTrajectoryValid_0' has a wrong offset!");

struct BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner final
{
public:
	TScriptInterface<class IFortTrajectoryAbilityInterface> K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner) == 0x000008, "Wrong alignment on BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner");
static_assert(sizeof(BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner) == 0x000018, "Wrong size on BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner");
static_assert(offsetof(BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner, K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface) == 0x000000, "Member 'BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner::K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct BP_ProjectileTrajectory_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
};
static_assert(alignof(BP_ProjectileTrajectory_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_ProjectileTrajectory_C_UserConstructionScript");
static_assert(sizeof(BP_ProjectileTrajectory_C_UserConstructionScript) == 0x000010, "Wrong size on BP_ProjectileTrajectory_C_UserConstructionScript");
static_assert(offsetof(BP_ProjectileTrajectory_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_ProjectileTrajectory_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileTrajectory_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000008, "Member 'BP_ProjectileTrajectory_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}
