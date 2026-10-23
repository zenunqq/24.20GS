#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_36[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_131[0x7];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_15C[0x4];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_175[0x3];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	uint8                                         Pad_18A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19D[0x3];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_1AA[0x6];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_3;
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_205[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_3;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_215[0x3];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_226[0x2];
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;
};
static_assert(alignof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent) == 0x000008, "Wrong alignment on GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent");
static_assert(sizeof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent) == 0x000230, "Wrong size on GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, EntryPoint) == 0x000000, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, Temp_int_Array_Index_Variable) == 0x000030, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, Temp_bool_Has_Been_Initd_Variable) == 0x000034, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_Event_bWasCancelled) == 0x000035, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000038, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000040, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CustomEvent_Hit) == 0x000048, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_AsFort_Pawn) == 0x000128, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000138, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000140, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000148, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue) == 0x000159, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue_1) == 0x00015A, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x00015B, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x000160, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000168, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue_2) == 0x000174, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000178, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000180, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_DynamicCast_bSuccess_2) == 0x000188, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000189, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_CreateDelegate_OutputDelegate_4) == 0x00018C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000198, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_BooleanAND_ReturnValue) == 0x000199, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00019A, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_BooleanAND_ReturnValue_1) == 0x00019B, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, Temp_bool_Variable) == 0x00019C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_WaitGameplayTagAdd_ReturnValue_2) == 0x0001A0, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_WaitGameplayTagAdd_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue_3) == 0x0001A8, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x0001A9, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, K2Node_Event_ActorInfo) == 0x0001B0, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_WaitGameplayTagAdd_ReturnValue_3) == 0x0001F8, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_WaitGameplayTagAdd_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Add_ReturnValue) == 0x000200, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue_4) == 0x000204, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Add_ReturnValue_1) == 0x000208, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Add_ReturnValue_2) == 0x00020C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Add_ReturnValue_3) == 0x000210, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, Temp_bool_IsClosed_Variable) == 0x000214, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Get_Item) == 0x000218, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Array_Length_ReturnValue) == 0x000220, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Less_IntInt_ReturnValue) == 0x000224, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_IsValid_ReturnValue_5) == 0x000225, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Delay_Duration_ImplicitCast) == 0x000228, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent, CallFunc_Delay_Duration_ImplicitCast_1) == 0x00022C, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

struct GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded) == 0x000008, "Wrong alignment on GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded");
static_assert(sizeof(GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded) == 0x0000E0, "Wrong size on GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded");
static_assert(offsetof(GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded, Hit) == 0x000000, "Member 'GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded::Hit' has a wrong offset!");

}
