#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct CreatureBaseRidableComponent_C_ApplyCollisionResponse final
{
public:
	TArray<ECollisionChannel>                     Channels;
	ECollisionResponse                            Response;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	ECollisionChannel                             CallFunc_Array_Get_Item;
	uint8                                         Pad_1D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_32[0x6];
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	ECollisionResponse                            CallFunc_GetCollisionResponseToChannel_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ApplyCollisionResponse) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ApplyCollisionResponse");
static_assert(sizeof(CreatureBaseRidableComponent_C_ApplyCollisionResponse) == 0x000048, "Wrong size on CreatureBaseRidableComponent_C_ApplyCollisionResponse");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, Channels) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::Channels' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, Response) == 0x000010, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::Response' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, Temp_int_Array_Index_Variable) == 0x000014, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_Array_Get_Item) == 0x00001C, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyCollisionResponse, CallFunc_GetCollisionResponseToChannel_ReturnValue) == 0x000041, "Member 'CreatureBaseRidableComponent_C_ApplyCollisionResponse::CallFunc_GetCollisionResponseToChannel_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ApplyGEToSelf final
{
public:
	TSubclassOf<class UGameplayEffect>            GameplayEffectClass;
	bool                                          IsValidClass;
	uint8                                         Pad_9[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ApplyGEToSelf) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ApplyGEToSelf");
static_assert(sizeof(CreatureBaseRidableComponent_C_ApplyGEToSelf) == 0x000030, "Wrong size on CreatureBaseRidableComponent_C_ApplyGEToSelf");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, GameplayEffectClass) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::GameplayEffectClass' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, IsValidClass) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::IsValidClass' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, CallFunc_IsValidClass_ReturnValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ApplyGEToSelf, CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_ApplyGEToSelf::CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_CanJumpExit final
{
public:
	bool                                          CanJumpExit_0;
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         JumpExitDurationThreshold;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsFalling_ReturnValue;
	uint8                                         Pad_3A[0x6];
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_51[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_CanJumpExit) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_CanJumpExit");
static_assert(sizeof(CreatureBaseRidableComponent_C_CanJumpExit) == 0x000080, "Wrong size on CreatureBaseRidableComponent_C_CanJumpExit");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CanJumpExit_0) == 0x000000, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CanJumpExit_0' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, JumpExitDurationThreshold) == 0x000008, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::JumpExitDurationThreshold' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_GetValueAtLevel_ReturnValue) == 0x000034, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_IsFalling_ReturnValue) == 0x000039, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_GetTimeSeconds_ReturnValue) == 0x000040, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000048, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_K2_SetTimer_ReturnValue) == 0x000060, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x000068, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanJumpExit, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000078, "Member 'CreatureBaseRidableComponent_C_CanJumpExit::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_CheatSetStaminaPercent final
{
public:
	float                                         StaminaPercent;
};
static_assert(alignof(CreatureBaseRidableComponent_C_CheatSetStaminaPercent) == 0x000004, "Wrong alignment on CreatureBaseRidableComponent_C_CheatSetStaminaPercent");
static_assert(sizeof(CreatureBaseRidableComponent_C_CheatSetStaminaPercent) == 0x000004, "Wrong size on CreatureBaseRidableComponent_C_CheatSetStaminaPercent");
static_assert(offsetof(CreatureBaseRidableComponent_C_CheatSetStaminaPercent, StaminaPercent) == 0x000000, "Member 'CreatureBaseRidableComponent_C_CheatSetStaminaPercent::StaminaPercent' has a wrong offset!");

struct CreatureBaseRidableComponent_C_CommitEnergyCosts final
{
public:
	bool                                          RequireAllEnergy;
	uint8                                         Pad_1[0x7];
	double                                        EnergyCost;
	bool                                          Success;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_CommitEnergyCosts) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_CommitEnergyCosts");
