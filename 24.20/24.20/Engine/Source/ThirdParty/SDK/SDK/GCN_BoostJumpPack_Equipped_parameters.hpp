#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_BoostJumpPack_Equipped_C_GetFuel final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;
	double                                        ReturnValue;
	struct FGameplayAttribute                     Attribute;
	float                                         CallFunc_GetSimulatedAttributeValue_ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_4D[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_55[0x3];
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast_1;
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetFuel) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetFuel");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetFuel) == 0x000068, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetFuel");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, ReturnValue) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, Attribute) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::Attribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetSimulatedAttributeValue_ReturnValue) == 0x000048, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetSimulatedAttributeValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x00004C, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x000050, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000058, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, K2Node_FunctionResult_ReturnValue_ImplicitCast_1) == 0x000060, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::K2Node_FunctionResult_ReturnValue_ImplicitCast_1' has a wrong offset!");

struct GCN_BoostJumpPack_Equipped_C_GetFuelPercent final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;
	double                                        Fuel_Percent;
	double                                        CallFunc_GetFuel_ReturnValue;
	double                                        CallFunc_GetMaxFuel_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetFuelPercent");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent) == 0x000028, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetFuelPercent");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, Fuel_Percent) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_GetFuel_ReturnValue) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_GetFuel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_GetMaxFuel_ReturnValue) == 0x000018, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_GetMaxFuel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

struct GCN_BoostJumpPack_Equipped_C_GetMaxFuel final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;
	double                                        ReturnValue;
	struct FGameplayAttribute                     Attribute;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_49[0x3];
	float                                         CallFunc_GetSimulatedAttributeValue_ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_51[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast_1;
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetMaxFuel");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel) == 0x000068, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetMaxFuel");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, ReturnValue) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, Attribute) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::Attribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetSimulatedAttributeValue_ReturnValue) == 0x00004C, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetSimulatedAttributeValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000050, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x000054, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000058, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, K2Node_FunctionResult_ReturnValue_ImplicitCast_1) == 0x000060, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::K2Node_FunctionResult_ReturnValue_ImplicitCast_1' has a wrong offset!");

struct GCN_BoostJumpPack_Equipped_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x7];
	class APlayerPawn_Athena_C*                   PlayerPawn;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_F1[0x7];
	double                                        CallFunc_GetFuelPercent_Fuel_Percent;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_109[0x3];
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_OnExecute) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_OnExecute");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_OnExecute) == 0x000110, "Wrong size on GCN_BoostJumpPack_Equipped_C_OnExecute");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, PlayerPawn) == 0x0000E0, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000E8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_GetFuelPercent_Fuel_Percent) == 0x0000F8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_GetFuelPercent_Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000100, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x00010C, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

struct GCN_BoostJumpPack_Equipped_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x7];
	class APlayerPawn_Athena_C*                   PlayerPawn;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_F1[0x7];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	double                                        CallFunc_GetFuelPercent_Fuel_Percent;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_109[0x3];
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_WhileActive) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_WhileActive");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_WhileActive) == 0x000110, "Wrong size on GCN_BoostJumpPack_Equipped_C_WhileActive");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, ReturnValue) == 0x0000D8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, PlayerPawn) == 0x0000E0, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000E8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000F8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_GetFuelPercent_Fuel_Percent) == 0x000100, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_GetFuelPercent_Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x00010C, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

}
