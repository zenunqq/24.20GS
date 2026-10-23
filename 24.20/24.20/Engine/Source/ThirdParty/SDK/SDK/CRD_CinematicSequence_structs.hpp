#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ECinematicSequenceVisibility : uint8
{
	InstigatorOnly                           = 0,
	InstigatingTeam                          = 1,
	Everyone                                 = 2,
	ECinematicSequenceVisibility_MAX         = 3,
};

}