static_assert(sizeof(CreatureBaseRidableComponent_C_CommitEnergyCosts) == 0x000018, "Wrong size on CreatureBaseRidableComponent_C_CommitEnergyCosts");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, RequireAllEnergy) == 0x000000, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::RequireAllEnergy' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, EnergyCost) == 0x000008, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::EnergyCost' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, Success) == 0x000010, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::Success' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000012, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000013, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CommitEnergyCosts, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'CreatureBaseRidableComponent_C_CommitEnergyCosts::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0 final
{
public:
	bool                                          Converted;
	uint8                                         Pad_1[0x7];
	class AFortPawn*                              InstigatorPawn;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0");
static_assert(sizeof(CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0");
static_assert(offsetof(CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0, Converted) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0::Converted' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0, InstigatorPawn) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0::InstigatorPawn' has a wrong offset!");

struct CreatureBaseRidableComponent_C_DetermineRateOfChange final
{
public:
	double                                        rateOfChange;
	bool                                          CallFunc_IsSprinting_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue_1;
	bool                                          CallFunc_IsBeingRidden_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1B[0x5];
	struct FVector                                CallFunc_GetLastUpdateVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_41[0x7];
	double                                        K2Node_FunctionResult_RateOfChange_ImplicitCast;
	double                                        K2Node_FunctionResult_RateOfChange_ImplicitCast_1;
};
static_assert(alignof(CreatureBaseRidableComponent_C_DetermineRateOfChange) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_DetermineRateOfChange");
static_assert(sizeof(CreatureBaseRidableComponent_C_DetermineRateOfChange) == 0x000058, "Wrong size on CreatureBaseRidableComponent_C_DetermineRateOfChange");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, rateOfChange) == 0x000000, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::rateOfChange' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_IsSprinting_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_IsSprinting_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_EvaluateCurveTableRow_OutXY) == 0x00000C, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x000014, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_EvaluateCurveTableRow_ReturnValue_1) == 0x000018, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_EvaluateCurveTableRow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_IsBeingRidden_ReturnValue) == 0x000019, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_IsBeingRidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_GetLastUpdateVelocity_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_GetLastUpdateVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000040, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, K2Node_FunctionResult_RateOfChange_ImplicitCast) == 0x000048, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::K2Node_FunctionResult_RateOfChange_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_DetermineRateOfChange, K2Node_FunctionResult_RateOfChange_ImplicitCast_1) == 0x000050, "Member 'CreatureBaseRidableComponent_C_DetermineRateOfChange::K2Node_FunctionResult_RateOfChange_ImplicitCast_1' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_2C[0x4];
	struct FVector                                CallFunc_GetRiderLocation_Location;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_Vector_IsZero_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	uint8                                         Pad_4B[0x5];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_64[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_HasAuthority_ReturnValue_3;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_74[0x4];
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;
	double                                        CallFunc_VSize2D_ReturnValue;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_A3[0x5];
	TArray<ECollisionChannel>                     K2Node_MakeArray_Array;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_C9[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_D9[0x7];
	double                                        K2Node_CustomEvent_JumpPitchInterpSpeed;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_FC[0x4];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_109[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_119[0x7];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_129[0x7];
	class AActor*                                 K2Node_CustomEvent_AIPawn;
	class AFortPlayerPawn*                        K2Node_CustomEvent_InteractingPlayerPawn;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_9;
	bool                                          CallFunc_ToggleRiding_bChangedRiding;
	uint8                                         Pad_149[0x7];
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_159[0x7];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn_4;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	bool                                          K2Node_CustomEvent_Converted;
	uint8                                         Pad_16B[0x5];
	class AFortPawn*                              K2Node_CustomEvent_InstigatorPawn;
	TDelegate<void(bool Converted, class AFortPawn* InstigatorPawn)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_184[0x4];
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsBeingRidden_ReturnValue;
	uint8                                         Pad_199[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_10;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_HasAuthority_ReturnValue_4;
	bool                                          CallFunc_IsBeingRidden_ReturnValue_1;
	bool                                          CallFunc_TestThreshold_crossedThreshold;
	bool                                          CallFunc_IsBeingRidden_ReturnValue_2;
	bool                                          CallFunc_IsBeingRidden_ReturnValue_3;
	bool                                          CallFunc_TestThreshold_crossedThreshold_1;
	bool                                          CallFunc_IsBeingRidden_ReturnValue_4;
	uint8                                         Pad_1B1[0x7];
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_1CC[0x4];
	double                                        K2Node_CustomEvent_EnergyCost_1;
	class URiderComponent*                        K2Node_Event_Rider;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_1E9[0x7];
	double                                        CallFunc_DetermineRateOfChange_RateOfChange;
	class URiderComponent*                        K2Node_Event_Rider_1;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_201[0x7];
	double                                        CallFunc_UpdateValue_updatedValue;
	bool                                          CallFunc_UpdateValue_energyDepleted;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_215[0x3];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_11;
	class ANPC_Pawn_Parent_C*                     K2Node_DynamicCast_AsNPC_Pawn_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract;
	uint8                                         Pad_22B[0x5];
	class ANPC_Pawn_Parent_C*                     K2Node_DynamicCast_AsNPC_Pawn_Parent_1;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract_1;
	uint8                                         Pad_23B[0x5];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;
	bool                                          CallFunc_ApplyGEToSelf_isValidClass;
	uint8                                         Pad_251[0x3];
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1;
	bool                                          CallFunc_ApplyGEToSelf_isValidClass_1;
	bool                                          CallFunc_ApplyGEToSelf_isValidClass_2;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_25F[0x1];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_12;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	uint8                                         Pad_269[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	uint8                                         Pad_279[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_13;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          K2Node_Event_bAbilityInputHeld;
	bool                                          K2Node_Event_bForceCancel;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	bool                                          CallFunc_IsSwimming_IsSwimming;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	uint8                                         Pad_28F[0x1];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_29E[0x2];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_IsBeingRidden_ReturnValue_5;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_2A7[0x1];
	class UPlayerRiderComponent_C*                K2Node_DynamicCast_AsPlayer_Rider_Component;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_2B1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_14;
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_15;
	bool                                          CallFunc_IsSprintToggleable_ReturnValue;
	bool                                          CallFunc_IsSprintToggleable_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_16;
	bool                                          CallFunc_IsSprintToggleable_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	uint8                                         Pad_2CF[0x1];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_IsSprintToggleable_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_2E5[0x3];
	float                                         K2Node_Event_StaminaPercent;
	uint8                                         Pad_2EC[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_15;
	bool                                          CallFunc_IsValid_ReturnValue_17;
	bool                                          CallFunc_HasAuthority_ReturnValue_5;
	uint8                                         Pad_2FA[0x6];
	double                                        K2Node_CustomEvent_Energy;
	bool                                          K2Node_CustomEvent_bWarningActive;
	uint8                                         Pad_309[0x3];
	TDelegate<void(double Energy, bool bIsResting)> K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_18;
	uint8                                         Pad_31A[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_16;
	double                                        K2Node_CustomEvent_EnergyCost;
	bool                                          CallFunc_IsValid_ReturnValue_19;
	uint8                                         Pad_331[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	uint8                                         Pad_341[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	struct FCurveTableRowHandle                   K2Node_MakeStruct_CurveTableRowHandle;
	struct FScalableFloat                         K2Node_MakeStruct_ScalableFloat;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_CanJumpExit_CanJumpExit;
	bool                                          CallFunc_IsValid_ReturnValue_20;
	bool                                          CallFunc_IsValid_ReturnValue_21;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_CanStartSprinting_ReturnValue;
	bool                                          CallFunc_CanStartSprinting_ReturnValue_1;
	bool                                          CallFunc_ApplyGEToSelf_isValidClass_3;
	uint8                                         Pad_3AB[0x5];
	struct FCurveTableRowHandle                   K2Node_MakeStruct_CurveTableRowHandle_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_3C1[0x7];
	struct FScalableFloat                         K2Node_MakeStruct_ScalableFloat_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_3FA[0x2];
	TDelegate<void(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_22;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	uint8                                         Pad_40C[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_17;
	bool                                          CallFunc_IsValid_ReturnValue_23;
	uint8                                         Pad_419[0x7];
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_24;
	uint8                                         Pad_429[0x7];
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_25;
	bool                                          Temp_bool_Variable;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult_1;
	uint8                                         Pad_43B[0x1];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_2;
	TSubclassOf<class UGameplayEffect>            K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_449[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_455[0x3];
	double                                        K2Node_VariableSet_currentEnergyValue_ImplicitCast;
	double                                        CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast;
	double                                        CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1;
	double                                        K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent");
static_assert(sizeof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent) == 0x000480, "Wrong size on CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, EntryPoint) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_AIPawn) == 0x000010, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000020, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue) == 0x00002A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_2) == 0x00002B, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetRiderLocation_Location) == 0x000030, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetRiderLocation_Location' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsServer_ReturnValue) == 0x000048, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Vector_IsZero_ReturnValue) == 0x000049, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Vector_IsZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NotEqual_NameName_ReturnValue) == 0x00004A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_2) == 0x000050, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_3) == 0x000058, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_3) == 0x000060, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_4) == 0x000061, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue_1) == 0x000062, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue_2) == 0x000063, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_4) == 0x000068, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_5) == 0x000070, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue_3) == 0x000071, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000072, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_6) == 0x000073, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000078, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_5) == 0x000088, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_VSize2D_ReturnValue) == 0x000090, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_AIPawn_1) == 0x000098, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_AIPawn_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000A1, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValidClass_ReturnValue) == 0x0000A2, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_MakeArray_Array) == 0x0000A8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_6) == 0x0000B8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_Pawn) == 0x0000C0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_Pawn_1) == 0x0000D0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_3) == 0x0000D8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_JumpPitchInterpSpeed) == 0x0000E0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_JumpPitchInterpSpeed' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_7) == 0x0000E8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate) == 0x0000F0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_AIPawn_2) == 0x000100, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_AIPawn_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_4) == 0x000108, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_8) == 0x000110, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000118, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_AIPawn_3) == 0x000120, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_AIPawn_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_5) == 0x000128, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_AIPawn) == 0x000130, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_AIPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_InteractingPlayerPawn) == 0x000138, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_InteractingPlayerPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_9) == 0x000140, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_ToggleRiding_bChangedRiding) == 0x000148, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_ToggleRiding_bChangedRiding' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x000150, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_6) == 0x000158, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_AIPawn_4) == 0x000160, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_AIPawn_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_7) == 0x000168, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_EndPlayReason) == 0x000169, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_Converted) == 0x00016A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_Converted' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_InstigatorPawn) == 0x000170, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_InstigatorPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000178, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetTimeSeconds_ReturnValue) == 0x000188, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000190, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue) == 0x000198, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_10) == 0x0001A0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_7) == 0x0001A8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_8) == 0x0001A9, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue_4) == 0x0001AA, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue_1) == 0x0001AB, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_TestThreshold_crossedThreshold) == 0x0001AC, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_TestThreshold_crossedThreshold' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue_2) == 0x0001AD, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue_3) == 0x0001AE, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_TestThreshold_crossedThreshold_1) == 0x0001AF, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_TestThreshold_crossedThreshold_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue_4) == 0x0001B0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x0001B8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001C0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_EnergyCost_1) == 0x0001D0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_EnergyCost_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_Rider) == 0x0001D8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0001E0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_DetermineRateOfChange_RateOfChange) == 0x0001F0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_DetermineRateOfChange_RateOfChange' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_Rider_1) == 0x0001F8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_Rider_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000200, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_UpdateValue_updatedValue) == 0x000208, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_UpdateValue_updatedValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_UpdateValue_energyDepleted) == 0x000210, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_UpdateValue_energyDepleted' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, Temp_bool_Has_Been_Initd_Variable) == 0x000211, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanAND_ReturnValue) == 0x000212, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_9) == 0x000213, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_10) == 0x000214, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_11) == 0x000218, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsNPC_Pawn_Parent) == 0x000220, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsNPC_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_8) == 0x000228, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanAND_ReturnValue_1) == 0x000229, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NPC_CanBeInteractedWith_CanInteract) == 0x00022A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NPC_CanBeInteractedWith_CanInteract' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsNPC_Pawn_Parent_1) == 0x000230, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsNPC_Pawn_Parent_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_9) == 0x000238, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NPC_UpdateInteract_EnabledInteract) == 0x000239, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NPC_UpdateInteract_EnabledInteract' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NPC_UpdateInteract_EnabledInteract_1) == 0x00023A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NPC_UpdateInteract_EnabledInteract_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000240, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue) == 0x000248, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_ApplyGEToSelf_isValidClass) == 0x000250, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_ApplyGEToSelf_isValidClass' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000254, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1) == 0x000258, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_ApplyGEToSelf_isValidClass_1) == 0x00025C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_ApplyGEToSelf_isValidClass_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_ApplyGEToSelf_isValidClass_2) == 0x00025D, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_ApplyGEToSelf_isValidClass_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_11) == 0x00025E, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_12) == 0x000260, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_12) == 0x000268, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_Pawn_2) == 0x000270, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_10) == 0x000278, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_13) == 0x000280, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, Temp_bool_IsClosed_Variable) == 0x000288, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_bAbilityInputHeld) == 0x000289, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_bAbilityInputHeld' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_bForceCancel) == 0x00028A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_bForceCancel' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Not_PreBool_ReturnValue) == 0x00028B, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_13) == 0x00028C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsSwimming_IsSwimming) == 0x00028D, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsSwimming_IsSwimming' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_14) == 0x00028E, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000290, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00029C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_OutResult) == 0x00029D, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_OutXY) == 0x0002A0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsBeingRidden_ReturnValue_5) == 0x0002A4, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsBeingRidden_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_SwitchEnum_CmpSuccess) == 0x0002A5, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_NotEqual_DoubleDouble_ReturnValue_1) == 0x0002A6, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_NotEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsPlayer_Rider_Component) == 0x0002A8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsPlayer_Rider_Component' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_11) == 0x0002B0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_14) == 0x0002B8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue) == 0x0002C0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_15) == 0x0002C8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsSprintToggleable_ReturnValue) == 0x0002C9, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsSprintToggleable_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsSprintToggleable_ReturnValue_1) == 0x0002CA, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsSprintToggleable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002CB, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_16) == 0x0002CC, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsSprintToggleable_ReturnValue_2) == 0x0002CD, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsSprintToggleable_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Not_PreBool_ReturnValue_2) == 0x0002CE, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0002D0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0002E0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanAND_ReturnValue_2) == 0x0002E1, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsSprintToggleable_ReturnValue_3) == 0x0002E2, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsSprintToggleable_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanOR_ReturnValue) == 0x0002E3, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanOR_ReturnValue_1) == 0x0002E4, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Event_StaminaPercent) == 0x0002E8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Event_StaminaPercent' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_15) == 0x0002F0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_17) == 0x0002F8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_HasAuthority_ReturnValue_5) == 0x0002F9, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_HasAuthority_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_Energy) == 0x000300, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_Energy' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_bWarningActive) == 0x000308, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_bWarningActive' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_4) == 0x00030C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000318, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_18) == 0x000319, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_16) == 0x000320, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CustomEvent_EnergyCost) == 0x000328, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CustomEvent_EnergyCost' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_19) == 0x000330, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000338, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_DynamicCast_bSuccess_12) == 0x000340, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000344, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_6) == 0x000350, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_7) == 0x00035C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_MakeStruct_CurveTableRowHandle) == 0x000368, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_MakeStruct_CurveTableRowHandle' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_MakeStruct_ScalableFloat) == 0x000378, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_MakeStruct_ScalableFloat' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetValueAtLevel_ReturnValue) == 0x0003A0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_CanJumpExit_CanJumpExit) == 0x0003A4, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_CanJumpExit_CanJumpExit' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_20) == 0x0003A5, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_21) == 0x0003A6, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsFalling_ReturnValue) == 0x0003A7, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_CanStartSprinting_ReturnValue) == 0x0003A8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_CanStartSprinting_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_CanStartSprinting_ReturnValue_1) == 0x0003A9, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_CanStartSprinting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_ApplyGEToSelf_isValidClass_3) == 0x0003AA, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_ApplyGEToSelf_isValidClass_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_MakeStruct_CurveTableRowHandle_1) == 0x0003B0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_MakeStruct_CurveTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x0003C0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_MakeStruct_ScalableFloat_1) == 0x0003C8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_MakeStruct_ScalableFloat_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0003F0, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x0003F4, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x0003F8, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanAND_ReturnValue_3) == 0x0003F9, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_CreateDelegate_OutputDelegate_8) == 0x0003FC, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000408, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_22) == 0x000409, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BooleanAND_ReturnValue_4) == 0x00040A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x00040B, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_GetOwner_ReturnValue_17) == 0x000410, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_GetOwner_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_23) == 0x000418, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x000420, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_24) == 0x000428, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1) == 0x000430, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_IsValid_ReturnValue_25) == 0x000438, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, Temp_bool_Variable) == 0x000439, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_OutResult_1) == 0x00043A, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_OutResult_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EvaluateCurveTableRow_OutXY_2) == 0x00043C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EvaluateCurveTableRow_OutXY_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_Select_Default) == 0x000440, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000448, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1) == 0x00044C, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_SwitchEnum_CmpSuccess_1) == 0x000454, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_VariableSet_currentEnergyValue_ImplicitCast) == 0x000458, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_VariableSet_currentEnergyValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast) == 0x000460, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1) == 0x000468, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast) == 0x000470, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000478, "Member 'CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_GetRiderLocation final
{
public:
	struct FVector                                Location;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
};
static_assert(alignof(CreatureBaseRidableComponent_C_GetRiderLocation) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_GetRiderLocation");
static_assert(sizeof(CreatureBaseRidableComponent_C_GetRiderLocation) == 0x000060, "Wrong size on CreatureBaseRidableComponent_C_GetRiderLocation");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, Location) == 0x000000, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::Location' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, CallFunc_GetOwner_ReturnValue_1) == 0x000040, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000048, "Member 'CreatureBaseRidableComponent_C_GetRiderLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");

struct CreatureBaseRidableComponent_C_GetRidingInfoFromTarget final
{
public:
	double                                        JumpAttachGroundHeightMin;
	double                                        JumpAttachGroundHeightBuffer;
	bool                                          UsesAltRidingMessage;
};
static_assert(alignof(CreatureBaseRidableComponent_C_GetRidingInfoFromTarget) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_GetRidingInfoFromTarget");
static_assert(sizeof(CreatureBaseRidableComponent_C_GetRidingInfoFromTarget) == 0x000018, "Wrong size on CreatureBaseRidableComponent_C_GetRidingInfoFromTarget");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightMin) == 0x000000, "Member 'CreatureBaseRidableComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightMin' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightBuffer) == 0x000008, "Member 'CreatureBaseRidableComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingInfoFromTarget, UsesAltRidingMessage) == 0x000010, "Member 'CreatureBaseRidableComponent_C_GetRidingInfoFromTarget::UsesAltRidingMessage' has a wrong offset!");

struct CreatureBaseRidableComponent_C_HandleCancelSprint final
{
public:
	bool                                          bAbilityInputHeld;
	bool                                          bForceCancel;
};
static_assert(alignof(CreatureBaseRidableComponent_C_HandleCancelSprint) == 0x000001, "Wrong alignment on CreatureBaseRidableComponent_C_HandleCancelSprint");
static_assert(sizeof(CreatureBaseRidableComponent_C_HandleCancelSprint) == 0x000002, "Wrong size on CreatureBaseRidableComponent_C_HandleCancelSprint");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleCancelSprint, bAbilityInputHeld) == 0x000000, "Member 'CreatureBaseRidableComponent_C_HandleCancelSprint::bAbilityInputHeld' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleCancelSprint, bForceCancel) == 0x000001, "Member 'CreatureBaseRidableComponent_C_HandleCancelSprint::bForceCancel' has a wrong offset!");

struct CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary final
{
public:
	class UActorComponent*                        Rider;
	bool                                          bIsRiding;
	uint8                                         Pad_9[0x7];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	float                                         K2Node_VariableSet_MaxFootstepDistance_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary");
static_assert(sizeof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary) == 0x000038, "Wrong size on CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, bIsRiding) == 0x000008, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::bIsRiding' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, K2Node_DynamicCast_AsFort_Pawn) == 0x000028, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue) == 0x000032, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, K2Node_SwitchEnum_CmpSuccess) == 0x000033, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary, K2Node_VariableSet_MaxFootstepDistance_ImplicitCast) == 0x000034, "Member 'CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary::K2Node_VariableSet_MaxFootstepDistance_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_HandleRiderStartedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(CreatureBaseRidableComponent_C_HandleRiderStartedRiding) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_HandleRiderStartedRiding");
static_assert(sizeof(CreatureBaseRidableComponent_C_HandleRiderStartedRiding) == 0x000008, "Wrong size on CreatureBaseRidableComponent_C_HandleRiderStartedRiding");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleRiderStartedRiding, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_HandleRiderStartedRiding::Rider' has a wrong offset!");

struct CreatureBaseRidableComponent_C_HandleRiderStoppedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(CreatureBaseRidableComponent_C_HandleRiderStoppedRiding) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_HandleRiderStoppedRiding");
static_assert(sizeof(CreatureBaseRidableComponent_C_HandleRiderStoppedRiding) == 0x000008, "Wrong size on CreatureBaseRidableComponent_C_HandleRiderStoppedRiding");
static_assert(offsetof(CreatureBaseRidableComponent_C_HandleRiderStoppedRiding, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_HandleRiderStoppedRiding::Rider' has a wrong offset!");

struct CreatureBaseRidableComponent_C_KickRiderOffSelf final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_ToggleRiding_bChangedRiding;
};
static_assert(alignof(CreatureBaseRidableComponent_C_KickRiderOffSelf) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_KickRiderOffSelf");
static_assert(sizeof(CreatureBaseRidableComponent_C_KickRiderOffSelf) == 0x000018, "Wrong size on CreatureBaseRidableComponent_C_KickRiderOffSelf");
static_assert(offsetof(CreatureBaseRidableComponent_C_KickRiderOffSelf, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'CreatureBaseRidableComponent_C_KickRiderOffSelf::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_KickRiderOffSelf, CallFunc_GetOwner_ReturnValue_1) == 0x000008, "Member 'CreatureBaseRidableComponent_C_KickRiderOffSelf::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_KickRiderOffSelf, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_KickRiderOffSelf::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_KickRiderOffSelf, CallFunc_ToggleRiding_bChangedRiding) == 0x000011, "Member 'CreatureBaseRidableComponent_C_KickRiderOffSelf::CallFunc_ToggleRiding_bChangedRiding' has a wrong offset!");

struct CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0 final
{
public:
	class AActor*                                 AIPawn;
	class AFortPlayerPawn*                        InteractingPlayerPawn;
};
static_assert(alignof(CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0");
static_assert(sizeof(CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0");
static_assert(offsetof(CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0, AIPawn) == 0x000000, "Member 'CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0::AIPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0, InteractingPlayerPawn) == 0x000008, "Member 'CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0::InteractingPlayerPawn' has a wrong offset!");

struct CreatureBaseRidableComponent_C_OnEatToRefuel final
{
public:
	double                                        EnergyCost;
};
static_assert(alignof(CreatureBaseRidableComponent_C_OnEatToRefuel) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_OnEatToRefuel");
static_assert(sizeof(CreatureBaseRidableComponent_C_OnEatToRefuel) == 0x000008, "Wrong size on CreatureBaseRidableComponent_C_OnEatToRefuel");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnEatToRefuel, EnergyCost) == 0x000000, "Member 'CreatureBaseRidableComponent_C_OnEatToRefuel::EnergyCost' has a wrong offset!");

struct CreatureBaseRidableComponent_C_OnEnergyUpdate final
{
public:
	double                                        Energy;
	bool                                          bWarningActive;
};
static_assert(alignof(CreatureBaseRidableComponent_C_OnEnergyUpdate) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_OnEnergyUpdate");
static_assert(sizeof(CreatureBaseRidableComponent_C_OnEnergyUpdate) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_OnEnergyUpdate");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnEnergyUpdate, Energy) == 0x000000, "Member 'CreatureBaseRidableComponent_C_OnEnergyUpdate::Energy' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnEnergyUpdate, bWarningActive) == 0x000008, "Member 'CreatureBaseRidableComponent_C_OnEnergyUpdate::bWarningActive' has a wrong offset!");

struct CreatureBaseRidableComponent_C_OnJumping final
{
public:
	double                                        JumpPitchInterpSpeed;
};
static_assert(alignof(CreatureBaseRidableComponent_C_OnJumping) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_OnJumping");
static_assert(sizeof(CreatureBaseRidableComponent_C_OnJumping) == 0x000008, "Wrong size on CreatureBaseRidableComponent_C_OnJumping");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnJumping, JumpPitchInterpSpeed) == 0x000000, "Member 'CreatureBaseRidableComponent_C_OnJumping::JumpPitchInterpSpeed' has a wrong offset!");

struct CreatureBaseRidableComponent_C_OnMovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	bool                                          CallFunc_IsFalling_ReturnValue;
	uint8                                         Pad_1B[0x5];
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_OnMovementModeChanged) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_OnMovementModeChanged");
static_assert(sizeof(CreatureBaseRidableComponent_C_OnMovementModeChanged) == 0x000028, "Wrong size on CreatureBaseRidableComponent_C_OnMovementModeChanged");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, Character) == 0x000000, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, PrevMovementMode) == 0x000008, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000019, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, CallFunc_IsFalling_ReturnValue) == 0x00001A, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnMovementModeChanged, CallFunc_GetTimeSeconds_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_OnMovementModeChanged::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_OnRep_currentEnergyValue final
{
public:
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_OnRep_currentEnergyValue) == 0x000001, "Wrong alignment on CreatureBaseRidableComponent_C_OnRep_currentEnergyValue");
static_assert(sizeof(CreatureBaseRidableComponent_C_OnRep_currentEnergyValue) == 0x000001, "Wrong size on CreatureBaseRidableComponent_C_OnRep_currentEnergyValue");
static_assert(offsetof(CreatureBaseRidableComponent_C_OnRep_currentEnergyValue, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000000, "Member 'CreatureBaseRidableComponent_C_OnRep_currentEnergyValue::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage final
{
public:
	struct FScalableFloat                         CanProbagateImmunityFallDanage;
	class AActor*                                 RiderActor;
	TArray<TSubclassOf<class UGameplayEffect>>    GE_ImmunityFallDamage;
	TArray<TSubclassOf<class UGameplayEffect>>    K2Node_MakeArray_Array;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_51[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_71[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_92[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage");
static_assert(sizeof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage) == 0x0000B0, "Wrong size on CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CanProbagateImmunityFallDanage) == 0x000000, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CanProbagateImmunityFallDanage' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, RiderActor) == 0x000028, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::RiderActor' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, GE_ImmunityFallDamage) == 0x000030, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::GE_ImmunityFallDamage' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, K2Node_MakeArray_Array) == 0x000040, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_GetValueAsBool_ReturnValue) == 0x000050, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_GetOwner_ReturnValue) == 0x000078, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_GetOwner_ReturnValue_1) == 0x000080, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, K2Node_DynamicCast_AsFort_Pawn) == 0x000088, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000098, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000A8, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, CallFunc_BooleanOR_ReturnValue) == 0x0000A9, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage, K2Node_SwitchEnum_CmpSuccess) == 0x0000AA, "Member 'CreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on CreatureBaseRidableComponent_C_ReceiveEndPlay");
static_assert(sizeof(CreatureBaseRidableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on CreatureBaseRidableComponent_C_ReceiveEndPlay");
static_assert(offsetof(CreatureBaseRidableComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct CreatureBaseRidableComponent_C_RemoveGEByTag final
{
public:
	struct FGameplayTagContainer                  Tags;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_RemoveGEByTag) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_RemoveGEByTag");
static_assert(sizeof(CreatureBaseRidableComponent_C_RemoveGEByTag) == 0x000038, "Wrong size on CreatureBaseRidableComponent_C_RemoveGEByTag");
static_assert(offsetof(CreatureBaseRidableComponent_C_RemoveGEByTag, Tags) == 0x000000, "Member 'CreatureBaseRidableComponent_C_RemoveGEByTag::Tags' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RemoveGEByTag, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_RemoveGEByTag::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RemoveGEByTag, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_RemoveGEByTag::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RemoveGEByTag, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_RemoveGEByTag::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_RestoreCollisionResponses final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	TArray<ECollisionChannel>                     CallFunc_Map_Keys_Keys;
	int32                                         CallFunc_Array_Length_ReturnValue;
	ECollisionChannel                             CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_26[0x2];
	TArray<ECollisionChannel>                     K2Node_MakeArray_Array;
	ECollisionResponse                            CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_RestoreCollisionResponses) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_RestoreCollisionResponses");
static_assert(sizeof(CreatureBaseRidableComponent_C_RestoreCollisionResponses) == 0x000040, "Wrong size on CreatureBaseRidableComponent_C_RestoreCollisionResponses");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, Temp_int_Array_Index_Variable) == 0x000000, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Array_Get_Item) == 0x000024, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, K2Node_MakeArray_Array) == 0x000028, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Map_Find_Value) == 0x000038, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_RestoreCollisionResponses, CallFunc_Map_Find_ReturnValue) == 0x000039, "Member 'CreatureBaseRidableComponent_C_RestoreCollisionResponses::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
};
static_assert(alignof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff");
static_assert(sizeof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff) == 0x0001B8, "Wrong size on CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff, Enabled) == 0x000000, "Member 'CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff::Enabled' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x0000E0, "Member 'CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff, CallFunc_GetOwner_ReturnValue_1) == 0x0001B0, "Member 'CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");

struct CreatureBaseRidableComponent_C_SetWildlifeHealth final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_2[0x2];
	float                                         CallFunc_GetHealth_ReturnValue;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_SetWildlifeHealth) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_SetWildlifeHealth");
static_assert(sizeof(CreatureBaseRidableComponent_C_SetWildlifeHealth) == 0x000028, "Wrong size on CreatureBaseRidableComponent_C_SetWildlifeHealth");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_GetHealth_ReturnValue) == 0x000004, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_GetMaxHealth_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_SetWildlifeHealth, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000020, "Member 'CreatureBaseRidableComponent_C_SetWildlifeHealth::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_StopSprinting final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_29[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(CreatureBaseRidableComponent_C_StopSprinting) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_StopSprinting");
static_assert(sizeof(CreatureBaseRidableComponent_C_StopSprinting) == 0x000040, "Wrong size on CreatureBaseRidableComponent_C_StopSprinting");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_GetOwner_ReturnValue_1) == 0x000008, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_GetOwner_ReturnValue_2) == 0x000020, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_StopSprinting, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'CreatureBaseRidableComponent_C_StopSprinting::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct CreatureBaseRidableComponent_C_TestThreshold final
{
public:
	bool                                          isDecaying;
	uint8                                         Pad_1[0x7];
	double                                        CurrentValue;
	double                                        testTreshold;
	bool                                          PreviousState;
	bool                                          crossedThreshold;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(CreatureBaseRidableComponent_C_TestThreshold) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_TestThreshold");
static_assert(sizeof(CreatureBaseRidableComponent_C_TestThreshold) == 0x000020, "Wrong size on CreatureBaseRidableComponent_C_TestThreshold");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, isDecaying) == 0x000000, "Member 'CreatureBaseRidableComponent_C_TestThreshold::isDecaying' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CurrentValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CurrentValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, testTreshold) == 0x000010, "Member 'CreatureBaseRidableComponent_C_TestThreshold::testTreshold' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, PreviousState) == 0x000018, "Member 'CreatureBaseRidableComponent_C_TestThreshold::PreviousState' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, crossedThreshold) == 0x000019, "Member 'CreatureBaseRidableComponent_C_TestThreshold::crossedThreshold' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00001B, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00001C, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_TestThreshold, CallFunc_BooleanAND_ReturnValue_1) == 0x00001E, "Member 'CreatureBaseRidableComponent_C_TestThreshold::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ToggleRiding final
{
public:
	class AActor*                                 PlayerPawn;
	class AActor*                                 Target;
	bool                                          ShouldRide;
	bool                                          bChangedRiding;
	uint8                                         Pad_12[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_StopRidingActor_ReturnValue;
	bool                                          CallFunc_StartRidingActor_ReturnValue;
	uint8                                         Pad_3B[0x5];
	class UControllingRiderComponent*             K2Node_DynamicCast_AsControlling_Rider_Component;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ToggleRiding) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ToggleRiding");
static_assert(sizeof(CreatureBaseRidableComponent_C_ToggleRiding) == 0x000050, "Wrong size on CreatureBaseRidableComponent_C_ToggleRiding");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, PlayerPawn) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::PlayerPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, Target) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::Target' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, ShouldRide) == 0x000010, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::ShouldRide' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, bChangedRiding) == 0x000011, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::bChangedRiding' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000018, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_StopRidingActor_ReturnValue) == 0x000039, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_StopRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_StartRidingActor_ReturnValue) == 0x00003A, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_StartRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, K2Node_DynamicCast_AsControlling_Rider_Component) == 0x000040, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::K2Node_DynamicCast_AsControlling_Rider_Component' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, Temp_bool_Variable) == 0x00004A, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ToggleRiding, CallFunc_Not_PreBool_ReturnValue) == 0x00004B, "Member 'CreatureBaseRidableComponent_C_ToggleRiding::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_UpdateAnimInputBool final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          IsBeingRidden_0;
	uint8                                         Pad_9[0x7];
	class UFortAnimInputEvent_Bool*               CallFunc_CreateAnimInputEvent_Bool_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_UpdateAnimInputBool) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_UpdateAnimInputBool");
static_assert(sizeof(CreatureBaseRidableComponent_C_UpdateAnimInputBool) == 0x000018, "Wrong size on CreatureBaseRidableComponent_C_UpdateAnimInputBool");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateAnimInputBool, FortPawn) == 0x000000, "Member 'CreatureBaseRidableComponent_C_UpdateAnimInputBool::FortPawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateAnimInputBool, IsBeingRidden_0) == 0x000008, "Member 'CreatureBaseRidableComponent_C_UpdateAnimInputBool::IsBeingRidden_0' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateAnimInputBool, CallFunc_CreateAnimInputEvent_Bool_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_UpdateAnimInputBool::CallFunc_CreateAnimInputEvent_Bool_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_UpdateLootAnimalGlow final
{
public:
	double                                        Scale;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_69[0x3];
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_UpdateLootAnimalGlow");
static_assert(sizeof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow) == 0x000070, "Wrong size on CreatureBaseRidableComponent_C_UpdateLootAnimalGlow");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, Scale) == 0x000000, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::Scale' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, Temp_bool_Variable) == 0x000008, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_GetComponentsByTag_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000048, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_Array_Get_Item) == 0x000060, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000068, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateLootAnimalGlow, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x00006C, "Member 'CreatureBaseRidableComponent_C_UpdateLootAnimalGlow::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_UpdateValue final
{
public:
	double                                        TargetValue;
	double                                        rateOfChange;
	double                                        DeltaTime;
	double                                        updatedValue;
	bool                                          EnergyDepleted;
	uint8                                         Pad_21[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_UpdateValue) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_UpdateValue");
static_assert(sizeof(CreatureBaseRidableComponent_C_UpdateValue) == 0x000040, "Wrong size on CreatureBaseRidableComponent_C_UpdateValue");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, TargetValue) == 0x000000, "Member 'CreatureBaseRidableComponent_C_UpdateValue::TargetValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, rateOfChange) == 0x000008, "Member 'CreatureBaseRidableComponent_C_UpdateValue::rateOfChange' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, DeltaTime) == 0x000010, "Member 'CreatureBaseRidableComponent_C_UpdateValue::DeltaTime' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, updatedValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_UpdateValue::updatedValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, EnergyDepleted) == 0x000020, "Member 'CreatureBaseRidableComponent_C_UpdateValue::EnergyDepleted' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_UpdateValue::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_UpdateValue::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'CreatureBaseRidableComponent_C_UpdateValue::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_UpdateValue, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000039, "Member 'CreatureBaseRidableComponent_C_UpdateValue::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_UseEnergyAmountServer final
{
public:
	double                                        EnergyCost;
};
static_assert(alignof(CreatureBaseRidableComponent_C_UseEnergyAmountServer) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_UseEnergyAmountServer");
static_assert(sizeof(CreatureBaseRidableComponent_C_UseEnergyAmountServer) == 0x000008, "Wrong size on CreatureBaseRidableComponent_C_UseEnergyAmountServer");
static_assert(offsetof(CreatureBaseRidableComponent_C_UseEnergyAmountServer, EnergyCost) == 0x000000, "Member 'CreatureBaseRidableComponent_C_UseEnergyAmountServer::EnergyCost' has a wrong offset!");

struct CreatureBaseRidableComponent_C_CanBePet final
{
public:
	class URiderComponent*                        Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	uint8                                         Pad_3A[0x6];
	class UControllingRiderComponent*             K2Node_DynamicCast_AsControlling_Rider_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsTryingToMove_ReturnValue;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_CanBePet_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_4E[0x2];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_CanBePet) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_CanBePet");
static_assert(sizeof(CreatureBaseRidableComponent_C_CanBePet) == 0x000068, "Wrong size on CreatureBaseRidableComponent_C_CanBePet");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_CanBePet::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_CanBePet::ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000030, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000039, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_AsControlling_Rider_Component) == 0x000040, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_AsControlling_Rider_Component' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'CreatureBaseRidableComponent_C_CanBePet::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_IsTryingToMove_ReturnValue) == 0x00004A, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_IsTryingToMove_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_IsFalling_ReturnValue) == 0x00004B, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_CanBePet_ReturnValue) == 0x00004C, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_CanBePet_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_BooleanOR_ReturnValue) == 0x00004D, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000050, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanBePet, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000060, "Member 'CreatureBaseRidableComponent_C_CanBePet::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_CanRiderPlayEmote final
{
public:
	const class URiderComponent*                  Rider;
	bool                                          ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_CanRiderPlayEmote) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_CanRiderPlayEmote");
static_assert(sizeof(CreatureBaseRidableComponent_C_CanRiderPlayEmote) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_CanRiderPlayEmote");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanRiderPlayEmote, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_CanRiderPlayEmote::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_CanRiderPlayEmote, ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_CanRiderPlayEmote::ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_GetRiderCapsuleSize final
{
public:
	class URiderComponent*                        Rider;
	double                                        RiderCapsuleRadius;
	double                                        RiderCapsuleHH;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_29[0x7];
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;
	float                                         CallFunc_GetUnscaledCapsuleSize_OutRadius;
	float                                         CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;
	double                                        K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast;
	double                                        K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_GetRiderCapsuleSize");
static_assert(sizeof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize) == 0x000050, "Wrong size on CreatureBaseRidableComponent_C_GetRiderCapsuleSize");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, RiderCapsuleRadius) == 0x000008, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::RiderCapsuleRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, RiderCapsuleHH) == 0x000010, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::RiderCapsuleHH' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_GetUnscaledCapsuleSize_OutRadius) == 0x000038, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_GetUnscaledCapsuleSize_OutRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, CallFunc_GetUnscaledCapsuleSize_OutHalfHeight) == 0x00003C, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::CallFunc_GetUnscaledCapsuleSize_OutHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast) == 0x000040, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRiderCapsuleSize, K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast) == 0x000048, "Member 'CreatureBaseRidableComponent_C_GetRiderCapsuleSize::K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_GetRidingCapsuleSize final
{
public:
	const class URiderComponent*                  Rider;
	float                                         OriginalRadius;
	float                                         OriginalHalfHeight;
	float                                         OutRadius;
	float                                         OutHalfHeight;
	double                                        CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius;
	double                                        CallFunc_GetRiderCapsuleSize_RiderCapsuleHH;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_FMax_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	float                                         K2Node_FunctionResult_OutRadius_ImplicitCast;
	float                                         K2Node_FunctionResult_OutHalfHeight_ImplicitCast;
};
static_assert(alignof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_GetRidingCapsuleSize");
static_assert(sizeof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize) == 0x000060, "Wrong size on CreatureBaseRidableComponent_C_GetRidingCapsuleSize");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, OriginalRadius) == 0x000008, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::OriginalRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, OriginalHalfHeight) == 0x00000C, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::OriginalHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, OutRadius) == 0x000010, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::OutRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, OutHalfHeight) == 0x000014, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::OutHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius) == 0x000018, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_GetRiderCapsuleSize_RiderCapsuleHH) == 0x000020, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_GetRiderCapsuleSize_RiderCapsuleHH' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_FMax_ReturnValue) == 0x000030, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_FMax_ReturnValue_1) == 0x000040, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000050, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, K2Node_FunctionResult_OutRadius_ImplicitCast) == 0x000058, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::K2Node_FunctionResult_OutRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingCapsuleSize, K2Node_FunctionResult_OutHalfHeight_ImplicitCast) == 0x00005C, "Member 'CreatureBaseRidableComponent_C_GetRidingCapsuleSize::K2Node_FunctionResult_OutHalfHeight_ImplicitCast' has a wrong offset!");

