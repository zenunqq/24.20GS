#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct AthenaFunctionLibrary_C_AllOnSameTeam final
{
public:
	const class AActor*                           Actor;
	TArray<class AActor*>                         ActorArray;
	class UObject*                                __WorldContext;
	bool                                          Result;
	bool                                          _Result;
	uint8                                         Pad_22[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	class AActor*                                 CallFunc_Array_Get_Item;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3A[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_AllOnSameTeam) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_AllOnSameTeam");
static_assert(sizeof(AthenaFunctionLibrary_C_AllOnSameTeam) == 0x000040, "Wrong size on AthenaFunctionLibrary_C_AllOnSameTeam");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, Actor) == 0x000000, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::Actor' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, ActorArray) == 0x000008, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::ActorArray' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, __WorldContext) == 0x000018, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, Result) == 0x000020, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::Result' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, _Result) == 0x000021, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::_Result' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, Temp_int_Array_Index_Variable) == 0x000028, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, CallFunc_Array_Get_Item) == 0x000030, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, CallFunc_OnSameTeam_ReturnValue) == 0x000038, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_AllOnSameTeam, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'AthenaFunctionLibrary_C_AllOnSameTeam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion final
{
public:
	struct FVector                                ExplosionSourcePoint;
	double                                        ExplosionRadius;
	double                                        Intensity;
	double                                        MinKnockbackAngle;
	bool                                          Reverse;
	uint8                                         Pad_31[0x7];
	class AActor*                                 SpecificActor;
	class UObject*                                __WorldContext;
	bool                                          _Reverse;
	uint8                                         Pad_49[0x7];
	struct FVector                                VecToCurrentActor;
	double                                        _MinKnockbackAngle;
	double                                        _Intensity;
	class AActor*                                 _CurrentActorBeingLaunched;
	double                                        _Radius;
	struct FVector                                _SourcePoint;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_A5[0x3];
	TArray<class AActor*>                         Temp_object_Variable;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_DC[0x4];
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_FC[0x4];
	double                                        CallFunc_VSize_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_109[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	struct FVector                                CallFunc_ProjectVectorOnToPlane_ReturnValue;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;
	double                                        CallFunc_DegAcos_ReturnValue;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_1E1[0x7];
	double                                        CallFunc_Dot_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_NegateVector_ReturnValue;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue_1;
	double                                        CallFunc_Dot_VectorVector_ReturnValue_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_229[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;
	struct FVector                                CallFunc_SelectVector_ReturnValue_2;
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	struct FVector                                CallFunc_SelectVector_ReturnValue_3;
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;
	uint8                                         Pad_2B1[0x7];
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	class AActor*                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2DD[0x3];
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1;
	float                                         CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;
};
static_assert(alignof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion");
static_assert(sizeof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion) == 0x0002F0, "Wrong size on AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, ExplosionSourcePoint) == 0x000000, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::ExplosionSourcePoint' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, ExplosionRadius) == 0x000018, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, Intensity) == 0x000020, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::Intensity' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, MinKnockbackAngle) == 0x000028, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::MinKnockbackAngle' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, Reverse) == 0x000030, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::Reverse' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, SpecificActor) == 0x000038, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::SpecificActor' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, __WorldContext) == 0x000040, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _Reverse) == 0x000048, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_Reverse' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, VecToCurrentActor) == 0x000050, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::VecToCurrentActor' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _MinKnockbackAngle) == 0x000068, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_MinKnockbackAngle' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _Intensity) == 0x000070, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_Intensity' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _CurrentActorBeingLaunched) == 0x000078, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_CurrentActorBeingLaunched' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _Radius) == 0x000080, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_Radius' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, _SourcePoint) == 0x000088, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::_SourcePoint' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_IsValid_ReturnValue) == 0x0000A4, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, Temp_object_Variable) == 0x0000A8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_VSize_ReturnValue) == 0x0000B8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Normal_ReturnValue) == 0x0000C0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SelectVector_ReturnValue) == 0x0000E0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_VSize_ReturnValue_1) == 0x000100, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000108, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, K2Node_DynamicCast_AsFort_Pawn) == 0x000110, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000120, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue) == 0x000128, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000130, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000138, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_GetActorUpVector_ReturnValue) == 0x000140, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_GetActorBounds_Origin) == 0x000158, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_GetActorBounds_BoxExtent) == 0x000170, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_ProjectVectorOnToPlane_ReturnValue) == 0x000188, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_ProjectVectorOnToPlane_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Dot_VectorVector_ReturnValue) == 0x0001A0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Cross_VectorVector_ReturnValue) == 0x0001A8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_DegAcos_ReturnValue) == 0x0001C0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_RotateAngleAxis_ReturnValue) == 0x0001C8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x0001E8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_NegateVector_ReturnValue) == 0x0001F0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_NegateVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_RotateAngleAxis_ReturnValue_1) == 0x000208, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_RotateAngleAxis_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Dot_VectorVector_ReturnValue_2) == 0x000220, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Dot_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000228, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000230, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SelectVector_ReturnValue_1) == 0x000248, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SelectVector_ReturnValue_2) == 0x000260, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SelectVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, K2Node_MakeArray_Array) == 0x000278, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SelectVector_ReturnValue_3) == 0x000288, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SelectVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SphereOverlapActors_OutActors) == 0x0002A0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SphereOverlapActors_ReturnValue) == 0x0002B0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002B8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Array_Get_Item) == 0x0002D0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Array_Length_ReturnValue) == 0x0002D8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_Less_IntInt_ReturnValue) == 0x0002DC, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x0002E0, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1) == 0x0002E4, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion, CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast) == 0x0002E8, "Member 'AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion::CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast' has a wrong offset!");

struct AthenaFunctionLibrary_C_GetActorMeshExtents final
{
public:
	class AActor*                                 Actor;
	class UObject*                                __WorldContext;
	struct FVector                                BoundingBoxExtents;
	struct FVector                                CurrentMin;
	struct FVector                                CurrentMax;
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_A1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsVisible_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_B3[0x5];
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_F4[0x4];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_111[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;
	uint8                                         Pad_131[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_BreakVector_X_2;
	double                                        CallFunc_BreakVector_Y_2;
	double                                        CallFunc_BreakVector_Z_2;
	double                                        CallFunc_BreakVector_X_3;
	double                                        CallFunc_BreakVector_Y_3;
	double                                        CallFunc_BreakVector_Z_3;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_FMin_ReturnValue;
	double                                        CallFunc_FMin_ReturnValue_1;
	double                                        CallFunc_FMin_ReturnValue_2;
	double                                        CallFunc_FMax_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
};
static_assert(alignof(AthenaFunctionLibrary_C_GetActorMeshExtents) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_GetActorMeshExtents");
static_assert(sizeof(AthenaFunctionLibrary_C_GetActorMeshExtents) == 0x0001E0, "Wrong size on AthenaFunctionLibrary_C_GetActorMeshExtents");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, Actor) == 0x000000, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::Actor' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, __WorldContext) == 0x000008, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, BoundingBoxExtents) == 0x000010, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::BoundingBoxExtents' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CurrentMin) == 0x000028, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CurrentMin' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CurrentMax) == 0x000040, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CurrentMax' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_GetActorBounds_Origin) == 0x000058, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_GetActorBounds_BoxExtent) == 0x000070, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000088, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Array_Length_ReturnValue_1) == 0x00009C, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A0, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, Temp_int_Array_Index_Variable) == 0x0000A4, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_IsVisible_ReturnValue) == 0x0000B0, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Not_PreBool_ReturnValue) == 0x0000B1, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_GetBoundingBox_ReturnValue) == 0x0000B8, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_X) == 0x0000F8, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Y) == 0x000100, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Z) == 0x000108, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Add_IntInt_ReturnValue) == 0x000114, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_X_1) == 0x000118, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Y_1) == 0x000120, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Z_1) == 0x000128, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000130, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000138, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_X_2) == 0x000150, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Y_2) == 0x000158, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Z_2) == 0x000160, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_X_3) == 0x000168, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Y_3) == 0x000170, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_BreakVector_Z_3) == 0x000178, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMax_ReturnValue) == 0x000180, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMin_ReturnValue) == 0x000188, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMin_ReturnValue_1) == 0x000190, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMin_ReturnValue_2) == 0x000198, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMin_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMax_ReturnValue_1) == 0x0001A0, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_MakeVector_ReturnValue) == 0x0001A8, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_FMax_ReturnValue_2) == 0x0001C0, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetActorMeshExtents, CallFunc_MakeVector_ReturnValue_1) == 0x0001C8, "Member 'AthenaFunctionLibrary_C_GetActorMeshExtents::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");

