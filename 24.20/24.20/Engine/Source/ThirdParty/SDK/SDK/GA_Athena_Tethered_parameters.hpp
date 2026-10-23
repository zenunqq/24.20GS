#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Tethered_C_BreakNearbyStructures final
{
public:
	struct FVector                                ForwardVector;
	double                                        OffsetForward;
	bool                                          wasAnyStructureBroken;
	uint8                                         Pad_21[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	TArray<class AActor*>                         K2Node_MakeArray_Array;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	int32                                         CallFunc_FTrunc_ReturnValue;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	uint8                                         Pad_ED[0x3];
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array_1;
	TArray<class AActor*>                         CallFunc_BoxOverlapActors_OutActors;
	bool                                          CallFunc_BoxOverlapActors_ReturnValue;
	uint8                                         Pad_111[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AActor*                                 CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_121[0x7];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	class AFortAthenaSupplyDropBalloon*           K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_169[0x7];
	class ABuildingProp*                          K2Node_DynamicCast_AsBuilding_Prop;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_179[0x7];
	class UFortHeldObjectComponent*               CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_189[0x7];
	double                                        CallFunc_MakeVector_X_ImplicitCast;
	double                                        CallFunc_MakeVector_Y_ImplicitCast;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_FTrunc_A_ImplicitCast;
};
static_assert(alignof(GA_Athena_Tethered_C_BreakNearbyStructures) == 0x000008, "Wrong alignment on GA_Athena_Tethered_C_BreakNearbyStructures");
static_assert(sizeof(GA_Athena_Tethered_C_BreakNearbyStructures) == 0x0001B8, "Wrong size on GA_Athena_Tethered_C_BreakNearbyStructures");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, ForwardVector) == 0x000000, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::ForwardVector' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, OffsetForward) == 0x000018, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::OffsetForward' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, wasAnyStructureBroken) == 0x000020, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::wasAnyStructureBroken' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000028, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_GetValueAtLevel_ReturnValue) == 0x000044, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_MakeArray_Array) == 0x000048, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BreakVector_X) == 0x000090, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BreakVector_Y) == 0x000098, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_MakeVector_ReturnValue_1) == 0x0000B0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0000E4, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_FTrunc_ReturnValue) == 0x0000E8, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Conv_IntToBool_ReturnValue) == 0x0000EC, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BoxOverlapActors_OutActors) == 0x000100, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BoxOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BoxOverlapActors_ReturnValue) == 0x000110, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BoxOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Array_Length_ReturnValue) == 0x000114, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Array_Get_Item) == 0x000118, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Less_IntInt_ReturnValue) == 0x000120, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000128, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000150, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon) == 0x000160, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_DynamicCast_AsBuilding_Prop) == 0x000170, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_DynamicCast_AsBuilding_Prop' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_GetComponentByClass_ReturnValue) == 0x000180, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_MakeVector_X_ImplicitCast) == 0x000190, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_MakeVector_Y_ImplicitCast) == 0x000198, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_MakeVector_Z_ImplicitCast) == 0x0001A0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001A8, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_BreakNearbyStructures, CallFunc_FTrunc_A_ImplicitCast) == 0x0001B0, "Member 'GA_Athena_Tethered_C_BreakNearbyStructures::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

struct GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_6[0x2];
	class APawn*                                  CallFunc_GetTetherPawn_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_19[0x7];
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_2B[0x1];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_3B[0x5];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_124[0x4];
	struct FVector                                CallFunc_GetPreviousVelocity_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_141[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_162[0x2];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class APawn*                                  CallFunc_GetTetherPawn_ReturnValue_1;
	struct FRotator                               CallFunc_GetDirectionActorToActor_ReturnValue;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue_1;
	uint8                                         Pad_1FA[0x6];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	float                                         CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
	uint8                                         Pad_23C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered) == 0x000008, "Wrong alignment on GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered");
static_assert(sizeof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered) == 0x000248, "Wrong size on GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, EntryPoint) == 0x000000, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetTetherPawn_ReturnValue) == 0x000008, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetTetherPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000010, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_CustomEvent_Character) == 0x000020, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_CustomEvent_PrevMovementMode) == 0x000028, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_CustomEvent_PreviousCustomMode) == 0x000029, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000039, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000048, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_CreateDelegate_OutputDelegate_1) == 0x000118, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetPreviousVelocity_ReturnValue) == 0x000128, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetPreviousVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_Event_bWasCancelled) == 0x000140, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BreakVector_X) == 0x000148, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BreakVector_Y) == 0x000150, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BreakVector_Z) == 0x000158, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000160, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_IsValid_ReturnValue_2) == 0x000161, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetValueAtLevel_ReturnValue) == 0x000164, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000168, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetTetherPawn_ReturnValue_1) == 0x000170, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetTetherPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetDirectionActorToActor_ReturnValue) == 0x000178, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetDirectionActorToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetForwardVector_ReturnValue) == 0x000190, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_GetActorInfo_ReturnValue) == 0x0001A8, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001F0, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, K2Node_DynamicCast_bSuccess) == 0x0001F8, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_K2_CommitAbility_ReturnValue_1) == 0x0001F9, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_K2_CommitAbility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000200, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000228, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast) == 0x000238, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000240, "Member 'GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GA_Athena_Tethered_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_Tethered_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Tethered_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Tethered_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Tethered_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Tethered_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Tethered_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0 final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0) == 0x000008, "Wrong alignment on GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0");
static_assert(sizeof(GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0) == 0x000010, "Wrong size on GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0");
static_assert(offsetof(GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0, Character) == 0x000000, "Member 'GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0::Character' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0, PrevMovementMode) == 0x000008, "Member 'GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0, PreviousCustomMode) == 0x000009, "Member 'GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0::PreviousCustomMode' has a wrong offset!");

}
