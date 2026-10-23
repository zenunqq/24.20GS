#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FEngineServicePing final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FEngineServicePing) == 0x000001, "Wrong alignment on FEngineServicePing");
static_assert(sizeof(FEngineServicePing) == 0x000001, "Wrong size on FEngineServicePing");

struct FEngineServicePong final
{
public:
	class FString                                 CurrentLevel;
	int32                                         EngineVersion;
	bool                                          HasBegunPlay;
	uint8                                         Pad_15[0x3];
	struct FGuid                                  InstanceID;
	class FString                                 InstanceType;
	struct FGuid                                  SessionId;
	float                                         WorldTimeSeconds;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FEngineServicePong) == 0x000008, "Wrong alignment on FEngineServicePong");
static_assert(sizeof(FEngineServicePong) == 0x000050, "Wrong size on FEngineServicePong");
static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0x000000, "Member 'FEngineServicePong::CurrentLevel' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, EngineVersion) == 0x000010, "Member 'FEngineServicePong::EngineVersion' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, HasBegunPlay) == 0x000014, "Member 'FEngineServicePong::HasBegunPlay' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, InstanceID) == 0x000018, "Member 'FEngineServicePong::InstanceID' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, InstanceType) == 0x000028, "Member 'FEngineServicePong::InstanceType' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, SessionId) == 0x000038, "Member 'FEngineServicePong::SessionId' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, WorldTimeSeconds) == 0x000048, "Member 'FEngineServicePong::WorldTimeSeconds' has a wrong offset!");

struct FEngineServiceAuthDeny final
{
public:
	class FString                                 UserName;
	class FString                                 UserToDeny;
};
static_assert(alignof(FEngineServiceAuthDeny) == 0x000008, "Wrong alignment on FEngineServiceAuthDeny");
static_assert(sizeof(FEngineServiceAuthDeny) == 0x000020, "Wrong size on FEngineServiceAuthDeny");
static_assert(offsetof(FEngineServiceAuthDeny, UserName) == 0x000000, "Member 'FEngineServiceAuthDeny::UserName' has a wrong offset!");
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 0x000010, "Member 'FEngineServiceAuthDeny::UserToDeny' has a wrong offset!");

struct FEngineServiceAuthGrant final
{
public:
	class FString                                 UserName;
	class FString                                 UserToGrant;
};
static_assert(alignof(FEngineServiceAuthGrant) == 0x000008, "Wrong alignment on FEngineServiceAuthGrant");
static_assert(sizeof(FEngineServiceAuthGrant) == 0x000020, "Wrong size on FEngineServiceAuthGrant");
static_assert(offsetof(FEngineServiceAuthGrant, UserName) == 0x000000, "Member 'FEngineServiceAuthGrant::UserName' has a wrong offset!");
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 0x000010, "Member 'FEngineServiceAuthGrant::UserToGrant' has a wrong offset!");

struct FEngineServiceExecuteCommand final
{
public:
	class FString                                 Command;
	class FString                                 UserName;
};
static_assert(alignof(FEngineServiceExecuteCommand) == 0x000008, "Wrong alignment on FEngineServiceExecuteCommand");
static_assert(sizeof(FEngineServiceExecuteCommand) == 0x000020, "Wrong size on FEngineServiceExecuteCommand");
static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0x000000, "Member 'FEngineServiceExecuteCommand::Command' has a wrong offset!");
static_assert(offsetof(FEngineServiceExecuteCommand, UserName) == 0x000010, "Member 'FEngineServiceExecuteCommand::UserName' has a wrong offset!");

struct FEngineServiceTerminate final
{
public:
	class FString                                 UserName;
};
static_assert(alignof(FEngineServiceTerminate) == 0x000008, "Wrong alignment on FEngineServiceTerminate");
static_assert(sizeof(FEngineServiceTerminate) == 0x000010, "Wrong size on FEngineServiceTerminate");
static_assert(offsetof(FEngineServiceTerminate, UserName) == 0x000000, "Member 'FEngineServiceTerminate::UserName' has a wrong offset!");

struct FEngineServiceNotification final
{
public:
	class FString                                 Text;
	double                                        TimeSeconds;
};
static_assert(alignof(FEngineServiceNotification) == 0x000008, "Wrong alignment on FEngineServiceNotification");
static_assert(sizeof(FEngineServiceNotification) == 0x000018, "Wrong size on FEngineServiceNotification");
static_assert(offsetof(FEngineServiceNotification, Text) == 0x000000, "Member 'FEngineServiceNotification::Text' has a wrong offset!");
static_assert(offsetof(FEngineServiceNotification, TimeSeconds) == 0x000010, "Member 'FEngineServiceNotification::TimeSeconds' has a wrong offset!");

}
