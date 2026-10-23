#pragma once

#include "Basic.hpp"

#include "PapayaTimedEvents_structs.hpp"

namespace SDK::Params
{

struct PapayaTimedEvents_AddTimedEvent_Native final
{
public:
	class FString                                 EventName;
	int64                                         Time;
	class FString                                 EventParam;
};
static_assert(alignof(PapayaTimedEvents_AddTimedEvent_Native) == 0x000008, "Wrong alignment on PapayaTimedEvents_AddTimedEvent_Native");
static_assert(sizeof(PapayaTimedEvents_AddTimedEvent_Native) == 0x000028, "Wrong size on PapayaTimedEvents_AddTimedEvent_Native");
static_assert(offsetof(PapayaTimedEvents_AddTimedEvent_Native, EventName) == 0x000000, "Member 'PapayaTimedEvents_AddTimedEvent_Native::EventName' has a wrong offset!");
static_assert(offsetof(PapayaTimedEvents_AddTimedEvent_Native, Time) == 0x000010, "Member 'PapayaTimedEvents_AddTimedEvent_Native::Time' has a wrong offset!");
static_assert(offsetof(PapayaTimedEvents_AddTimedEvent_Native, EventParam) == 0x000018, "Member 'PapayaTimedEvents_AddTimedEvent_Native::EventParam' has a wrong offset!");

struct PapayaTimedEvents_OnRep_ScreenName final
{
public:
	class FString                                 PreviousValue;
};
static_assert(alignof(PapayaTimedEvents_OnRep_ScreenName) == 0x000008, "Wrong alignment on PapayaTimedEvents_OnRep_ScreenName");
static_assert(sizeof(PapayaTimedEvents_OnRep_ScreenName) == 0x000010, "Wrong size on PapayaTimedEvents_OnRep_ScreenName");
static_assert(offsetof(PapayaTimedEvents_OnRep_ScreenName, PreviousValue) == 0x000000, "Member 'PapayaTimedEvents_OnRep_ScreenName::PreviousValue' has a wrong offset!");

struct PapayaTimedEvents_OnRep_TimedEventsArray final
{
public:
	struct FMediaTimeEventArray                   PreviousValue;
};
static_assert(alignof(PapayaTimedEvents_OnRep_TimedEventsArray) == 0x000008, "Wrong alignment on PapayaTimedEvents_OnRep_TimedEventsArray");
static_assert(sizeof(PapayaTimedEvents_OnRep_TimedEventsArray) == 0x000118, "Wrong size on PapayaTimedEvents_OnRep_TimedEventsArray");
static_assert(offsetof(PapayaTimedEvents_OnRep_TimedEventsArray, PreviousValue) == 0x000000, "Member 'PapayaTimedEvents_OnRep_TimedEventsArray::PreviousValue' has a wrong offset!");

struct PapayaTimedEvents_SetupTimedEvents_Native final
{
public:
	class FString                                 ScreenName_0;
};
static_assert(alignof(PapayaTimedEvents_SetupTimedEvents_Native) == 0x000008, "Wrong alignment on PapayaTimedEvents_SetupTimedEvents_Native");
static_assert(sizeof(PapayaTimedEvents_SetupTimedEvents_Native) == 0x000010, "Wrong size on PapayaTimedEvents_SetupTimedEvents_Native");
static_assert(offsetof(PapayaTimedEvents_SetupTimedEvents_Native, ScreenName_0) == 0x000000, "Member 'PapayaTimedEvents_SetupTimedEvents_Native::ScreenName_0' has a wrong offset!");

}
