#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AudioGameplay_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EAmbientAudioEntryActionType : uint8
{
	Added                                    = 0,
	Updated                                  = 1,
	Removed                                  = 2,
	Count                                    = 3,
	EAmbientAudioEntryActionType_MAX         = 4,
};

enum class EAmbientAudioTagActionType : uint8
{
	Added                                    = 0,
	Removed                                  = 1,
	Count                                    = 2,
	EAmbientAudioTagActionType_MAX           = 3,
};

struct FAmbientAudioBase
{
public:
	TSoftObjectPtr<class USoundBase>              sound;
	struct FGameplayTagQuery                      Requirements;
	struct FAudioGameplayRequirements             PlaybackRequirements;
};
static_assert(alignof(FAmbientAudioBase) == 0x000008, "Wrong alignment on FAmbientAudioBase");
static_assert(sizeof(FAmbientAudioBase) == 0x0000C0, "Wrong size on FAmbientAudioBase");
static_assert(offsetof(FAmbientAudioBase, sound) == 0x000000, "Member 'FAmbientAudioBase::sound' has a wrong offset!");
static_assert(offsetof(FAmbientAudioBase, Requirements) == 0x000028, "Member 'FAmbientAudioBase::Requirements' has a wrong offset!");
static_assert(offsetof(FAmbientAudioBase, PlaybackRequirements) == 0x000070, "Member 'FAmbientAudioBase::PlaybackRequirements' has a wrong offset!");

struct FAmbientAudioLoop final : public FAmbientAudioBase
{
};
static_assert(alignof(FAmbientAudioLoop) == 0x000008, "Wrong alignment on FAmbientAudioLoop");
static_assert(sizeof(FAmbientAudioLoop) == 0x0000C0, "Wrong size on FAmbientAudioLoop");

struct FAmbientAudioOneShot final : public FAmbientAudioBase
{
public:
	struct FVector2D                              RetriggerTimeRange;
	struct FVector2D                              TriggerDistanceRange;
};
static_assert(alignof(FAmbientAudioOneShot) == 0x000008, "Wrong alignment on FAmbientAudioOneShot");
static_assert(sizeof(FAmbientAudioOneShot) == 0x0000E0, "Wrong size on FAmbientAudioOneShot");
static_assert(offsetof(FAmbientAudioOneShot, RetriggerTimeRange) == 0x0000C0, "Member 'FAmbientAudioOneShot::RetriggerTimeRange' has a wrong offset!");
static_assert(offsetof(FAmbientAudioOneShot, TriggerDistanceRange) == 0x0000D0, "Member 'FAmbientAudioOneShot::TriggerDistanceRange' has a wrong offset!");

}
