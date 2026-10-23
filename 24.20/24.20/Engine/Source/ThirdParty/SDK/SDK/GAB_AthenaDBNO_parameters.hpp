#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GAB_AthenaDBNO_C_Apply_Health_Bonus final
{
public:
	struct FActiveGameplayEffectHandle            EffectHandle;
	double                                        LocalTenacityAmount;
	double                                        CallFunc_Get_Custom_Tenacity_Tenacity;
	double                                        CallFunc_Get_Max_Health_Tenacity_Tenacity;
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_31[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
};
static_assert(alignof(GAB_AthenaDBNO_C_Apply_Health_Bonus) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_Apply_Health_Bonus");
static_assert(sizeof(GAB_AthenaDBNO_C_Apply_Health_Bonus) == 0x000058, "Wrong size on GAB_AthenaDBNO_C_Apply_Health_Bonus");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, EffectHandle) == 0x000000, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::EffectHandle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, LocalTenacityAmount) == 0x000008, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::LocalTenacityAmount' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_Get_Custom_Tenacity_Tenacity) == 0x000010, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_Get_Custom_Tenacity_Tenacity' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_Get_Max_Health_Tenacity_Tenacity) == 0x000018, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_Get_Max_Health_Tenacity_Tenacity' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000020, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000038, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000048, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Apply_Health_Bonus, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x000050, "Member 'GAB_AthenaDBNO_C_Apply_Health_Bonus::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");

