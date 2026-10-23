#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6 final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6");
static_assert(sizeof(PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6) == 0x0000B0, "Wrong size on PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6");
static_assert(offsetof(PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6, Payload) == 0x000000, "Member 'PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6::Payload' has a wrong offset!");

struct PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406 final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406");
static_assert(sizeof(PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406) == 0x0000B0, "Wrong size on PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406");
static_assert(offsetof(PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406, Payload) == 0x000000, "Member 'PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406::Payload' has a wrong offset!");

struct PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_1C[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_2A[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_45[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_54[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_62[0x6];
	class URidableComponent*                      K2Node_Event_Ridable_1;
	class URidableComponent*                      K2Node_Event_Ridable;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_91[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_A1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;
	ENetRole                                      CallFunc_GetLocalRole_ReturnValue;
	uint8                                         Pad_B1[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_C1[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;
	uint8                                         Pad_CC[0x4];
	struct FGameplayEventData                     Temp_struct_Variable;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	uint8                                         Pad_18C[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_199[0x7];
	class UObject*                                K2Node_CustomEvent_TargetObject;
	bool                                          K2Node_CustomEvent_UseAltRidingMessage;
	uint8                                         Pad_1A9[0x7];
	TScriptInterface<class IRidingGeneric_Interafce_C> K2Node_DynamicCast_AsRiding_Generic_Interafce;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_1C1[0x7];
	class AActor*                                 K2Node_DynamicCast_AsActor;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_ToggleRiding_bChangedRiding;
	uint8                                         Pad_1D2[0x6];
	struct FGameplayEventData                     Temp_struct_Variable_1;
	double                                        K2Node_CustomEvent_targetHealth;
	class FText                                   K2Node_CustomEvent_Name;
	uint8                                         Pad_2A8[0x8];
	struct FSlateBrush                            K2Node_CustomEvent_Icon;
	class AActor*                                 K2Node_CustomEvent_Ridable_1;
	class AActor*                                 K2Node_CustomEvent_Ridable;
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	bool                                          CallFunc_StopRidingActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_38C[0x4];
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_4F1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;
	bool                                          CallFunc_StopRidingActor_ReturnValue_1;
	uint8                                         Pad_501[0x7];
	class UAbilityAsync_WaitGameplayEvent*        CallFunc_WaitGameplayEventToActor_ReturnValue;
	class UAbilityAsync_WaitGameplayEvent*        CallFunc_WaitGameplayEventToActor_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_51B[0x1];
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_4;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         Pad_53C[0x4];
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_549[0x7];
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_559[0x7];
	struct FHitResult                             K2Node_CustomEvent_Hit;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_9;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_649[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_10;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_HasAuthority_ReturnValue_3;
	uint8                                         Pad_72B[0x5];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_11;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_741[0x7];
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_751[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_12;
	ENetRole                                      CallFunc_GetLocalRole_ReturnValue_1;
	bool                                          CallFunc_IsRidingActor_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	bool                                          CallFunc_CanBePet_ReturnValue;
	uint8                                         Pad_765[0x3];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_13;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_771[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_14;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	uint8                                         Pad_789[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	uint8                                         Pad_794[0x4];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_6;
	uint8                                         Pad_7AC[0x4];
	struct FHitResult                             K2Node_Event_HitResult;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_89A[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_8A4[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_934[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	bool                                          CallFunc_TestIfValidForRidingAttempt_Success;
	uint8                                         Pad_96A[0x6];
	class UObject*                                CallFunc_TestIfValidForRidingAttempt_TargetObject;
	bool                                          CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage;
	uint8                                         Pad_979[0x7];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_15;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	uint8                                         Pad_991[0x7];
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_15;
};
static_assert(alignof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent) == 0x000010, "Wrong alignment on PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent");
static_assert(sizeof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent) == 0x0009B0, "Wrong size on PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, EntryPoint) == 0x000000, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_HasAuthority_ReturnValue) == 0x000029, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000030, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_HasAuthority_ReturnValue_1) == 0x000044, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_2) == 0x000058, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_HasAuthority_ReturnValue_2) == 0x000061, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_Event_Ridable_1) == 0x000068, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_Event_Ridable_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_Event_Ridable) == 0x000070, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_Event_Ridable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_3) == 0x000078, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_4) == 0x000080, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsFort_Pawn) == 0x000088, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000098, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_5) == 0x0000A8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetLocalRole_ReturnValue) == 0x0000B0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetLocalRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x0000B8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue) == 0x0000C4, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, Temp_struct_Variable) == 0x0000D0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_6) == 0x000180, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000188, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000190, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_2) == 0x000198, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_TargetObject) == 0x0001A0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_TargetObject' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_UseAltRidingMessage) == 0x0001A8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsRiding_Generic_Interafce) == 0x0001B0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsRiding_Generic_Interafce' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_3) == 0x0001C0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsActor) == 0x0001C8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_4) == 0x0001D0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_ToggleRiding_bChangedRiding) == 0x0001D1, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_ToggleRiding_bChangedRiding' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, Temp_struct_Variable_1) == 0x0001D8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_targetHealth) == 0x000288, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_targetHealth' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Name) == 0x000290, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Icon) == 0x0002B0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Icon' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Ridable_1) == 0x000370, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Ridable_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Ridable) == 0x000378, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Ridable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Character) == 0x000380, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_PrevMovementMode) == 0x000388, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_PreviousCustomMode) == 0x000389, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_StopRidingActor_ReturnValue) == 0x00038A, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_StopRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_2) == 0x00038B, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Payload) == 0x000390, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Payload_1) == 0x000440, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_3) == 0x0004F0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_7) == 0x0004F8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_StopRidingActor_ReturnValue_1) == 0x000500, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_StopRidingActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_WaitGameplayEventToActor_ReturnValue) == 0x000508, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_WaitGameplayEventToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_WaitGameplayEventToActor_ReturnValue_1) == 0x000510, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_WaitGameplayEventToActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_4) == 0x000518, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_5) == 0x000519, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, Temp_bool_Has_Been_Initd_Variable) == 0x00051A, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_4) == 0x00051C, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_8) == 0x000528, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000530, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x000540, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_6) == 0x000548, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_WaitGameplayTagAddToActor_ReturnValue_1) == 0x000550, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_WaitGameplayTagAddToActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_7) == 0x000558, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CustomEvent_Hit) == 0x000560, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_9) == 0x000640, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, Temp_bool_IsClosed_Variable) == 0x000648, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000650, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_10) == 0x000720, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_8) == 0x000728, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_9) == 0x000729, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_HasAuthority_ReturnValue_3) == 0x00072A, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_11) == 0x000730, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsFort_Pawn_2) == 0x000738, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_5) == 0x000740, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_AsCreature_Base_Ridable_Component) == 0x000748, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_AsCreature_Base_Ridable_Component' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_DynamicCast_bSuccess_6) == 0x000750, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_12) == 0x000758, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetLocalRole_ReturnValue_1) == 0x000760, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetLocalRole_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsRidingActor_ReturnValue) == 0x000761, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000762, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_10) == 0x000763, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_CanBePet_ReturnValue) == 0x000764, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_CanBePet_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_13) == 0x000768, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_11) == 0x000770, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000778, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_14) == 0x000780, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_12) == 0x000788, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x00078C, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetFortAbilitySystemComponent_ReturnValue_2) == 0x000798, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetFortAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_CreateDelegate_OutputDelegate_6) == 0x0007A0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, K2Node_Event_HitResult) == 0x0007B0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000890, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_bBlockingHit) == 0x000898, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_bInitialOverlap) == 0x000899, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_Time) == 0x00089C, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_Distance) == 0x0008A0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_Location) == 0x0008A8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_ImpactPoint) == 0x0008C0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_Normal) == 0x0008D8, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_ImpactNormal) == 0x0008F0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_PhysMat) == 0x000908, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_HitActor) == 0x000910, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_HitComponent) == 0x000918, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_HitBoneName) == 0x000920, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_BoneName) == 0x000924, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_HitItem) == 0x000928, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_ElementIndex) == 0x00092C, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_FaceIndex) == 0x000930, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_TraceStart) == 0x000938, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_BreakHitResult_TraceEnd) == 0x000950, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_13) == 0x000968, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_TestIfValidForRidingAttempt_Success) == 0x000969, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_TestIfValidForRidingAttempt_Success' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_TestIfValidForRidingAttempt_TargetObject) == 0x000970, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_TestIfValidForRidingAttempt_TargetObject' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage) == 0x000978, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetQuestManager_ReturnValue) == 0x000980, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_GetOwner_ReturnValue_15) == 0x000988, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_GetOwner_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_14) == 0x000990, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_WaitGameplayTagAddToActor_ReturnValue_2) == 0x000998, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_WaitGameplayTagAddToActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent, CallFunc_IsValid_ReturnValue_15) == 0x0009A0, "Member 'PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");

struct PlayerRiderComponent_C_GetJumpInfo final
{
public:
	class AActor*                                 TargetActor;
	class UActorComponent*                        TargetActorComponent;
	double                                        JumpAttach_GroundHeightMin;
	double                                        JumpAttach_GroundHeightBuffer;
	bool                                          UseAltRidingMessage;
	uint8                                         Pad_21[0x7];
	class UCreatureBaseNonRidableComponent_C*     CallFunc_GetComponentByClass_ReturnValue;
	class UCreatureBaseRidableComponent_C*        CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(PlayerRiderComponent_C_GetJumpInfo) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_GetJumpInfo");
static_assert(sizeof(PlayerRiderComponent_C_GetJumpInfo) == 0x000040, "Wrong size on PlayerRiderComponent_C_GetJumpInfo");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, TargetActor) == 0x000000, "Member 'PlayerRiderComponent_C_GetJumpInfo::TargetActor' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, TargetActorComponent) == 0x000008, "Member 'PlayerRiderComponent_C_GetJumpInfo::TargetActorComponent' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, JumpAttach_GroundHeightMin) == 0x000010, "Member 'PlayerRiderComponent_C_GetJumpInfo::JumpAttach_GroundHeightMin' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, JumpAttach_GroundHeightBuffer) == 0x000018, "Member 'PlayerRiderComponent_C_GetJumpInfo::JumpAttach_GroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, UseAltRidingMessage) == 0x000020, "Member 'PlayerRiderComponent_C_GetJumpInfo::UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'PlayerRiderComponent_C_GetJumpInfo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'PlayerRiderComponent_C_GetJumpInfo::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'PlayerRiderComponent_C_GetJumpInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetJumpInfo, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'PlayerRiderComponent_C_GetJumpInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct PlayerRiderComponent_C_GetRidingInfoFromTarget final
{
public:
	double                                        JumpAttachGroundHeightMin;
	double                                        JumpAttachGroundHeightBuffer;
	bool                                          UsesAltRidingMessage;
};
static_assert(alignof(PlayerRiderComponent_C_GetRidingInfoFromTarget) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_GetRidingInfoFromTarget");
static_assert(sizeof(PlayerRiderComponent_C_GetRidingInfoFromTarget) == 0x000018, "Wrong size on PlayerRiderComponent_C_GetRidingInfoFromTarget");
static_assert(offsetof(PlayerRiderComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightMin) == 0x000000, "Member 'PlayerRiderComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightMin' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightBuffer) == 0x000008, "Member 'PlayerRiderComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_GetRidingInfoFromTarget, UsesAltRidingMessage) == 0x000010, "Member 'PlayerRiderComponent_C_GetRidingInfoFromTarget::UsesAltRidingMessage' has a wrong offset!");

struct PlayerRiderComponent_C_HandleRidableFound final
{
public:
	struct FHitResult                             HitResult;
};
static_assert(alignof(PlayerRiderComponent_C_HandleRidableFound) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_HandleRidableFound");
static_assert(sizeof(PlayerRiderComponent_C_HandleRidableFound) == 0x0000E0, "Wrong size on PlayerRiderComponent_C_HandleRidableFound");
static_assert(offsetof(PlayerRiderComponent_C_HandleRidableFound, HitResult) == 0x000000, "Member 'PlayerRiderComponent_C_HandleRidableFound::HitResult' has a wrong offset!");

struct PlayerRiderComponent_C_HandleStartedRiding final
{
public:
	class URidableComponent*                      Ridable;
};
static_assert(alignof(PlayerRiderComponent_C_HandleStartedRiding) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_HandleStartedRiding");
static_assert(sizeof(PlayerRiderComponent_C_HandleStartedRiding) == 0x000008, "Wrong size on PlayerRiderComponent_C_HandleStartedRiding");
static_assert(offsetof(PlayerRiderComponent_C_HandleStartedRiding, Ridable) == 0x000000, "Member 'PlayerRiderComponent_C_HandleStartedRiding::Ridable' has a wrong offset!");

struct PlayerRiderComponent_C_HandleStoppedRiding final
{
public:
	class URidableComponent*                      Ridable;
};
static_assert(alignof(PlayerRiderComponent_C_HandleStoppedRiding) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_HandleStoppedRiding");
static_assert(sizeof(PlayerRiderComponent_C_HandleStoppedRiding) == 0x000008, "Wrong size on PlayerRiderComponent_C_HandleStoppedRiding");
static_assert(offsetof(PlayerRiderComponent_C_HandleStoppedRiding, Ridable) == 0x000000, "Member 'PlayerRiderComponent_C_HandleStoppedRiding::Ridable' has a wrong offset!");

struct PlayerRiderComponent_C_MountLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(PlayerRiderComponent_C_MountLanded) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_MountLanded");
static_assert(sizeof(PlayerRiderComponent_C_MountLanded) == 0x0000E0, "Wrong size on PlayerRiderComponent_C_MountLanded");
static_assert(offsetof(PlayerRiderComponent_C_MountLanded, Hit) == 0x000000, "Member 'PlayerRiderComponent_C_MountLanded::Hit' has a wrong offset!");

struct PlayerRiderComponent_C_MovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(PlayerRiderComponent_C_MovementModeChanged) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_MovementModeChanged");
static_assert(sizeof(PlayerRiderComponent_C_MovementModeChanged) == 0x000010, "Wrong size on PlayerRiderComponent_C_MovementModeChanged");
static_assert(offsetof(PlayerRiderComponent_C_MovementModeChanged, Character) == 0x000000, "Member 'PlayerRiderComponent_C_MovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_MovementModeChanged, PrevMovementMode) == 0x000008, "Member 'PlayerRiderComponent_C_MovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_MovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'PlayerRiderComponent_C_MovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct PlayerRiderComponent_C_RiderUIEndClient final
{
public:
	class AActor*                                 Ridable;
};
static_assert(alignof(PlayerRiderComponent_C_RiderUIEndClient) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_RiderUIEndClient");
static_assert(sizeof(PlayerRiderComponent_C_RiderUIEndClient) == 0x000008, "Wrong size on PlayerRiderComponent_C_RiderUIEndClient");
static_assert(offsetof(PlayerRiderComponent_C_RiderUIEndClient, Ridable) == 0x000000, "Member 'PlayerRiderComponent_C_RiderUIEndClient::Ridable' has a wrong offset!");

struct PlayerRiderComponent_C_RiderUIStartClient final
{
public:
	class FText                                   Name_0;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Icon;
	class AActor*                                 Ridable;
};
static_assert(alignof(PlayerRiderComponent_C_RiderUIStartClient) == 0x000010, "Wrong alignment on PlayerRiderComponent_C_RiderUIStartClient");
static_assert(sizeof(PlayerRiderComponent_C_RiderUIStartClient) == 0x0000F0, "Wrong size on PlayerRiderComponent_C_RiderUIStartClient");
static_assert(offsetof(PlayerRiderComponent_C_RiderUIStartClient, Name_0) == 0x000000, "Member 'PlayerRiderComponent_C_RiderUIStartClient::Name_0' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_RiderUIStartClient, Icon) == 0x000020, "Member 'PlayerRiderComponent_C_RiderUIStartClient::Icon' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_RiderUIStartClient, Ridable) == 0x0000E0, "Member 'PlayerRiderComponent_C_RiderUIStartClient::Ridable' has a wrong offset!");

struct PlayerRiderComponent_C_SetTargetHealth final
{
public:
	double                                        targetHealth_0;
};
static_assert(alignof(PlayerRiderComponent_C_SetTargetHealth) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_SetTargetHealth");
static_assert(sizeof(PlayerRiderComponent_C_SetTargetHealth) == 0x000008, "Wrong size on PlayerRiderComponent_C_SetTargetHealth");
static_assert(offsetof(PlayerRiderComponent_C_SetTargetHealth, targetHealth_0) == 0x000000, "Member 'PlayerRiderComponent_C_SetTargetHealth::targetHealth_0' has a wrong offset!");

struct PlayerRiderComponent_C_TestIfValidForRidingAttempt final
{
public:
	class UObject*                                Object;
	bool                                          Success;
	uint8                                         Pad_9[0x7];
	class UObject*                                TargetObject;
	bool                                          UseAltRidingMessage;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1B[0x5];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UActorComponent*                        CallFunc_GetJumpInfo_TargetActorComponent;
	double                                        CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin;
	double                                        CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer;
	bool                                          CallFunc_GetJumpInfo_UseAltRidingMessage;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_81[0x7];
	class UObject*                                K2Node_Select_Default;
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_9D[0x3];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GetOnlyLeaderInteraction_ReturnValue;
	uint8                                         Pad_A9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_BD[0x3];
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1;
	uint8                                         Pad_C4[0x4];
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_F9[0x7];
	double                                        CallFunc_BreakVector_X_2;
	double                                        CallFunc_BreakVector_Y_2;
	double                                        CallFunc_BreakVector_Z_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_133[0x5];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
};
static_assert(alignof(PlayerRiderComponent_C_TestIfValidForRidingAttempt) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_TestIfValidForRidingAttempt");
static_assert(sizeof(PlayerRiderComponent_C_TestIfValidForRidingAttempt) == 0x000148, "Wrong size on PlayerRiderComponent_C_TestIfValidForRidingAttempt");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, Object) == 0x000000, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::Object' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, Success) == 0x000008, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::Success' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, TargetObject) == 0x000010, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::TargetObject' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, UseAltRidingMessage) == 0x000018, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, Temp_bool_Variable) == 0x000019, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetJumpInfo_TargetActorComponent) == 0x000048, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetJumpInfo_TargetActorComponent' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin) == 0x000050, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer) == 0x000058, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetJumpInfo_UseAltRidingMessage) == 0x000060, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetJumpInfo_UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_X) == 0x000068, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Y) == 0x000070, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Z) == 0x000078, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, K2Node_Select_Default) == 0x000088, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetComponentByClass_ReturnValue) == 0x000090, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000098, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_IsValid_ReturnValue_2) == 0x00009C, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetOnlyLeaderInteraction_ReturnValue) == 0x0000A8, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetOnlyLeaderInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetConverterPawn_ReturnValue) == 0x0000B0, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_IsValid_ReturnValue_3) == 0x0000B8, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Not_PreBool_ReturnValue) == 0x0000B9, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000BA, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BooleanOR_ReturnValue) == 0x0000BB, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_IsValid_ReturnValue_4) == 0x0000BC, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1) == 0x0000C0, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_X_1) == 0x0000C8, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Y_1) == 0x0000D0, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Z_1) == 0x0000D8, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000E0, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_X_2) == 0x000100, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Y_2) == 0x000108, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BreakVector_Z_2) == 0x000110, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000118, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000120, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x000128, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000130, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BooleanAND_ReturnValue) == 0x000131, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_BooleanAND_ReturnValue_1) == 0x000132, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000138, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_TestIfValidForRidingAttempt, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x000140, "Member 'PlayerRiderComponent_C_TestIfValidForRidingAttempt::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");

