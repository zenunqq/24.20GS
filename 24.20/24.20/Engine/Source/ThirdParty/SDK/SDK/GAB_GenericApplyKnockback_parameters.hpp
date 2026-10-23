#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GAB_GenericApplyKnockback_C_CalculateImpulseDirection final
{
public:
	class AFortPlayerPawn*                        InPawn;
	struct FVector                                ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_59[0x7];
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_CalculateImpulseDirection");
static_assert(sizeof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection) == 0x000138, "Wrong size on GAB_GenericApplyKnockback_C_CalculateImpulseDirection");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, InPawn) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::InPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, ReturnValue) == 0x000008, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_GetActivatingPawn_ReturnValue) == 0x000020, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000040, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000060, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x000078, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_GetVelocity_ReturnValue) == 0x000080, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000098, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_BreakVector_X) == 0x0000B0, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000C8, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_MakeVector_ReturnValue) == 0x0000E0, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_Normal_ReturnValue) == 0x0000F8, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_Normal_ReturnValue_1) == 0x000110, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_VSize_ReturnValue) == 0x000128, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CalculateImpulseDirection, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000130, "Member 'GAB_GenericApplyKnockback_C_CalculateImpulseDirection::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_CheckForPawnDeath final
{
public:
	class AFortPawn*                              Pawn;
	bool                                          IsDead;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetHealth_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_CheckForPawnDeath) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_CheckForPawnDeath");
