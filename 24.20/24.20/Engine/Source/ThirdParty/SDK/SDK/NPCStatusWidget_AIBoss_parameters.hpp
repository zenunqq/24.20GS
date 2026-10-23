#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration final
{
public:
	double                                        StatusWidgetVisibleDuration_0;
};
static_assert(alignof(NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration) == 0x000008, "Wrong alignment on NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration");
static_assert(sizeof(NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration) == 0x000008, "Wrong size on NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration, StatusWidgetVisibleDuration_0) == 0x000000, "Member 'NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration::StatusWidgetVisibleDuration_0' has a wrong offset!");

struct NPCStatusWidget_AIBoss_C_EventUpdateStatus final
{
public:
	double                                        Health;
	double                                        Shield;
	double                                        MaxHealth;
	double                                        MaxShield_0;
	bool                                          ShowShield;
};
static_assert(alignof(NPCStatusWidget_AIBoss_C_EventUpdateStatus) == 0x000008, "Wrong alignment on NPCStatusWidget_AIBoss_C_EventUpdateStatus");
static_assert(sizeof(NPCStatusWidget_AIBoss_C_EventUpdateStatus) == 0x000028, "Wrong size on NPCStatusWidget_AIBoss_C_EventUpdateStatus");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_EventUpdateStatus, Health) == 0x000000, "Member 'NPCStatusWidget_AIBoss_C_EventUpdateStatus::Health' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_EventUpdateStatus, Shield) == 0x000008, "Member 'NPCStatusWidget_AIBoss_C_EventUpdateStatus::Shield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_EventUpdateStatus, MaxHealth) == 0x000010, "Member 'NPCStatusWidget_AIBoss_C_EventUpdateStatus::MaxHealth' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_EventUpdateStatus, MaxShield_0) == 0x000018, "Member 'NPCStatusWidget_AIBoss_C_EventUpdateStatus::MaxShield_0' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_EventUpdateStatus, ShowShield) == 0x000020, "Member 'NPCStatusWidget_AIBoss_C_EventUpdateStatus::ShowShield' has a wrong offset!");

struct NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	double                                        K2Node_CustomEvent_StatusWidgetVisibleDuration;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	uint8                                         Pad_21[0x7];
	double                                        K2Node_CustomEvent_health;
	double                                        K2Node_CustomEvent_shield;
	double                                        K2Node_CustomEvent_maxHealth;
	double                                        K2Node_CustomEvent_maxShield;
	bool                                          K2Node_CustomEvent_ShowShield;
	uint8                                         Pad_49[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss) == 0x000008, "Wrong alignment on NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss");
static_assert(sizeof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss) == 0x000050, "Wrong size on NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, EntryPoint) == 0x000000, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_StatusWidgetVisibleDuration) == 0x000010, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_StatusWidgetVisibleDuration' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000020, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_health) == 0x000028, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_health' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_shield) == 0x000030, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_shield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_maxHealth) == 0x000038, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_maxHealth' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_maxShield) == 0x000040, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_maxShield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, K2Node_CustomEvent_ShowShield) == 0x000048, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::K2Node_CustomEvent_ShowShield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00004C, "Member 'NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct NPCStatusWidget_AIBoss_C_SetMaxHealth final
{
public:
	double                                        MaxHealth;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int64                                         CallFunc_FFloor64_ReturnValue;
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	uint8                                         Pad_25[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
};
static_assert(alignof(NPCStatusWidget_AIBoss_C_SetMaxHealth) == 0x000008, "Wrong alignment on NPCStatusWidget_AIBoss_C_SetMaxHealth");
static_assert(sizeof(NPCStatusWidget_AIBoss_C_SetMaxHealth) == 0x000030, "Wrong size on NPCStatusWidget_AIBoss_C_SetMaxHealth");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, MaxHealth) == 0x000000, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::MaxHealth' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_FFloor64_ReturnValue) == 0x000018, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_FFloor64_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000020, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxHealth, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'NPCStatusWidget_AIBoss_C_SetMaxHealth::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

struct NPCStatusWidget_AIBoss_C_SetMaxShield final
{
public:
	double                                        MaxShield_0;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_A[0x6];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int64                                         CallFunc_FFloor64_ReturnValue;
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
};
static_assert(alignof(NPCStatusWidget_AIBoss_C_SetMaxShield) == 0x000008, "Wrong alignment on NPCStatusWidget_AIBoss_C_SetMaxShield");
static_assert(sizeof(NPCStatusWidget_AIBoss_C_SetMaxShield) == 0x000028, "Wrong size on NPCStatusWidget_AIBoss_C_SetMaxShield");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, MaxShield_0) == 0x000000, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::MaxShield_0' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000009, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_FFloor64_ReturnValue) == 0x000018, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_FFloor64_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000020, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_AIBoss_C_SetMaxShield, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'NPCStatusWidget_AIBoss_C_SetMaxShield::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}
