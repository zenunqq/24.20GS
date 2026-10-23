#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EUCPTypes : uint8
{
	UCPAudio                                 = 0,
	UCPVideo                                 = 1,
	UCPBoth                                  = 2,
	UCPNone                                  = 3,
	UCPTypes_MAX                             = 4,
};

}
