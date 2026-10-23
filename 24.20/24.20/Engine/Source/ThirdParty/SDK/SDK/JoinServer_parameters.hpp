#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct JoinServer_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;
};
static_assert(alignof(JoinServer_C_OnEnterState) == 0x000001, "Wrong alignment on JoinServer_C_OnEnterState");
static_assert(sizeof(JoinServer_C_OnEnterState) == 0x000001, "Wrong size on JoinServer_C_OnEnterState");
static_assert(offsetof(JoinServer_C_OnEnterState, PreviousUIState) == 0x000000, "Member 'JoinServer_C_OnEnterState::PreviousUIState' has a wrong offset!");

struct JoinServer_C_ExecuteUbergraph_JoinServer final
{
public:
	int32                                         EntryPoint;
	EFortUIState                                  K2Node_Event_PreviousUIState;
};
static_assert(alignof(JoinServer_C_ExecuteUbergraph_JoinServer) == 0x000004, "Wrong alignment on JoinServer_C_ExecuteUbergraph_JoinServer");
static_assert(sizeof(JoinServer_C_ExecuteUbergraph_JoinServer) == 0x000008, "Wrong size on JoinServer_C_ExecuteUbergraph_JoinServer");
static_assert(offsetof(JoinServer_C_ExecuteUbergraph_JoinServer, EntryPoint) == 0x000000, "Member 'JoinServer_C_ExecuteUbergraph_JoinServer::EntryPoint' has a wrong offset!");
static_assert(offsetof(JoinServer_C_ExecuteUbergraph_JoinServer, K2Node_Event_PreviousUIState) == 0x000004, "Member 'JoinServer_C_ExecuteUbergraph_JoinServer::K2Node_Event_PreviousUIState' has a wrong offset!");

}
