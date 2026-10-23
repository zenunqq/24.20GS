#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JsonUtilities_structs.hpp"

namespace SDK
{

struct FEventRecord final
{
public:
	class FString                                 EventType;
	struct FDateTime                              ActiveUntil;
	struct FDateTime                              ActiveSince;
};
static_assert(alignof(FEventRecord) == 0x000008, "Wrong alignment on FEventRecord");
static_assert(sizeof(FEventRecord) == 0x000020, "Wrong size on FEventRecord");
static_assert(offsetof(FEventRecord, EventType) == 0x000000, "Member 'FEventRecord::EventType' has a wrong offset!");
static_assert(offsetof(FEventRecord, ActiveUntil) == 0x000010, "Member 'FEventRecord::ActiveUntil' has a wrong offset!");
static_assert(offsetof(FEventRecord, ActiveSince) == 0x000018, "Member 'FEventRecord::ActiveSince' has a wrong offset!");

struct FEventChannelState final
{
public:
	struct FDateTime                              ValidFrom;
	TArray<struct FEventRecord>                   ActiveEvents;
	struct FJsonObjectWrapper                     State;
};
static_assert(alignof(FEventChannelState) == 0x000008, "Wrong alignment on FEventChannelState");
static_assert(sizeof(FEventChannelState) == 0x000038, "Wrong size on FEventChannelState");
static_assert(offsetof(FEventChannelState, ValidFrom) == 0x000000, "Member 'FEventChannelState::ValidFrom' has a wrong offset!");
static_assert(offsetof(FEventChannelState, ActiveEvents) == 0x000008, "Member 'FEventChannelState::ActiveEvents' has a wrong offset!");
static_assert(offsetof(FEventChannelState, State) == 0x000018, "Member 'FEventChannelState::State' has a wrong offset!");

struct FEventsTimeline final
{
public:
	struct FDateTime                              CacheExpire;
	TArray<struct FEventChannelState>             States;
};
static_assert(alignof(FEventsTimeline) == 0x000008, "Wrong alignment on FEventsTimeline");
static_assert(sizeof(FEventsTimeline) == 0x000018, "Wrong size on FEventsTimeline");
static_assert(offsetof(FEventsTimeline, CacheExpire) == 0x000000, "Member 'FEventsTimeline::CacheExpire' has a wrong offset!");
static_assert(offsetof(FEventsTimeline, States) == 0x000008, "Member 'FEventsTimeline::States' has a wrong offset!");

struct FCalendarDownload final
{
public:
	struct FDateTime                              CurrentTime;
	double                                        CacheIntervalMins;
	TMap<class FString, struct FEventsTimeline>   Channels;
};
static_assert(alignof(FCalendarDownload) == 0x000008, "Wrong alignment on FCalendarDownload");
static_assert(sizeof(FCalendarDownload) == 0x000060, "Wrong size on FCalendarDownload");
static_assert(offsetof(FCalendarDownload, CurrentTime) == 0x000000, "Member 'FCalendarDownload::CurrentTime' has a wrong offset!");
static_assert(offsetof(FCalendarDownload, CacheIntervalMins) == 0x000008, "Member 'FCalendarDownload::CacheIntervalMins' has a wrong offset!");
static_assert(offsetof(FCalendarDownload, Channels) == 0x000010, "Member 'FCalendarDownload::Channels' has a wrong offset!");

}
