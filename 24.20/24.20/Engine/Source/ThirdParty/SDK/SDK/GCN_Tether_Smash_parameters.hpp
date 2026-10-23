#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCN_Tether_Smash_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	TArray<class AActor*>                         Temp_object_Variable;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_124[0x4];
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_209[0x7];
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_473[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_47C[0x4];
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
	uint8                                         Pad_50C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;
};
static_assert(alignof(GCN_Tether_Smash_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Tether_Smash_C_OnBurst");
static_assert(sizeof(GCN_Tether_Smash_C_OnBurst) == 0x000670, "Wrong size on GCN_Tether_Smash_C_OnBurst");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Tether_Smash_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Tether_Smash_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Tether_Smash_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Tether_Smash_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Tether_Smash_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Tether_Smash_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, Temp_object_Variable) == 0x000108, "Member 'GCN_Tether_Smash_C_OnBurst::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Array_Get_Item) == 0x000118, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_K2_AddWorldOffset_SweepHitResult) == 0x000128, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_K2_AddWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Greater_IntInt_ReturnValue) == 0x000208, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000210, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_GetForwardVector_ReturnValue) == 0x0002F0, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000308, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000320, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, K2Node_MakeArray_Array) == 0x000338, "Member 'GCN_Tether_Smash_C_OnBurst::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Add_VectorVector_ReturnValue) == 0x000348, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000360, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000378, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000390, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000470, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_bBlockingHit) == 0x000471, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_bInitialOverlap) == 0x000472, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_Time) == 0x000474, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_Distance) == 0x000478, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_Location) == 0x000480, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_ImpactPoint) == 0x000498, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_Normal) == 0x0004B0, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_ImpactNormal) == 0x0004C8, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_PhysMat) == 0x0004E0, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_HitActor) == 0x0004E8, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_HitComponent) == 0x0004F0, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_HitBoneName) == 0x0004F8, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_BoneName) == 0x0004FC, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_HitItem) == 0x000500, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_ElementIndex) == 0x000504, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_FaceIndex) == 0x000508, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_TraceStart) == 0x000510, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_BreakHitResult_TraceEnd) == 0x000528, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000540, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000558, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x000570, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000588, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Tether_Smash_C_OnBurst, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000668, "Member 'GCN_Tether_Smash_C_OnBurst::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");

}
