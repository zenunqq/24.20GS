#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "SBMusicalTargets_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ISBMusicalTargetsInterface final : public IInterface
{
public:
	void AddInteractionPointerIndex(int32 PointerIndex);
	void EvaluateHit();
	struct FSBMusicalTargetsCueId GetHighlightedCueID(class UUserWidget** Widget);
	bool IsValidPointerIndex(int32 PointerIndex);
	class UUserWidget* PlayCue(const struct FSBMusicalTargetsCueId& CueId);
	void PlayFailure();
	void RemoveInteractionPointerIndex(int32 PointerIndex);
	void ResetTarget();
	void UpdateProgress(float Progress);
	bool WasTargetHit();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBMusicalTargetsInterface">();
	}
	static class ISBMusicalTargetsInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISBMusicalTargetsInterface>();
	}
};
static_assert(alignof(ISBMusicalTargetsInterface) == 0x000008, "Wrong alignment on ISBMusicalTargetsInterface");
static_assert(sizeof(ISBMusicalTargetsInterface) == 0x000028, "Wrong size on ISBMusicalTargetsInterface");

class USBMusicalTargetsTimerComponent final : public UActorComponent
{
public:
	float                                         LookaheadBeats;
	float                                         ProgressOverrun;
	int32                                         DoubleTimeTempoThreshold;
	int32                                         HalfTimeTempoThreshold;
	TMulticastInlineDelegate<void(class UUserWidget* Widget, struct FSBMusicalTargetsCueId& CueId)> OnCueClearedEvent;
	class UOldMusicClockComponent*                MusicClock;
	uint8                                         Pad_C8[0x58];

public:
	void AssignTargetBeat(class UUserWidget* TargetWidget, const struct FSBMusicalTargetsCueId& CueId);
	void ClearAllTargets();
	void SetDoubleTimeTempoThreshold(int32 Threshold);
	void SetHalfTimeTempoThreshold(int32 Threshold);
	void SetMusicClockRef(class UOldMusicClockComponent* MusicClockRef);
	void SetTimerEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBMusicalTargetsTimerComponent">();
	}
	static class USBMusicalTargetsTimerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBMusicalTargetsTimerComponent>();
	}
};
static_assert(alignof(USBMusicalTargetsTimerComponent) == 0x000008, "Wrong alignment on USBMusicalTargetsTimerComponent");
static_assert(sizeof(USBMusicalTargetsTimerComponent) == 0x000120, "Wrong size on USBMusicalTargetsTimerComponent");
static_assert(offsetof(USBMusicalTargetsTimerComponent, LookaheadBeats) == 0x0000A0, "Member 'USBMusicalTargetsTimerComponent::LookaheadBeats' has a wrong offset!");
static_assert(offsetof(USBMusicalTargetsTimerComponent, ProgressOverrun) == 0x0000A4, "Member 'USBMusicalTargetsTimerComponent::ProgressOverrun' has a wrong offset!");
static_assert(offsetof(USBMusicalTargetsTimerComponent, DoubleTimeTempoThreshold) == 0x0000A8, "Member 'USBMusicalTargetsTimerComponent::DoubleTimeTempoThreshold' has a wrong offset!");
static_assert(offsetof(USBMusicalTargetsTimerComponent, HalfTimeTempoThreshold) == 0x0000AC, "Member 'USBMusicalTargetsTimerComponent::HalfTimeTempoThreshold' has a wrong offset!");
static_assert(offsetof(USBMusicalTargetsTimerComponent, OnCueClearedEvent) == 0x0000B0, "Member 'USBMusicalTargetsTimerComponent::OnCueClearedEvent' has a wrong offset!");
static_assert(offsetof(USBMusicalTargetsTimerComponent, MusicClock) == 0x0000C0, "Member 'USBMusicalTargetsTimerComponent::MusicClock' has a wrong offset!");

}
