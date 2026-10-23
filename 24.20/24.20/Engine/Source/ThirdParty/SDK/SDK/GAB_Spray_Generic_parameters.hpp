#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;
	class UAthenaSprayItemDefinition*             K2Node_DynamicCast_AsAthena_Spray_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_GetRightVector_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_TargetLineTrace_HitSomething;
	uint8                                         Pad_71[0x7];
	struct FVector                                CallFunc_TargetLineTrace_Location;
	struct FVector                                CallFunc_TargetLineTrace_Normal;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_B1[0x7];
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;
	bool                                          CallFunc_CanPlaceInstanceOfClass_ReturnValue;
	uint8                                         Pad_D1[0x7];
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;
	bool                                          CallFunc_HasPermissionToEditWorld_ReturnValue;
	uint8                                         Pad_F1[0xF];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_161[0x7];
	class ABuildingActor*                         CallFunc_K2_SpawnBuildingActor_ReturnValue;
	class ABP_SprayDecal_C*                       K2Node_DynamicCast_AsBP_Spray_Decal;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic) == 0x000010, "Wrong alignment on GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic");
static_assert(sizeof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic) == 0x000180, "Wrong size on GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, EntryPoint) == 0x000000, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x000008, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_AsAthena_Spray_Item_Definition) == 0x000010, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_AsAthena_Spray_Item_Definition' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_IsServer_ReturnValue) == 0x000019, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_GetActivatingPawn_ReturnValue) == 0x000020, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x000028, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_GetRightVector_ReturnValue) == 0x000038, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_TargetLineTrace_HitSomething) == 0x000070, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_TargetLineTrace_HitSomething' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_TargetLineTrace_Location) == 0x000078, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_TargetLineTrace_Location' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_TargetLineTrace_Normal) == 0x000090, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_TargetLineTrace_Normal' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0000A8, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_Cross_VectorVector_ReturnValue) == 0x0000B8, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_CanPlaceInstanceOfClass_ReturnValue) == 0x0000D0, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_CanPlaceInstanceOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x0000D8, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_HasPermissionToEditWorld_ReturnValue) == 0x0000F0, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_HasPermissionToEditWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_BooleanAND_ReturnValue) == 0x000160, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, CallFunc_K2_SpawnBuildingActor_ReturnValue) == 0x000168, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::CallFunc_K2_SpawnBuildingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_AsBP_Spray_Decal) == 0x000170, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_AsBP_Spray_Decal' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct GAB_Spray_Generic_C_GetMontageToPlay final
{
public:
	class UFortMontageItemDefinitionBase*         EmoteAsset;
	EFortCustomBodyType                           BodyType;
	EFortCustomGender                             Gender;
	uint8                                         Pad_A[0x6];
	TSoftObjectPtr<class UAnimMontage>            ReturnValue;
	EFortCustomGender                             Temp_byte_Variable;
	uint8                                         Pad_39[0x7];
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetMontageToPlay_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	uint8                                         Pad_69[0x7];
	TSoftObjectPtr<class UAnimMontage>            K2Node_Select_Default;
};
static_assert(alignof(GAB_Spray_Generic_C_GetMontageToPlay) == 0x000008, "Wrong alignment on GAB_Spray_Generic_C_GetMontageToPlay");
static_assert(sizeof(GAB_Spray_Generic_C_GetMontageToPlay) == 0x000098, "Wrong size on GAB_Spray_Generic_C_GetMontageToPlay");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, EmoteAsset) == 0x000000, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::EmoteAsset' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, BodyType) == 0x000008, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, Gender) == 0x000009, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::Gender' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, ReturnValue) == 0x000010, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, Temp_byte_Variable) == 0x000038, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, CallFunc_GetMontageToPlay_ReturnValue) == 0x000040, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::CallFunc_GetMontageToPlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, CallFunc_IsAssetNull_ReturnValue) == 0x000068, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_GetMontageToPlay, K2Node_Select_Default) == 0x000070, "Member 'GAB_Spray_Generic_C_GetMontageToPlay::K2Node_Select_Default' has a wrong offset!");

