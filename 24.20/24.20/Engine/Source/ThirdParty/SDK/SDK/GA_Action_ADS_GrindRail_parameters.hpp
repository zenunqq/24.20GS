#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate;
	float                                         K2Node_CustomEvent_TimeHeld_1;
	float                                         Temp_real_Variable;
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x3];
	TDelegate<void(float TimeWaited)>             K2Node_CreateDelegate_OutputDelegate_1;
	float                                         K2Node_CustomEvent_TimeWaited;
	float                                         Temp_real_Variable_1;
	class UAbilityTask_WaitInputPress*            CallFunc_WaitInputPress_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_41[0x3];
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate_2;
	float                                         K2Node_CustomEvent_TimeHeld;
	float                                         Temp_real_Variable_2;
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_62[0x2];
	TDelegate<void(float TimeWaited)>             K2Node_CreateDelegate_OutputDelegate_3;
	class UAbilityTask_WaitInputPress*            CallFunc_WaitInputPress_ReturnValue_1;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_CA[0x6];
	class UBP_GrindingComponent_C*                CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_D9[0x7];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	float                                         Temp_real_Variable_3;
	float                                         K2Node_CustomEvent_TimeWaited_1;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail) == 0x000008, "Wrong alignment on GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail) == 0x000130, "Wrong size on GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, EntryPoint) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CustomEvent_TimeHeld_1) == 0x000010, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CustomEvent_TimeHeld_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, Temp_real_Variable) == 0x000014, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_WaitInputRelease_ReturnValue) == 0x000018, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_WaitInputRelease_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CustomEvent_TimeWaited) == 0x000030, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CustomEvent_TimeWaited' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, Temp_real_Variable_1) == 0x000034, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_WaitInputPress_ReturnValue) == 0x000038, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_WaitInputPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CustomEvent_TimeHeld) == 0x000050, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CustomEvent_TimeHeld' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, Temp_real_Variable_2) == 0x000054, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_WaitInputRelease_ReturnValue_1) == 0x000058, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_WaitInputRelease_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_Event_bWasCancelled) == 0x000061, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_WaitInputPress_ReturnValue_1) == 0x000070, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_WaitInputPress_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_GetActorInfo_ReturnValue) == 0x000078, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000C0, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_IsValid_ReturnValue_3) == 0x0000C9, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D0, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, CallFunc_IsValid_ReturnValue_4) == 0x0000D8, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_Event_ActorInfo) == 0x0000E0, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, Temp_real_Variable_3) == 0x000128, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail, K2Node_CustomEvent_TimeWaited_1) == 0x00012C, "Member 'GA_Action_ADS_GrindRail_C_ExecuteUbergraph_GA_Action_ADS_GrindRail::K2Node_CustomEvent_TimeWaited_1' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Action_ADS_GrindRail_C_K2_OnEndAbility");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Action_ADS_GrindRail_C_K2_OnEndAbility");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37 final
{
public:
	float                                         TimeWaited;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37) == 0x000004, "Wrong alignment on GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37) == 0x000004, "Wrong size on GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37, TimeWaited) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_OnPress_01A3E1CF477913F9711F7E90D15EAD37::TimeWaited' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB final
{
public:
	float                                         TimeWaited;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB) == 0x000004, "Wrong alignment on GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB) == 0x000004, "Wrong size on GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB, TimeWaited) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_OnPress_C7DC18CB4B236FAE1117CE939CBC57AB::TimeWaited' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29 final
{
public:
	float                                         TimeHeld;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29) == 0x000004, "Wrong alignment on GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29) == 0x000004, "Wrong size on GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29, TimeHeld) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_OnRelease_E541412844A2A5A5D2D062A55EEC6C29::TimeHeld' has a wrong offset!");

struct GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922 final
{
public:
	float                                         TimeHeld;
};
static_assert(alignof(GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922) == 0x000004, "Wrong alignment on GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922");
static_assert(sizeof(GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922) == 0x000004, "Wrong size on GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922");
static_assert(offsetof(GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922, TimeHeld) == 0x000000, "Member 'GA_Action_ADS_GrindRail_C_OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922::TimeHeld' has a wrong offset!");

}
