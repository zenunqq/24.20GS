#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TeamEntry_C_SetText final
{
public:
	class FText                                   Usernames;
};
static_assert(alignof(TeamEntry_C_SetText) == 0x000008, "Wrong alignment on TeamEntry_C_SetText");
static_assert(sizeof(TeamEntry_C_SetText) == 0x000018, "Wrong size on TeamEntry_C_SetText");
static_assert(offsetof(TeamEntry_C_SetText, Usernames) == 0x000000, "Member 'TeamEntry_C_SetText::Usernames' has a wrong offset!");

}
