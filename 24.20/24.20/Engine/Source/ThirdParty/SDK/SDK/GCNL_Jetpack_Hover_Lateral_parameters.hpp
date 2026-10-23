#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_1C[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	EGameplayCueEvent                             K2Node_Event_EventType;
	uint8                                         Pad_29[0x7];
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_103[0x5];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue_1;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_14C[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	TArray<class AActor*>                         Temp_object_Variable;
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_24B[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_254[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_2E4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	double                                        CallFunc_VSize_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
};
static_assert(alignof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral) == 0x000008, "Wrong alignment on GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral");
static_assert(sizeof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral) == 0x000440, "Wrong size on GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, EntryPoint) == 0x000000, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, K2Node_MakeArray_Array) == 0x000008, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_2) == 0x000019, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_3) == 0x00001A, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, Temp_bool_Has_Been_Initd_Variable) == 0x00001B, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, K2Node_Event_MyTarget) == 0x000020, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, K2Node_Event_EventType) == 0x000028, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, K2Node_Event_Parameters) == 0x000030, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_4) == 0x000100, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000101, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_5) == 0x000102, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000108, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_GetSkeletalMeshForPartType_ReturnValue_1) == 0x000110, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_GetSkeletalMeshForPartType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_GetSocketLocation_ReturnValue) == 0x000118, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_Add_VectorVector_ReturnValue) == 0x000130, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_6) == 0x000148, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsPlaying_ReturnValue) == 0x000149, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_IsValid_ReturnValue_7) == 0x00014A, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, Temp_bool_IsClosed_Variable) == 0x00014B, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000150, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, Temp_object_Variable) == 0x000158, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000168, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000248, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_bBlockingHit) == 0x000249, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_bInitialOverlap) == 0x00024A, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_Time) == 0x00024C, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_Distance) == 0x000250, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_Location) == 0x000258, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_ImpactPoint) == 0x000270, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_Normal) == 0x000288, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_ImpactNormal) == 0x0002A0, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_PhysMat) == 0x0002B8, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_HitActor) == 0x0002C0, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_HitComponent) == 0x0002C8, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_HitBoneName) == 0x0002D0, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_BoneName) == 0x0002D4, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_HitItem) == 0x0002D8, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_ElementIndex) == 0x0002DC, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_FaceIndex) == 0x0002E0, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_TraceStart) == 0x0002E8, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_BreakHitResult_TraceEnd) == 0x000300, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000318, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000330, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000348, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_VSize_ReturnValue) == 0x000428, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000430, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000438, "Member 'GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

struct GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_9[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue");
static_assert(sizeof(GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue) == 0x0000E0, "Wrong size on GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

struct GCNL_Jetpack_Hover_Lateral_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnActive_ReturnValue;
	uint8                                         Pad_DA[0x6];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_F1[0x7];
	TSoftObjectPtr<class USkeletalMesh>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	bool                                          CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	uint8                                         Pad_121[0x7];
	class UFXSystemComponent*                     CallFunc_SpawnFXSystemAttached_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_131[0x7];
	struct FVector                                Temp_struct_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_151[0x7];
	struct FVector                                K2Node_Select_Default;
};
static_assert(alignof(GCNL_Jetpack_Hover_Lateral_C_OnActive) == 0x000008, "Wrong alignment on GCNL_Jetpack_Hover_Lateral_C_OnActive");
static_assert(sizeof(GCNL_Jetpack_Hover_Lateral_C_OnActive) == 0x000170, "Wrong size on GCNL_Jetpack_Hover_Lateral_C_OnActive");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000E0, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x0000E8, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_DoesSocketExist_ReturnValue) == 0x0000F0, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0000F8, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_EqualEqual_SoftObjectReference_ReturnValue) == 0x000120, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_EqualEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_SpawnFXSystemAttached_ReturnValue) == 0x000128, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_SpawnFXSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, Temp_struct_Variable) == 0x000138, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, Temp_bool_Variable) == 0x000150, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnActive, K2Node_Select_Default) == 0x000158, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnActive::K2Node_Select_Default' has a wrong offset!");

struct GCNL_Jetpack_Hover_Lateral_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_OnRemove_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GCNL_Jetpack_Hover_Lateral_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Jetpack_Hover_Lateral_C_OnRemove");
static_assert(sizeof(GCNL_Jetpack_Hover_Lateral_C_OnRemove) == 0x0000E0, "Wrong size on GCNL_Jetpack_Hover_Lateral_C_OnRemove");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000DA, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x0000DB, "Member 'GCNL_Jetpack_Hover_Lateral_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled final
{
public:
	bool                                          Enabled;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2[0x6];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_21[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_41[0x7];
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_3;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2;
};
static_assert(alignof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled) == 0x000008, "Wrong alignment on GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled");
static_assert(sizeof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled) == 0x000080, "Wrong size on GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, Enabled) == 0x000000, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000010, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000018, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_IsLocallyControlled_ReturnValue) == 0x000020, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x000028, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000030, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue) == 0x000038, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000048, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000050, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000058, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x000060, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_3) == 0x000068, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast) == 0x000070, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1) == 0x000074, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2) == 0x000078, "Member 'GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2' has a wrong offset!");

}
