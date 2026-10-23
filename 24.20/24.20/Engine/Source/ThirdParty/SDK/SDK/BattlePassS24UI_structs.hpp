#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EBattlePassStatusBarTypeS24 : uint8
{
	Hidden                                   = 0,
	Prerequisite                             = 1,
	Delayed                                  = 2,
	Unclaimable                              = 3,
	Claimable                                = 4,
	Special                                  = 5,
	Owned                                    = 6,
	EBattlePassStatusBarTypeS24_MAX          = 7,
};

}
