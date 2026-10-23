#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LiveLinkInterface_structs.hpp"

namespace SDK
{

struct FLiveLinkPingMessage final
{
public:
	struct FGuid                                  PollRequest;
	int32                                         LiveLinkVersion;
};
static_assert(alignof(FLiveLinkPingMessage) == 0x000004, "Wrong alignment on FLiveLinkPingMessage");
static_assert(sizeof(FLiveLinkPingMessage) == 0x000014, "Wrong size on FLiveLinkPingMessage");
static_assert(offsetof(FLiveLinkPingMessage, PollRequest) == 0x000000, "Member 'FLiveLinkPingMessage::PollRequest' has a wrong offset!");
static_assert(offsetof(FLiveLinkPingMessage, LiveLinkVersion) == 0x000010, "Member 'FLiveLinkPingMessage::LiveLinkVersion' has a wrong offset!");

struct FLiveLinkPongMessage final
{
public:
	class FString                                 ProviderName;
	class FString                                 MachineName;
	struct FGuid                                  PollRequest;
	int32                                         LiveLinkVersion;
	uint8                                         Pad_34[0x4];
	double                                        CreationPlatformTime;
};
static_assert(alignof(FLiveLinkPongMessage) == 0x000008, "Wrong alignment on FLiveLinkPongMessage");
static_assert(sizeof(FLiveLinkPongMessage) == 0x000040, "Wrong size on FLiveLinkPongMessage");
static_assert(offsetof(FLiveLinkPongMessage, ProviderName) == 0x000000, "Member 'FLiveLinkPongMessage::ProviderName' has a wrong offset!");
static_assert(offsetof(FLiveLinkPongMessage, MachineName) == 0x000010, "Member 'FLiveLinkPongMessage::MachineName' has a wrong offset!");
static_assert(offsetof(FLiveLinkPongMessage, PollRequest) == 0x000020, "Member 'FLiveLinkPongMessage::PollRequest' has a wrong offset!");
static_assert(offsetof(FLiveLinkPongMessage, LiveLinkVersion) == 0x000030, "Member 'FLiveLinkPongMessage::LiveLinkVersion' has a wrong offset!");
static_assert(offsetof(FLiveLinkPongMessage, CreationPlatformTime) == 0x000038, "Member 'FLiveLinkPongMessage::CreationPlatformTime' has a wrong offset!");

struct FLiveLinkConnectMessage final
{
public:
	int32                                         LiveLinkVersion;
};
static_assert(alignof(FLiveLinkConnectMessage) == 0x000004, "Wrong alignment on FLiveLinkConnectMessage");
static_assert(sizeof(FLiveLinkConnectMessage) == 0x000004, "Wrong size on FLiveLinkConnectMessage");
static_assert(offsetof(FLiveLinkConnectMessage, LiveLinkVersion) == 0x000000, "Member 'FLiveLinkConnectMessage::LiveLinkVersion' has a wrong offset!");

struct FLiveLinkHeartbeatMessage final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLiveLinkHeartbeatMessage) == 0x000001, "Wrong alignment on FLiveLinkHeartbeatMessage");
static_assert(sizeof(FLiveLinkHeartbeatMessage) == 0x000001, "Wrong size on FLiveLinkHeartbeatMessage");

struct FLiveLinkClearSubject final
{
public:
	class FName                                   SubjectName;
};
static_assert(alignof(FLiveLinkClearSubject) == 0x000004, "Wrong alignment on FLiveLinkClearSubject");
static_assert(sizeof(FLiveLinkClearSubject) == 0x000004, "Wrong size on FLiveLinkClearSubject");
static_assert(offsetof(FLiveLinkClearSubject, SubjectName) == 0x000000, "Member 'FLiveLinkClearSubject::SubjectName' has a wrong offset!");

struct FLiveLinkSubjectDataMessage final
{
public:
	struct FLiveLinkRefSkeleton                   RefSkeleton;
	class FName                                   SubjectName;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FLiveLinkSubjectDataMessage) == 0x000008, "Wrong alignment on FLiveLinkSubjectDataMessage");
static_assert(sizeof(FLiveLinkSubjectDataMessage) == 0x000028, "Wrong size on FLiveLinkSubjectDataMessage");
static_assert(offsetof(FLiveLinkSubjectDataMessage, RefSkeleton) == 0x000000, "Member 'FLiveLinkSubjectDataMessage::RefSkeleton' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectDataMessage, SubjectName) == 0x000020, "Member 'FLiveLinkSubjectDataMessage::SubjectName' has a wrong offset!");

struct FLiveLinkSubjectFrameMessage final
{
public:
	class FName                                   SubjectName;
	uint8                                         Pad_4[0x4];
	TArray<struct FTransform>                     Transforms;
	TArray<struct FLiveLinkCurveElement>          Curves;
	struct FLiveLinkMetaData                      MetaData;
	double                                        Time;
};
static_assert(alignof(FLiveLinkSubjectFrameMessage) == 0x000008, "Wrong alignment on FLiveLinkSubjectFrameMessage");
static_assert(sizeof(FLiveLinkSubjectFrameMessage) == 0x000090, "Wrong size on FLiveLinkSubjectFrameMessage");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, SubjectName) == 0x000000, "Member 'FLiveLinkSubjectFrameMessage::SubjectName' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Transforms) == 0x000008, "Member 'FLiveLinkSubjectFrameMessage::Transforms' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Curves) == 0x000018, "Member 'FLiveLinkSubjectFrameMessage::Curves' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, MetaData) == 0x000028, "Member 'FLiveLinkSubjectFrameMessage::MetaData' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Time) == 0x000088, "Member 'FLiveLinkSubjectFrameMessage::Time' has a wrong offset!");

}
