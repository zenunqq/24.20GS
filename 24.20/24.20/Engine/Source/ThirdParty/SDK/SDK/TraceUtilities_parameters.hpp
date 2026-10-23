#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TraceUtilLibrary_GetAllChannels final
{
public:
	TArray<class FString>                         ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_GetAllChannels) == 0x000008, "Wrong alignment on TraceUtilLibrary_GetAllChannels");
static_assert(sizeof(TraceUtilLibrary_GetAllChannels) == 0x000010, "Wrong size on TraceUtilLibrary_GetAllChannels");
static_assert(offsetof(TraceUtilLibrary_GetAllChannels, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_GetAllChannels::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_GetEnabledChannels final
{
public:
	TArray<class FString>                         ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_GetEnabledChannels) == 0x000008, "Wrong alignment on TraceUtilLibrary_GetEnabledChannels");
static_assert(sizeof(TraceUtilLibrary_GetEnabledChannels) == 0x000010, "Wrong size on TraceUtilLibrary_GetEnabledChannels");
static_assert(offsetof(TraceUtilLibrary_GetEnabledChannels, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_GetEnabledChannels::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_IsChannelEnabled final
{
public:
	class FString                                 ChannelName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(TraceUtilLibrary_IsChannelEnabled) == 0x000008, "Wrong alignment on TraceUtilLibrary_IsChannelEnabled");
static_assert(sizeof(TraceUtilLibrary_IsChannelEnabled) == 0x000018, "Wrong size on TraceUtilLibrary_IsChannelEnabled");
static_assert(offsetof(TraceUtilLibrary_IsChannelEnabled, ChannelName) == 0x000000, "Member 'TraceUtilLibrary_IsChannelEnabled::ChannelName' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_IsChannelEnabled, ReturnValue) == 0x000010, "Member 'TraceUtilLibrary_IsChannelEnabled::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_IsTracing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_IsTracing) == 0x000001, "Wrong alignment on TraceUtilLibrary_IsTracing");
static_assert(sizeof(TraceUtilLibrary_IsTracing) == 0x000001, "Wrong size on TraceUtilLibrary_IsTracing");
static_assert(offsetof(TraceUtilLibrary_IsTracing, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_IsTracing::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_PauseTracing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_PauseTracing) == 0x000001, "Wrong alignment on TraceUtilLibrary_PauseTracing");
static_assert(sizeof(TraceUtilLibrary_PauseTracing) == 0x000001, "Wrong size on TraceUtilLibrary_PauseTracing");
static_assert(offsetof(TraceUtilLibrary_PauseTracing, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_PauseTracing::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_ResumeTracing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_ResumeTracing) == 0x000001, "Wrong alignment on TraceUtilLibrary_ResumeTracing");
static_assert(sizeof(TraceUtilLibrary_ResumeTracing) == 0x000001, "Wrong size on TraceUtilLibrary_ResumeTracing");
static_assert(offsetof(TraceUtilLibrary_ResumeTracing, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_ResumeTracing::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_StartTraceSendTo final
{
public:
	class FString                                 Target;
	TArray<class FString>                         Channels;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(TraceUtilLibrary_StartTraceSendTo) == 0x000008, "Wrong alignment on TraceUtilLibrary_StartTraceSendTo");
static_assert(sizeof(TraceUtilLibrary_StartTraceSendTo) == 0x000028, "Wrong size on TraceUtilLibrary_StartTraceSendTo");
static_assert(offsetof(TraceUtilLibrary_StartTraceSendTo, Target) == 0x000000, "Member 'TraceUtilLibrary_StartTraceSendTo::Target' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_StartTraceSendTo, Channels) == 0x000010, "Member 'TraceUtilLibrary_StartTraceSendTo::Channels' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_StartTraceSendTo, ReturnValue) == 0x000020, "Member 'TraceUtilLibrary_StartTraceSendTo::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_StartTraceToFile final
{
public:
	class FString                                 Filename;
	TArray<class FString>                         Channels;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(TraceUtilLibrary_StartTraceToFile) == 0x000008, "Wrong alignment on TraceUtilLibrary_StartTraceToFile");
static_assert(sizeof(TraceUtilLibrary_StartTraceToFile) == 0x000028, "Wrong size on TraceUtilLibrary_StartTraceToFile");
static_assert(offsetof(TraceUtilLibrary_StartTraceToFile, Filename) == 0x000000, "Member 'TraceUtilLibrary_StartTraceToFile::Filename' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_StartTraceToFile, Channels) == 0x000010, "Member 'TraceUtilLibrary_StartTraceToFile::Channels' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_StartTraceToFile, ReturnValue) == 0x000020, "Member 'TraceUtilLibrary_StartTraceToFile::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_StopTracing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(TraceUtilLibrary_StopTracing) == 0x000001, "Wrong alignment on TraceUtilLibrary_StopTracing");
static_assert(sizeof(TraceUtilLibrary_StopTracing) == 0x000001, "Wrong size on TraceUtilLibrary_StopTracing");
static_assert(offsetof(TraceUtilLibrary_StopTracing, ReturnValue) == 0x000000, "Member 'TraceUtilLibrary_StopTracing::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_ToggleChannel final
{
public:
	class FString                                 ChannelName;
	bool                                          Enabled;
	bool                                          ReturnValue;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(TraceUtilLibrary_ToggleChannel) == 0x000008, "Wrong alignment on TraceUtilLibrary_ToggleChannel");
static_assert(sizeof(TraceUtilLibrary_ToggleChannel) == 0x000018, "Wrong size on TraceUtilLibrary_ToggleChannel");
static_assert(offsetof(TraceUtilLibrary_ToggleChannel, ChannelName) == 0x000000, "Member 'TraceUtilLibrary_ToggleChannel::ChannelName' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_ToggleChannel, Enabled) == 0x000010, "Member 'TraceUtilLibrary_ToggleChannel::Enabled' has a wrong offset!");
static_assert(offsetof(TraceUtilLibrary_ToggleChannel, ReturnValue) == 0x000011, "Member 'TraceUtilLibrary_ToggleChannel::ReturnValue' has a wrong offset!");

struct TraceUtilLibrary_TraceBookmark final
{
public:
	class FString                                 Name_0;
};
static_assert(alignof(TraceUtilLibrary_TraceBookmark) == 0x000008, "Wrong alignment on TraceUtilLibrary_TraceBookmark");
static_assert(sizeof(TraceUtilLibrary_TraceBookmark) == 0x000010, "Wrong size on TraceUtilLibrary_TraceBookmark");
static_assert(offsetof(TraceUtilLibrary_TraceBookmark, Name_0) == 0x000000, "Member 'TraceUtilLibrary_TraceBookmark::Name_0' has a wrong offset!");

struct TraceUtilLibrary_TraceMarkRegionEnd final
{
public:
	class FString                                 Name_0;
};
static_assert(alignof(TraceUtilLibrary_TraceMarkRegionEnd) == 0x000008, "Wrong alignment on TraceUtilLibrary_TraceMarkRegionEnd");
static_assert(sizeof(TraceUtilLibrary_TraceMarkRegionEnd) == 0x000010, "Wrong size on TraceUtilLibrary_TraceMarkRegionEnd");
static_assert(offsetof(TraceUtilLibrary_TraceMarkRegionEnd, Name_0) == 0x000000, "Member 'TraceUtilLibrary_TraceMarkRegionEnd::Name_0' has a wrong offset!");

struct TraceUtilLibrary_TraceMarkRegionStart final
{
public:
	class FString                                 Name_0;
};
static_assert(alignof(TraceUtilLibrary_TraceMarkRegionStart) == 0x000008, "Wrong alignment on TraceUtilLibrary_TraceMarkRegionStart");
static_assert(sizeof(TraceUtilLibrary_TraceMarkRegionStart) == 0x000010, "Wrong size on TraceUtilLibrary_TraceMarkRegionStart");
static_assert(offsetof(TraceUtilLibrary_TraceMarkRegionStart, Name_0) == 0x000000, "Member 'TraceUtilLibrary_TraceMarkRegionStart::Name_0' has a wrong offset!");

}
