#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver final
{
public:
	int32                                         EntryPoint;
	EDuelState                                    K2Node_Event_NewDuelState;
	uint8                                         Pad_5[0x3];
	struct FDuelOverlayData                       K2Node_Event_ChangedDuelOverlayData;
	EDuelState                                    K2Node_CustomEvent_Duel_State;
	uint8                                         Pad_91[0x7];
	struct FDuelOverlayData                       K2Node_CustomEvent_Cached_Duel_Overlay_Data;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_121[0x7];
	struct FGameplayEventData                     K2Node_Event_EventData;
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1EA[0x6];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver) == 0x000008, "Wrong alignment on GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver");
static_assert(sizeof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver) == 0x000200, "Wrong size on GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, EntryPoint) == 0x000000, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_Event_NewDuelState) == 0x000004, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_Event_NewDuelState' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_Event_ChangedDuelOverlayData) == 0x000008, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_Event_ChangedDuelOverlayData' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_CustomEvent_Duel_State) == 0x000090, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_CustomEvent_Duel_State' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_CustomEvent_Cached_Duel_Overlay_Data) == 0x000098, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_CustomEvent_Cached_Duel_Overlay_Data' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, CallFunc_IsServer_ReturnValue) == 0x000120, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_Event_EventData) == 0x000128, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, CallFunc_GetContext_ReturnValue) == 0x0001D8, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001E0, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, CallFunc_IsValid_ReturnValue) == 0x0001E9, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0001F0, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver, K2Node_DynamicCast_bSuccess_1) == 0x0001F8, "Member 'GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct GA_DuelObserver_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_DuelObserver_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DuelObserver_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DuelObserver_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_DuelObserver_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DuelObserver_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DuelObserver_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_DuelObserver_C_OnDuelChange final
{
public:
	EDuelState                                    NewDuelState;
	uint8                                         Pad_1[0x7];
	struct FDuelOverlayData                       ChangedDuelOverlayData;
};
static_assert(alignof(GA_DuelObserver_C_OnDuelChange) == 0x000008, "Wrong alignment on GA_DuelObserver_C_OnDuelChange");
static_assert(sizeof(GA_DuelObserver_C_OnDuelChange) == 0x000090, "Wrong size on GA_DuelObserver_C_OnDuelChange");
static_assert(offsetof(GA_DuelObserver_C_OnDuelChange, NewDuelState) == 0x000000, "Member 'GA_DuelObserver_C_OnDuelChange::NewDuelState' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_OnDuelChange, ChangedDuelOverlayData) == 0x000008, "Member 'GA_DuelObserver_C_OnDuelChange::ChangedDuelOverlayData' has a wrong offset!");

struct GA_DuelObserver_C_UpdateDuelUI final
{
public:
	EDuelState                                    Duel_State;
	uint8                                         Pad_1[0x7];
	struct FDuelOverlayData                       Cached_Duel_Overlay_Data;
};
static_assert(alignof(GA_DuelObserver_C_UpdateDuelUI) == 0x000008, "Wrong alignment on GA_DuelObserver_C_UpdateDuelUI");
static_assert(sizeof(GA_DuelObserver_C_UpdateDuelUI) == 0x000090, "Wrong size on GA_DuelObserver_C_UpdateDuelUI");
static_assert(offsetof(GA_DuelObserver_C_UpdateDuelUI, Duel_State) == 0x000000, "Member 'GA_DuelObserver_C_UpdateDuelUI::Duel_State' has a wrong offset!");
static_assert(offsetof(GA_DuelObserver_C_UpdateDuelUI, Cached_Duel_Overlay_Data) == 0x000008, "Member 'GA_DuelObserver_C_UpdateDuelUI::Cached_Duel_Overlay_Data' has a wrong offset!");

}
