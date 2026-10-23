#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_QuartzMusicController_C : public AFortTimeSynthController
{
public:
	class USceneComponent*                        DefaultSceneRoot;
	class UQuartzMusicTrackComponent_C*           CurrentTrack;
	TMulticastInlineDelegate<void(class FName Clock_Name, class UQuartzClockHandle* Clock_Handle)> OnClockCreated;

public:
	void StopCurrentTrack();
	void RequestTrackPlayback(class UQuartzMusicTrackComponent_C* Requesting_Track, bool* Result);
	void PlayTrack(class UQuartzMusicTrackComponent_C* Track_Component);
	void GetCurrentTrack(class UQuartzMusicTrackComponent_C** CurrentTrack_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuartzMusicController_C">();
	}
	static class ABP_QuartzMusicController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_QuartzMusicController_C>();
	}
};
static_assert(alignof(ABP_QuartzMusicController_C) == 0x000008, "Wrong alignment on ABP_QuartzMusicController_C");
static_assert(sizeof(ABP_QuartzMusicController_C) == 0x0002A8, "Wrong size on ABP_QuartzMusicController_C");
static_assert(offsetof(ABP_QuartzMusicController_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_QuartzMusicController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_QuartzMusicController_C, CurrentTrack) == 0x000290, "Member 'ABP_QuartzMusicController_C::CurrentTrack' has a wrong offset!");
static_assert(offsetof(ABP_QuartzMusicController_C, OnClockCreated) == 0x000298, "Member 'ABP_QuartzMusicController_C::OnClockCreated' has a wrong offset!");

}
