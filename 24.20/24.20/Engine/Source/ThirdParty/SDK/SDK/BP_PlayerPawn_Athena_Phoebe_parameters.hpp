#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant final
{
public:
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant) == 0x000008, "Wrong alignment on BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant");
static_assert(sizeof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant) == 0x000018, "Wrong size on BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID final
{
public:
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UAthenaAIServicePlayerBots*             CallFunc_GetAIServicePlayerBots_ReturnValue;
	int32                                         CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID) == 0x000008, "Wrong alignment on BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID");
static_assert(sizeof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID) == 0x000018, "Wrong size on BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID, CallFunc_Less_IntInt_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID, CallFunc_GetAIServicePlayerBots_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID::CallFunc_GetAIServicePlayerBots_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID, CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID::CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortAthenaAIBotController*             K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	struct FVector                                K2Node_Event_LaunchVelocity;
	bool                                          K2Node_Event_bXYOverride;
	bool                                          K2Node_Event_bZOverride;
	uint8                                         Pad_3A[0x6];
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	class AFortPlayerPawn*                        K2Node_Event_Pawn;
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe) == 0x000008, "Wrong alignment on BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe");
static_assert(sizeof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe) == 0x000058, "Wrong size on BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, EntryPoint) == 0x000000, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_DynamicCast_AsFort_Athena_AIBot_Controller) == 0x000010, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_DynamicCast_AsFort_Athena_AIBot_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_Event_LaunchVelocity) == 0x000020, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_Event_LaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_Event_bXYOverride) == 0x000038, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_Event_bXYOverride' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_Event_bZOverride) == 0x000039, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_Event_bZOverride' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, CallFunc_GetBlackboard_ReturnValue) == 0x000040, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, K2Node_Event_Pawn) == 0x000048, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe, CallFunc_HasAuthority_ReturnValue) == 0x000050, "Member 'BP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong alignment on BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted");
static_assert(sizeof(BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong size on BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted, Pawn) == 0x000000, "Member 'BP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted::Pawn' has a wrong offset!");

struct BP_PlayerPawn_Athena_Phoebe_C_OnLaunched final
{
public:
	struct FVector                                LaunchVelocity;
	bool                                          bXYOverride;
	bool                                          bZOverride;
};
static_assert(alignof(BP_PlayerPawn_Athena_Phoebe_C_OnLaunched) == 0x000008, "Wrong alignment on BP_PlayerPawn_Athena_Phoebe_C_OnLaunched");
static_assert(sizeof(BP_PlayerPawn_Athena_Phoebe_C_OnLaunched) == 0x000020, "Wrong size on BP_PlayerPawn_Athena_Phoebe_C_OnLaunched");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_OnLaunched, LaunchVelocity) == 0x000000, "Member 'BP_PlayerPawn_Athena_Phoebe_C_OnLaunched::LaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_OnLaunched, bXYOverride) == 0x000018, "Member 'BP_PlayerPawn_Athena_Phoebe_C_OnLaunched::bXYOverride' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_Athena_Phoebe_C_OnLaunched, bZOverride) == 0x000019, "Member 'BP_PlayerPawn_Athena_Phoebe_C_OnLaunched::bZOverride' has a wrong offset!");

}
