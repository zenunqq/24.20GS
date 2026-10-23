#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ETextureCompressionStrategy : uint8
{
	None                                     = 0,
	DontCompressRuntime                      = 1,
	NeverCompress                            = 2,
	ETextureCompressionStrategy_MAX          = 3,
};

}
