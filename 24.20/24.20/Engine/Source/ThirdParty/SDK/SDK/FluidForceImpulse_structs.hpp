#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FluidForceImpulseTimedEffects_structs.hpp"

namespace SDK
{

struct FFluidForceImpulse final
{
public:
	struct FVector                                WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC;
	float                                         ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234;
	float                                         ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF;
	class UMaterialInterface*                     MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A;
	float                                         Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113;
	float                                         StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F;
	struct FFluidForceImpulseTimedEffects         TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E;
};
static_assert(alignof(FFluidForceImpulse) == 0x000008, "Wrong alignment on FFluidForceImpulse");
static_assert(sizeof(FFluidForceImpulse) == 0x000058, "Wrong size on FFluidForceImpulse");
static_assert(offsetof(FFluidForceImpulse, WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC) == 0x000000, "Member 'FFluidForceImpulse::WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234) == 0x000018, "Member 'FFluidForceImpulse::ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF) == 0x00001C, "Member 'FFluidForceImpulse::ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A) == 0x000020, "Member 'FFluidForceImpulse::MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113) == 0x000028, "Member 'FFluidForceImpulse::Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F) == 0x00002C, "Member 'FFluidForceImpulse::StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F' has a wrong offset!");
static_assert(offsetof(FFluidForceImpulse, TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E) == 0x000030, "Member 'FFluidForceImpulse::TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E' has a wrong offset!");

}
