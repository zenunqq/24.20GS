#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death final
{
public:
	int32                                         EntryPoint;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death) == 0x000004, "Wrong alignment on GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death");
static_assert(sizeof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death) == 0x000008, "Wrong size on GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, CallFunc_GetSubGame_ReturnValue) == 0x000004, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