static_assert(sizeof(GAB_GenericApplyKnockback_C_CheckForPawnDeath) == 0x000020, "Wrong size on GAB_GenericApplyKnockback_C_CheckForPawnDeath");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CheckForPawnDeath, Pawn) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_CheckForPawnDeath::Pawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CheckForPawnDeath, IsDead) == 0x000008, "Member 'GAB_GenericApplyKnockback_C_CheckForPawnDeath::IsDead' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CheckForPawnDeath, CallFunc_GetHealth_ReturnValue) == 0x00000C, "Member 'GAB_GenericApplyKnockback_C_CheckForPawnDeath::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CheckForPawnDeath, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'GAB_GenericApplyKnockback_C_CheckForPawnDeath::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_CheckForPawnDeath, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'GAB_GenericApplyKnockback_C_CheckForPawnDeath::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection final
{
public:
	struct FGameplayEffectContextHandle           EffectContext;
	class UObject*                                OptionalObject;
	bool                                          Value;
	uint8                                         Pad_21[0x3];
	struct FGameplayTag                           GT_IgnoreImpulseDirection;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_29[0x7];
	class UGameplayEffect*                        K2Node_DynamicCast_AsGameplay_Effect;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class UObject*                                CallFunc_EffectContextGetSourceObject_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection");
static_assert(sizeof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection) == 0x000060, "Wrong size on GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, EffectContext) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::EffectContext' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, OptionalObject) == 0x000018, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::OptionalObject' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, Value) == 0x000020, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::Value' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, GT_IgnoreImpulseDirection) == 0x000024, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::GT_IgnoreImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, Temp_bool_Variable) == 0x000028, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, K2Node_DynamicCast_AsGameplay_Effect) == 0x000030, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::K2Node_DynamicCast_AsGameplay_Effect' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, CallFunc_EffectContextGetSourceObject_ReturnValue) == 0x000040, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::CallFunc_EffectContextGetSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000048, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, CallFunc_HasTag_ReturnValue) == 0x000059, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x00005A, "Member 'GAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1D[0x3];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5D[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_6D[0x3];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_2;
	bool                                          CallFunc_IsFalling_ReturnValue;
	uint8                                         Pad_A1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_3;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_4;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_5;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_101[0x7];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_111[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FHitResult                             K2Node_CustomEvent_Hit_1;
	struct FVector                                CallFunc_Normal_ReturnValue;
	class AActor*                                 K2Node_CustomEvent_SelfActor;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_3A9[0x7];
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_3B9[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_6;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_7;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_3E1[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_8;
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_3F9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;
	uint8                                         Pad_42C[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_9;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_444[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_10;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_472[0x6];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3;
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_489[0x3];
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_15;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_11;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_16;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_17;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;
	uint8                                         Pad_4E4[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_12;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_4F1[0x7];
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_13;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_20;
	uint8                                         Pad_59C[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_14;
	bool                                          CallFunc_CheckForPawnDeath_IsDead;
	uint8                                         Pad_5A9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_21;
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	uint8                                         Pad_5C2[0x6];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_15;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_5D1[0x7];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_5E1[0x7];
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         CallFunc_GetValidValue_ReturnValue;
	uint8                                         Pad_5F2[0x6];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_16;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	uint8                                         Pad_601[0x7];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_61A[0x6];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_22;
	uint8                                         Pad_63C[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;
	bool                                          CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value;
	uint8                                         Pad_711[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	struct FVector                                K2Node_Select_Default;
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetPawnFromPlayerStateZone_OutPawn;
	bool                                          CallFunc_GetPawnFromPlayerStateZone_PawnReturned;
	uint8                                         Pad_751[0x7];
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_761[0x7];
	struct FVector                                CallFunc_CalculateImpulseDirection_ReturnValue;
	class ABuildingTrapFloor*                     K2Node_DynamicCast_AsBuilding_Trap_Floor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          K2Node_Event_bWasCancelled;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_78B[0x5];
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue_2;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue_1;
	uint8                                         Pad_799[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_17;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_23;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	double                                        CallFunc_SelectFloat_B_ImplicitCast_1;
	float                                         CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast;
	float                                         CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback");
static_assert(sizeof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback) == 0x0007F0, "Wrong size on GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, EntryPoint) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, Temp_bool_Variable) == 0x00001C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_3) == 0x00002C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_4) == 0x000038, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_5) == 0x000044, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_6) == 0x000050, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_7) == 0x000060, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_1) == 0x00006C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue) == 0x000070, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x000078, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_2) == 0x000098, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsFalling_ReturnValue) == 0x0000A0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000A4, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_3) == 0x0000B0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_4) == 0x0000B8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_5) == 0x0000C0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000C8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_2) == 0x000100, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1) == 0x000108, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_3) == 0x000110, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_X) == 0x000118, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_Y) == 0x000120, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_Z) == 0x000128, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_MakeVector_ReturnValue) == 0x000130, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_Hit_1) == 0x000148, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_Hit_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Normal_ReturnValue) == 0x000228, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_SelfActor) == 0x000240, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_OtherActor) == 0x000248, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_NormalImpulse) == 0x000250, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_Hit) == 0x000268, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000348, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_AbilityTargetDataFromHitResult_ReturnValue) == 0x000360, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_AbilityTargetDataFromHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000388, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetVelocity_ReturnValue) == 0x000390, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_4) == 0x0003A8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_VSize_ReturnValue) == 0x0003B0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0003B8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_6) == 0x0003C0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_7) == 0x0003C8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0003D0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0003E0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_8) == 0x0003E8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingAbilityComponent_ReturnValue) == 0x0003F0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x0003F8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_9) == 0x0003FC, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_10) == 0x000408, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_11) == 0x000414, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_12) == 0x000420, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_9) == 0x000430, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000438, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_SwitchEnum_CmpSuccess) == 0x000440, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Not_PreBool_ReturnValue) == 0x000441, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Not_PreBool_ReturnValue_1) == 0x000442, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BooleanAND_ReturnValue) == 0x000443, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_10) == 0x000448, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_13) == 0x000450, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_14) == 0x00045C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2) == 0x000468, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_5) == 0x000470, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_6) == 0x000471, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3) == 0x000478, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingAbilityComponent_ReturnValue_1) == 0x000480, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingAbilityComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_7) == 0x000488, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_15) == 0x00048C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000498, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_11) == 0x0004A0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_SwitchEnum_CmpSuccess_1) == 0x0004A8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Not_PreBool_ReturnValue_2) == 0x0004A9, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsServer_ReturnValue) == 0x0004AA, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsServer_ReturnValue_1) == 0x0004AB, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_16) == 0x0004AC, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x0004B8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_17) == 0x0004C0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_18) == 0x0004CC, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_19) == 0x0004D8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_12) == 0x0004E8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BooleanAND_ReturnValue_1) == 0x0004F0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0004F8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000510, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_X_1) == 0x000528, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_Y_1) == 0x000530, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BreakVector_Z_1) == 0x000538, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_MakeVector_ReturnValue_1) == 0x000540, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Normal_ReturnValue_1) == 0x000558, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000570, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_13) == 0x000588, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_20) == 0x000590, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_14) == 0x0005A0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CheckForPawnDeath_IsDead) == 0x0005A8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CheckForPawnDeath_IsDead' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_21) == 0x0005AC, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_Character) == 0x0005B8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_PrevMovementMode) == 0x0005C0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CustomEvent_PreviousCustomMode) == 0x0005C1, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_15) == 0x0005C8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_8) == 0x0005D0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetMovementComponent_ReturnValue) == 0x0005D8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_9) == 0x0005E0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x0005E8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_bSuccess) == 0x0005F0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetValidValue_ReturnValue) == 0x0005F1, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_16) == 0x0005F8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000600, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4) == 0x000608, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3) == 0x000610, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_10) == 0x000618, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_IsValid_ReturnValue_11) == 0x000619, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000620, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_22) == 0x000630, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_Event_EventData) == 0x000640, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetImpulseData_ImpulseDirection) == 0x0006F0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x000708, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetImpulseData_KnockbackZAngle) == 0x00070C, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value) == 0x000710, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_SelectFloat_ReturnValue) == 0x000718, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_SelectFloat_ReturnValue_1) == 0x000720, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_Select_Default) == 0x000728, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x000740, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetPawnFromPlayerStateZone_OutPawn) == 0x000748, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetPawnFromPlayerStateZone_OutPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetPawnFromPlayerStateZone_PawnReturned) == 0x000750, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetPawnFromPlayerStateZone_PawnReturned' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_AsBuilding_Trap) == 0x000758, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_AsBuilding_Trap' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_bSuccess_1) == 0x000760, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_CalculateImpulseDirection_ReturnValue) == 0x000768, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_CalculateImpulseDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_AsBuilding_Trap_Floor) == 0x000780, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_AsBuilding_Trap_Floor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_DynamicCast_bSuccess_2) == 0x000788, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_Event_bWasCancelled) == 0x000789, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, Temp_bool_Variable_1) == 0x00078A, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingAbilityComponent_ReturnValue_2) == 0x000790, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingAbilityComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_RemoveActiveGameplayEffect_ReturnValue_1) == 0x000798, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_RemoveActiveGameplayEffect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_GetActivatingPawn_ReturnValue_17) == 0x0007A0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_GetActivatingPawn_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0007A8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_K2_SetTimer_ReturnValue) == 0x0007C0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, K2Node_CreateDelegate_OutputDelegate_23) == 0x0007C8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_Delay_Duration_ImplicitCast) == 0x0007D4, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_SelectFloat_B_ImplicitCast) == 0x0007D8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_SelectFloat_B_ImplicitCast_1) == 0x0007E0, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_SelectFloat_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast) == 0x0007E8, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback, CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast) == 0x0007EC, "Member 'GAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback::CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_GetPawnFromInstigator final
{
public:
	class AActor*                                 InActor;
	class AFortPlayerPawn*                        OutPawn;
	class AFortPlayerStateZone*                   K2Node_DynamicCast_AsFort_Player_State_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class AFortPlayerPawn*                        CallFunc_GetCurrentPawn_ReturnValue;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_GetPawnFromInstigator");
static_assert(sizeof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator) == 0x000028, "Wrong size on GAB_GenericApplyKnockback_C_GetPawnFromInstigator");
static_assert(offsetof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator, InActor) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_GetPawnFromInstigator::InActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator, OutPawn) == 0x000008, "Member 'GAB_GenericApplyKnockback_C_GetPawnFromInstigator::OutPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator, K2Node_DynamicCast_AsFort_Player_State_Zone) == 0x000010, "Member 'GAB_GenericApplyKnockback_C_GetPawnFromInstigator::K2Node_DynamicCast_AsFort_Player_State_Zone' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_GenericApplyKnockback_C_GetPawnFromInstigator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_GetPawnFromInstigator, CallFunc_GetCurrentPawn_ReturnValue) == 0x000020, "Member 'GAB_GenericApplyKnockback_C_GetPawnFromInstigator::CallFunc_GetCurrentPawn_ReturnValue' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericApplyKnockback_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericApplyKnockback_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericApplyKnockback_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericApplyKnockback_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event");
static_assert(sizeof(GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event) == 0x000010, "Wrong size on GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event");
static_assert(offsetof(GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event, Character) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event::Character' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event, PrevMovementMode) == 0x000008, "Member 'GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event, PreviousCustomMode) == 0x000009, "Member 'GAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event::PreviousCustomMode' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_OnHitPawn final
{
public:
	class AActor*                                 SelfActor;
	class AActor*                                 OtherActor;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_OnHitPawn) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_OnHitPawn");
static_assert(sizeof(GAB_GenericApplyKnockback_C_OnHitPawn) == 0x000108, "Wrong size on GAB_GenericApplyKnockback_C_OnHitPawn");
static_assert(offsetof(GAB_GenericApplyKnockback_C_OnHitPawn, SelfActor) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_OnHitPawn::SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_OnHitPawn, OtherActor) == 0x000008, "Member 'GAB_GenericApplyKnockback_C_OnHitPawn::OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_OnHitPawn, NormalImpulse) == 0x000010, "Member 'GAB_GenericApplyKnockback_C_OnHitPawn::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyKnockback_C_OnHitPawn, Hit) == 0x000028, "Member 'GAB_GenericApplyKnockback_C_OnHitPawn::Hit' has a wrong offset!");

struct GAB_GenericApplyKnockback_C_OnPawnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GAB_GenericApplyKnockback_C_OnPawnLanded) == 0x000008, "Wrong alignment on GAB_GenericApplyKnockback_C_OnPawnLanded");
static_assert(sizeof(GAB_GenericApplyKnockback_C_OnPawnLanded) == 0x0000E0, "Wrong size on GAB_GenericApplyKnockback_C_OnPawnLanded");
static_assert(offsetof(GAB_GenericApplyKnockback_C_OnPawnLanded, Hit) == 0x000000, "Member 'GAB_GenericApplyKnockback_C_OnPawnLanded::Hit' has a wrong offset!");

}
