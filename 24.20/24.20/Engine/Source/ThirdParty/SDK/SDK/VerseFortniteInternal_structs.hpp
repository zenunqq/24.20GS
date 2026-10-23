#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPlayerSettingStateInternal : uint8
{
	PlayerUseDefault                         = 0,
	PlayerIsAllowed                          = 1,
	PlayerIsDisallowed                       = 2,
	EPlayerSettingStateInternal_MAX          = 3,
};

}
