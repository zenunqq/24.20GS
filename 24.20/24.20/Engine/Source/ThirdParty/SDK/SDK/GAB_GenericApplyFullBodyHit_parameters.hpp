#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_19[0x7];
	class AActor*                                 K2Node_CustomEvent_SelfActor;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	struct FGameplayEventData                     K2Node_Event_EventData;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_229[0x7];
	class AFortPlayerPawn*                        CallFunc_GetPawnFromPlayerStateZone_OutPawn;
	bool                                          CallFunc_GetPawnFromPlayerStateZone_PawnReturned;
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;
	uint8                                         Pad_23A[0x6];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue_1;
	uint8                                         Pad_261[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult;
	uint8                                         Pad_28C[0x4];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_2A5[0x3];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_2B9[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_3;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_2C9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue_1;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue_1;
	uint8                                         Pad_2E1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_4;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_2FB[0x1];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_305[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_31C[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_329[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x000348, "Wrong size on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, EntryPoint) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue) == 0x000010, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_Event_bWasCancelled) == 0x000018, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_SelfActor) == 0x000020, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_OtherActor) == 0x000028, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_NormalImpulse) == 0x000030, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_Hit) == 0x000048, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_Event_EventData) == 0x000128, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_AbilityTargetDataFromHitResult_ReturnValue) == 0x0001D8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_AbilityTargetDataFromHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000200, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_ImpulseDirection) == 0x000208, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x000220, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackZAngle) == 0x000224, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetPawnFromPlayerStateZone_OutPawn) == 0x000230, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetPawnFromPlayerStateZone_OutPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetPawnFromPlayerStateZone_PawnReturned) == 0x000238, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetPawnFromPlayerStateZone_PawnReturned' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000239, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000240, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingAbilityComponent_ReturnValue) == 0x000250, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000258, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue_1) == 0x000260, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x000268, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000270, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_SetFNameBasedOnHitDirection_NameResult) == 0x000288, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_SetFNameBasedOnHitDirection_NameResult' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000290, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate_1) == 0x000298, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue_1) == 0x0002A4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue_2) == 0x0002A8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x0002B0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_SwitchEnum_CmpSuccess) == 0x0002B8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue_3) == 0x0002C0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x0002C8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002CC, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingAbilityComponent_ReturnValue_1) == 0x0002D8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingAbilityComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_RemoveActiveGameplayEffect_ReturnValue_1) == 0x0002E0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_RemoveActiveGameplayEffect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002E4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue_4) == 0x0002F0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_SwitchEnum_CmpSuccess_1) == 0x0002F8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Not_PreBool_ReturnValue) == 0x0002F9, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002FA, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x0002FC, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BooleanAND_ReturnValue) == 0x000304, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3) == 0x000308, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate_4) == 0x000310, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue_5) == 0x000320, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue_2) == 0x000328, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate_5) == 0x00032C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000338, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000340, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_GenericApplyFullBodyHit_C_OnHitPawn final
{
public:
	class AActor*                                 SelfActor;
	class AActor*                                 OtherActor;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x000108, "Wrong size on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, SelfActor) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, OtherActor) == 0x000008, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, NormalImpulse) == 0x000010, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, Hit) == 0x000028, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::Hit' has a wrong offset!");

struct GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x000078, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");

}
