#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AbilityFunctions_C_ApplySlowFall final
{
public:
	double                                        SlowFallDuration;
	class UFortGameplayAbility*                   SelfGameplayAbilityReference;
	class UClass*                                 GameplayEffect;
	class UObject*                                __WorldContext;
	struct FActiveGameplayEffectHandle            EffectSpecHandle;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_71[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
};
static_assert(alignof(AbilityFunctions_C_ApplySlowFall) == 0x000008, "Wrong alignment on AbilityFunctions_C_ApplySlowFall");
static_assert(sizeof(AbilityFunctions_C_ApplySlowFall) == 0x000080, "Wrong size on AbilityFunctions_C_ApplySlowFall");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, SlowFallDuration) == 0x000000, "Member 'AbilityFunctions_C_ApplySlowFall::SlowFallDuration' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, SelfGameplayAbilityReference) == 0x000008, "Member 'AbilityFunctions_C_ApplySlowFall::SelfGameplayAbilityReference' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, GameplayEffect) == 0x000010, "Member 'AbilityFunctions_C_ApplySlowFall::GameplayEffect' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, __WorldContext) == 0x000018, "Member 'AbilityFunctions_C_ApplySlowFall::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, EffectSpecHandle) == 0x000020, "Member 'AbilityFunctions_C_ApplySlowFall::EffectSpecHandle' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000040, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000050, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000058, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, K2Node_DynamicCast_AsFort_Pawn) == 0x000068, "Member 'AbilityFunctions_C_ApplySlowFall::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AbilityFunctions_C_ApplySlowFall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000074, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ApplySlowFall, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x00007C, "Member 'AbilityFunctions_C_ApplySlowFall::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");

struct AbilityFunctions_C_ConvertRangeToTiles final
{
public:
	double                                        InRange;
	class UObject*                                __WorldContext;
	double                                        OutTile;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_ConvertRangeToTiles) == 0x000008, "Wrong alignment on AbilityFunctions_C_ConvertRangeToTiles");
static_assert(sizeof(AbilityFunctions_C_ConvertRangeToTiles) == 0x000020, "Wrong size on AbilityFunctions_C_ConvertRangeToTiles");
static_assert(offsetof(AbilityFunctions_C_ConvertRangeToTiles, InRange) == 0x000000, "Member 'AbilityFunctions_C_ConvertRangeToTiles::InRange' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ConvertRangeToTiles, __WorldContext) == 0x000008, "Member 'AbilityFunctions_C_ConvertRangeToTiles::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ConvertRangeToTiles, OutTile) == 0x000010, "Member 'AbilityFunctions_C_ConvertRangeToTiles::OutTile' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_ConvertRangeToTiles, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'AbilityFunctions_C_ConvertRangeToTiles::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	class UObject*                                __WorldContext;
	TArray<class AActor*>                         HitActors;
	TArray<class AActor*>                         LocalHitActors;
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_5C[0x4];
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_71[0x7];
	class AActor*                                 CallFunc_Array_Get_Item;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_81[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors) == 0x000008, "Wrong alignment on AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors");
