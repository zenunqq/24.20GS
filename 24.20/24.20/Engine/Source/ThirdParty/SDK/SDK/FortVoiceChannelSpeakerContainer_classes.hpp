#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortVoiceChannelSpeakerContainer_C final : public UFortVoiceSpeakerContainerWidget
{
public:
	class UFortMobileImage*                       SpeakerIcon;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVoiceChannelSpeakerContainer_C">();
	}
	static class UFortVoiceChannelSpeakerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVoiceChannelSpeakerContainer_C>();
	}
};
static_assert(alignof(UFortVoiceChannelSpeakerContainer_C) == 0x000010, "Wrong alignment on UFortVoiceChannelSpeakerContainer_C");
static_assert(sizeof(UFortVoiceChannelSpeakerContainer_C) == 0x000340, "Wrong size on UFortVoiceChannelSpeakerContainer_C");
static_assert(offsetof(UFortVoiceChannelSpeakerContainer_C, SpeakerIcon) == 0x000330, "Member 'UFortVoiceChannelSpeakerContainer_C::SpeakerIcon' has a wrong offset!");

}
