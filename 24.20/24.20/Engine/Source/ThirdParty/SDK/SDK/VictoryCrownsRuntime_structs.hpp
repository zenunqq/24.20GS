#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FVictoryCrownPlaylistData final : public FTableRowBase
{
public:
	int32                                         MaxRankingForCrownAward;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FVictoryCrownPlaylistData) == 0x000008, "Wrong alignment on FVictoryCrownPlaylistData");
static_assert(sizeof(FVictoryCrownPlaylistData) == 0x000010, "Wrong size on FVictoryCrownPlaylistData");
static_assert(offsetof(FVictoryCrownPlaylistData, MaxRankingForCrownAward) == 0x000008, "Member 'FVictoryCrownPlaylistData::MaxRankingForCrownAward' has a wrong offset!");

}
