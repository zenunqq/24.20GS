#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FDanceMontagePlayInfo final
{
public:
	float                                         PlayRate;
	float                                         Offset;
	float                                         StartSecs;
	float                                         LengthSecs;
	float                                         LengthBeats;
};
static_assert(alignof(FDanceMontagePlayInfo) == 0x000004, "Wrong alignment on FDanceMontagePlayInfo");
static_assert(sizeof(FDanceMontagePlayInfo) == 0x000014, "Wrong size on FDanceMontagePlayInfo");
static_assert(offsetof(FDanceMontagePlayInfo, PlayRate) == 0x000000, "Member 'FDanceMontagePlayInfo::PlayRate' has a wrong offset!");
static_assert(offsetof(FDanceMontagePlayInfo, Offset) == 0x000004, "Member 'FDanceMontagePlayInfo::Offset' has a wrong offset!");
static_assert(offsetof(FDanceMontagePlayInfo, StartSecs) == 0x000008, "Member 'FDanceMontagePlayInfo::StartSecs' has a wrong offset!");
static_assert(offsetof(FDanceMontagePlayInfo, LengthSecs) == 0x00000C, "Member 'FDanceMontagePlayInfo::LengthSecs' has a wrong offset!");
static_assert(offsetof(FDanceMontagePlayInfo, LengthBeats) == 0x000010, "Member 'FDanceMontagePlayInfo::LengthBeats' has a wrong offset!");

}
