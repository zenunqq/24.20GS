#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FDayPhaseFloats final
{
public:
	float                                         Morning_2_DA7D290F4DA80AC0D79B888F8B1E63AF;
	float                                         Day_6_7AC9422D4E5DA1F7855ECF8DF66BAFB1;
	float                                         Evening_7_A7E95DF64346D1824EB55E8083A4525F;
	float                                         Night_8_BD65E285445A3ED05CA26694CF4E873E;
};
static_assert(alignof(FDayPhaseFloats) == 0x000004, "Wrong alignment on FDayPhaseFloats");
static_assert(sizeof(FDayPhaseFloats) == 0x000010, "Wrong size on FDayPhaseFloats");
static_assert(offsetof(FDayPhaseFloats, Morning_2_DA7D290F4DA80AC0D79B888F8B1E63AF) == 0x000000, "Member 'FDayPhaseFloats::Morning_2_DA7D290F4DA80AC0D79B888F8B1E63AF' has a wrong offset!");
static_assert(offsetof(FDayPhaseFloats, Day_6_7AC9422D4E5DA1F7855ECF8DF66BAFB1) == 0x000004, "Member 'FDayPhaseFloats::Day_6_7AC9422D4E5DA1F7855ECF8DF66BAFB1' has a wrong offset!");
static_assert(offsetof(FDayPhaseFloats, Evening_7_A7E95DF64346D1824EB55E8083A4525F) == 0x000008, "Member 'FDayPhaseFloats::Evening_7_A7E95DF64346D1824EB55E8083A4525F' has a wrong offset!");
static_assert(offsetof(FDayPhaseFloats, Night_8_BD65E285445A3ED05CA26694CF4E873E) == 0x00000C, "Member 'FDayPhaseFloats::Night_8_BD65E285445A3ED05CA26694CF4E873E' has a wrong offset!");

}
