#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_QuartzMusicController_C_StopCurrentTrack final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BP_QuartzMusicController_C_StopCurrentTrack) == 0x000001, "Wrong alignment on BP_QuartzMusicController_C_StopCurrentTrack");
static_assert(sizeof(BP_QuartzMusicController_C_StopCurrentTrack) == 0x000001, "Wrong size on BP_QuartzMusicController_C_StopCurrentTrack");
static_assert(offsetof(BP_QuartzMusicController_C_StopCurrentTrack, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_QuartzMusicController_C_StopCurrentTrack::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BP_QuartzMusicController_C_RequestTrackPlayback final
{
public:
	class UQuartzMusicTrackComponent_C*           Requesting_Track;
	bool                                          Result;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_GetTrackPriority_Priority;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	double                                        CallFunc_GetTrackPriority_Priority_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
};
static_assert(alignof(BP_QuartzMusicController_C_RequestTrackPlayback) == 0x000008, "Wrong alignment on BP_QuartzMusicController_C_RequestTrackPlayback");
static_assert(sizeof(BP_QuartzMusicController_C_RequestTrackPlayback) == 0x000030, "Wrong size on BP_QuartzMusicController_C_RequestTrackPlayback");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, Requesting_Track) == 0x000000, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::Requesting_Track' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, Result) == 0x000008, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::Result' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, CallFunc_GetTrackPriority_Priority) == 0x000010, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::CallFunc_GetTrackPriority_Priority' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, CallFunc_GetTrackPriority_Priority_1) == 0x000020, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::CallFunc_GetTrackPriority_Priority_1' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_RequestTrackPlayback, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_QuartzMusicController_C_RequestTrackPlayback::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

struct BP_QuartzMusicController_C_PlayTrack final
{
public:
	class UQuartzMusicTrackComponent_C*           Track_Component;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(BP_QuartzMusicController_C_PlayTrack) == 0x000008, "Wrong alignment on BP_QuartzMusicController_C_PlayTrack");
static_assert(sizeof(BP_QuartzMusicController_C_PlayTrack) == 0x000010, "Wrong size on BP_QuartzMusicController_C_PlayTrack");
static_assert(offsetof(BP_QuartzMusicController_C_PlayTrack, Track_Component) == 0x000000, "Member 'BP_QuartzMusicController_C_PlayTrack::Track_Component' has a wrong offset!");
static_assert(offsetof(BP_QuartzMusicController_C_PlayTrack, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'BP_QuartzMusicController_C_PlayTrack::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

struct BP_QuartzMusicController_C_GetCurrentTrack final
{
public:
	class UQuartzMusicTrackComponent_C*           CurrentTrack_0;
};
static_assert(alignof(BP_QuartzMusicController_C_GetCurrentTrack) == 0x000008, "Wrong alignment on BP_QuartzMusicController_C_GetCurrentTrack");
static_assert(sizeof(BP_QuartzMusicController_C_GetCurrentTrack) == 0x000008, "Wrong size on BP_QuartzMusicController_C_GetCurrentTrack");
static_assert(offsetof(BP_QuartzMusicController_C_GetCurrentTrack, CurrentTrack_0) == 0x000000, "Member 'BP_QuartzMusicController_C_GetCurrentTrack::CurrentTrack_0' has a wrong offset!");

}
