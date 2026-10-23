#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_24[0x4];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	struct FGameplayEventData                     K2Node_Event_EventData;
	TArray<class FName>                           CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames;
	bool                                          CallFunc_ApplySourcePropertyOverrides_ReturnValue;
	uint8                                         Pad_109[0x7];
	double                                        K2Node_CustomEvent_Duration;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility");
static_assert(sizeof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility) == 0x000128, "Wrong size on GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, K2Node_Event_EventData) == 0x000048, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames) == 0x0000F8, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_ApplySourcePropertyOverrides_ReturnValue) == 0x000108, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_ApplySourcePropertyOverrides_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, K2Node_CustomEvent_Duration) == 0x000110, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000118, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000120, "Member 'GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer final
{
public:
	double                                        Duration;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer");
static_assert(sizeof(GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer) == 0x000008, "Wrong size on GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer, Duration) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer::Duration' has a wrong offset!");

struct GAT_Creative_TriggeredAbility_C_IsPropertyOverridden final
{
public:
	class FName                                   PropertyName;
	bool                                          bResult;
	bool                                          CallFunc_Array_Contains_ReturnValue;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_C_IsPropertyOverridden) == 0x000004, "Wrong alignment on GAT_Creative_TriggeredAbility_C_IsPropertyOverridden");
static_assert(sizeof(GAT_Creative_TriggeredAbility_C_IsPropertyOverridden) == 0x000008, "Wrong size on GAT_Creative_TriggeredAbility_C_IsPropertyOverridden");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_IsPropertyOverridden, PropertyName) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_C_IsPropertyOverridden::PropertyName' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_IsPropertyOverridden, bResult) == 0x000004, "Member 'GAT_Creative_TriggeredAbility_C_IsPropertyOverridden::bResult' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_C_IsPropertyOverridden, CallFunc_Array_Contains_ReturnValue) == 0x000005, "Member 'GAT_Creative_TriggeredAbility_C_IsPropertyOverridden::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

}
