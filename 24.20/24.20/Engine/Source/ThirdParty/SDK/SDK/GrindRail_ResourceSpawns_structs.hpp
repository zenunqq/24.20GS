#pragma once

#include "Basic.hpp"

#include "GrindRail_ResourceSpawns_Type_structs.hpp"

namespace SDK
{

struct FGrindRail_ResourceSpawns final
{
public:
	double                                        LocationOnRail_22_72B92E3B4647946BC77E16B7C38E3157;
	EGrindRail_ResourceSpawns_Type                Type_19_4C298D7E43D6D531E9294D9EBF6D35AF;
	uint8                                         Pad_9[0x3];
	int32                                         Number_20_D9BE37E4489CFFA0623801A1D586E741;
	double                                        DistanceBetween_23_6D6ECC5845390875BEC167B11090B704;
};
static_assert(alignof(FGrindRail_ResourceSpawns) == 0x000008, "Wrong alignment on FGrindRail_ResourceSpawns");
static_assert(sizeof(FGrindRail_ResourceSpawns) == 0x000018, "Wrong size on FGrindRail_ResourceSpawns");
static_assert(offsetof(FGrindRail_ResourceSpawns, LocationOnRail_22_72B92E3B4647946BC77E16B7C38E3157) == 0x000000, "Member 'FGrindRail_ResourceSpawns::LocationOnRail_22_72B92E3B4647946BC77E16B7C38E3157' has a wrong offset!");
static_assert(offsetof(FGrindRail_ResourceSpawns, Type_19_4C298D7E43D6D531E9294D9EBF6D35AF) == 0x000008, "Member 'FGrindRail_ResourceSpawns::Type_19_4C298D7E43D6D531E9294D9EBF6D35AF' has a wrong offset!");
static_assert(offsetof(FGrindRail_ResourceSpawns, Number_20_D9BE37E4489CFFA0623801A1D586E741) == 0x00000C, "Member 'FGrindRail_ResourceSpawns::Number_20_D9BE37E4489CFFA0623801A1D586E741' has a wrong offset!");
static_assert(offsetof(FGrindRail_ResourceSpawns, DistanceBetween_23_6D6ECC5845390875BEC167B11090B704) == 0x000010, "Member 'FGrindRail_ResourceSpawns::DistanceBetween_23_6D6ECC5845390875BEC167B11090B704' has a wrong offset!");

}
