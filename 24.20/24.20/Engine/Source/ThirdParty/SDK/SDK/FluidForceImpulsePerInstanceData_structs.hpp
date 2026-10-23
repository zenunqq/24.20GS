#pragma once

#include "Basic.hpp"

#include "FluidForceImpulse_structs.hpp"

namespace SDK
{

struct FFluidForceImpulsePerInstanceData final
{
public:
	struct FFluidForceImpulse                     ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC;
	float                                         ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F;
	float                                         StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F;
	bool                                          IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284;
};
static_assert(alignof(FFluidForceImpulsePerInstanceData) == 0x000008, "Wrong alignment on FFluidForceImpulsePerInstanceData");
static_assert(sizeof(FFluidForceImpulsePerInstanceData) == 0x000068, "Wrong size on FFluidForceImpulsePerInstanceData");
static_assert(offsetof(FFluidForceImpulsePerInstanceData, ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC) == 0x000000, "Member 'FFluidForceImpulsePerInstanceData::ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulsePerInstanceData, ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F) == 0x000058, "Member 'FFluidForceImpulsePerInstanceData::ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulsePerInstanceData, StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F) == 0x00005C, "Member 'FFluidForceImpulsePerInstanceData::StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulsePerInstanceData, IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284) == 0x000060, "Member 'FFluidForceImpulsePerInstanceData::IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284' has a wrong offset!");

}
