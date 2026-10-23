#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FAudioGameplayRequirements final
{
public:
	class UAudioRequirementPreset*                Preset;
	struct FGameplayTagQuery                      Custom;
};
static_assert(alignof(FAudioGameplayRequirements) == 0x000008, "Wrong alignment on FAudioGameplayRequirements");
static_assert(sizeof(FAudioGameplayRequirements) == 0x000050, "Wrong size on FAudioGameplayRequirements");
static_assert(offsetof(FAudioGameplayRequirements, Preset) == 0x000000, "Member 'FAudioGameplayRequirements::Preset' has a wrong offset!");
static_assert(offsetof(FAudioGameplayRequirements, Custom) == 0x000008, "Member 'FAudioGameplayRequirements::Custom' has a wrong offset!");

}
