#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK
{

struct FFortGameCueCloakModifier final
{
public:
	struct FScalableFloat                         bCanBeEnabled;
	struct FScalableFloat                         VisibilityModifierMultiplicative;
	struct FScalableFloat                         VisibilityModifierAdditive;
	struct FScalableFloat                         AlphaTimeToEnabled;
	struct FScalableFloat                         AlphaTimeToDisabled;
	uint8                                         bCurrentlyEnabled : 1;
	uint8                                         Pad_C9[0x3];
	float                                         CurrentAlpha;
};
static_assert(alignof(FFortGameCueCloakModifier) == 0x000008, "Wrong alignment on FFortGameCueCloakModifier");
static_assert(sizeof(FFortGameCueCloakModifier) == 0x0000D0, "Wrong size on FFortGameCueCloakModifier");
static_assert(offsetof(FFortGameCueCloakModifier, bCanBeEnabled) == 0x000000, "Member 'FFortGameCueCloakModifier::bCanBeEnabled' has a wrong offset!");
static_assert(offsetof(FFortGameCueCloakModifier, VisibilityModifierMultiplicative) == 0x000028, "Member 'FFortGameCueCloakModifier::VisibilityModifierMultiplicative' has a wrong offset!");
static_assert(offsetof(FFortGameCueCloakModifier, VisibilityModifierAdditive) == 0x000050, "Member 'FFortGameCueCloakModifier::VisibilityModifierAdditive' has a wrong offset!");
static_assert(offsetof(FFortGameCueCloakModifier, AlphaTimeToEnabled) == 0x000078, "Member 'FFortGameCueCloakModifier::AlphaTimeToEnabled' has a wrong offset!");
static_assert(offsetof(FFortGameCueCloakModifier, AlphaTimeToDisabled) == 0x0000A0, "Member 'FFortGameCueCloakModifier::AlphaTimeToDisabled' has a wrong offset!");
static_assert(offsetof(FFortGameCueCloakModifier, CurrentAlpha) == 0x0000CC, "Member 'FFortGameCueCloakModifier::CurrentAlpha' has a wrong offset!");

}
