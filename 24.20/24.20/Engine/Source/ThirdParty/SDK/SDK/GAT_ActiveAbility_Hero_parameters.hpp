#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent final
{
public:
	bool                                          Passed;
	bool                                          CallFunc_K2_CheckAbilityCooldown_ReturnValue;
	bool                                          CallFunc_K2_CheckAbilityCost_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent) == 0x000001, "Wrong alignment on GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent");
static_assert(sizeof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent) == 0x000005, "Wrong size on GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent, Passed) == 0x000000, "Member 'GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent::Passed' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent, CallFunc_K2_CheckAbilityCooldown_ReturnValue) == 0x000001, "Member 'GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent::CallFunc_K2_CheckAbilityCooldown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent, CallFunc_K2_CheckAbilityCost_ReturnValue) == 0x000002, "Member 'GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent::CallFunc_K2_CheckAbilityCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_ActiveAbility_Hero_C_CommitAbilityWithEvent::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

struct GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_K2_CommitAbilityCooldown_ReturnValue;
	uint8                                         Pad_15[0x3];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_Array_Get_Item;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero) == 0x000008, "Wrong alignment on GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero");
static_assert(sizeof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero) == 0x000040, "Wrong size on GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, EntryPoint) == 0x000000, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, K2Node_Event_bWasCancelled) == 0x00000C, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_K2_CommitAbilityCooldown_ReturnValue) == 0x000014, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_K2_CommitAbilityCooldown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_Array_Get_Item) == 0x000020, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'GAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown final
{
public:
	double                                        Energy_Cost;
	bool                                          Adjust_Cooldown;
	uint8                                         Pad_9[0x7];
	double                                        Cooldown_Increment;
	TArray<struct FActiveGameplayEffectHandle>    Active_Cooldown_Modifiers_0;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingSpec_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_49[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_6C[0x4];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingSpec_ReturnValue_1;
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1;
};
static_assert(alignof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown) == 0x000008, "Wrong alignment on GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown");
static_assert(sizeof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown) == 0x0000A0, "Wrong size on GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, Energy_Cost) == 0x000000, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::Energy_Cost' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, Adjust_Cooldown) == 0x000008, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::Adjust_Cooldown' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, Cooldown_Increment) == 0x000010, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::Cooldown_Increment' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, Active_Cooldown_Modifiers_0) == 0x000018, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::Active_Cooldown_Modifiers_0' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_IsValidClass_ReturnValue) == 0x000030, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_MakeOutgoingSpec_ReturnValue) == 0x000038, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_MakeOutgoingSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000050, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000060, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_MakeOutgoingSpec_ReturnValue_1) == 0x000070, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_MakeOutgoingSpec_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1) == 0x000080, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1) == 0x000090, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x000098, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1) == 0x00009C, "Member 'GAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1' has a wrong offset!");

struct GAT_ActiveAbility_Hero_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAT_ActiveAbility_Hero_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAT_ActiveAbility_Hero_C_K2_OnEndAbility");
static_assert(sizeof(GAT_ActiveAbility_Hero_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAT_ActiveAbility_Hero_C_K2_OnEndAbility");
static_assert(offsetof(GAT_ActiveAbility_Hero_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAT_ActiveAbility_Hero_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
