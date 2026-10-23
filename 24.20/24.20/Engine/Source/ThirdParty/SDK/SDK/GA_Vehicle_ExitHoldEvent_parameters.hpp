#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC) == 0x000008, "Wrong alignment on GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC");
static_assert(sizeof(GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC) == 0x0000B0, "Wrong size on GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC, Payload) == 0x000000, "Member 'GA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC::Payload' has a wrong offset!");

struct GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69 final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69) == 0x000008, "Wrong alignment on GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69");
static_assert(sizeof(GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69) == 0x0000B0, "Wrong size on GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69, Payload) == 0x000000, "Member 'GA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69::Payload' has a wrong offset!");

struct GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayEventData                     Temp_struct_Variable;
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_191[0x3];
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;
	struct FGameplayEventData                     Temp_struct_Variable_1;
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_309[0x7];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_362[0x6];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_45D[0x3];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
};
static_assert(alignof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent) == 0x000008, "Wrong alignment on GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent");
static_assert(sizeof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent) == 0x000578, "Wrong size on GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, EntryPoint) == 0x000000, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, Temp_struct_Variable) == 0x000008, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000B8, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0000C0, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000194, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_CustomEvent_Payload) == 0x0001A0, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, Temp_struct_Variable_1) == 0x000250, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x000300, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_IsValid_ReturnValue_1) == 0x000308, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_GetActorInfo_ReturnValue) == 0x000310, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000358, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_DynamicCast_bSuccess) == 0x000360, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_K2_CommitAbility_ReturnValue) == 0x000361, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000368, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000390, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_CustomEvent_Payload_1) == 0x0003A0, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000450, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_Event_bWasCancelled) == 0x00045C, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000460, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent, K2Node_Event_ActorInfo) == 0x000530, "Member 'GA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent::K2Node_Event_ActorInfo' has a wrong offset!");

struct GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility");
static_assert(sizeof(GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility");
static_assert(offsetof(GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
