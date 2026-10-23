#pragma once

#include "Basic.hpp"

#include "Bp_E_Artemis_SnowSurfaceCoverageMap_structs.hpp"

namespace SDK
{

struct FBP_Artemis_SnowSurfaceCoverageMap_Struct final
{
public:
	EBp_E_Artemis_SnowSurfaceCoverageMap          SnowProgressionPhase_3_395C4AFE4F0D8BA4EE7DA08ABE17C7F4;
	uint8                                         Pad_1[0x3];
	float                                         EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4;
};
static_assert(alignof(FBP_Artemis_SnowSurfaceCoverageMap_Struct) == 0x000004, "Wrong alignment on FBP_Artemis_SnowSurfaceCoverageMap_Struct");
static_assert(sizeof(FBP_Artemis_SnowSurfaceCoverageMap_Struct) == 0x000008, "Wrong size on FBP_Artemis_SnowSurfaceCoverageMap_Struct");
static_assert(offsetof(FBP_Artemis_SnowSurfaceCoverageMap_Struct, SnowProgressionPhase_3_395C4AFE4F0D8BA4EE7DA08ABE17C7F4) == 0x000000, "Member 'FBP_Artemis_SnowSurfaceCoverageMap_Struct::SnowProgressionPhase_3_395C4AFE4F0D8BA4EE7DA08ABE17C7F4' has a wrong offset!");
static_assert(offsetof(FBP_Artemis_SnowSurfaceCoverageMap_Struct, EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4) == 0x000004, "Member 'FBP_Artemis_SnowSurfaceCoverageMap_Struct::EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4' has a wrong offset!");

}
