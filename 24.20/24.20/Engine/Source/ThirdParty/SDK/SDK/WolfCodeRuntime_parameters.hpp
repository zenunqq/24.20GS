#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortCheatManager_Wolf_WolfEnable final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(FortCheatManager_Wolf_WolfEnable) == 0x000001, "Wrong alignment on FortCheatManager_Wolf_WolfEnable");
static_assert(sizeof(FortCheatManager_Wolf_WolfEnable) == 0x000001, "Wrong size on FortCheatManager_Wolf_WolfEnable");
static_assert(offsetof(FortCheatManager_Wolf_WolfEnable, bEnable) == 0x000000, "Member 'FortCheatManager_Wolf_WolfEnable::bEnable' has a wrong offset!");

}
