#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FSpeedScaledAxisOffsetData final
{
public:
	struct FScalableFloat                         OffsetModifier;
	float                                         BaseOffset;
	float                                         SpeedScaledOffset;
	struct FVector2D                              SpeedBounds;
	struct FVector2D                              SpeedMultiplierBounds;
	uint8                                         Pad_50[0x10];
};
static_assert(alignof(FSpeedScaledAxisOffsetData) == 0x000008, "Wrong alignment on FSpeedScaledAxisOffsetData");
static_assert(sizeof(FSpeedScaledAxisOffsetData) == 0x000060, "Wrong size on FSpeedScaledAxisOffsetData");
static_assert(offsetof(FSpeedScaledAxisOffsetData, OffsetModifier) == 0x000000, "Member 'FSpeedScaledAxisOffsetData::OffsetModifier' has a wrong offset!");
static_assert(offsetof(FSpeedScaledAxisOffsetData, BaseOffset) == 0x000028, "Member 'FSpeedScaledAxisOffsetData::BaseOffset' has a wrong offset!");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedScaledOffset) == 0x00002C, "Member 'FSpeedScaledAxisOffsetData::SpeedScaledOffset' has a wrong offset!");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedBounds) == 0x000030, "Member 'FSpeedScaledAxisOffsetData::SpeedBounds' has a wrong offset!");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedMultiplierBounds) == 0x000040, "Member 'FSpeedScaledAxisOffsetData::SpeedMultiplierBounds' has a wrong offset!");

}
