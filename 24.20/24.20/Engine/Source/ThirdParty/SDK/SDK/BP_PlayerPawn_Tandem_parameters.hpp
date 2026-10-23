#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_NPC_HealthInfo_structs.hpp"

namespace SDK::Params
{

struct BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(bool bVisible)>                K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_AIBoss_C*              K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x3];
	float                                         CallFunc_GetHealth_ReturnValue;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	float                                         CallFunc_GetShield_ReturnValue;
	double                                        CallFunc_SafeDivide_ReturnValue;
	float                                         CallFunc_GetMaxShield_ReturnValue;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_45[0x3];
	double                                        CallFunc_SafeDivide_ReturnValue_1;
	struct FStruct_NPC_HealthInfo                 K2Node_MakeStruct_Struct_NPC_HealthInfo;
	float                                         K2Node_Event_Damage;
	uint8                                         Pad_74[0x4];
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AFortPawn*                              K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1B9[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;
	class UNPCStatusWidget_AIBoss_C*              K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsVisible_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          K2Node_CustomEvent_bVisible;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_1D5[0x3];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_2;
	class UNPCStatusWidget_AIBoss_C*              K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_1EA[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue_1;
	bool                                          CallFunc_GetValueAsBool_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_1FD[0x3];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_3;
	class UNPCStatusWidget_AIBoss_C*              K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_211[0x7];
	double                                        CallFunc_SafeDivide_A_ImplicitCast;
	double                                        CallFunc_SafeDivide_B_ImplicitCast;
	double                                        K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast;
	double                                        CallFunc_SafeDivide_A_ImplicitCast_1;
	double                                        CallFunc_SafeDivide_B_ImplicitCast_1;
	double                                        K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem) == 0x000250, "Wrong size on BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, EntryPoint) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss) == 0x000020, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetHealth_ReturnValue) == 0x00002C, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetMaxHealth_ReturnValue) == 0x000030, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetShield_ReturnValue) == 0x000034, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_ReturnValue) == 0x000038, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetMaxShield_ReturnValue) == 0x000040, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetMaxShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_EndPlayReason) == 0x000044, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_ReturnValue_1) == 0x000048, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_MakeStruct_Struct_NPC_HealthInfo) == 0x000050, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_MakeStruct_Struct_NPC_HealthInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_Damage) == 0x000070, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_DamageTags) == 0x000078, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_Momentum) == 0x000098, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_HitInfo) == 0x0000B0, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_InstigatedBy) == 0x000190, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_DamageCauser) == 0x000198, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_Event_EffectContext) == 0x0001A0, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x0001C0, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1) == 0x0001C8, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_bSuccess_1) == 0x0001D0, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsVisible_ReturnValue) == 0x0001D1, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsValid_ReturnValue_2) == 0x0001D2, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_CustomEvent_bVisible) == 0x0001D3, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsValid_ReturnValue_3) == 0x0001D4, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetUserWidgetObject_ReturnValue_2) == 0x0001D8, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetUserWidgetObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2) == 0x0001E0, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001E9, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001EC, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_HasAuthority_ReturnValue) == 0x0001F8, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetValueAsBool_ReturnValue) == 0x0001F9, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetValueAsBool_ReturnValue_1) == 0x0001FA, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetValueAsBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetValueAsBool_ReturnValue_2) == 0x0001FB, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetValueAsBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_IsValid_ReturnValue_4) == 0x0001FC, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_GetUserWidgetObject_ReturnValue_3) == 0x000200, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_GetUserWidgetObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3) == 0x000208, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_DynamicCast_bSuccess_3) == 0x000210, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_A_ImplicitCast) == 0x000218, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_B_ImplicitCast) == 0x000220, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast) == 0x000228, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_A_ImplicitCast_1) == 0x000230, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_SafeDivide_B_ImplicitCast_1) == 0x000238, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_SafeDivide_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast) == 0x000240, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem, CallFunc_Delay_Duration_ImplicitCast) == 0x000248, "Member 'BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_HandlePawnConverted final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_HandlePawnConverted) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_HandlePawnConverted");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_HandlePawnConverted) == 0x000018, "Wrong size on BP_PlayerPawn_Tandem_C_HandlePawnConverted");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_HandlePawnConverted, InstigatorPawn) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_HandlePawnConverted::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_HandlePawnConverted, ConvertedPawn) == 0x000008, "Member 'BP_PlayerPawn_Tandem_C_HandlePawnConverted::ConvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_HandlePawnConverted, CallFunc_GetActorTeam_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Tandem_C_HandlePawnConverted::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_HandlePawnUnconverted final
{
public:
	class AFortPawn*                              UnconvertedPawn;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_HandlePawnUnconverted) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_HandlePawnUnconverted");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_HandlePawnUnconverted) == 0x000008, "Wrong size on BP_PlayerPawn_Tandem_C_HandlePawnUnconverted");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_HandlePawnUnconverted, UnconvertedPawn) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_HandlePawnUnconverted::UnconvertedPawn' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_OnDeathPlayEffects");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects) == 0x000148, "Wrong size on BP_PlayerPawn_Tandem_C_OnDeathPlayEffects");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'BP_PlayerPawn_Tandem_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerPawn_Tandem_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerPawn_Tandem_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_UpdateConvertIndicator final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_1[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_UpdateConvertIndicator");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator) == 0x000018, "Wrong size on BP_PlayerPawn_Tandem_C_UpdateConvertIndicator");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_UpdateConvertIndicator::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_Tandem_C_UpdateConvertIndicator::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator, CallFunc_GetActorTeam_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Tandem_C_UpdateConvertIndicator::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdateConvertIndicator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_PlayerPawn_Tandem_C_UpdateConvertIndicator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D[0x3];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_AIBoss_C*              K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_44[0x4];
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_54[0x4];
	double                                        CallFunc_GetDistanceBetweenActors_Distance;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_65[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD) == 0x000008, "Wrong alignment on BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD) == 0x000070, "Wrong size on BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_HasAuthority_ReturnValue) == 0x000009, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000A, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x00000B, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss) == 0x000018, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000028, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_K2_GetPawn_ReturnValue) == 0x000048, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_GetDistanceBetweenActors_Distance) == 0x000058, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x000063, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_BooleanAND_ReturnValue_2) == 0x000064, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'BP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged) == 0x000001, "Wrong alignment on BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged");
static_assert(sizeof(BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged) == 0x000001, "Wrong size on BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged");
static_assert(offsetof(BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged, bVisible) == 0x000000, "Member 'BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged::bVisible' has a wrong offset!");

}