static_assert(sizeof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors) == 0x000090, "Wrong size on AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, TargetData) == 0x000000, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::TargetData' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, __WorldContext) == 0x000028, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, HitActors) == 0x000030, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::HitActors' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, LocalHitActors) == 0x000040, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::LocalHitActors' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_GetDataCountFromTargetData_ReturnValue) == 0x000050, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_GetDataCountFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, Temp_int_Variable) == 0x000054, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_GetActorsFromTargetData_ReturnValue) == 0x000060, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_GetActorsFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_Array_Get_Item) == 0x000078, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000080, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_EvaluatePerkTierBalanceValue final
{
public:
	struct FScalableFloat                         T01_Balance_Value;
	struct FScalableFloat                         T02_Balance_Value;
	bool                                          Owns_T02;
	bool                                          Should_Override_T01;
	uint8                                         Pad_52[0x6];
	class UObject*                                __WorldContext;
	struct FScalableFloat                         Balance_Value;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_8B[0x1];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_94[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Default;
	struct FScalableFloat                         K2Node_MakeStruct_ScalableFloat;
	struct FScalableFloat                         K2Node_Select_Default_1;
	struct FScalableFloat                         K2Node_Select_Default_2;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         K2Node_MakeStruct_Value_ImplicitCast;
};
static_assert(alignof(AbilityFunctions_C_EvaluatePerkTierBalanceValue) == 0x000008, "Wrong alignment on AbilityFunctions_C_EvaluatePerkTierBalanceValue");
static_assert(sizeof(AbilityFunctions_C_EvaluatePerkTierBalanceValue) == 0x000140, "Wrong size on AbilityFunctions_C_EvaluatePerkTierBalanceValue");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, T01_Balance_Value) == 0x000000, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::T01_Balance_Value' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, T02_Balance_Value) == 0x000028, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::T02_Balance_Value' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Owns_T02) == 0x000050, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Owns_T02' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Should_Override_T01) == 0x000051, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Should_Override_T01' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, __WorldContext) == 0x000058, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Balance_Value) == 0x000060, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Balance_Value' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Temp_bool_Variable) == 0x000088, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Temp_bool_Variable_1) == 0x000089, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, Temp_bool_Variable_2) == 0x00008A, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, CallFunc_GetValueAtLevel_ReturnValue) == 0x00008C, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000090, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000098, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_Select_Default) == 0x0000A0, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_MakeStruct_ScalableFloat) == 0x0000A8, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_MakeStruct_ScalableFloat' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_Select_Default_1) == 0x0000D0, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_Select_Default_2) == 0x0000F8, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000120, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_Select_Option_0_ImplicitCast) == 0x000128, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000130, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_EvaluatePerkTierBalanceValue, K2Node_MakeStruct_Value_ImplicitCast) == 0x000138, "Member 'AbilityFunctions_C_EvaluatePerkTierBalanceValue::K2Node_MakeStruct_Value_ImplicitCast' has a wrong offset!");

struct AbilityFunctions_C_GetAngleBetweenTwoVectors final
{
public:
	struct FVector                                VectorA;
	struct FVector                                VectorB;
	class UObject*                                __WorldContext;
	double                                        Angle__Degrees_;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	double                                        CallFunc_DegAcos_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_GetAngleBetweenTwoVectors) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetAngleBetweenTwoVectors");
static_assert(sizeof(AbilityFunctions_C_GetAngleBetweenTwoVectors) == 0x000080, "Wrong size on AbilityFunctions_C_GetAngleBetweenTwoVectors");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, VectorA) == 0x000000, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::VectorA' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, VectorB) == 0x000018, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::VectorB' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, __WorldContext) == 0x000030, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, Angle__Degrees_) == 0x000038, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::Angle__Degrees_' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, CallFunc_Normal_ReturnValue) == 0x000040, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, CallFunc_Normal_ReturnValue_1) == 0x000058, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, CallFunc_Dot_VectorVector_ReturnValue) == 0x000070, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetAngleBetweenTwoVectors, CallFunc_DegAcos_ReturnValue) == 0x000078, "Member 'AbilityFunctions_C_GetAngleBetweenTwoVectors::CallFunc_DegAcos_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_GetDistanceBetweenActors final
{
public:
	class AActor*                                 Actor1;
	class AActor*                                 Actor2;
	class UObject*                                __WorldContext;
	double                                        Distance;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_GetDistanceBetweenActors) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetDistanceBetweenActors");
static_assert(sizeof(AbilityFunctions_C_GetDistanceBetweenActors) == 0x000070, "Wrong size on AbilityFunctions_C_GetDistanceBetweenActors");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, Actor1) == 0x000000, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::Actor1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, Actor2) == 0x000008, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::Actor2' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, __WorldContext) == 0x000010, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, Distance) == 0x000018, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::Distance' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceBetweenActors, CallFunc_VSize_ReturnValue) == 0x000068, "Member 'AbilityFunctions_C_GetDistanceBetweenActors::CallFunc_VSize_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_GetDistanceSquaredBetweenActors final
{
public:
	class AActor*                                 Actor_1;
	class AActor*                                 Actor_2;
	class UObject*                                __WorldContext;
	double                                        Distance_Squared;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_VSizeSquared_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_GetDistanceSquaredBetweenActors) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetDistanceSquaredBetweenActors");
static_assert(sizeof(AbilityFunctions_C_GetDistanceSquaredBetweenActors) == 0x000070, "Wrong size on AbilityFunctions_C_GetDistanceSquaredBetweenActors");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, Actor_1) == 0x000000, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::Actor_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, Actor_2) == 0x000008, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::Actor_2' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, __WorldContext) == 0x000010, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, Distance_Squared) == 0x000018, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::Distance_Squared' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetDistanceSquaredBetweenActors, CallFunc_VSizeSquared_ReturnValue) == 0x000068, "Member 'AbilityFunctions_C_GetDistanceSquaredBetweenActors::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_GetPawnFromPlayerStateZone final
{
public:
	class AActor*                                 InActor;
	class UObject*                                __WorldContext;
	class AFortPlayerPawn*                        OutPawn;
	bool                                          PawnReturned;
	uint8                                         Pad_19[0x7];
	class AFortPlayerStateZone*                   K2Node_DynamicCast_AsFort_Player_State_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2A[0x6];
	class AFortPlayerPawn*                        CallFunc_GetCurrentPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(AbilityFunctions_C_GetPawnFromPlayerStateZone) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetPawnFromPlayerStateZone");
static_assert(sizeof(AbilityFunctions_C_GetPawnFromPlayerStateZone) == 0x000040, "Wrong size on AbilityFunctions_C_GetPawnFromPlayerStateZone");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, InActor) == 0x000000, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::InActor' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, __WorldContext) == 0x000008, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, OutPawn) == 0x000010, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::OutPawn' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, PawnReturned) == 0x000018, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::PawnReturned' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, K2Node_DynamicCast_AsFort_Player_State_Zone) == 0x000020, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::K2Node_DynamicCast_AsFort_Player_State_Zone' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, CallFunc_GetCurrentPawn_ReturnValue) == 0x000030, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::CallFunc_GetCurrentPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetPawnFromPlayerStateZone, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'AbilityFunctions_C_GetPawnFromPlayerStateZone::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct AbilityFunctions_C_GetProjectedTeleportLocation final
{
public:
	class AActor*                                 Actor;
	double                                        MovementDistance;
	class UObject*                                __WorldContext;
	struct FVector                                TargetLocation;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	uint8                                         Pad_83[0x5];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_A2[0x6];
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_GetProjectedTeleportLocation) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetProjectedTeleportLocation");
static_assert(sizeof(AbilityFunctions_C_GetProjectedTeleportLocation) == 0x000138, "Wrong size on AbilityFunctions_C_GetProjectedTeleportLocation");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, Actor) == 0x000000, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::Actor' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, MovementDistance) == 0x000008, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::MovementDistance' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, __WorldContext) == 0x000010, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, TargetLocation) == 0x000018, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::TargetLocation' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_GetVelocity_ReturnValue) == 0x000030, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_X) == 0x000060, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_Y) == 0x000068, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_Z) == 0x000070, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_VSize_ReturnValue) == 0x000078, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000080, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000081, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_EqualEqual_DoubleDouble_ReturnValue_2) == 0x000082, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_EqualEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_GetActorForwardVector_ReturnValue) == 0x000088, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BooleanAND_ReturnValue) == 0x0000A0, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BooleanOR_ReturnValue) == 0x0000A1, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_SelectVector_ReturnValue) == 0x0000A8, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_X_1) == 0x0000C0, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_Y_1) == 0x0000C8, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_BreakVector_Z_1) == 0x0000D0, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_MakeVector_ReturnValue) == 0x0000D8, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_Normal_ReturnValue) == 0x0000F0, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000108, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetProjectedTeleportLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000120, "Member 'AbilityFunctions_C_GetProjectedTeleportLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

struct AbilityFunctions_C_GetRangeFromGameplayEffectContainer final
{
public:
	struct FFortGameplayEffectContainer           GE_Container;
	int32                                         Target_Selection_List_Index;
	uint8                                         Pad_BC[0x4];
	double                                        At_Level;
	class UObject*                                __WorldContext;
	double                                        Range;
	struct FFortAbilityTargetSelection            CallFunc_Array_Get_Item;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_Level_ImplicitCast;
	double                                        K2Node_FunctionResult_Range_ImplicitCast;
};
static_assert(alignof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetRangeFromGameplayEffectContainer");
static_assert(sizeof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer) == 0x000210, "Wrong size on AbilityFunctions_C_GetRangeFromGameplayEffectContainer");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, GE_Container) == 0x000000, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::GE_Container' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, Target_Selection_List_Index) == 0x0000B8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::Target_Selection_List_Index' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, At_Level) == 0x0000C0, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::At_Level' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, __WorldContext) == 0x0000C8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, Range) == 0x0000D0, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::Range' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, CallFunc_GetValueAtLevel_ReturnValue) == 0x000200, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, CallFunc_GetValueAtLevel_Level_ImplicitCast) == 0x000204, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::CallFunc_GetValueAtLevel_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainer, K2Node_FunctionResult_Range_ImplicitCast) == 0x000208, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainer::K2Node_FunctionResult_Range_ImplicitCast' has a wrong offset!");

