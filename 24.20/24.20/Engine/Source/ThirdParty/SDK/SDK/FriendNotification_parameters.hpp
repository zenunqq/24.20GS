#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FriendNotification_C_ExecuteUbergraph_FriendNotification final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(FriendNotification_C_ExecuteUbergraph_FriendNotification) == 0x000004, "Wrong alignment on FriendNotification_C_ExecuteUbergraph_FriendNotification");
static_assert(sizeof(FriendNotification_C_ExecuteUbergraph_FriendNotification) == 0x000004, "Wrong size on FriendNotification_C_ExecuteUbergraph_FriendNotification");
static_assert(offsetof(FriendNotification_C_ExecuteUbergraph_FriendNotification, EntryPoint) == 0x000000, "Member 'FriendNotification_C_ExecuteUbergraph_FriendNotification::EntryPoint' has a wrong offset!");

}