struct PlayerRiderComponent_C_ToggleRiding final
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
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_41[0x7];
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_StopRidingActor_ReturnValue;
	bool                                          CallFunc_StartRidingActor_ReturnValue;
	uint8                                         Pad_53[0x5];
	class UControllingRiderComponent*             K2Node_DynamicCast_AsControlling_Rider_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
};
static_assert(alignof(PlayerRiderComponent_C_ToggleRiding) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_ToggleRiding");
static_assert(sizeof(PlayerRiderComponent_C_ToggleRiding) == 0x000068, "Wrong size on PlayerRiderComponent_C_ToggleRiding");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, PlayerPawn) == 0x000000, "Member 'PlayerRiderComponent_C_ToggleRiding::PlayerPawn' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, Target) == 0x000008, "Member 'PlayerRiderComponent_C_ToggleRiding::Target' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, ShouldRide) == 0x000010, "Member 'PlayerRiderComponent_C_ToggleRiding::ShouldRide' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, bChangedRiding) == 0x000011, "Member 'PlayerRiderComponent_C_ToggleRiding::bChangedRiding' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000018, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x000030, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000050, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_StopRidingActor_ReturnValue) == 0x000051, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_StopRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_StartRidingActor_ReturnValue) == 0x000052, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_StartRidingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_AsControlling_Rider_Component) == 0x000058, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_AsControlling_Rider_Component' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'PlayerRiderComponent_C_ToggleRiding::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, Temp_bool_Variable) == 0x000062, "Member 'PlayerRiderComponent_C_ToggleRiding::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000063, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_Not_PreBool_ReturnValue) == 0x000064, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, Temp_bool_Variable_1) == 0x000065, "Member 'PlayerRiderComponent_C_ToggleRiding::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRiding, CallFunc_Not_PreBool_ReturnValue_1) == 0x000066, "Member 'PlayerRiderComponent_C_ToggleRiding::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

struct PlayerRiderComponent_C_ToggleRidingOnServer final
{
public:
	class UObject*                                TargetObject;
	bool                                          UseAltRidingMessage;
};
static_assert(alignof(PlayerRiderComponent_C_ToggleRidingOnServer) == 0x000008, "Wrong alignment on PlayerRiderComponent_C_ToggleRidingOnServer");
static_assert(sizeof(PlayerRiderComponent_C_ToggleRidingOnServer) == 0x000010, "Wrong size on PlayerRiderComponent_C_ToggleRidingOnServer");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRidingOnServer, TargetObject) == 0x000000, "Member 'PlayerRiderComponent_C_ToggleRidingOnServer::TargetObject' has a wrong offset!");
static_assert(offsetof(PlayerRiderComponent_C_ToggleRidingOnServer, UseAltRidingMessage) == 0x000008, "Member 'PlayerRiderComponent_C_ToggleRidingOnServer::UseAltRidingMessage' has a wrong offset!");

}
