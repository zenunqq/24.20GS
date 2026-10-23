#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures final
{
public:
	class AFortPlayerPawn*                        PlayerPawn_0;
	TArray<class AActor*>                         K2Node_MakeArray_Array;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures) == 0x000078, "Wrong size on GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, PlayerPawn_0) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, K2Node_MakeArray_Array) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_BreakVector_X) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_BreakVector_Y) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_BreakVector_Z) == 0x000040, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, K2Node_MakeArray_Array_1) == 0x000048, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000058, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress final
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_39[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	struct FVerbMessage_Custom                    CallFunc_MakeCustomVerbMessage_ReturnValue;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	struct FVerbMessage_Custom                    CallFunc_AddTagsForSubject_Result;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress) == 0x000278, "Wrong size on GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_GetOwnedGameplayTags_self_CastInput) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_GetOwnedGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x000010, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_HasAuthority_ReturnValue) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000040, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_MakeCustomVerbMessage_ReturnValue) == 0x000050, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_MakeCustomVerbMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_GetQuestManager_ReturnValue) == 0x000160, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress, CallFunc_AddTagsForSubject_Result) == 0x000168, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress::CallFunc_AddTagsForSubject_Result' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_CheckMotor final
{
public:
	bool                                          HasHarness;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_2[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x7];
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_24[0x4];
	class AActor*                                 CallFunc_Array_Get_Item;
	class ABP_ZipLine_Athena_Harness_C*           K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_CheckMotor) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_CheckMotor");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_CheckMotor) == 0x000048, "Wrong size on GA_Athena_ZipLine_SmashParent_C_CheckMotor");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, HasHarness) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::HasHarness' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, Temp_bool_True_if_break_was_hit_Variable) == 0x000001, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_GetAttachedActors_OutActors) == 0x000010, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_Array_Get_Item) == 0x000028, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_CheckMotor, CallFunc_BooleanAND_ReturnValue) == 0x000045, "Member 'GA_Athena_ZipLine_SmashParent_C_CheckMotor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap final
{
public:
	TArray<class AActor*>                         OverlapActors;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap) == 0x000010, "Wrong size on GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap, OverlapActors) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap::OverlapActors' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_EnterWaterExit final
{
public:
	class AFortPlayerPawn*                        FortPlayerPawn;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_EnterWaterExit) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_EnterWaterExit");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_EnterWaterExit) == 0x000008, "Wrong size on GA_Athena_ZipLine_SmashParent_C_EnterWaterExit");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_EnterWaterExit, FortPlayerPawn) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_EnterWaterExit::FortPlayerPawn' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_WantsToGoFromVehicleToZipline_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsInInteractBlockingVehicle_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_F4[0x4];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_109[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          K2Node_CustomEvent_bIsZiplining_1;
	uint8                                         Pad_119[0x7];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_15C[0x4];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_172[0x2];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         CallFunc_GetValidValue_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_1CE[0x2];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_9;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;
	struct FGameplayEventData                     K2Node_Event_EventData;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;
	class AController*                            CallFunc_GetController_ReturnValue_1;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_2C1[0x7];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_2D5[0x3];
	class AFortPlayerPawn*                        K2Node_CustomEvent_FortPlayerPawn;
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          K2Node_CustomEvent_bIsZiplining;
	uint8                                         Pad_2FB[0x5];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue_1;
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_319[0x3];
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_13;
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_32D[0x3];
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_14;
	bool                                          K2Node_Event_bWasCancelled;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	uint8                                         Pad_33F[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;
	uint8                                         Pad_34C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_35B[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	TArray<class AActor*>                         K2Node_Event_OverlapActors;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_381[0x7];
	class AActor*                                 CallFunc_Array_Get_Item;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_399[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_3A9[0x7];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_3E9[0x7];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_401[0x7];
	class AFortAthenaSupplyDropBalloon*           K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_411[0x7];
	class UFortHeldObjectComponent*               CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_422[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_17;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_18;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_445[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_44C[0x4];
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue;
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue_1;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_20;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	const class AActor*                           K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_544[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_57C[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_2;
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_1;
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_701[0x7];
	class AFortAthenaZipline*                     K2Node_DynamicCast_AsFort_Athena_Zipline;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_711[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_21;
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	uint8                                         Pad_7D1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_22;
	TDelegate<void(class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_23;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_24;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent) == 0x000800, "Wrong size on GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, EntryPoint) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_WantsToGoFromVehicleToZipline_ReturnValue) == 0x000004, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_WantsToGoFromVehicleToZipline_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsInInteractBlockingVehicle_ReturnValue) == 0x000006, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsInInteractBlockingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_Hit) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000F8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000100, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000110, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_bIsZiplining_1) == 0x000118, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_bIsZiplining_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_Pawn_1) == 0x000120, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000128, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1) == 0x000130, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000138, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000144, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000150, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetController_ReturnValue) == 0x000160, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000168, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_1) == 0x000170, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000171, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000174, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000180, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_6) == 0x00018C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_7) == 0x000198, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_8) == 0x0001A4, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetMovementComponent_ReturnValue) == 0x0001B0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001B8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsCharacter_Movement_Component) == 0x0001C0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_2) == 0x0001C8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_2) == 0x0001C9, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetValidValue_ReturnValue) == 0x0001CA, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001CB, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001CC, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BooleanOR_ReturnValue) == 0x0001CD, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_9) == 0x0001D0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_10) == 0x0001DC, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_Event_EventData) == 0x0001E8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_11) == 0x000298, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_12) == 0x0002A4, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetController_ReturnValue_1) == 0x0002B0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x0002B8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_3) == 0x0002C0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x0002C8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, Temp_int_Array_Index_Variable) == 0x0002D0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_3) == 0x0002D4, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_FortPlayerPawn) == 0x0002D8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x0002E0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0002E8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0002F8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_4) == 0x0002F9, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_bIsZiplining) == 0x0002FA, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_bIsZiplining' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_Pawn) == 0x000300, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetMovementComponent_ReturnValue_1) == 0x000308, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsCharacter_Movement_Component_1) == 0x000310, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsCharacter_Movement_Component_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_4) == 0x000318, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_13) == 0x00031C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetValidValue_ReturnValue_1) == 0x000328, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000329, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00032A, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BooleanOR_ReturnValue_1) == 0x00032B, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Not_PreBool_ReturnValue) == 0x00032C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_14) == 0x000330, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_Event_bWasCancelled) == 0x00033C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_5) == 0x00033D, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00033E, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_15) == 0x000340, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000350, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x000358, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_6) == 0x000359, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_7) == 0x00035A, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_16) == 0x00035C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000368, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_Event_OverlapActors) == 0x000370, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_Event_OverlapActors' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_8) == 0x000380, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Array_Get_Item) == 0x000388, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsBuilding_Actor) == 0x000390, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_5) == 0x000398, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0003A0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_6) == 0x0003A8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0003B0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0003D8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0003E8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2) == 0x0003F0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Not_PreBool_ReturnValue_1) == 0x000400, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon) == 0x000408, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_7) == 0x000410, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_GetComponentByClass_ReturnValue) == 0x000418, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_BooleanAND_ReturnValue) == 0x000420, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_IsValid_ReturnValue_9) == 0x000421, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Array_Length_ReturnValue) == 0x000424, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_17) == 0x000428, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_18) == 0x000434, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, Temp_int_Loop_Counter_Variable) == 0x000440, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Less_IntInt_ReturnValue) == 0x000444, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_Add_IntInt_ReturnValue) == 0x000448, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_CreateAnimInputEvent_ReturnValue) == 0x000450, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_CreateAnimInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_CreateAnimInputEvent_ReturnValue_1) == 0x000458, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_CreateAnimInputEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_MakeStruct_GameplayEventData) == 0x000460, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_19) == 0x000510, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_20) == 0x00051C, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x000528, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_ReturnValue_4) == 0x000530, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_DamagedActor) == 0x000538, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_Damage) == 0x000540, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_InstigatedBy) == 0x000548, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_DamageCauser) == 0x000550, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_HitLocation) == 0x000558, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_FHitComponent) == 0x000570, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_BoneName) == 0x000578, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_Momentum) == 0x000580, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_EventData_2) == 0x000598, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_EventData_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_EventData_1) == 0x000648, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_EventData_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsPrimitive_Component) == 0x0006F8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_8) == 0x000700, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_AsFort_Athena_Zipline) == 0x000708, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_AsFort_Athena_Zipline' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_DynamicCast_bSuccess_9) == 0x000710, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_21) == 0x000714, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CustomEvent_EventData) == 0x000720, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0007D0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_22) == 0x0007D4, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_23) == 0x0007E0, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, K2Node_CreateDelegate_OutputDelegate_24) == 0x0007EC, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0007F8, "Member 'GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter) == 0x0000B0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter, EventData) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter::EventData' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit) == 0x0000B0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit, EventData) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit::EventData' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset final
{
public:
	struct FVector                                Offset;
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset) == 0x000028, "Wrong size on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset, Offset) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset::Offset' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset, K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset::K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc final
{
public:
	struct FVector                                PoleBSocketLoc;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc) == 0x000040, "Wrong size on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc, PoleBSocketLoc) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc::PoleBSocketLoc' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc, K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc::K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc final
{
public:
	struct FVector                                PoleBSocketLoc;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc) == 0x000040, "Wrong size on GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc, PoleBSocketLoc) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc::PoleBSocketLoc' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc, K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc::K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor final
{
public:
	struct FRotator                               Rotation;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_7C[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor) == 0x0000B0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, Rotation) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline) == 0x000030, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_MakeRotFromZ_ReturnValue) == 0x000058, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_BreakRotator_Roll) == 0x000070, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_BreakRotator_Pitch) == 0x000074, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_BreakRotator_Yaw) == 0x000078, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000080, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_MakeRotator_ReturnValue) == 0x000088, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x0000A8, "Member 'GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged final
{
public:
	bool                                          bIsZiplining;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged) == 0x000010, "Wrong size on GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged, bIsZiplining) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged::bIsZiplining' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged, Pawn) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged::Pawn' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag) == 0x0000B0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag, EventData) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag::EventData' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged final
{
public:
	bool                                          bIsZiplining;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged) == 0x000010, "Wrong size on GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged, bIsZiplining) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged::bIsZiplining' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged, Pawn) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged::Pawn' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_OnPawnDied final
{
public:
	const class AActor*                           DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_OnPawnDied");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied) == 0x000060, "Wrong size on GA_Athena_ZipLine_SmashParent_C_OnPawnDied");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, DamagedActor) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, Damage) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::Damage' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, InstigatedBy) == 0x000010, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, DamageCauser) == 0x000018, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, HitLocation) == 0x000020, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::HitLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, FHitComponent) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, BoneName) == 0x000040, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnDied, Momentum) == 0x000048, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnDied::Momentum' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind) == 0x0000E0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind, Hit) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind::Hit' has a wrong offset!");

struct GA_Athena_ZipLine_SmashParent_C_Spawn_Motor final
{
public:
	class AActor*                                 PlayerPawn_0;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_9[0x7];
	struct FVector                                CallFunc_Get_Zipline_Motor_Offset_Offset;
	TDelegate<void(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_34[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ABP_ZipLine_Athena_Harness_Yellow_C*    CallFunc_FinishSpawningActor_ReturnValue;
};
static_assert(alignof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor) == 0x000010, "Wrong alignment on GA_Athena_ZipLine_SmashParent_C_Spawn_Motor");
static_assert(sizeof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor) == 0x0000C0, "Wrong size on GA_Athena_ZipLine_SmashParent_C_Spawn_Motor");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, PlayerPawn_0) == 0x000000, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_Get_Zipline_Motor_Offset_Offset) == 0x000010, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_Get_Zipline_Motor_Offset_Offset' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_SmashParent_C_Spawn_Motor, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'GA_Athena_ZipLine_SmashParent_C_Spawn_Motor::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}
