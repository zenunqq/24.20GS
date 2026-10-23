#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
	class AFortPawn*                              CallFunc_SetupPawnActorAbility_FortPawn;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn");
static_assert(sizeof(GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn) == 0x0000C0, "Wrong size on GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn, EntryPoint) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn, K2Node_Event_EventData) == 0x000008, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn, CallFunc_SetupPawnActorAbility_FortPawn) == 0x0000B8, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn::CallFunc_SetupPawnActorAbility_FortPawn' has a wrong offset!");

struct GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility final
{
public:
	class AFortPawn*                              FortPawn;
	class AFortPawn*                              LocalFortPawn;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility) == 0x000008, "Wrong alignment on GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility");
static_assert(sizeof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility) == 0x000068, "Wrong size on GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility, FortPawn) == 0x000000, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility::FortPawn' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility, LocalFortPawn) == 0x000008, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility::LocalFortPawn' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility, CallFunc_GetActorInfo_ReturnValue) == 0x000010, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility, K2Node_DynamicCast_AsFort_Pawn) == 0x000058, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
