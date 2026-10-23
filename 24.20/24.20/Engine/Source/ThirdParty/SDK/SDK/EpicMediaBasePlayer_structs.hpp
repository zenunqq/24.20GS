#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EBaseMediaTerminalErrorReason : uint8
{
	Unknown                                  = 0,
	Source                                   = 1,
	Player                                   = 2,
	UCP                                      = 3,
	EBaseMediaTerminalErrorReason_MAX        = 4,
};

}
