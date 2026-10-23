#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class UFortAthenaCollisionReactionComponent*  CallFunc_GetComponentByClass_ReturnValue;
	class URiderComponent*                        K2Node_Event_Rider_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x7];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class URiderComponent*                        K2Node_Event_Rider;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_F1[0x3];
	TDelegate<void(class AActor* HitActor, bool bFromAsyncSweepBox, EFCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, struct FHitResult& HitResult)> K2Node_CreateDelegate_OutputDelegate;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_109[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	uint8                                         Pad_114[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;
	const class AActor*                           K2Node_CustomEvent_HitActor;
	bool                                          K2Node_CustomEvent_bFromAsyncSweepBox;
	EFCollisionReactionType                       K2Node_CustomEvent_CollisionReactionType;
	bool                                          K2Node_CustomEvent_bIsFirstContinuousReactionOnDelayableActor;
	uint8                                         Pad_12B[0x5];
	struct FHitResult                             K2Node_CustomEvent_HitResult;
	class UFortAthenaCollisionReactionComponent*  CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
};
static_assert(alignof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent) == 0x000008, "Wrong alignment on BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent");
static_assert(sizeof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent) == 0x000220, "Wrong size on BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, EntryPoint) == 0x000000, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_Event_Rider_1) == 0x000018, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_Event_Rider_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_MakeStruct_GameplayEventData) == 0x000028, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetOwner_ReturnValue_1) == 0x0000D8, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_Event_Rider) == 0x0000E0, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_Event_Rider' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetOwner_ReturnValue_2) == 0x0000E8, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000100, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_IsValid_ReturnValue_2) == 0x000108, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x00010C, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetOwner_ReturnValue_3) == 0x000118, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CustomEvent_HitActor) == 0x000120, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CustomEvent_HitActor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CustomEvent_bFromAsyncSweepBox) == 0x000128, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CustomEvent_bFromAsyncSweepBox' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CustomEvent_CollisionReactionType) == 0x000129, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CustomEvent_CollisionReactionType' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CustomEvent_bIsFirstContinuousReactionOnDelayableActor) == 0x00012A, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CustomEvent_bIsFirstContinuousReactionOnDelayableActor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_CustomEvent_HitResult) == 0x000130, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_CustomEvent_HitResult' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000210, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, CallFunc_IsValid_ReturnValue_3) == 0x000218, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent, K2Node_Event_EndPlayReason) == 0x000219, "Member 'BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

struct BoarRidableComponent_C_HandleRiderStartedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(BoarRidableComponent_C_HandleRiderStartedRiding) == 0x000008, "Wrong alignment on BoarRidableComponent_C_HandleRiderStartedRiding");
static_assert(sizeof(BoarRidableComponent_C_HandleRiderStartedRiding) == 0x000008, "Wrong size on BoarRidableComponent_C_HandleRiderStartedRiding");
static_assert(offsetof(BoarRidableComponent_C_HandleRiderStartedRiding, Rider) == 0x000000, "Member 'BoarRidableComponent_C_HandleRiderStartedRiding::Rider' has a wrong offset!");

struct BoarRidableComponent_C_HandleRiderStoppedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(BoarRidableComponent_C_HandleRiderStoppedRiding) == 0x000008, "Wrong alignment on BoarRidableComponent_C_HandleRiderStoppedRiding");
static_assert(sizeof(BoarRidableComponent_C_HandleRiderStoppedRiding) == 0x000008, "Wrong size on BoarRidableComponent_C_HandleRiderStoppedRiding");
static_assert(offsetof(BoarRidableComponent_C_HandleRiderStoppedRiding, Rider) == 0x000000, "Member 'BoarRidableComponent_C_HandleRiderStoppedRiding::Rider' has a wrong offset!");

