#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TVPostProcessBP_C_IsEnabledForCurrentSubgame final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(TVPostProcessBP_C_IsEnabledForCurrentSubgame) == 0x000001, "Wrong alignment on TVPostProcessBP_C_IsEnabledForCurrentSubgame");
static_assert(sizeof(TVPostProcessBP_C_IsEnabledForCurrentSubgame) == 0x000001, "Wrong size on TVPostProcessBP_C_IsEnabledForCurrentSubgame");
static_assert(offsetof(TVPostProcessBP_C_IsEnabledForCurrentSubgame, bEnabled) == 0x000000, "Member 'TVPostProcessBP_C_IsEnabledForCurrentSubgame::bEnabled' has a wrong offset!");

struct TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsEnabledForCurrentSubgame_bEnabled;
};
static_assert(alignof(TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP) == 0x000004, "Wrong alignment on TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP");
static_assert(sizeof(TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP) == 0x000008, "Wrong size on TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP");
static_assert(offsetof(TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP, EntryPoint) == 0x000000, "Member 'TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP, CallFunc_IsEnabledForCurrentSubgame_bEnabled) == 0x000004, "Member 'TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP::CallFunc_IsEnabledForCurrentSubgame_bEnabled' has a wrong offset!");

}
