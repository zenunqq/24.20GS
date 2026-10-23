#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct BPI_NonParticipant_C_PlayVoiceSoundByTag final
{
public:
	struct FGameplayTag                           SoundBankTag;
};
static_assert(alignof(BPI_NonParticipant_C_PlayVoiceSoundByTag) == 0x000004, "Wrong alignment on BPI_NonParticipant_C_PlayVoiceSoundByTag");
static_assert(sizeof(BPI_NonParticipant_C_PlayVoiceSoundByTag) == 0x000004, "Wrong size on BPI_NonParticipant_C_PlayVoiceSoundByTag");
static_assert(offsetof(BPI_NonParticipant_C_PlayVoiceSoundByTag, SoundBankTag) == 0x000000, "Member 'BPI_NonParticipant_C_PlayVoiceSoundByTag::SoundBankTag' has a wrong offset!");

}
