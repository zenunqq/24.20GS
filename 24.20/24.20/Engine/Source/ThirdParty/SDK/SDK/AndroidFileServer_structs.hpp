#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EAFSActiveType : uint8
{
	None                                     = 0,
	USBOnly                                  = 1,
	NetworkOnly                              = 2,
	Combined                                 = 3,
	EAFSActiveType_MAX                       = 4,
};

}
