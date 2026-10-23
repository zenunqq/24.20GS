#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_5[0x3];
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate;
	float                                         K2Node_CustomEvent_TimeHeld_1;
	float                                         Temp_real_Variable;
	uint8                                         Pad_1C[0x4];
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x3];
	TDelegate<void(float TimeWaited)>             K2Node_CreateDelegate_OutputDelegate_1;
	float                                         K2Node_CustomEvent_TimeWaited;
	float                                         Temp_real_Variable_1;
	class UAbilityTask_WaitInputPress*            CallFunc_WaitInputPress_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_49[0x3];
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate_2;
	float                                         K2Node_CustomEvent_TimeHeld;
	float                                         Temp_real_Variable_2;
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_6A[0x2];
	TDelegate<void(float TimeWaited)>             K2Node_CreateDelegate_OutputDelegate_3;
	class UAbilityTask_WaitInputPress*            CallFunc_WaitInputPress_ReturnValue_1;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_D2[0x6];
	class UBP_GrindingComponent_C*                CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_E1[0x7];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	float                                         Temp_real_Variable_3;
	float                                         K2Node_CustomEvent_TimeWaited_1;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail) == 0x000008, "Wrong alignment on GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail) == 0x000140, "Wrong size on GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, EntryPoint) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CustomEvent_TimeHeld_1) == 0x000014, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CustomEvent_TimeHeld_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, Temp_real_Variable) == 0x000018, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_WaitInputRelease_ReturnValue) == 0x000020, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_WaitInputRelease_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CustomEvent_TimeWaited) == 0x000038, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CustomEvent_TimeWaited' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, Temp_real_Variable_1) == 0x00003C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_WaitInputPress_ReturnValue) == 0x000040, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_WaitInputPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CreateDelegate_OutputDelegate_2) == 0x00004C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CustomEvent_TimeHeld) == 0x000058, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CustomEvent_TimeHeld' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, Temp_real_Variable_2) == 0x00005C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_WaitInputRelease_ReturnValue_1) == 0x000060, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_WaitInputRelease_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_Event_bWasCancelled) == 0x000069, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CreateDelegate_OutputDelegate_3) == 0x00006C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_WaitInputPress_ReturnValue_1) == 0x000078, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_WaitInputPress_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_GetActorInfo_ReturnValue) == 0x000080, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000C8, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_IsValid_ReturnValue_3) == 0x0000D1, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D8, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_IsValid_ReturnValue_4) == 0x0000E0, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_Event_ActorInfo) == 0x0000E8, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, Temp_real_Variable_3) == 0x000130, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, K2Node_CustomEvent_TimeWaited_1) == 0x000134, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::K2Node_CustomEvent_TimeWaited_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000138, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_Not_PreBool_ReturnValue_1) == 0x000139, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_BooleanAND_ReturnValue) == 0x00013A, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_K2_HasAuthority_ReturnValue) == 0x00013B, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail, CallFunc_BooleanOR_ReturnValue) == 0x00013C, "Member 'GA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Action_Sprint_GrindRail_C_K2_OnEndAbility");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Action_Sprint_GrindRail_C_K2_OnEndAbility");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E final
{
public:
	float                                         TimeWaited;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E) == 0x000004, "Wrong alignment on GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E) == 0x000004, "Wrong size on GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E, TimeWaited) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E::TimeWaited' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD final
{
public:
	float                                         TimeWaited;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD) == 0x000004, "Wrong alignment on GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD) == 0x000004, "Wrong size on GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD, TimeWaited) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD::TimeWaited' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19 final
{
public:
	float                                         TimeHeld;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19) == 0x000004, "Wrong alignment on GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19) == 0x000004, "Wrong size on GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19, TimeHeld) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19::TimeHeld' has a wrong offset!");

struct GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2 final
{
public:
	float                                         TimeHeld;
};
static_assert(alignof(GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2) == 0x000004, "Wrong alignment on GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2");
static_assert(sizeof(GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2) == 0x000004, "Wrong size on GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2");
static_assert(offsetof(GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2, TimeHeld) == 0x000000, "Member 'GA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2::TimeHeld' has a wrong offset!");

}