struct BoarRidableComponent_C_OnReaction final
{
public:
	class UObject*                                Object;
	struct FHitResult                             HitResult;
	class AActor*                                 RiderActor;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParametersFromHitResult_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1D9[0x7];
	class APawn*                                  K2Node_DynamicCast_AsPawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1E9[0x7];
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1FA[0x2];
	float                                         CallFunc_GetHealth_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_201[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_211[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	TArray<TSubclassOf<class UGameplayEffect>>    K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue_1;
	uint8                                         Pad_272[0x6];
	TArray<TSubclassOf<class UGameplayEffect>>    K2Node_MakeArray_Array_1;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(BoarRidableComponent_C_OnReaction) == 0x000008, "Wrong alignment on BoarRidableComponent_C_OnReaction");
static_assert(sizeof(BoarRidableComponent_C_OnReaction) == 0x000290, "Wrong size on BoarRidableComponent_C_OnReaction");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, Object) == 0x000000, "Member 'BoarRidableComponent_C_OnReaction::Object' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, HitResult) == 0x000008, "Member 'BoarRidableComponent_C_OnReaction::HitResult' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, RiderActor) == 0x0000E8, "Member 'BoarRidableComponent_C_OnReaction::RiderActor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_MakeGameplayCueParametersFromHitResult_ReturnValue) == 0x0000F0, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_MakeGameplayCueParametersFromHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0001C0, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0001C8, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_AsFort_Athena_Vehicle) == 0x0001D0, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_AsFort_Athena_Vehicle' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_AsPawn) == 0x0001E0, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_bSuccess_1) == 0x0001E8, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_AsBuilding_Actor) == 0x0001F0, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_DynamicCast_bSuccess_2) == 0x0001F8, "Member 'BoarRidableComponent_C_OnReaction::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_IsValid_ReturnValue) == 0x0001F9, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetHealth_ReturnValue) == 0x0001FC, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000200, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetOwner_ReturnValue) == 0x000208, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_IsValid_ReturnValue_1) == 0x000210, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetOwner_ReturnValue_1) == 0x000218, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetOwner_ReturnValue_2) == 0x000220, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_GetOwner_ReturnValue_3) == 0x000228, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000230, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000248, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_MakeArray_Array) == 0x000260, "Member 'BoarRidableComponent_C_OnReaction::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_IsValidClass_ReturnValue) == 0x000270, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_IsValidClass_ReturnValue_1) == 0x000271, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, K2Node_MakeArray_Array_1) == 0x000278, "Member 'BoarRidableComponent_C_OnReaction::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReaction, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000288, "Member 'BoarRidableComponent_C_OnReaction::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct BoarRidableComponent_C_OnReactionEvent final
{
public:
	const class AActor*                           HitActor;
	bool                                          bFromAsyncSweepBox;
	EFCollisionReactionType                       CollisionReactionType;
	bool                                          bIsFirstContinuousReactionOnDelayableActor;
	uint8                                         Pad_B[0x5];
	struct FHitResult                             HitResult;
};
static_assert(alignof(BoarRidableComponent_C_OnReactionEvent) == 0x000008, "Wrong alignment on BoarRidableComponent_C_OnReactionEvent");
static_assert(sizeof(BoarRidableComponent_C_OnReactionEvent) == 0x0000F0, "Wrong size on BoarRidableComponent_C_OnReactionEvent");
static_assert(offsetof(BoarRidableComponent_C_OnReactionEvent, HitActor) == 0x000000, "Member 'BoarRidableComponent_C_OnReactionEvent::HitActor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReactionEvent, bFromAsyncSweepBox) == 0x000008, "Member 'BoarRidableComponent_C_OnReactionEvent::bFromAsyncSweepBox' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReactionEvent, CollisionReactionType) == 0x000009, "Member 'BoarRidableComponent_C_OnReactionEvent::CollisionReactionType' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReactionEvent, bIsFirstContinuousReactionOnDelayableActor) == 0x00000A, "Member 'BoarRidableComponent_C_OnReactionEvent::bIsFirstContinuousReactionOnDelayableActor' has a wrong offset!");
static_assert(offsetof(BoarRidableComponent_C_OnReactionEvent, HitResult) == 0x000010, "Member 'BoarRidableComponent_C_OnReactionEvent::HitResult' has a wrong offset!");

struct BoarRidableComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(BoarRidableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BoarRidableComponent_C_ReceiveEndPlay");
static_assert(sizeof(BoarRidableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BoarRidableComponent_C_ReceiveEndPlay");
static_assert(offsetof(BoarRidableComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BoarRidableComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
