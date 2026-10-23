#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EDanceBeatSyncMode : uint8
{
	Off                                      = 0,
	Tempo                                    = 1,
	Music                                    = 2,
	EDanceBeatSyncMode_MAX                   = 3,
};

struct FDanceBeatInfo final
{
public:
	float                                         LengthBeats;
	float                                         StartOffsetMs;
};
static_assert(alignof(FDanceBeatInfo) == 0x000004, "Wrong alignment on FDanceBeatInfo");
static_assert(sizeof(FDanceBeatInfo) == 0x000008, "Wrong size on FDanceBeatInfo");
static_assert(offsetof(FDanceBeatInfo, LengthBeats) == 0x000000, "Member 'FDanceBeatInfo::LengthBeats' has a wrong offset!");
static_assert(offsetof(FDanceBeatInfo, StartOffsetMs) == 0x000004, "Member 'FDanceBeatInfo::StartOffsetMs' has a wrong offset!");

}
