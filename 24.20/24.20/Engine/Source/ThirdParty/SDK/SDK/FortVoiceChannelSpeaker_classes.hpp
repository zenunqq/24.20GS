#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortVoiceChannelSpeaker_C final : public UFortVoiceChannelSpeakerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       AnimateVoice;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UHorizontalBox*                         Content;

public:
	void PreConstruct(bool IsDesignTime);
	void OnStyleAssigned(EChannelSpeakerStyle NewStyle);
	void OnAnimateTalkingChanged(bool bIsNowTalking);
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVoiceChannelSpeaker_C">();
	}
	static class UFortVoiceChannelSpeaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVoiceChannelSpeaker_C>();
	}
};
static_assert(alignof(UFortVoiceChannelSpeaker_C) == 0x000008, "Wrong alignment on UFortVoiceChannelSpeaker_C");
static_assert(sizeof(UFortVoiceChannelSpeaker_C) == 0x000338, "Wrong size on UFortVoiceChannelSpeaker_C");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, UberGraphFrame) == 0x000318, "Member 'UFortVoiceChannelSpeaker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, AnimateVoice) == 0x000320, "Member 'UFortVoiceChannelSpeaker_C::AnimateVoice' has a wrong offset!");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, Border_OnlineStatusIndicator) == 0x000328, "Member 'UFortVoiceChannelSpeaker_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, Content) == 0x000330, "Member 'UFortVoiceChannelSpeaker_C::Content' has a wrong offset!");

}
