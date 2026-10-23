#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FGameplayEventData                     K2Node_Event_EventData;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_BC[0x4];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_171[0x7];
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");
static_assert(sizeof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn) == 0x000180, "Wrong size on GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, EntryPoint) == 0x000000, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, K2Node_Event_EventData) == 0x000008, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000B8, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, K2Node_MakeStruct_GameplayEventData) == 0x0000C0, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000170, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000178, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
