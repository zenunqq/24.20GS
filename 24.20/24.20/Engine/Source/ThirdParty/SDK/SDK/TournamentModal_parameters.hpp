#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct TournamentModal_C_ExecuteUbergraph_TournamentModal final
{
public:
	int32                                         EntryPoint;
	struct FLinearColor                           K2Node_Event_LeftColor;
	struct FLinearColor                           K2Node_Event_RightColor;
	uint8                                         Pad_24[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(TournamentModal_C_ExecuteUbergraph_TournamentModal) == 0x000008, "Wrong alignment on TournamentModal_C_ExecuteUbergraph_TournamentModal");
static_assert(sizeof(TournamentModal_C_ExecuteUbergraph_TournamentModal) == 0x000038, "Wrong size on TournamentModal_C_ExecuteUbergraph_TournamentModal");
static_assert(offsetof(TournamentModal_C_ExecuteUbergraph_TournamentModal, EntryPoint) == 0x000000, "Member 'TournamentModal_C_ExecuteUbergraph_TournamentModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentModal_C_ExecuteUbergraph_TournamentModal, K2Node_Event_LeftColor) == 0x000004, "Member 'TournamentModal_C_ExecuteUbergraph_TournamentModal::K2Node_Event_LeftColor' has a wrong offset!");
static_assert(offsetof(TournamentModal_C_ExecuteUbergraph_TournamentModal, K2Node_Event_RightColor) == 0x000014, "Member 'TournamentModal_C_ExecuteUbergraph_TournamentModal::K2Node_Event_RightColor' has a wrong offset!");
static_assert(offsetof(TournamentModal_C_ExecuteUbergraph_TournamentModal, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'TournamentModal_C_ExecuteUbergraph_TournamentModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentModal_C_ExecuteUbergraph_TournamentModal, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'TournamentModal_C_ExecuteUbergraph_TournamentModal::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct TournamentModal_C_OnTournamentSet final
{
public:
	struct FLinearColor                           LeftColor;
	struct FLinearColor                           RightColor;
};
static_assert(alignof(TournamentModal_C_OnTournamentSet) == 0x000004, "Wrong alignment on TournamentModal_C_OnTournamentSet");
static_assert(sizeof(TournamentModal_C_OnTournamentSet) == 0x000020, "Wrong size on TournamentModal_C_OnTournamentSet");
static_assert(offsetof(TournamentModal_C_OnTournamentSet, LeftColor) == 0x000000, "Member 'TournamentModal_C_OnTournamentSet::LeftColor' has a wrong offset!");
static_assert(offsetof(TournamentModal_C_OnTournamentSet, RightColor) == 0x000010, "Member 'TournamentModal_C_OnTournamentSet::RightColor' has a wrong offset!");

}
