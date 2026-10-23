#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GA_Creative_OnKillSiphon_C_AddShields final
{
public:
	bool                                          bShouldConvertExcessHealthToShields_0;
	uint8                                         Pad_1[0x7];
	double                                        ShieldToAdd;
	bool                                          bAddedShields;
	uint8                                         Pad_11[0x7];
	double                                        ShieldAdded;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_22[0x6];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_AddShields) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_AddShields");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_AddShields) == 0x000058, "Wrong size on GA_Creative_OnKillSiphon_C_AddShields");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, bShouldConvertExcessHealthToShields_0) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_AddShields::bShouldConvertExcessHealthToShields_0' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, ShieldToAdd) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_AddShields::ShieldToAdd' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, bAddedShields) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_AddShields::bAddedShields' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, ShieldAdded) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_AddShields::ShieldAdded' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AddShields, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x000050, "Member 'GA_Creative_OnKillSiphon_C_AddShields::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_AttemptHeal final
{
public:
	bool                                          CallFunc_RestoreHealth_Success;
	uint8                                         Pad_1[0x7];
	double                                        CallFunc_RestoreHealth_InitialHealAmount;
	double                                        CallFunc_RestoreHealth_ActualAppliedHeal;
	double                                        CallFunc_RestoreHealth_ExcessHealing;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_AddShields_bAddedShields;
	uint8                                         Pad_22[0x6];
	double                                        CallFunc_AddShields_ShieldAdded;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_AttemptHeal) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_AttemptHeal");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_AttemptHeal) == 0x000038, "Wrong size on GA_Creative_OnKillSiphon_C_AttemptHeal");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_RestoreHealth_Success) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_RestoreHealth_Success' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_RestoreHealth_InitialHealAmount) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_RestoreHealth_InitialHealAmount' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_RestoreHealth_ActualAppliedHeal) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_RestoreHealth_ActualAppliedHeal' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_RestoreHealth_ExcessHealing) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_RestoreHealth_ExcessHealing' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_AddShields_bAddedShields) == 0x000021, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_AddShields_bAddedShields' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_AddShields_ShieldAdded) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_AddShields_ShieldAdded' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptHeal, CallFunc_BooleanOR_ReturnValue) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_AttemptHeal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_AttemptMats final
{
public:
	bool                                          CallFunc_CalculateResources_bSuccess;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_CalculateResources_ResourceToGive;
	EFortResourceType                             CallFunc_CalculateResources_ResourceType;
	bool                                          CallFunc_CalculateResources_bSuccess_1;
	uint8                                         Pad_A[0x2];
	int32                                         CallFunc_CalculateResources_ResourceToGive_1;
	EFortResourceType                             CallFunc_CalculateResources_ResourceType_1;
	bool                                          CallFunc_GiveResourcesToPlayer_Success;
	bool                                          CallFunc_GiveResourcesToPlayer_Success_1;
	bool                                          CallFunc_CalculateResources_bSuccess_2;
	int32                                         CallFunc_CalculateResources_ResourceToGive_2;
	EFortResourceType                             CallFunc_CalculateResources_ResourceType_2;
	bool                                          CallFunc_CalculateResources_bSuccess_3;
	uint8                                         Pad_1A[0x2];
	int32                                         CallFunc_CalculateResources_ResourceToGive_3;
	EFortResourceType                             CallFunc_CalculateResources_ResourceType_3;
	bool                                          CallFunc_GiveResourcesToPlayer_Success_2;
	bool                                          CallFunc_GiveResourcesToPlayer_Success_3;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_AttemptMats) == 0x000004, "Wrong alignment on GA_Creative_OnKillSiphon_C_AttemptMats");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_AttemptMats) == 0x000024, "Wrong size on GA_Creative_OnKillSiphon_C_AttemptMats");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_bSuccess) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceToGive) == 0x000004, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceToGive' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceType) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceType' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_bSuccess_1) == 0x000009, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceToGive_1) == 0x00000C, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceToGive_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceType_1) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceType_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_GiveResourcesToPlayer_Success) == 0x000011, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_GiveResourcesToPlayer_Success' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_GiveResourcesToPlayer_Success_1) == 0x000012, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_GiveResourcesToPlayer_Success_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_bSuccess_2) == 0x000013, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceToGive_2) == 0x000014, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceToGive_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceType_2) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceType_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_bSuccess_3) == 0x000019, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceToGive_3) == 0x00001C, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceToGive_3' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_CalculateResources_ResourceType_3) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_CalculateResources_ResourceType_3' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_GiveResourcesToPlayer_Success_2) == 0x000021, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_GiveResourcesToPlayer_Success_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_AttemptMats, CallFunc_GiveResourcesToPlayer_Success_3) == 0x000022, "Member 'GA_Creative_OnKillSiphon_C_AttemptMats::CallFunc_GiveResourcesToPlayer_Success_3' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_CalculateResources final
{
public:
	EFortResourceType                             ResourceGrantType;
	bool                                          bSuccess;
	uint8                                         Pad_2[0x2];
	int32                                         ResourceToGive;
	EFortResourceType                             ResourceType;
	uint8                                         Pad_9[0x3];
	class FName                                   LocalDataTableRowName;
	int32                                         iLocalResourceToGive;
	float                                         CallFunc_GetOverridenSiphonGoldValue_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_FTrunc_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_GetOverridenSiphonMetalValue_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_1;
	float                                         CallFunc_GetOverridenSiphonWoodValue_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_36[0x2];
	float                                         CallFunc_GetOverridenSiphonStoneValue_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_3;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_41[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	int32                                         CallFunc_FTrunc_ReturnValue_4;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	uint8                                         Pad_4D[0x3];
	double                                        CallFunc_FTrunc_A_ImplicitCast;
	double                                        CallFunc_FTrunc_A_ImplicitCast_1;
	double                                        CallFunc_FTrunc_A_ImplicitCast_2;
	double                                        CallFunc_FTrunc_A_ImplicitCast_3;
	double                                        CallFunc_FTrunc_A_ImplicitCast_4;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_CalculateResources) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_CalculateResources");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_CalculateResources) == 0x000078, "Wrong size on GA_Creative_OnKillSiphon_C_CalculateResources");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, ResourceGrantType) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::ResourceGrantType' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, bSuccess) == 0x000001, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, ResourceToGive) == 0x000004, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::ResourceToGive' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, ResourceType) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::ResourceType' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, LocalDataTableRowName) == 0x00000C, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::LocalDataTableRowName' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, iLocalResourceToGive) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::iLocalResourceToGive' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_GetOverridenSiphonGoldValue_ReturnValue) == 0x000014, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_GetOverridenSiphonGoldValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_ReturnValue) == 0x00001C, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_GetOverridenSiphonMetalValue_ReturnValue) == 0x000024, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_GetOverridenSiphonMetalValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_ReturnValue_1) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_GetOverridenSiphonWoodValue_ReturnValue) == 0x00002C, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_GetOverridenSiphonWoodValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_ReturnValue_2) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, K2Node_SwitchEnum_CmpSuccess) == 0x000034, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, K2Node_SwitchEnum_CmpSuccess_1) == 0x000035, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_GetOverridenSiphonStoneValue_ReturnValue) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_GetOverridenSiphonStoneValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_ReturnValue_3) == 0x00003C, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000040, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000044, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_ReturnValue_4) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, K2Node_SwitchEnum_CmpSuccess_2) == 0x00004C, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_A_ImplicitCast) == 0x000050, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_A_ImplicitCast_1) == 0x000058, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_A_ImplicitCast_2) == 0x000060, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_A_ImplicitCast_3) == 0x000068, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_CalculateResources, CallFunc_FTrunc_A_ImplicitCast_4) == 0x000070, "Member 'GA_Creative_OnKillSiphon_C_CalculateResources::CallFunc_FTrunc_A_ImplicitCast_4' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_DetermineHealthDelta final
{
public:
	double                                        HealingAmount;
	double                                        MaxHealth;
	double                                        CurrentHealth;
	double                                        HealthDelta;
	double                                        ExcessHealh;
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetHealth_ReturnValue;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	uint8                                         Pad_3C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_51[0x7];
	double                                        K2Node_Select_Default;
	double                                        K2Node_FunctionResult_MaxHealth_ImplicitCast;
	double                                        K2Node_FunctionResult_CurrentHealth_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_DetermineHealthDelta");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta) == 0x000080, "Wrong size on GA_Creative_OnKillSiphon_C_DetermineHealthDelta");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, HealingAmount) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::HealingAmount' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, MaxHealth) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::MaxHealth' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CurrentHealth) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CurrentHealth' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, HealthDelta) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::HealthDelta' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, ExcessHealh) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::ExcessHealh' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, Temp_real_Variable) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, Temp_bool_Variable) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_GetHealth_ReturnValue) == 0x000034, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_GetMaxHealth_ReturnValue) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000050, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, K2Node_Select_Default) == 0x000058, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, K2Node_FunctionResult_MaxHealth_ImplicitCast) == 0x000060, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::K2Node_FunctionResult_MaxHealth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, K2Node_FunctionResult_CurrentHealth_ImplicitCast) == 0x000068, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::K2Node_FunctionResult_CurrentHealth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000070, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_DetermineHealthDelta, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'GA_Creative_OnKillSiphon_C_DetermineHealthDelta::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
	bool                                          CallFunc_SetupRestoreModes_ShouldContinue;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon) == 0x0000C0, "Wrong size on GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon, EntryPoint) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon, K2Node_Event_EventData) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon, CallFunc_SetupRestoreModes_ShouldContinue) == 0x0000B8, "Member 'GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon::CallFunc_SetupRestoreModes_ShouldContinue' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer final
{
public:
	bool                                          bShouldGrant;
	uint8                                         Pad_1[0x3];
	int32                                         GiveAmount;
	EFortResourceType                             GiveType;
	bool                                          Success;
	uint8                                         Pad_A[0x6];
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
	class UFortWorldItemDefinition*               LocalItemToGive;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_29[0x7];
	class AController*                            CallFunc_GetControllerFromActor_ReturnValue;
	class AFortAthenaAIBotController*             K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	const class UFortWorldItem*                   CallFunc_GiveItemToInventoryOwner_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer) == 0x000060, "Wrong size on GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, bShouldGrant) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::bShouldGrant' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, GiveAmount) == 0x000004, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::GiveAmount' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, GiveType) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::GiveType' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, Success) == 0x000009, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::Success' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, InventoryOwner) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::InventoryOwner' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, LocalItemToGive) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::LocalItemToGive' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, CallFunc_GetControllerFromActor_ReturnValue) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::CallFunc_GetControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, K2Node_DynamicCast_AsFort_Athena_AIBot_Controller) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::K2Node_DynamicCast_AsFort_Athena_AIBot_Controller' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, CallFunc_GiveItemToInventoryOwner_ReturnValue) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::CallFunc_GiveItemToInventoryOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000050, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_RestoreHealth final
{
public:
	bool                                          Success;
	uint8                                         Pad_1[0x7];
	double                                        InitialHealAmount;
	double                                        ActualAppliedHeal;
	double                                        ExcessHealing;
	double                                        fShieldRestored;
	double                                        fActualAmountHealed;
	double                                        fInitialAmountToHeal;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_39[0x7];
	double                                        CallFunc_DetermineHealthDelta_MaxHealth;
	double                                        CallFunc_DetermineHealthDelta_CurrentHealth;
	double                                        CallFunc_DetermineHealthDelta_HealthDelta;
	double                                        CallFunc_DetermineHealthDelta_ExcessHealh;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_FMin_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_9A[0x2];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_A1[0x3];
	float                                         CallFunc_GetOverridenSiphonHealthValue_ReturnValue;
	double                                        K2Node_Select_Default;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	uint8                                         Pad_B4[0x4];
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_RestoreHealth) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_RestoreHealth");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_RestoreHealth) == 0x0000C8, "Wrong size on GA_Creative_OnKillSiphon_C_RestoreHealth");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, Success) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::Success' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, InitialHealAmount) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::InitialHealAmount' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, ActualAppliedHeal) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::ActualAppliedHeal' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, ExcessHealing) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::ExcessHealing' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, fShieldRestored) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::fShieldRestored' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, fActualAmountHealed) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::fActualAmountHealed' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, fInitialAmountToHeal) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::fInitialAmountToHeal' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, Temp_bool_Variable) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_DetermineHealthDelta_MaxHealth) == 0x000040, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_DetermineHealthDelta_MaxHealth' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_DetermineHealthDelta_CurrentHealth) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_DetermineHealthDelta_CurrentHealth' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_DetermineHealthDelta_HealthDelta) == 0x000050, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_DetermineHealthDelta_HealthDelta' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_DetermineHealthDelta_ExcessHealh) == 0x000058, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_DetermineHealthDelta_ExcessHealh' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_FMin_ReturnValue) == 0x000068, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000070, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000080, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000090, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000099, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_EvaluateCurveTableRow_OutXY) == 0x00009C, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, K2Node_SwitchEnum_CmpSuccess) == 0x0000A0, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_GetOverridenSiphonHealthValue_ReturnValue) == 0x0000A4, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_GetOverridenSiphonHealthValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, K2Node_Select_Default) == 0x0000A8, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x0000B0, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, K2Node_Select_Option_0_ImplicitCast) == 0x0000B8, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_RestoreHealth, K2Node_Select_Option_1_ImplicitCast) == 0x0000C0, "Member 'GA_Creative_OnKillSiphon_C_RestoreHealth::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_SetupRestoreModes final
{
public:
	bool                                          ShouldContinue;
	bool                                          CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult_1;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_16[0x2];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_SetupRestoreModes) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_SetupRestoreModes");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_SetupRestoreModes) == 0x000040, "Wrong size on GA_Creative_OnKillSiphon_C_SetupRestoreModes");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, ShouldContinue) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::ShouldContinue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue) == 0x000001, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000003, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000004, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EvaluateCurveTableRow_OutResult_1) == 0x000008, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EvaluateCurveTableRow_OutResult_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x00000C, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000011, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_BooleanOR_ReturnValue_1) == 0x000012, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_BooleanOR_ReturnValue_2) == 0x000013, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, K2Node_SwitchEnum_CmpSuccess_1) == 0x000015, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000020, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_SetupRestoreModes, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1) == 0x000038, "Member 'GA_Creative_OnKillSiphon_C_SetupRestoreModes::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

struct GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayEventData                     Payload;
	bool                                          ReturnValue;
	bool                                          bLocalMatsOnKill;
	bool                                          bLocalHealthOnKill;
	bool                                          bLocalShouldActivate;
	uint8                                         Pad_FC[0x4];
	class AController*                            CallFunc_GetControllerFromActor_ReturnValue;
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_11B[0x1];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult_1;
	uint8                                         Pad_126[0x2];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_12F[0x1];
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
};
static_assert(alignof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent) == 0x000140, "Wrong size on GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000048, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000F8, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, bLocalMatsOnKill) == 0x0000F9, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::bLocalMatsOnKill' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, bLocalHealthOnKill) == 0x0000FA, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::bLocalHealthOnKill' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, bLocalShouldActivate) == 0x0000FB, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::bLocalShouldActivate' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetControllerFromActor_ReturnValue) == 0x000100, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_K2_GetPawn_ReturnValue) == 0x000108, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000110, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_IsDBNO_ReturnValue) == 0x000119, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutResult) == 0x00011A, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutXY) == 0x00011C, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000120, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000121, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, K2Node_SwitchEnum_CmpSuccess) == 0x000122, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanOR_ReturnValue) == 0x000123, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanOR_ReturnValue_1) == 0x000124, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutResult_1) == 0x000125, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutResult_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x000128, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x00012C, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x00012D, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, K2Node_SwitchEnum_CmpSuccess_1) == 0x00012E, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000130, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1) == 0x000138, "Member 'GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}
