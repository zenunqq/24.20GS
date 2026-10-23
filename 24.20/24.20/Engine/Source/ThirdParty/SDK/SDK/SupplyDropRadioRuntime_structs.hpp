#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ESupplyDropRadioBalloonState : uint8
{
	Invalid                                  = 0,
	Closed                                   = 1,
	Opened                                   = 2,
	Destroyed                                = 3,
	ESupplyDropRadioBalloonState_MAX         = 4,
};

}
