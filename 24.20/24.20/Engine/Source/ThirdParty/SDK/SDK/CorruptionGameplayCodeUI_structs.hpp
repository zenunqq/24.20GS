#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPowerupHeatState : uint8
{
	Normal                                   = 0,
	Superheated                              = 1,
	Overheated                               = 2,
	EPowerupHeatState_MAX                    = 3,
};

}