struct AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec final
{
public:
	struct FFortGameplayEffectContainerSpec       GE_Container_Spec;
	int32                                         Target_Selection_List_Index;
	uint8                                         Pad_BC[0x4];
	double                                        At_Level;
	class UObject*                                __WorldContext;
	double                                        Range;
	struct FFortAbilityTargetSelection            CallFunc_Array_Get_Item;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_Level_ImplicitCast;
	double                                        K2Node_FunctionResult_Range_ImplicitCast;
};
static_assert(alignof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec");
static_assert(sizeof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec) == 0x000210, "Wrong size on AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, GE_Container_Spec) == 0x000000, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::GE_Container_Spec' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, Target_Selection_List_Index) == 0x0000B8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::Target_Selection_List_Index' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, At_Level) == 0x0000C0, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::At_Level' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, __WorldContext) == 0x0000C8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, Range) == 0x0000D0, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::Range' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, CallFunc_GetValueAtLevel_ReturnValue) == 0x000200, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, CallFunc_GetValueAtLevel_Level_ImplicitCast) == 0x000204, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::CallFunc_GetValueAtLevel_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec, K2Node_FunctionResult_Range_ImplicitCast) == 0x000208, "Member 'AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec::K2Node_FunctionResult_Range_ImplicitCast' has a wrong offset!");

struct AbilityFunctions_C_GetTotalGameplayEffectCount final
{
public:
	TArray<class UClass*>                         EffectsToCount;
	class UAbilitySystemComponent*                AbilitySystemComponent;
	class UObject*                                __WorldContext;
	int32                                         FinalEffectCount;
	int32                                         TempTotalEffectCount;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_34[0x4];
	class UClass*                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_GetGameplayEffectCount_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
};
static_assert(alignof(AbilityFunctions_C_GetTotalGameplayEffectCount) == 0x000008, "Wrong alignment on AbilityFunctions_C_GetTotalGameplayEffectCount");
static_assert(sizeof(AbilityFunctions_C_GetTotalGameplayEffectCount) == 0x000050, "Wrong size on AbilityFunctions_C_GetTotalGameplayEffectCount");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, EffectsToCount) == 0x000000, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::EffectsToCount' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, AbilitySystemComponent) == 0x000010, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, __WorldContext) == 0x000018, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, FinalEffectCount) == 0x000020, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::FinalEffectCount' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, TempTotalEffectCount) == 0x000024, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::TempTotalEffectCount' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_Array_Get_Item) == 0x000038, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_GetGameplayEffectCount_ReturnValue) == 0x000040, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_GetGameplayEffectCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_GetTotalGameplayEffectCount, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'AbilityFunctions_C_GetTotalGameplayEffectCount::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

struct AbilityFunctions_C_SetArrayOfHitActors final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	TArray<class AActor*>                         ArrayToSet;
	class UObject*                                __WorldContext;
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_4C[0x4];
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_61[0x7];
	class AActor*                                 CallFunc_Array_Get_Item;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(AbilityFunctions_C_SetArrayOfHitActors) == 0x000008, "Wrong alignment on AbilityFunctions_C_SetArrayOfHitActors");
static_assert(sizeof(AbilityFunctions_C_SetArrayOfHitActors) == 0x000080, "Wrong size on AbilityFunctions_C_SetArrayOfHitActors");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, TargetData) == 0x000000, "Member 'AbilityFunctions_C_SetArrayOfHitActors::TargetData' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, ArrayToSet) == 0x000028, "Member 'AbilityFunctions_C_SetArrayOfHitActors::ArrayToSet' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, __WorldContext) == 0x000038, "Member 'AbilityFunctions_C_SetArrayOfHitActors::__WorldContext' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_GetDataCountFromTargetData_ReturnValue) == 0x000040, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_GetDataCountFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, Temp_int_Variable) == 0x000044, "Member 'AbilityFunctions_C_SetArrayOfHitActors::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_GetActorsFromTargetData_ReturnValue) == 0x000050, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_GetActorsFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_Array_Get_Item) == 0x000068, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000070, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityFunctions_C_SetArrayOfHitActors, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'AbilityFunctions_C_SetArrayOfHitActors::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
