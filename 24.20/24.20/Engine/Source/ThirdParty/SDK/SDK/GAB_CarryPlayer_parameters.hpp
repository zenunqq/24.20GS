#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_ShouldCancelPickupOnVehicleImpacts_ReturnValue;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class AFortAthenaVehicle* InstigatingVehicle)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_39[0x7];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_91[0x7];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D1[0x7];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_F9[0x7];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	double                                        CallFunc_Vector_Distance_ReturnValue;
	int32                                         CallFunc_Round_ReturnValue;
	int32                                         CallFunc_Divide_IntInt_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_12A[0x6];
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	uint8                                         Pad_142[0x6];
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_156[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_165[0x3];
	class AFortAthenaVehicle*                     K2Node_CustomEvent_InstigatingVehicle;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_179[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer) == 0x000008, "Wrong alignment on GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer");
static_assert(sizeof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer) == 0x000190, "Wrong size on GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, EntryPoint) == 0x000000, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_ShouldCancelPickupOnVehicleImpacts_ReturnValue) == 0x000004, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_ShouldCancelPickupOnVehicleImpacts_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CreateDelegate_OutputDelegate_3) == 0x00002C, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_Event_bWasCancelled) == 0x000038, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_GetActorInfo_ReturnValue) == 0x000040, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000088, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000098, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000C0, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000D8, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000E0, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000100, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Vector_Distance_ReturnValue) == 0x000118, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Round_ReturnValue) == 0x000120, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Divide_IntInt_ReturnValue) == 0x000124, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsServer_ReturnValue) == 0x000128, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsValid_ReturnValue_2) == 0x000129, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000130, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_GetQuestManager_ReturnValue) == 0x000138, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsValid_ReturnValue_3) == 0x000140, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_IsServer_ReturnValue_1) == 0x000141, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000148, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid) == 0x000150, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted) == 0x000151, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted) == 0x000152, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000153, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_Not_PreBool_ReturnValue) == 0x000154, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_BooleanAND_ReturnValue) == 0x000155, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CreateDelegate_OutputDelegate_4) == 0x000158, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, CallFunc_K2_CommitAbility_ReturnValue) == 0x000164, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_CustomEvent_InstigatingVehicle) == 0x000168, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_CustomEvent_InstigatingVehicle' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000170, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1) == 0x000180, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer, K2Node_DynamicCast_bSuccess_2) == 0x000188, "Member 'GAB_CarryPlayer_C_ExecuteUbergraph_GAB_CarryPlayer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct GAB_CarryPlayer_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_CarryPlayer_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_CarryPlayer_C_K2_OnEndAbility");
static_assert(sizeof(GAB_CarryPlayer_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_CarryPlayer_C_K2_OnEndAbility");
static_assert(offsetof(GAB_CarryPlayer_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_CarryPlayer_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event final
{
public:
	class AFortAthenaVehicle*                     InstigatingVehicle;
};
static_assert(alignof(GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event) == 0x000008, "Wrong alignment on GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event");
static_assert(sizeof(GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event) == 0x000008, "Wrong size on GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event");
static_assert(offsetof(GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event, InstigatingVehicle) == 0x000000, "Member 'GAB_CarryPlayer_C_OnFortPlayerHitByVehicle_Event::InstigatingVehicle' has a wrong offset!");

}
