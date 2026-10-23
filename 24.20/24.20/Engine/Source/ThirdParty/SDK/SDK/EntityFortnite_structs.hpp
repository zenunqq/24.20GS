#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FEntityFortniteStormPhase final
{
public:
	float                                         WaitTime;
	float                                         ShrinkTime;
	float                                         EndRadius;
	float                                         EndRadiusPercentage;
	int32                                         DamageIndex;
	bool                                          bMoves;
	uint8                                         Pad_15[0x3];
	float                                         MinMovementDistance;
	float                                         MaxMovementDistance;
	float                                         MinMovementDistancePercentage;
	float                                         MaxMovementDistancePercentage;
	uint8                                         Pad_28[0x8];
	struct FVector4                               EndLocation;
};
static_assert(alignof(FEntityFortniteStormPhase) == 0x000010, "Wrong alignment on FEntityFortniteStormPhase");
static_assert(sizeof(FEntityFortniteStormPhase) == 0x000050, "Wrong size on FEntityFortniteStormPhase");
static_assert(offsetof(FEntityFortniteStormPhase, WaitTime) == 0x000000, "Member 'FEntityFortniteStormPhase::WaitTime' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, ShrinkTime) == 0x000004, "Member 'FEntityFortniteStormPhase::ShrinkTime' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, EndRadius) == 0x000008, "Member 'FEntityFortniteStormPhase::EndRadius' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, EndRadiusPercentage) == 0x00000C, "Member 'FEntityFortniteStormPhase::EndRadiusPercentage' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, DamageIndex) == 0x000010, "Member 'FEntityFortniteStormPhase::DamageIndex' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, bMoves) == 0x000014, "Member 'FEntityFortniteStormPhase::bMoves' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, MinMovementDistance) == 0x000018, "Member 'FEntityFortniteStormPhase::MinMovementDistance' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, MaxMovementDistance) == 0x00001C, "Member 'FEntityFortniteStormPhase::MaxMovementDistance' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, MinMovementDistancePercentage) == 0x000020, "Member 'FEntityFortniteStormPhase::MinMovementDistancePercentage' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, MaxMovementDistancePercentage) == 0x000024, "Member 'FEntityFortniteStormPhase::MaxMovementDistancePercentage' has a wrong offset!");
static_assert(offsetof(FEntityFortniteStormPhase, EndLocation) == 0x000030, "Member 'FEntityFortniteStormPhase::EndLocation' has a wrong offset!");

}
