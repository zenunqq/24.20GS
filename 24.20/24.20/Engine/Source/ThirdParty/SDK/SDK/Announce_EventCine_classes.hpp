#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	class UMediaSource*                           EventMediaSource;
	bool                                          AllowSkipping;
	uint8                                         Pad_321[0x7];
	class UFortMediaSubtitlesPlayer*              EventSubtitlesPlayer;

public:
	void OnPlayerSkippedCutscene();
	void OnEnteredCinematicState();
	void OnClientAnnouncementStop();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_EventCine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_EventCine_C">();
	}
	static class AAnnounce_EventCine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_EventCine_C>();
	}
};
static_assert(alignof(AAnnounce_EventCine_C) == 0x000008, "Wrong alignment on AAnnounce_EventCine_C");
static_assert(sizeof(AAnnounce_EventCine_C) == 0x000330, "Wrong size on AAnnounce_EventCine_C");
static_assert(offsetof(AAnnounce_EventCine_C, UberGraphFrame) == 0x000308, "Member 'AAnnounce_EventCine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, DefaultSceneRoot) == 0x000310, "Member 'AAnnounce_EventCine_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, EventMediaSource) == 0x000318, "Member 'AAnnounce_EventCine_C::EventMediaSource' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, AllowSkipping) == 0x000320, "Member 'AAnnounce_EventCine_C::AllowSkipping' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, EventSubtitlesPlayer) == 0x000328, "Member 'AAnnounce_EventCine_C::EventSubtitlesPlayer' has a wrong offset!");

}
