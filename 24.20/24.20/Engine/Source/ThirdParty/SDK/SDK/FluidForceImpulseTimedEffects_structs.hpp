#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FFluidForceImpulseTimedEffects final
{
public:
	bool                                          EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70;
	uint8                                         Pad_1[0x3];
	float                                         EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC;
	float                                         Strength_29_2CAA30794D1EFF60AE1C3491D011CECF;
	float                                         WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234;
	float                                         StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A;
	float                                         Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113;
	float                                         StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C;
	uint8                                         Pad_1C[0x4];
	class UMaterialInterface*                     MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF;
};
static_assert(alignof(FFluidForceImpulseTimedEffects) == 0x000008, "Wrong alignment on FFluidForceImpulseTimedEffects");
static_assert(sizeof(FFluidForceImpulseTimedEffects) == 0x000028, "Wrong size on FFluidForceImpulseTimedEffects");
static_assert(offsetof(FFluidForceImpulseTimedEffects, EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70) == 0x000000, "Member 'FFluidForceImpulseTimedEffects::EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC) == 0x000004, "Member 'FFluidForceImpulseTimedEffects::EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, Strength_29_2CAA30794D1EFF60AE1C3491D011CECF) == 0x000008, "Member 'FFluidForceImpulseTimedEffects::Strength_29_2CAA30794D1EFF60AE1C3491D011CECF' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234) == 0x00000C, "Member 'FFluidForceImpulseTimedEffects::WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A) == 0x000010, "Member 'FFluidForceImpulseTimedEffects::StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113) == 0x000014, "Member 'FFluidForceImpulseTimedEffects::Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C) == 0x000018, "Member 'FFluidForceImpulseTimedEffects::StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulseTimedEffects, MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF) == 0x000020, "Member 'FFluidForceImpulseTimedEffects::MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF' has a wrong offset!");

}