struct AthenaFunctionLibrary_C_GetPlayerGroundedZ final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
	class UObject*                                __WorldContext;
	double                                        Ground_Z;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(AthenaFunctionLibrary_C_GetPlayerGroundedZ) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_GetPlayerGroundedZ");
static_assert(sizeof(AthenaFunctionLibrary_C_GetPlayerGroundedZ) == 0x000058, "Wrong size on AthenaFunctionLibrary_C_GetPlayerGroundedZ");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, PlayerPawn) == 0x000000, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, __WorldContext) == 0x000008, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, Ground_Z) == 0x000010, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::Ground_Z' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_BreakVector_X) == 0x000030, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_BreakVector_Y) == 0x000038, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_BreakVector_Z) == 0x000040, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000048, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_GetPlayerGroundedZ, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000050, "Member 'AthenaFunctionLibrary_C_GetPlayerGroundedZ::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct AthenaFunctionLibrary_C_MakeSimpleFortEffectContext final
{
public:
	class AActor*                                 Instigator;
	class AActor*                                 Damage_Source;
	class UObject*                                __WorldContext;
	struct FGameplayEffectContextHandle           ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	struct FGameplayEffectContextHandle           CallFunc_MakeFortEffectContext_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_MakeSimpleFortEffectContext");
static_assert(sizeof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext) == 0x000060, "Wrong size on AthenaFunctionLibrary_C_MakeSimpleFortEffectContext");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, Instigator) == 0x000000, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::Instigator' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, Damage_Source) == 0x000008, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::Damage_Source' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, __WorldContext) == 0x000010, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, ReturnValue) == 0x000018, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000030, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, K2Node_DynamicCast_AsFort_Ability_System_Component) == 0x000038, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::K2Node_DynamicCast_AsFort_Ability_System_Component' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_MakeSimpleFortEffectContext, CallFunc_MakeFortEffectContext_ReturnValue) == 0x000048, "Member 'AthenaFunctionLibrary_C_MakeSimpleFortEffectContext::CallFunc_MakeFortEffectContext_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_RowToBool final
{
public:
	struct FScalableFloat                         Input;
	double                                        Level;
	class UObject*                                __WorldContext;
	bool                                          ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3A[0x2];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_FFloor_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	bool                                          K2Node_Select_Default;
	uint8                                         Pad_4B[0x1];
	float                                         CallFunc_GetValueAtLevel_Level_ImplicitCast;
	double                                        CallFunc_FFloor_A_ImplicitCast;
};
static_assert(alignof(AthenaFunctionLibrary_C_RowToBool) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_RowToBool");
static_assert(sizeof(AthenaFunctionLibrary_C_RowToBool) == 0x000058, "Wrong size on AthenaFunctionLibrary_C_RowToBool");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, Input) == 0x000000, "Member 'AthenaFunctionLibrary_C_RowToBool::Input' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, Level) == 0x000028, "Member 'AthenaFunctionLibrary_C_RowToBool::Level' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, __WorldContext) == 0x000030, "Member 'AthenaFunctionLibrary_C_RowToBool::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, ReturnValue) == 0x000038, "Member 'AthenaFunctionLibrary_C_RowToBool::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, Temp_bool_Variable) == 0x000039, "Member 'AthenaFunctionLibrary_C_RowToBool::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_GetValueAtLevel_ReturnValue) == 0x00003C, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, Temp_bool_Variable_1) == 0x000040, "Member 'AthenaFunctionLibrary_C_RowToBool::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_FFloor_ReturnValue) == 0x000044, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_Conv_IntToBool_ReturnValue) == 0x000049, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, K2Node_Select_Default) == 0x00004A, "Member 'AthenaFunctionLibrary_C_RowToBool::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_GetValueAtLevel_Level_ImplicitCast) == 0x00004C, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_GetValueAtLevel_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_RowToBool, CallFunc_FFloor_A_ImplicitCast) == 0x000050, "Member 'AthenaFunctionLibrary_C_RowToBool::CallFunc_FFloor_A_ImplicitCast' has a wrong offset!");

