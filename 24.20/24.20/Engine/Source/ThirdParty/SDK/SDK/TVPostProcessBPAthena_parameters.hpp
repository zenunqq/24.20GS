#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_GetUnpausedTimeSeconds_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
};
static_assert(alignof(TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena) == 0x000008, "Wrong alignment on TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena");
static_assert(sizeof(TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena) == 0x000018, "Wrong size on TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena");
static_assert(offsetof(TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena, EntryPoint) == 0x000000, "Member 'TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena::EntryPoint' has a wrong offset!");
static_assert(offsetof(TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena, CallFunc_GetUnpausedTimeSeconds_ReturnValue) == 0x000008, "Member 'TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena::CallFunc_GetUnpausedTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000010, "Member 'TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

struct TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame final
{
public:
	bool                                          bEnabled;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame) == 0x000001, "Wrong alignment on TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame");
static_assert(sizeof(TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame) == 0x000003, "Wrong size on TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame");
static_assert(offsetof(TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame, bEnabled) == 0x000000, "Member 'TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame::bEnabled' has a wrong offset!");
static_assert(offsetof(TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame, CallFunc_GetSubGame_ReturnValue) == 0x000001, "Member 'TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
