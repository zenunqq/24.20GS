#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_15[0x3];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2D[0x3];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3A[0x6];
	class UControllingRiderComponent*             CallFunc_GetComponentByClass_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_52[0x6];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_61[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_72[0x6];
	class UControllingRiderComponent*             CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_81[0x7];
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_92[0x6];
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_A1[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_B1[0x7];
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_C2[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_D1[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_129[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_135[0x3];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_12;
};
static_assert(alignof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint) == 0x000008, "Wrong alignment on GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint");
static_assert(sizeof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint) == 0x000148, "Wrong size on GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, EntryPoint) == 0x000000, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_Event_bWasCancelled) == 0x000014, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_AsFort_Pawn) == 0x000030, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000048, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_3) == 0x000051, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000058, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000068, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_4) == 0x000070, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_5) == 0x000071, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000078, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_6) == 0x000080, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_AsCreature_Base_Ridable_Component) == 0x000088, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_AsCreature_Base_Ridable_Component' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_7) == 0x000091, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_AsCreature_Base_Ridable_Component_1) == 0x000098, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_AsCreature_Base_Ridable_Component_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetOwner_ReturnValue) == 0x0000A8, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_8) == 0x0000B0, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_AsCreature_Base_Ridable_Component_2) == 0x0000B8, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_AsCreature_Base_Ridable_Component_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_9) == 0x0000C1, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetOwner_ReturnValue_1) == 0x0000C8, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_10) == 0x0000D0, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0000D8, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, K2Node_Event_ActorInfo) == 0x0000E0, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_11) == 0x000128, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_Array_Get_Item) == 0x000130, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000138, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint, CallFunc_IsValid_ReturnValue_12) == 0x000140, "Member 'GA_Riding_Player_Sprint_C_ExecuteUbergraph_GA_Riding_Player_Sprint::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");

struct GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Riding_Player_Sprint_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Riding_Player_Sprint_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Riding_Player_Sprint_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Riding_Player_Sprint_C_K2_OnEndAbility");
static_assert(sizeof(GA_Riding_Player_Sprint_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Riding_Player_Sprint_C_K2_OnEndAbility");
static_assert(offsetof(GA_Riding_Player_Sprint_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Riding_Player_Sprint_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
