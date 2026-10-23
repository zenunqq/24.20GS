#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class AActor*>                         Temp_object_Variable;
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_2D[0x3];
	class AActor*                                 K2Node_Event_MyTarget;
	EGameplayCueEvent                             K2Node_Event_EventType;
	uint8                                         Pad_39[0x7];
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_112[0x6];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue_1;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_253[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_25C[0x4];
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
	uint8                                         Pad_2EC[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	uint8                                         Pad_444[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_453[0x1];
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering) == 0x000458, "Wrong size on GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, EntryPoint) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, Temp_object_Variable) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, K2Node_MakeArray_Array) == 0x000018, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_2) == 0x00002A, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, Temp_bool_Has_Been_Initd_Variable) == 0x00002B, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_3) == 0x00002C, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, K2Node_Event_MyTarget) == 0x000030, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, K2Node_Event_EventType) == 0x000038, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, K2Node_Event_Parameters) == 0x000040, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000110, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_4) == 0x000111, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000118, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_GetSkeletalMeshForPartType_ReturnValue_1) == 0x000120, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_GetSkeletalMeshForPartType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_GetSocketLocation_ReturnValue) == 0x000128, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000140, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_Add_VectorVector_ReturnValue) == 0x000158, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000170, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000250, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_bBlockingHit) == 0x000251, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_bInitialOverlap) == 0x000252, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_Time) == 0x000254, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_Distance) == 0x000258, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_Location) == 0x000260, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_ImpactPoint) == 0x000278, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_Normal) == 0x000290, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_ImpactNormal) == 0x0002A8, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_PhysMat) == 0x0002C0, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_HitActor) == 0x0002C8, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_HitComponent) == 0x0002D0, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_HitBoneName) == 0x0002D8, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_BoneName) == 0x0002DC, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_HitItem) == 0x0002E0, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_ElementIndex) == 0x0002E4, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_FaceIndex) == 0x0002E8, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_TraceStart) == 0x0002F0, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_BreakHitResult_TraceEnd) == 0x000308, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000320, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_VSize_ReturnValue) == 0x000338, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000340, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000358, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000360, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000440, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_5) == 0x000441, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_6) == 0x000442, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsPlaying_ReturnValue) == 0x000443, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000448, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, Temp_bool_IsClosed_Variable) == 0x000450, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_7) == 0x000451, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_IsValid_ReturnValue_8) == 0x000452, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000454, "Member 'GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_9[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue) == 0x0000E0, "Wrong size on GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnActive_ReturnValue;
	uint8                                         Pad_DA[0x6];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_E9[0x7];
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;
	class UFXSystemComponent*                     CallFunc_SpawnFXSystemAttached_ReturnValue;
	TSoftObjectPtr<class USkeletalMesh>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	bool                                          CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12A[0x6];
	struct FVector                                Temp_struct_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_149[0x7];
	struct FVector                                K2Node_Select_Default;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_C_OnActive) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_C_OnActive");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_C_OnActive) == 0x000168, "Wrong size on GCL_BoostJumpPack_Hovering_C_OnActive");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, MyTarget) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, Parameters) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000E0, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_DoesSocketExist_ReturnValue) == 0x0000E8, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x0000F0, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_SpawnFXSystemAttached_ReturnValue) == 0x0000F8, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_SpawnFXSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000100, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_EqualEqual_SoftObjectReference_ReturnValue) == 0x000128, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_EqualEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x000129, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, Temp_struct_Variable) == 0x000130, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, Temp_bool_Variable) == 0x000148, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnActive, K2Node_Select_Default) == 0x000150, "Member 'GCL_BoostJumpPack_Hovering_C_OnActive::K2Node_Select_Default' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_OnRemove_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_C_OnRemove) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_C_OnRemove");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_C_OnRemove) == 0x0000E0, "Wrong size on GCL_BoostJumpPack_Hovering_C_OnRemove");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, MyTarget) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, Parameters) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000DA, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x0000DB, "Member 'GCL_BoostJumpPack_Hovering_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_2A[0x6];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_3;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled) == 0x000080, "Wrong size on GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, Enabled) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000018, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000020, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_IsLocallyControlled_ReturnValue) == 0x000029, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue) == 0x000030, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x000038, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000040, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000048, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000050, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000058, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x000060, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_3) == 0x000068, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast) == 0x000070, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1) == 0x000074, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2) == 0x000078, "Member 'GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2' has a wrong offset!");

}
