#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaMainStatTile_C_SetStatValue final
{
public:
	class FText                                   StatValueAsText;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
};
static_assert(alignof(AthenaMainStatTile_C_SetStatValue) == 0x000008, "Wrong alignment on AthenaMainStatTile_C_SetStatValue");
static_assert(sizeof(AthenaMainStatTile_C_SetStatValue) == 0x000030, "Wrong size on AthenaMainStatTile_C_SetStatValue");
static_assert(offsetof(AthenaMainStatTile_C_SetStatValue, StatValueAsText) == 0x000000, "Member 'AthenaMainStatTile_C_SetStatValue::StatValueAsText' has a wrong offset!");
static_assert(offsetof(AthenaMainStatTile_C_SetStatValue, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'AthenaMainStatTile_C_SetStatValue::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

}
