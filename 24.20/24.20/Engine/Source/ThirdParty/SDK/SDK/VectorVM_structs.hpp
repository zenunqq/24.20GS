#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EVectorVMBaseTypes : uint8
{
	Float                                    = 0,
	Int                                      = 1,
	Bool                                     = 2,
	Num                                      = 3,
	EVectorVMBaseTypes_MAX                   = 4,
};

enum class EVectorVMOperandLocation : uint8
{
	Register                                 = 0,
	Constant                                 = 1,
	Num                                      = 2,
	EVectorVMOperandLocation_MAX             = 3,
};

}
