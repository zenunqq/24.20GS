#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPointerValidity : uint8
{
	Valid                                    = 0,
	Null                                     = 1,
	EPointerValidity_MAX                     = 2,
};

enum class EResult : uint8
{
	Success                                  = 0,
	Failure                                  = 1,
	EResult_MAX                              = 2,
};

}
