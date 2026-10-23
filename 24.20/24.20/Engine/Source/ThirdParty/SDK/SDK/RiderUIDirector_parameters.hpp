#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsInSubGame_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector) == 0x000004, "Wrong alignment on RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector");
static_assert(sizeof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector) == 0x00000C, "Wrong size on RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, EntryPoint) == 0x000000, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, CallFunc_IsInSubGame_ReturnValue) == 0x000004, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::CallFunc_IsInSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, CallFunc_IsUsingTouch_ReturnValue) == 0x000005, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, CallFunc_IsMobileGame_ReturnValue) == 0x000006, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
