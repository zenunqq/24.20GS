#pragma once

#include "Basic.hpp"

#include "CreativeDataChannelTriggerRuntime_structs.hpp"

namespace SDK::Params
{

struct CreativeDataChannelTarget_FireEvent final
{
public:
	class FName                                   EventName;
};
static_assert(alignof(CreativeDataChannelTarget_FireEvent) == 0x000004, "Wrong alignment on CreativeDataChannelTarget_FireEvent");
static_assert(sizeof(CreativeDataChannelTarget_FireEvent) == 0x000004, "Wrong size on CreativeDataChannelTarget_FireEvent");
static_assert(offsetof(CreativeDataChannelTarget_FireEvent, EventName) == 0x000000, "Member 'CreativeDataChannelTarget_FireEvent::EventName' has a wrong offset!");

struct CreativeDataChannelTarget_TestCreativeDataChannelTarget final
{
public:
	struct FCreativeDataChannelEvents             TestEvents;
};
static_assert(alignof(CreativeDataChannelTarget_TestCreativeDataChannelTarget) == 0x000008, "Wrong alignment on CreativeDataChannelTarget_TestCreativeDataChannelTarget");
static_assert(sizeof(CreativeDataChannelTarget_TestCreativeDataChannelTarget) == 0x000010, "Wrong size on CreativeDataChannelTarget_TestCreativeDataChannelTarget");
static_assert(offsetof(CreativeDataChannelTarget_TestCreativeDataChannelTarget, TestEvents) == 0x000000, "Member 'CreativeDataChannelTarget_TestCreativeDataChannelTarget::TestEvents' has a wrong offset!");

struct CreativeDataChannelTargetRL_ReportServerStateStreamError final
{
public:
	class FString                                 Error;
	class FString                                 UID;
	class FString                                 URL;
};
static_assert(alignof(CreativeDataChannelTargetRL_ReportServerStateStreamError) == 0x000008, "Wrong alignment on CreativeDataChannelTargetRL_ReportServerStateStreamError");
static_assert(sizeof(CreativeDataChannelTargetRL_ReportServerStateStreamError) == 0x000030, "Wrong size on CreativeDataChannelTargetRL_ReportServerStateStreamError");
static_assert(offsetof(CreativeDataChannelTargetRL_ReportServerStateStreamError, Error) == 0x000000, "Member 'CreativeDataChannelTargetRL_ReportServerStateStreamError::Error' has a wrong offset!");
static_assert(offsetof(CreativeDataChannelTargetRL_ReportServerStateStreamError, UID) == 0x000010, "Member 'CreativeDataChannelTargetRL_ReportServerStateStreamError::UID' has a wrong offset!");
static_assert(offsetof(CreativeDataChannelTargetRL_ReportServerStateStreamError, URL) == 0x000020, "Member 'CreativeDataChannelTargetRL_ReportServerStateStreamError::URL' has a wrong offset!");

}
