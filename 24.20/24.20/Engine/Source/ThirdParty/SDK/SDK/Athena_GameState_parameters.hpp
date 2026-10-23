#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Athena_GameState_C_ExecuteUbergraph_Athena_GameState final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          CallFunc_CanUseSlowMotionOnVictory_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
};
static_assert(alignof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState) == 0x000004, "Wrong alignment on Athena_GameState_C_ExecuteUbergraph_Athena_GameState");
static_assert(sizeof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState) == 0x000008, "Wrong size on Athena_GameState_C_ExecuteUbergraph_Athena_GameState");
static_assert(offsetof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState, EntryPoint) == 0x000000, "Member 'Athena_GameState_C_ExecuteUbergraph_Athena_GameState::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'Athena_GameState_C_ExecuteUbergraph_Athena_GameState::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState, CallFunc_CanUseSlowMotionOnVictory_ReturnValue) == 0x000005, "Member 'Athena_GameState_C_ExecuteUbergraph_Athena_GameState::CallFunc_CanUseSlowMotionOnVictory_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_GameState_C_ExecuteUbergraph_Athena_GameState, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'Athena_GameState_C_ExecuteUbergraph_Athena_GameState::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

}
