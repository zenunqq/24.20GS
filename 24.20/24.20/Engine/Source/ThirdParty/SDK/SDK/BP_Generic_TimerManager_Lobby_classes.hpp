#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ABP_Generic_TimerManager_Lobby_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	double                                        TotalSecondsAtEvent;
	struct FTimespan                              TimeUntilCountdownEnd;
	class FString                                 CalendarEventName;
	struct FTimerHandle                           CountdownTimerHandle;
	double                                        Phase3VisualDuration;
	struct FTimerHandle                           AccuracyTimer;
	struct FTimespan                              TimeSinceCountdownBegin;
	double                                        TimespanRatio;

public:
	void VisualUpdateEverySecond();
	void ReceiveBeginPlay();
	void OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0);
	void OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0);
	void OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0);
	void ExecuteUbergraph_BP_Generic_TimerManager_Lobby(int32 EntryPoint);
	void CountdownTimer_New();
	void CountDownTimer_AccuracyFix();
	void ContinueClockCountdown();
	void ClearTimerVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Generic_TimerManager_Lobby_C">();
	}
	static class ABP_Generic_TimerManager_Lobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Generic_TimerManager_Lobby_C>();
	}
};
static_assert(alignof(ABP_Generic_TimerManager_Lobby_C) == 0x000008, "Wrong alignment on ABP_Generic_TimerManager_Lobby_C");
static_assert(sizeof(ABP_Generic_TimerManager_Lobby_C) == 0x0002E0, "Wrong size on ABP_Generic_TimerManager_Lobby_C");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, UberGraphFrame) == 0x000288, "Member 'ABP_Generic_TimerManager_Lobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_Generic_TimerManager_Lobby_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, TotalSecondsAtEvent) == 0x000298, "Member 'ABP_Generic_TimerManager_Lobby_C::TotalSecondsAtEvent' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, TimeUntilCountdownEnd) == 0x0002A0, "Member 'ABP_Generic_TimerManager_Lobby_C::TimeUntilCountdownEnd' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, CalendarEventName) == 0x0002A8, "Member 'ABP_Generic_TimerManager_Lobby_C::CalendarEventName' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, CountdownTimerHandle) == 0x0002B8, "Member 'ABP_Generic_TimerManager_Lobby_C::CountdownTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, Phase3VisualDuration) == 0x0002C0, "Member 'ABP_Generic_TimerManager_Lobby_C::Phase3VisualDuration' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, AccuracyTimer) == 0x0002C8, "Member 'ABP_Generic_TimerManager_Lobby_C::AccuracyTimer' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, TimeSinceCountdownBegin) == 0x0002D0, "Member 'ABP_Generic_TimerManager_Lobby_C::TimeSinceCountdownBegin' has a wrong offset!");
static_assert(offsetof(ABP_Generic_TimerManager_Lobby_C, TimespanRatio) == 0x0002D8, "Member 'ABP_Generic_TimerManager_Lobby_C::TimespanRatio' has a wrong offset!");

}
