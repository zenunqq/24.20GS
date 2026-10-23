#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FNavCorridorParams final
{
public:
	float                                         Width;
	float                                         ObstacleTaperAngle;
	float                                         SmallSectorThreshold;
	float                                         LargeSectorThreshold;
	float                                         SimplifyEdgeThreshold;
	bool                                          bSimplifyFlipPortals;
	bool                                          bSimplifyConvexPortals;
	bool                                          bSimplifyConcavePortals;
	uint8                                         Pad_17[0x1];
};
static_assert(alignof(FNavCorridorParams) == 0x000004, "Wrong alignment on FNavCorridorParams");
static_assert(sizeof(FNavCorridorParams) == 0x000018, "Wrong size on FNavCorridorParams");
static_assert(offsetof(FNavCorridorParams, Width) == 0x000000, "Member 'FNavCorridorParams::Width' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, ObstacleTaperAngle) == 0x000004, "Member 'FNavCorridorParams::ObstacleTaperAngle' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, SmallSectorThreshold) == 0x000008, "Member 'FNavCorridorParams::SmallSectorThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, LargeSectorThreshold) == 0x00000C, "Member 'FNavCorridorParams::LargeSectorThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, SimplifyEdgeThreshold) == 0x000010, "Member 'FNavCorridorParams::SimplifyEdgeThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyFlipPortals) == 0x000014, "Member 'FNavCorridorParams::bSimplifyFlipPortals' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyConvexPortals) == 0x000015, "Member 'FNavCorridorParams::bSimplifyConvexPortals' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyConcavePortals) == 0x000016, "Member 'FNavCorridorParams::bSimplifyConcavePortals' has a wrong offset!");

}
