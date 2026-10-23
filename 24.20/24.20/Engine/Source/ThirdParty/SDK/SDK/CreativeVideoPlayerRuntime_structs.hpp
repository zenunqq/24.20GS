#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ECreativeVideoPlayerFullscreenEffects : uint8
{
	None                                     = 0,
	NoCollisionOnly                          = 1,
	NoDamageOnly                             = 2,
	NoCollisionAndNoDamage                   = 3,
	ECreativeVideoPlayerFullscreenEffects_MAX = 4,
};

struct FCreativeVideoPlayerFullscreenOptions final
{
public:
	ECreativeVideoPlayerFullscreenEffects         GameplayEffects;
	bool                                          bPromptFirst;
};
static_assert(alignof(FCreativeVideoPlayerFullscreenOptions) == 0x000001, "Wrong alignment on FCreativeVideoPlayerFullscreenOptions");
static_assert(sizeof(FCreativeVideoPlayerFullscreenOptions) == 0x000002, "Wrong size on FCreativeVideoPlayerFullscreenOptions");
static_assert(offsetof(FCreativeVideoPlayerFullscreenOptions, GameplayEffects) == 0x000000, "Member 'FCreativeVideoPlayerFullscreenOptions::GameplayEffects' has a wrong offset!");
static_assert(offsetof(FCreativeVideoPlayerFullscreenOptions, bPromptFirst) == 0x000001, "Member 'FCreativeVideoPlayerFullscreenOptions::bPromptFirst' has a wrong offset!");

}
