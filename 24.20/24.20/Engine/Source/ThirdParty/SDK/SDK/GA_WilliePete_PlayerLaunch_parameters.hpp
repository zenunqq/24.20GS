#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_WilliePete_PlayerLaunch_C_ActorHit final
{
public:
	class AActor*                                 SelfActor;
	class AActor*                                 OtherActor;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_ActorHit) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_ActorHit");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_ActorHit) == 0x000108, "Wrong size on GA_WilliePete_PlayerLaunch_C_ActorHit");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ActorHit, SelfActor) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_ActorHit::SelfActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ActorHit, OtherActor) == 0x000008, "Member 'GA_WilliePete_PlayerLaunch_C_ActorHit::OtherActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ActorHit, NormalImpulse) == 0x000010, "Member 'GA_WilliePete_PlayerLaunch_C_ActorHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ActorHit, Hit) == 0x000028, "Member 'GA_WilliePete_PlayerLaunch_C_ActorHit::Hit' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure final
{
public:
	class AActor*                                 HitActor;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	class AAthenaBarrierObjective*                K2Node_DynamicCast_AsAthena_Barrier_Objective;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class AAthena_Prop_ParentBuildingContainerBlueprint_C* K2Node_DynamicCast_AsAthena_Prop_Parent_Building_Container_Blueprint;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_39[0x7];
	class ABuildingProp*                          K2Node_DynamicCast_AsBuilding_Prop;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_49[0x7];
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure) == 0x000060, "Wrong size on GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, HitActor) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::HitActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000010, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_AsAthena_Barrier_Objective) == 0x000018, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_AsAthena_Barrier_Objective' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000024, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_AsAthena_Prop_Parent_Building_Container_Blueprint) == 0x000030, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_AsAthena_Prop_Parent_Building_Container_Blueprint' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_AsBuilding_Prop) == 0x000040, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_AsBuilding_Prop' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_AsBuilding_Actor) == 0x000050, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, K2Node_DynamicCast_bSuccess_3) == 0x000058, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure, CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags) == 0x000059, "Member 'GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure::CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_End_Skydive final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_End_Skydive) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_End_Skydive");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_End_Skydive) == 0x0000E0, "Wrong size on GA_WilliePete_PlayerLaunch_C_End_Skydive");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_End_Skydive, Hit) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_End_Skydive::Hit' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch final
{
public:
	int32                                         EntryPoint;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_4;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_3;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_2;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_2;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_1;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_3;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_4;
	struct FGameplayTag                           Temp_struct_Variable;
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         Pad_64[0x4];
	class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue;
	bool                                          CallFunc_EquipBestWeapon_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	uint8                                         Pad_73[0x1];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_5;
	struct FHitResult                             K2Node_CustomEvent_Hit_1;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_GetIsHoldingObject_ReturnValue;
	uint8                                         Pad_162[0x2];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_6;
	uint8                                         Pad_18C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AB_HidingProp_WilliePete_C*             K2Node_DynamicCast_AsB_Hiding_Prop_Willie_Pete;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_2C1[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_2D1[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	bool                                          CallFunc_IsDBNO_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_2EE[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	uint8                                         Pad_2FC[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_315[0x3];
	class AActor*                                 K2Node_CustomEvent_SelfActor;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_8;
	uint8                                         Pad_42C[0x4];
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
	float                                         CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch) == 0x000490, "Wrong size on GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, EntryPoint) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag_4) == 0x000004, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag_4' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag_3) == 0x000014, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag_3' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag_2) == 0x000024, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag_2' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag_1) == 0x000034, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag) == 0x000044, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, Temp_struct_Variable) == 0x000054, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_5) == 0x000058, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_PlayMontageAndWaitNotify_ReturnValue) == 0x000068, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_PlayMontageAndWaitNotify_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_EquipBestWeapon_ReturnValue) == 0x000070, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_EquipBestWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_IsDBNO_ReturnValue) == 0x000072, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000074, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NotifyTag_5) == 0x00007C, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NotifyTag_5' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_Hit_1) == 0x000080, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_Hit_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_K2_CommitAbility_ReturnValue) == 0x000160, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetIsHoldingObject_ReturnValue) == 0x000161, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetIsHoldingObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetValueAtLevel_ReturnValue) == 0x000164, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_MakeVector_ReturnValue) == 0x000168, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_6) == 0x000180, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BreakVector_X) == 0x0001A8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BreakVector_Y) == 0x0001B0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BreakVector_Z) == 0x0001B8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0001C0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetGrantedByEffectContext_ReturnValue) == 0x000290, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetGrantedByEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x0002A8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0002B0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_DynamicCast_AsB_Hiding_Prop_Willie_Pete) == 0x0002B8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_DynamicCast_AsB_Hiding_Prop_Willie_Pete' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_DynamicCast_bSuccess) == 0x0002C0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0002C8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_DynamicCast_bSuccess_1) == 0x0002D0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0002D8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x0002E0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x0002E8, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_IsDBNO_ReturnValue_1) == 0x0002EC, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_IsDBNO_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_Not_PreBool_ReturnValue) == 0x0002ED, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_7) == 0x0002F0, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000300, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000308, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_IsValid_ReturnValue_1) == 0x000310, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_IsValid_ReturnValue_2) == 0x000311, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000312, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000313, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_BooleanOR_ReturnValue) == 0x000314, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_SelfActor) == 0x000318, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_OtherActor) == 0x000320, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_NormalImpulse) == 0x000328, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CustomEvent_Hit) == 0x000340, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_CreateDelegate_OutputDelegate_8) == 0x000420, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000430, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, K2Node_Event_ActorInfo) == 0x000438, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_MakeVector_Z_ImplicitCast) == 0x000480, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch, CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast) == 0x000488, "Member 'GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch::CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62 final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62) == 0x000004, "Wrong size on GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62, NotifyTag) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62::NotifyTag' has a wrong offset!");

struct GA_WilliePete_PlayerLaunch_C_StructureTraceLoop final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	TArray<class AActor*>                         Temp_object_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_24[0x4];
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	TArray<struct FHitResult>                     CallFunc_CapsuleTraceMultiForObjects_OutHits;
	bool                                          CallFunc_CapsuleTraceMultiForObjects_ReturnValue;
	uint8                                         Pad_79[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FHitResult                             CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_163[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_16C[0x4];
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
	uint8                                         Pad_1FC[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop) == 0x000008, "Wrong alignment on GA_WilliePete_PlayerLaunch_C_StructureTraceLoop");
static_assert(sizeof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop) == 0x000238, "Wrong size on GA_WilliePete_PlayerLaunch_C_StructureTraceLoop");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, Temp_object_Variable) == 0x000010, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, K2Node_MakeArray_Array) == 0x000028, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_CapsuleTraceMultiForObjects_OutHits) == 0x000068, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_CapsuleTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_CapsuleTraceMultiForObjects_ReturnValue) == 0x000078, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_CapsuleTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_Array_Get_Item) == 0x000080, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_Less_IntInt_ReturnValue) == 0x000160, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_bBlockingHit) == 0x000161, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_bInitialOverlap) == 0x000162, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_Time) == 0x000164, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_Distance) == 0x000168, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_Location) == 0x000170, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_ImpactPoint) == 0x000188, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_Normal) == 0x0001A0, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_ImpactNormal) == 0x0001B8, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_PhysMat) == 0x0001D0, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_HitActor) == 0x0001D8, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_HitComponent) == 0x0001E0, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_HitBoneName) == 0x0001E8, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_BoneName) == 0x0001EC, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_HitItem) == 0x0001F0, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_ElementIndex) == 0x0001F4, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_FaceIndex) == 0x0001F8, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_TraceStart) == 0x000200, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BreakHitResult_TraceEnd) == 0x000218, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_WilliePete_PlayerLaunch_C_StructureTraceLoop, CallFunc_BooleanAND_ReturnValue) == 0x000230, "Member 'GA_WilliePete_PlayerLaunch_C_StructureTraceLoop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
