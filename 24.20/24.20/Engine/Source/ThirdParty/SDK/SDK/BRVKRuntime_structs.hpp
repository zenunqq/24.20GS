#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EBRVKContentLoaderPauseType : uint8
{
	NONE                                     = 0,
	LOOT_CALCULATION                         = 1,
	WARMUP                                   = 2,
	EBRVKContentLoaderPauseType_MAX          = 3,
};

}