struct AthenaFunctionLibrary_C_SetPOITextWithContextTag final
{
public:
	struct FGameplayTag                           POI_Tag;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  Context_Tags;
	class UObject*                                __WorldContext;
	int32                                         CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_36[0x2];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	class UGSC_MiniMapDataOverride_C*             CallFunc_GetComponentByClass_ReturnValue;
	int32                                         CallFunc_GetNumGameplayTagsInContainer_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_SetPOITextWithContextTag) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_SetPOITextWithContextTag");
static_assert(sizeof(AthenaFunctionLibrary_C_SetPOITextWithContextTag) == 0x000070, "Wrong size on AthenaFunctionLibrary_C_SetPOITextWithContextTag");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, POI_Tag) == 0x000000, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::POI_Tag' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, Context_Tags) == 0x000008, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::Context_Tags' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, __WorldContext) == 0x000028, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GetNumGameplayTagsInContainer_ReturnValue) == 0x000030, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GetNumGameplayTagsInContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_IsServer_ReturnValue) == 0x000034, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000035, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GetGameStateAthena_ReturnValue) == 0x000038, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000040, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GetNumGameplayTagsInContainer_ReturnValue_1) == 0x000068, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GetNumGameplayTagsInContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00006C, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_IsValid_ReturnValue) == 0x00006D, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SetPOITextWithContextTag, CallFunc_BooleanAND_ReturnValue) == 0x00006E, "Member 'AthenaFunctionLibrary_C_SetPOITextWithContextTag::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_ShouldAllowDeathEffects final
{
public:
	struct FGameplayTagContainer                  Damage_Or_Death_Tags;
	class UObject*                                __WorldContext;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
	struct FGameplayTagQuery                      AllowDeathEffectsTagQuery;
	bool                                          CallFunc_DoesContainerMatchTagQuery_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_ShouldAllowDeathEffects");
static_assert(sizeof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects) == 0x000080, "Wrong size on AthenaFunctionLibrary_C_ShouldAllowDeathEffects");
static_assert(offsetof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects, Damage_Or_Death_Tags) == 0x000000, "Member 'AthenaFunctionLibrary_C_ShouldAllowDeathEffects::Damage_Or_Death_Tags' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects, __WorldContext) == 0x000020, "Member 'AthenaFunctionLibrary_C_ShouldAllowDeathEffects::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects, ReturnValue) == 0x000028, "Member 'AthenaFunctionLibrary_C_ShouldAllowDeathEffects::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects, AllowDeathEffectsTagQuery) == 0x000030, "Member 'AthenaFunctionLibrary_C_ShouldAllowDeathEffects::AllowDeathEffectsTagQuery' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_ShouldAllowDeathEffects, CallFunc_DoesContainerMatchTagQuery_ReturnValue) == 0x000078, "Member 'AthenaFunctionLibrary_C_ShouldAllowDeathEffects::CallFunc_DoesContainerMatchTagQuery_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_SpawnLootFromArray final
{
public:
	TArray<struct FFortItemEntry>                 Array;
	struct FVector                                Position;
	struct FVector                                Direction;
	int32                                         OverrideMaxStackCount;
	bool                                          bToss;
	bool                                          bRandomRotation;
	bool                                          bBlockedFromAutoPickup;
	uint8                                         Pad_47[0x1];
	int32                                         PickupInstigatorHandle;
	EFortPickupSourceTypeFlag                     SourceType;
	EFortPickupSpawnSource                        Source;
	uint8                                         Pad_4E[0x2];
	class AFortPlayerController*                  OptionalOwnerPC;
	bool                                          bPickupOnlyRelevantToOwner;
	uint8                                         Pad_59[0x7];
	class UObject*                                __WorldContext;
	TArray<class AFortPickup*>                    ItemPickupsSpawned;
	TArray<class AFortPickup*>                    PickupsSpawned;
	class FName                                   LootTierData;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_95[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	struct FFortItemEntry                         CallFunc_Array_Get_Item;
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_249[0x7];
	class AFortPickup*                            CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_SpawnLootFromArray) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_SpawnLootFromArray");
static_assert(sizeof(AthenaFunctionLibrary_C_SpawnLootFromArray) == 0x000260, "Wrong size on AthenaFunctionLibrary_C_SpawnLootFromArray");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Array) == 0x000000, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Array' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Position) == 0x000010, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Position' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Direction) == 0x000028, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Direction' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, OverrideMaxStackCount) == 0x000040, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::OverrideMaxStackCount' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, bToss) == 0x000044, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::bToss' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, bRandomRotation) == 0x000045, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::bRandomRotation' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, bBlockedFromAutoPickup) == 0x000046, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::bBlockedFromAutoPickup' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, PickupInstigatorHandle) == 0x000048, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::PickupInstigatorHandle' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, SourceType) == 0x00004C, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::SourceType' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Source) == 0x00004D, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Source' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, OptionalOwnerPC) == 0x000050, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::OptionalOwnerPC' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, bPickupOnlyRelevantToOwner) == 0x000058, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::bPickupOnlyRelevantToOwner' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, __WorldContext) == 0x000060, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, ItemPickupsSpawned) == 0x000068, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::ItemPickupsSpawned' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, PickupsSpawned) == 0x000078, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::PickupsSpawned' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, LootTierData) == 0x000088, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::LootTierData' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Temp_int_Loop_Counter_Variable) == 0x000090, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, Temp_int_Array_Index_Variable) == 0x00009C, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, K2Node_DynamicCast_AsFort_World_Item_Definition) == 0x000240, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::K2Node_DynamicCast_AsFort_World_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_K2_SpawnPickupInWorld_ReturnValue) == 0x000250, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_K2_SpawnPickupInWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromArray, CallFunc_Array_AddUnique_ReturnValue) == 0x000258, "Member 'AthenaFunctionLibrary_C_SpawnLootFromArray::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_SpawnLootFromTable final
{
public:
	class FName                                   TierGroupName;
	int32                                         WorldLevel;
	int32                                         ForcedLootTier;
	uint8                                         Pad_C[0x4];
	struct FVector                                Position;
	struct FVector                                Direction;
	int32                                         OverrideMaxStackCount;
	bool                                          bToss;
	bool                                          bRandomRotation;
	bool                                          bBlockedFromAutoPickup;
	uint8                                         Pad_47[0x1];
	int32                                         PickupInstigatorHandle;
	EFortPickupSourceTypeFlag                     SourceType;
	EFortPickupSpawnSource                        Source;
	uint8                                         Pad_4E[0x2];
	class AFortPlayerController*                  OptionalOwnerPC;
	bool                                          bPickupOnlyRelevantToOwner;
	uint8                                         Pad_59[0x7];
	class UObject*                                __WorldContext;
	TArray<class AFortPickup*>                    ItemPickupsSpawned;
	TArray<class AFortPickup*>                    PickupsSpawned;
	class FName                                   LootTierData;
	uint8                                         Pad_8C[0x4];
	TArray<struct FFortItemEntry>                 CallFunc_PickLootDrops_OutLootToDrop;
	bool                                          CallFunc_PickLootDrops_ReturnValue;
	uint8                                         Pad_A1[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_AD[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	struct FFortItemEntry                         CallFunc_Array_Get_Item;
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_261[0x7];
	class AFortPickup*                            CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_SpawnLootFromTable) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_SpawnLootFromTable");
static_assert(sizeof(AthenaFunctionLibrary_C_SpawnLootFromTable) == 0x000278, "Wrong size on AthenaFunctionLibrary_C_SpawnLootFromTable");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, TierGroupName) == 0x000000, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::TierGroupName' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, WorldLevel) == 0x000004, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::WorldLevel' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, ForcedLootTier) == 0x000008, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::ForcedLootTier' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, Position) == 0x000010, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::Position' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, Direction) == 0x000028, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::Direction' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, OverrideMaxStackCount) == 0x000040, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::OverrideMaxStackCount' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, bToss) == 0x000044, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::bToss' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, bRandomRotation) == 0x000045, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::bRandomRotation' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, bBlockedFromAutoPickup) == 0x000046, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::bBlockedFromAutoPickup' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, PickupInstigatorHandle) == 0x000048, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::PickupInstigatorHandle' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, SourceType) == 0x00004C, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::SourceType' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, Source) == 0x00004D, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::Source' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, OptionalOwnerPC) == 0x000050, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::OptionalOwnerPC' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, bPickupOnlyRelevantToOwner) == 0x000058, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::bPickupOnlyRelevantToOwner' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, __WorldContext) == 0x000060, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, ItemPickupsSpawned) == 0x000068, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::ItemPickupsSpawned' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, PickupsSpawned) == 0x000078, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::PickupsSpawned' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, LootTierData) == 0x000088, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::LootTierData' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_PickLootDrops_OutLootToDrop) == 0x000090, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_PickLootDrops_OutLootToDrop' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_PickLootDrops_ReturnValue) == 0x0000A0, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_PickLootDrops_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, Temp_int_Array_Index_Variable) == 0x0000B4, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, K2Node_DynamicCast_AsFort_World_Item_Definition) == 0x000258, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::K2Node_DynamicCast_AsFort_World_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_K2_SpawnPickupInWorld_ReturnValue) == 0x000268, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_K2_SpawnPickupInWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_SpawnLootFromTable, CallFunc_Array_AddUnique_ReturnValue) == 0x000270, "Member 'AthenaFunctionLibrary_C_SpawnLootFromTable::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct AthenaFunctionLibrary_C_UnclampedLerp final
{
public:
	double                                        A;
	double                                        B;
	double                                        Alpha;
	class UObject*                                __WorldContext;
	double                                        Return_Value;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
};
static_assert(alignof(AthenaFunctionLibrary_C_UnclampedLerp) == 0x000008, "Wrong alignment on AthenaFunctionLibrary_C_UnclampedLerp");
static_assert(sizeof(AthenaFunctionLibrary_C_UnclampedLerp) == 0x000040, "Wrong size on AthenaFunctionLibrary_C_UnclampedLerp");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, A) == 0x000000, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::A' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, B) == 0x000008, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::B' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, Alpha) == 0x000010, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::Alpha' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, __WorldContext) == 0x000018, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, Return_Value) == 0x000020, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::Return_Value' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFunctionLibrary_C_UnclampedLerp, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'AthenaFunctionLibrary_C_UnclampedLerp::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

}
