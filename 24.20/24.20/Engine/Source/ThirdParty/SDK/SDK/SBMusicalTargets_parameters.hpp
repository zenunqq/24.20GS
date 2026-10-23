#pragma once

#include "Basic.hpp"

#include "SBMusicalTargets_structs.hpp"

namespace SDK::Params
{

struct SBMusicalTargetsInterface_AddInteractionPointerIndex final
{
public:
	int32                                         PointerIndex;
};
static_assert(alignof(SBMusicalTargetsInterface_AddInteractionPointerIndex) == 0x000004, "Wrong alignment on SBMusicalTargetsInterface_AddInteractionPointerIndex");
static_assert(sizeof(SBMusicalTargetsInterface_AddInteractionPointerIndex) == 0x000004, "Wrong size on SBMusicalTargetsInterface_AddInteractionPointerIndex");
static_assert(offsetof(SBMusicalTargetsInterface_AddInteractionPointerIndex, PointerIndex) == 0x000000, "Member 'SBMusicalTargetsInterface_AddInteractionPointerIndex::PointerIndex' has a wrong offset!");

struct SBMusicalTargetsInterface_GetHighlightedCueID final
{
public:
	class UUserWidget*                            Widget;
	struct FSBMusicalTargetsCueId                 ReturnValue;
};
static_assert(alignof(SBMusicalTargetsInterface_GetHighlightedCueID) == 0x000008, "Wrong alignment on SBMusicalTargetsInterface_GetHighlightedCueID");
static_assert(sizeof(SBMusicalTargetsInterface_GetHighlightedCueID) == 0x000018, "Wrong size on SBMusicalTargetsInterface_GetHighlightedCueID");
static_assert(offsetof(SBMusicalTargetsInterface_GetHighlightedCueID, Widget) == 0x000000, "Member 'SBMusicalTargetsInterface_GetHighlightedCueID::Widget' has a wrong offset!");
static_assert(offsetof(SBMusicalTargetsInterface_GetHighlightedCueID, ReturnValue) == 0x000008, "Member 'SBMusicalTargetsInterface_GetHighlightedCueID::ReturnValue' has a wrong offset!");

struct SBMusicalTargetsInterface_IsValidPointerIndex final
{
public:
	int32                                         PointerIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(SBMusicalTargetsInterface_IsValidPointerIndex) == 0x000004, "Wrong alignment on SBMusicalTargetsInterface_IsValidPointerIndex");
static_assert(sizeof(SBMusicalTargetsInterface_IsValidPointerIndex) == 0x000008, "Wrong size on SBMusicalTargetsInterface_IsValidPointerIndex");
static_assert(offsetof(SBMusicalTargetsInterface_IsValidPointerIndex, PointerIndex) == 0x000000, "Member 'SBMusicalTargetsInterface_IsValidPointerIndex::PointerIndex' has a wrong offset!");
static_assert(offsetof(SBMusicalTargetsInterface_IsValidPointerIndex, ReturnValue) == 0x000004, "Member 'SBMusicalTargetsInterface_IsValidPointerIndex::ReturnValue' has a wrong offset!");

struct SBMusicalTargetsInterface_PlayCue final
{
public:
	struct FSBMusicalTargetsCueId                 CueId;
	class UUserWidget*                            ReturnValue;
};
static_assert(alignof(SBMusicalTargetsInterface_PlayCue) == 0x000008, "Wrong alignment on SBMusicalTargetsInterface_PlayCue");
static_assert(sizeof(SBMusicalTargetsInterface_PlayCue) == 0x000018, "Wrong size on SBMusicalTargetsInterface_PlayCue");
static_assert(offsetof(SBMusicalTargetsInterface_PlayCue, CueId) == 0x000000, "Member 'SBMusicalTargetsInterface_PlayCue::CueId' has a wrong offset!");
static_assert(offsetof(SBMusicalTargetsInterface_PlayCue, ReturnValue) == 0x000010, "Member 'SBMusicalTargetsInterface_PlayCue::ReturnValue' has a wrong offset!");

struct SBMusicalTargetsInterface_RemoveInteractionPointerIndex final
{
public:
	int32                                         PointerIndex;
};
static_assert(alignof(SBMusicalTargetsInterface_RemoveInteractionPointerIndex) == 0x000004, "Wrong alignment on SBMusicalTargetsInterface_RemoveInteractionPointerIndex");
static_assert(sizeof(SBMusicalTargetsInterface_RemoveInteractionPointerIndex) == 0x000004, "Wrong size on SBMusicalTargetsInterface_RemoveInteractionPointerIndex");
static_assert(offsetof(SBMusicalTargetsInterface_RemoveInteractionPointerIndex, PointerIndex) == 0x000000, "Member 'SBMusicalTargetsInterface_RemoveInteractionPointerIndex::PointerIndex' has a wrong offset!");

struct SBMusicalTargetsInterface_UpdateProgress final
{
public:
	float                                         Progress;
};
static_assert(alignof(SBMusicalTargetsInterface_UpdateProgress) == 0x000004, "Wrong alignment on SBMusicalTargetsInterface_UpdateProgress");
static_assert(sizeof(SBMusicalTargetsInterface_UpdateProgress) == 0x000004, "Wrong size on SBMusicalTargetsInterface_UpdateProgress");
static_assert(offsetof(SBMusicalTargetsInterface_UpdateProgress, Progress) == 0x000000, "Member 'SBMusicalTargetsInterface_UpdateProgress::Progress' has a wrong offset!");

struct SBMusicalTargetsInterface_WasTargetHit final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SBMusicalTargetsInterface_WasTargetHit) == 0x000001, "Wrong alignment on SBMusicalTargetsInterface_WasTargetHit");
static_assert(sizeof(SBMusicalTargetsInterface_WasTargetHit) == 0x000001, "Wrong size on SBMusicalTargetsInterface_WasTargetHit");
static_assert(offsetof(SBMusicalTargetsInterface_WasTargetHit, ReturnValue) == 0x000000, "Member 'SBMusicalTargetsInterface_WasTargetHit::ReturnValue' has a wrong offset!");