struct GAB_Spray_Generic_C_TargetLineTrace final
{
public:
	class AFortPawn*                              ActivatingPawn;
	bool                                          HitSomething;
	uint8                                         Pad_9[0x7];
	struct FVector                                Location;
	struct FVector                                Normal;
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;
	TArray<class AActor*>                         K2Node_MakeArray_Array;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_A9[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;
	bool                                          CallFunc_LineTraceSingle_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_1FB[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_204[0x4];
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
	uint8                                         Pad_294[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_2D1[0x7];
	class ABuildingGameplayActor*                 K2Node_DynamicCast_AsBuilding_Gameplay_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2E2[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_AcceptsEmoteSprays_ReturnValue;
	uint8                                         Pad_2FB[0x5];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_314[0x4];
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(GAB_Spray_Generic_C_TargetLineTrace) == 0x000008, "Wrong alignment on GAB_Spray_Generic_C_TargetLineTrace");
static_assert(sizeof(GAB_Spray_Generic_C_TargetLineTrace) == 0x000320, "Wrong size on GAB_Spray_Generic_C_TargetLineTrace");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, ActivatingPawn) == 0x000000, "Member 'GAB_Spray_Generic_C_TargetLineTrace::ActivatingPawn' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, HitSomething) == 0x000008, "Member 'GAB_Spray_Generic_C_TargetLineTrace::HitSomething' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, Location) == 0x000010, "Member 'GAB_Spray_Generic_C_TargetLineTrace::Location' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, Normal) == 0x000028, "Member 'GAB_Spray_Generic_C_TargetLineTrace::Normal' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_GetBaseAimRotation_ReturnValue) == 0x000040, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_MakeArray_Array) == 0x000058, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000080, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000088, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_AsCapsule_Collision) == 0x0000A0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakVector_X) == 0x0000C8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakVector_Y) == 0x0000D0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakVector_Z) == 0x0000D8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_MakeVector_ReturnValue) == 0x0000E8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Add_VectorVector_ReturnValue) == 0x000100, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_LineTraceSingle_OutHit) == 0x000118, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_LineTraceSingle_ReturnValue) == 0x0001F8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_bBlockingHit) == 0x0001F9, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001FA, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_Time) == 0x0001FC, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_Distance) == 0x000200, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_Location) == 0x000208, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_ImpactPoint) == 0x000220, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_Normal) == 0x000238, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_ImpactNormal) == 0x000250, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_PhysMat) == 0x000268, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_HitActor) == 0x000270, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_HitComponent) == 0x000278, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_HitBoneName) == 0x000280, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_BoneName) == 0x000284, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_HitItem) == 0x000288, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_ElementIndex) == 0x00028C, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_FaceIndex) == 0x000290, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_TraceStart) == 0x000298, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BreakHitResult_TraceEnd) == 0x0002B0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_AsBuilding_Actor) == 0x0002C8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_bSuccess_1) == 0x0002D0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_AsBuilding_Gameplay_Actor) == 0x0002D8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_AsBuilding_Gameplay_Actor' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, K2Node_DynamicCast_bSuccess_2) == 0x0002E0, "Member 'GAB_Spray_Generic_C_TargetLineTrace::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_IsValid_ReturnValue) == 0x0002E1, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0002E8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0002F8, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Not_PreBool_ReturnValue) == 0x0002F9, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_AcceptsEmoteSprays_ReturnValue) == 0x0002FA, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_AcceptsEmoteSprays_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x000300, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000310, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BooleanAND_ReturnValue) == 0x000311, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Not_PreBool_ReturnValue_1) == 0x000312, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_BooleanAND_ReturnValue_1) == 0x000313, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Spray_Generic_C_TargetLineTrace, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000318, "Member 'GAB_Spray_Generic_C_TargetLineTrace::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}
