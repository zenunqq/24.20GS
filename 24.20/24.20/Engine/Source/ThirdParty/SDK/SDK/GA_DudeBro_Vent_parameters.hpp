#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_DudeBro_Vent_C_ActuallyCleanPlayerUp final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_22[0x2];
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_ActuallyCleanPlayerUp");
static_assert(sizeof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp) == 0x000030, "Wrong size on GA_DudeBro_Vent_C_ActuallyCleanPlayerUp");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_IsServer_ReturnValue) == 0x000021, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FGameplayEffectContextHandle           CallFunc_MakeEffectContext_ReturnValue;
	struct FGameplayEventData                     K2Node_Event_EventData;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_FB[0x5];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_131[0x7];
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	uint8                                         Pad_142[0x6];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	class UFortMovementComp_CharacterAthena*      K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_15B[0x1];
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_Athena_CheckCreativeMode_CanCompleteQuest;
	uint8                                         Pad_172[0x6];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_181[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_199[0x3];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1AA[0x2];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_1;
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComponent;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags;
	uint8                                         Pad_2D2[0x6];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_2E1[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
	uint8                                         Pad_2EC[0x4];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_31C[0x4];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_331[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	uint8                                         Pad_351[0x7];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_361[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_394[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_3A1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	uint8                                         Pad_3B9[0x3];
	float                                         CallFunc_SetInVortex_UpwardLaunchVelocity_ImplicitCast;
	double                                        K2Node_VariableSet_UpwardLaunchVelocity_ImplicitCast;
	float                                         CallFunc_SetInVortex_GravityFloorAltitude_ImplicitCast;
};
static_assert(alignof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent");
static_assert(sizeof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent) == 0x0003D0, "Wrong size on GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, EntryPoint) == 0x000000, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000010, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000018, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_MakeEffectContext_ReturnValue) == 0x000020, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_MakeEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_Event_EventData) == 0x000038, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000E8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000F0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0000F9, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue) == 0x0000FA, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000100, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_X) == 0x000118, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_Y) == 0x000120, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_Z) == 0x000128, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_1) == 0x000130, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_Character) == 0x000138, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_PrevMovementMode) == 0x000140, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_PreviousCustomMode) == 0x000141, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetMovementComponent_ReturnValue) == 0x000148, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena) == 0x000150, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsServer_ReturnValue) == 0x000159, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00015A, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Array_Length_ReturnValue) == 0x00015C, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000160, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetGameState_ReturnValue) == 0x000168, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_2) == 0x000170, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckCreativeMode_CanCompleteQuest) == 0x000171, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckCreativeMode_CanCompleteQuest' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetQuestManager_ReturnValue) == 0x000178, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_Event_bWasCancelled) == 0x000180, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000188, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000198, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BooleanAND_ReturnValue) == 0x0001A9, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001AC, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_HitComponent) == 0x0001B8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_OtherActor) == 0x0001C0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_OtherComp) == 0x0001C8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_NormalImpulse) == 0x0001D0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_Hit) == 0x0001E8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsBuilding_Actor) == 0x0002C8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess_2) == 0x0002D0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags) == 0x0002D1, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue_2) == 0x0002D8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_3) == 0x0002E0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1) == 0x0002E4, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0002F0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000310, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000320, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000330, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue_3) == 0x000338, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x000340, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000350, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000358, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_4) == 0x000360, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_MakeVector_ReturnValue) == 0x000368, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000380, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000388, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000398, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess_3) == 0x0003A0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_self_CastInput_2) == 0x0003A8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x0003B8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_SetInVortex_UpwardLaunchVelocity_ImplicitCast) == 0x0003BC, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_SetInVortex_UpwardLaunchVelocity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_VariableSet_UpwardLaunchVelocity_ImplicitCast) == 0x0003C0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_VariableSet_UpwardLaunchVelocity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_SetInVortex_GravityFloorAltitude_ImplicitCast) == 0x0003C8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_SetInVortex_GravityFloorAltitude_ImplicitCast' has a wrong offset!");

struct GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_DudeBro_Vent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_DudeBro_Vent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DudeBro_Vent_C_K2_OnEndAbility");
static_assert(sizeof(GA_DudeBro_Vent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DudeBro_Vent_C_K2_OnEndAbility");
static_assert(offsetof(GA_DudeBro_Vent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DudeBro_Vent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0 final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0");
static_assert(sizeof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0) == 0x000010, "Wrong size on GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, Character) == 0x000000, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::Character' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, PrevMovementMode) == 0x000008, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, PreviousCustomMode) == 0x000009, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::PreviousCustomMode' has a wrong offset!");

struct GA_DudeBro_Vent_C_PlayerCapsuleHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_DudeBro_Vent_C_PlayerCapsuleHit) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_PlayerCapsuleHit");
static_assert(sizeof(GA_DudeBro_Vent_C_PlayerCapsuleHit) == 0x000110, "Wrong size on GA_DudeBro_Vent_C_PlayerCapsuleHit");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, HitComponent) == 0x000000, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::HitComponent' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, OtherActor) == 0x000008, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::OtherActor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, OtherComp) == 0x000010, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::OtherComp' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, NormalImpulse) == 0x000018, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, Hit) == 0x000030, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::Hit' has a wrong offset!");

}