struct SBMusicalTargetsTimerComponent_AssignTargetBeat final
{
public:
	class UUserWidget*                            TargetWidget;
	struct FSBMusicalTargetsCueId                 CueId;
};
static_assert(alignof(SBMusicalTargetsTimerComponent_AssignTargetBeat) == 0x000008, "Wrong alignment on SBMusicalTargetsTimerComponent_AssignTargetBeat");
static_assert(sizeof(SBMusicalTargetsTimerComponent_AssignTargetBeat) == 0x000018, "Wrong size on SBMusicalTargetsTimerComponent_AssignTargetBeat");
static_assert(offsetof(SBMusicalTargetsTimerComponent_AssignTargetBeat, TargetWidget) == 0x000000, "Member 'SBMusicalTargetsTimerComponent_AssignTargetBeat::TargetWidget' has a wrong offset!");
static_assert(offsetof(SBMusicalTargetsTimerComponent_AssignTargetBeat, CueId) == 0x000008, "Member 'SBMusicalTargetsTimerComponent_AssignTargetBeat::CueId' has a wrong offset!");

struct SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold final
{
public:
	int32                                         Threshold;
};
static_assert(alignof(SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold) == 0x000004, "Wrong alignment on SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold");
static_assert(sizeof(SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold) == 0x000004, "Wrong size on SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold");
static_assert(offsetof(SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold, Threshold) == 0x000000, "Member 'SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold::Threshold' has a wrong offset!");

struct SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold final
{
public:
	int32                                         Threshold;
};
static_assert(alignof(SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold) == 0x000004, "Wrong alignment on SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold");
static_assert(sizeof(SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold) == 0x000004, "Wrong size on SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold");
static_assert(offsetof(SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold, Threshold) == 0x000000, "Member 'SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold::Threshold' has a wrong offset!");

struct SBMusicalTargetsTimerComponent_SetMusicClockRef final
{
public:
	class UOldMusicClockComponent*                MusicClockRef;
};
static_assert(alignof(SBMusicalTargetsTimerComponent_SetMusicClockRef) == 0x000008, "Wrong alignment on SBMusicalTargetsTimerComponent_SetMusicClockRef");
static_assert(sizeof(SBMusicalTargetsTimerComponent_SetMusicClockRef) == 0x000008, "Wrong size on SBMusicalTargetsTimerComponent_SetMusicClockRef");
static_assert(offsetof(SBMusicalTargetsTimerComponent_SetMusicClockRef, MusicClockRef) == 0x000000, "Member 'SBMusicalTargetsTimerComponent_SetMusicClockRef::MusicClockRef' has a wrong offset!");

struct SBMusicalTargetsTimerComponent_SetTimerEnabled final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(SBMusicalTargetsTimerComponent_SetTimerEnabled) == 0x000001, "Wrong alignment on SBMusicalTargetsTimerComponent_SetTimerEnabled");
static_assert(sizeof(SBMusicalTargetsTimerComponent_SetTimerEnabled) == 0x000001, "Wrong size on SBMusicalTargetsTimerComponent_SetTimerEnabled");
static_assert(offsetof(SBMusicalTargetsTimerComponent_SetTimerEnabled, Enabled) == 0x000000, "Member 'SBMusicalTargetsTimerComponent_SetTimerEnabled::Enabled' has a wrong offset!");

}
