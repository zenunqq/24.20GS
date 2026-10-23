#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMobileShadowQuality : uint8
{
	NoFiltering                              = 0,
	PCF_1x1                                  = 1,
	PCF_3x3                                  = 2,
	PCF_5x5                                  = 3,
	EMobileShadowQuality_MAX                 = 4,
};

struct FMaterialQualityOverrides final
{
public:
	bool                                          bDiscardQualityDuringCook;
	bool                                          bEnableOverride;
	bool                                          bForceFullyRough;
	bool                                          bForceNonMetal;
	bool                                          bForceDisableLMDirectionality;
	bool                                          bForceDisablePreintegratedGF;
	bool                                          bDisableMaterialNormalCalculation;
	EMobileShadowQuality                          MobileShadowQuality;
};
static_assert(alignof(FMaterialQualityOverrides) == 0x000001, "Wrong alignment on FMaterialQualityOverrides");
static_assert(sizeof(FMaterialQualityOverrides) == 0x000008, "Wrong size on FMaterialQualityOverrides");
static_assert(offsetof(FMaterialQualityOverrides, bDiscardQualityDuringCook) == 0x000000, "Member 'FMaterialQualityOverrides::bDiscardQualityDuringCook' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bEnableOverride) == 0x000001, "Member 'FMaterialQualityOverrides::bEnableOverride' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceFullyRough) == 0x000002, "Member 'FMaterialQualityOverrides::bForceFullyRough' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceNonMetal) == 0x000003, "Member 'FMaterialQualityOverrides::bForceNonMetal' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisableLMDirectionality) == 0x000004, "Member 'FMaterialQualityOverrides::bForceDisableLMDirectionality' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisablePreintegratedGF) == 0x000005, "Member 'FMaterialQualityOverrides::bForceDisablePreintegratedGF' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bDisableMaterialNormalCalculation) == 0x000006, "Member 'FMaterialQualityOverrides::bDisableMaterialNormalCalculation' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 0x000007, "Member 'FMaterialQualityOverrides::MobileShadowQuality' has a wrong offset!");

}