struct CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize final
{
public:
	const class URiderComponent*                  Rider;
	float                                         OriginalRadius;
	float                                         OriginalHalfHeight;
	float                                         OutRadius;
	float                                         OutHalfHeight;
	float                                         CallFunc_GetRidingCapsuleSize_OutRadius;
	float                                         CallFunc_GetRidingCapsuleSize_OutHalfHeight;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	float                                         K2Node_FunctionResult_OutRadius_ImplicitCast;
	float                                         K2Node_FunctionResult_OutHalfHeight_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
};
static_assert(alignof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize");
static_assert(sizeof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize) == 0x000048, "Wrong size on CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, OriginalRadius) == 0x000008, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::OriginalRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, OriginalHalfHeight) == 0x00000C, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::OriginalHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, OutRadius) == 0x000010, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::OutRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, OutHalfHeight) == 0x000014, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::OutHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_GetRidingCapsuleSize_OutRadius) == 0x000018, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_GetRidingCapsuleSize_OutRadius' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_GetRidingCapsuleSize_OutHalfHeight) == 0x00001C, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_GetRidingCapsuleSize_OutHalfHeight' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, K2Node_FunctionResult_OutRadius_ImplicitCast) == 0x000030, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::K2Node_FunctionResult_OutRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, K2Node_FunctionResult_OutHalfHeight_ImplicitCast) == 0x000034, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::K2Node_FunctionResult_OutHalfHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000040, "Member 'CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

struct CreatureBaseRidableComponent_C_IsSwimming final
{
public:
	bool                                          IsSwimming_0;
	uint8                                         Pad_1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_IsSwimming) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_IsSwimming");
static_assert(sizeof(CreatureBaseRidableComponent_C_IsSwimming) == 0x000020, "Wrong size on CreatureBaseRidableComponent_C_IsSwimming");
static_assert(offsetof(CreatureBaseRidableComponent_C_IsSwimming, IsSwimming_0) == 0x000000, "Member 'CreatureBaseRidableComponent_C_IsSwimming::IsSwimming_0' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_IsSwimming, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_IsSwimming::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_IsSwimming, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'CreatureBaseRidableComponent_C_IsSwimming::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_IsSwimming, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CreatureBaseRidableComponent_C_IsSwimming::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_IsSwimming, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000019, "Member 'CreatureBaseRidableComponent_C_IsSwimming::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable final
{
public:
	const class URiderComponent*                  Rider;
	bool                                          ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable");
static_assert(sizeof(CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable");
static_assert(offsetof(CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable, ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable::ReturnValue' has a wrong offset!");

struct CreatureBaseRidableComponent_C_ShouldSetAsViewTarget final
{
public:
	const class URiderComponent*                  Rider;
	bool                                          ReturnValue;
};
static_assert(alignof(CreatureBaseRidableComponent_C_ShouldSetAsViewTarget) == 0x000008, "Wrong alignment on CreatureBaseRidableComponent_C_ShouldSetAsViewTarget");
static_assert(sizeof(CreatureBaseRidableComponent_C_ShouldSetAsViewTarget) == 0x000010, "Wrong size on CreatureBaseRidableComponent_C_ShouldSetAsViewTarget");
static_assert(offsetof(CreatureBaseRidableComponent_C_ShouldSetAsViewTarget, Rider) == 0x000000, "Member 'CreatureBaseRidableComponent_C_ShouldSetAsViewTarget::Rider' has a wrong offset!");
static_assert(offsetof(CreatureBaseRidableComponent_C_ShouldSetAsViewTarget, ReturnValue) == 0x000008, "Member 'CreatureBaseRidableComponent_C_ShouldSetAsViewTarget::ReturnValue' has a wrong offset!");

}