struct GAB_AthenaDBNO_C_ApplyBleeding final
{
public:
	struct FActiveGameplayEffectHandle            EffectHandle;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
};
static_assert(alignof(GAB_AthenaDBNO_C_ApplyBleeding) == 0x000004, "Wrong alignment on GAB_AthenaDBNO_C_ApplyBleeding");
static_assert(sizeof(GAB_AthenaDBNO_C_ApplyBleeding) == 0x000010, "Wrong size on GAB_AthenaDBNO_C_ApplyBleeding");
static_assert(offsetof(GAB_AthenaDBNO_C_ApplyBleeding, EffectHandle) == 0x000000, "Member 'GAB_AthenaDBNO_C_ApplyBleeding::EffectHandle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ApplyBleeding, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNO_C_ApplyBleeding::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

struct GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO final
{
public:
	int32                                         EntryPoint;
	struct FActiveGameplayEffectHandle            CallFunc_Apply_Health_Bonus_EffectHandle;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;
	bool                                          CallFunc_IsImprovedDBNOEnabled_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_3A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	struct FGameplayEventData                     K2Node_Event_EventData;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_104[0x4];
	double                                        CallFunc_Get_Initial_Heal_Amount_Health;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_111[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_129[0x7];
	class UAnimMontage*                           CallFunc_Get_DBNO_Montage_ReturnValue;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_141[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_159[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_ApplyBleeding_EffectHandle;
	uint8                                         Pad_164[0x4];
	class UFortHeldObjectComponent*               CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_171[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_AssignSetByCallerMagnitude_ReturnValue;
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1B1[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	uint8                                         Pad_1BC[0x4];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_1D9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_1F9[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_209[0x3];
	float                                         CallFunc_AssignSetByCallerMagnitude_Magnitude_ImplicitCast;
};
static_assert(alignof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(sizeof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x000210, "Wrong size on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_Apply_Health_Bonus_EffectHandle) == 0x000004, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_Apply_Health_Bonus_EffectHandle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_StartAbilityState_ReturnValue) == 0x000030, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsImprovedDBNOEnabled_ReturnValue) == 0x000038, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsImprovedDBNOEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_Event_EventData) == 0x000048, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_Get_Initial_Heal_Amount_Health) == 0x000108, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_Get_Initial_Heal_Amount_Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_Event_bWasCancelled) == 0x000110, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000118, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000120, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_Get_DBNO_Montage_ReturnValue) == 0x000130, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_Get_DBNO_Montage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000138, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000148, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000150, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_ApplyBleeding_EffectHandle) == 0x00015C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_ApplyBleeding_EffectHandle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue) == 0x000168, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue_2) == 0x000170, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000178, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000180, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000190, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_AssignSetByCallerMagnitude_ReturnValue) == 0x000198, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_AssignSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Ability_System_Component) == 0x0001A8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Ability_System_Component' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_2) == 0x0001B0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x0001B4, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3) == 0x0001C0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0001C8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Ability_System_Component_1) == 0x0001D0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Ability_System_Component_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_3) == 0x0001D8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001DC, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4) == 0x0001E8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x0001F0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_4) == 0x0001F8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000200, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_5) == 0x000208, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_AssignSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x00020C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_AssignSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");

struct GAB_AthenaDBNO_C_Get_Custom_Tenacity final
{
public:
	double                                        Tenacity;
};
static_assert(alignof(GAB_AthenaDBNO_C_Get_Custom_Tenacity) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_Get_Custom_Tenacity");
static_assert(sizeof(GAB_AthenaDBNO_C_Get_Custom_Tenacity) == 0x000008, "Wrong size on GAB_AthenaDBNO_C_Get_Custom_Tenacity");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Custom_Tenacity, Tenacity) == 0x000000, "Member 'GAB_AthenaDBNO_C_Get_Custom_Tenacity::Tenacity' has a wrong offset!");

struct GAB_AthenaDBNO_C_Get_DBNO_Montage final
{
public:
	class UAnimMontage*                           ReturnValue;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
};
static_assert(alignof(GAB_AthenaDBNO_C_Get_DBNO_Montage) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_Get_DBNO_Montage");
static_assert(sizeof(GAB_AthenaDBNO_C_Get_DBNO_Montage) == 0x000010, "Wrong size on GAB_AthenaDBNO_C_Get_DBNO_Montage");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, ReturnValue) == 0x000000, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, CallFunc_IsSkydiving_ReturnValue) == 0x000009, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");

struct GAB_AthenaDBNO_C_Get_Initial_Heal_Amount final
{
public:
	double                                        Health;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	double                                        CallFunc_Get_Max_Health_Tenacity_Tenacity;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_Get_Initial_Heal_Amount");
static_assert(sizeof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount) == 0x000030, "Wrong size on GAB_AthenaDBNO_C_Get_Initial_Heal_Amount");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, Health) == 0x000000, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_Get_Max_Health_Tenacity_Tenacity) == 0x000010, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_Get_Max_Health_Tenacity_Tenacity' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000018, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_GetFloatAttribute_ReturnValue) == 0x00001C, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000020, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Initial_Heal_Amount, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'GAB_AthenaDBNO_C_Get_Initial_Heal_Amount::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct GAB_AthenaDBNO_C_Get_Max_Health_Tenacity final
{
public:
	double                                        Tenacity;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        K2Node_FunctionResult_Tenacity_ImplicitCast;
};
static_assert(alignof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_Get_Max_Health_Tenacity");
static_assert(sizeof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity) == 0x000020, "Wrong size on GAB_AthenaDBNO_C_Get_Max_Health_Tenacity");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity, Tenacity) == 0x000000, "Member 'GAB_AthenaDBNO_C_Get_Max_Health_Tenacity::Tenacity' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNO_C_Get_Max_Health_Tenacity::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000010, "Member 'GAB_AthenaDBNO_C_Get_Max_Health_Tenacity::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity, CallFunc_GetFloatAttribute_ReturnValue) == 0x000014, "Member 'GAB_AthenaDBNO_C_Get_Max_Health_Tenacity::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_Max_Health_Tenacity, K2Node_FunctionResult_Tenacity_ImplicitCast) == 0x000018, "Member 'GAB_AthenaDBNO_C_Get_Max_Health_Tenacity::K2Node_FunctionResult_Tenacity_ImplicitCast' has a wrong offset!");

struct GAB_AthenaDBNO_C_InitializeDeathHitDirection final
{
public:
	struct FGameplayEventData                     EventHitData;
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
};
static_assert(alignof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x0001C8, "Wrong size on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000B0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000C8, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000CC, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000D0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001B0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

struct GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_AthenaDBNO_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_AthenaDBNO_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_AthenaDBNO_C_K2_OnEndAbility");
static_assert(sizeof(GAB_AthenaDBNO_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_AthenaDBNO_C_K2_OnEndAbility");
static_assert(offsetof(GAB_AthenaDBNO_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_AthenaDBNO_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
