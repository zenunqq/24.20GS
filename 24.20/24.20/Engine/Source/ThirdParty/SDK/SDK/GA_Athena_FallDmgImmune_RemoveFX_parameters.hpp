#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX final
{
public:
	int32                                         EntryPoint;
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode_1;
	EMovementMode                                 Temp_byte_Variable;
	uint8                                         Pad_6[0x2];
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x3];
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate;
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;
	EMovementMode                                 Temp_byte_Variable_1;
	uint8                                         Pad_22[0x6];
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	uint8                                         Pad_61[0x7];
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsTouchingGround_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_73[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate_2;
};
static_assert(alignof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX) == 0x000008, "Wrong alignment on GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX");
static_assert(sizeof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX) == 0x0000E0, "Wrong size on GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, EntryPoint) == 0x000000, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_CustomEvent_NewMovementMode_1) == 0x000004, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_CustomEvent_NewMovementMode_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, Temp_byte_Variable) == 0x000005, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_CreateWaitMovementModeChange_ReturnValue) == 0x000008, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_CreateWaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_CustomEvent_NewMovementMode) == 0x000020, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, Temp_byte_Variable_1) == 0x000021, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_CreateWaitMovementModeChange_ReturnValue_1) == 0x000028, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_CreateWaitMovementModeChange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000038, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000040, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000050, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_IsInVehicle_ReturnValue) == 0x000060, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000068, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_IsTouchingGround_ReturnValue) == 0x000070, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_IsTouchingGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_IsValid_ReturnValue_2) == 0x000071, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_BooleanAND_ReturnValue) == 0x000072, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_CreateDelegate_OutputDelegate_1) == 0x000074, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_Event_ActorInfo) == 0x000088, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D0, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

struct GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5 final
{
public:
	EMovementMode                                 NewMovementMode;
};
static_assert(alignof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5) == 0x000001, "Wrong alignment on GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5");
static_assert(sizeof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5) == 0x000001, "Wrong size on GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5, NewMovementMode) == 0x000000, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_E07DC5494A7BED888E9B24AA514662A5::NewMovementMode' has a wrong offset!");

struct GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332 final
{
public:
	EMovementMode                                 NewMovementMode;
};
static_assert(alignof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332) == 0x000001, "Wrong alignment on GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332");
static_assert(sizeof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332) == 0x000001, "Wrong size on GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332");
static_assert(offsetof(GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332, NewMovementMode) == 0x000000, "Member 'GA_Athena_FallDmgImmune_RemoveFX_C_OnChange_FD84FE4040E65CB60551DE8433D51332::NewMovementMode' has a wrong offset!");

}
