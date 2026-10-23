#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FSessionServicePing final
{
public:
	class FString                                 UserName;
};
static_assert(alignof(FSessionServicePing) == 0x000008, "Wrong alignment on FSessionServicePing");
static_assert(sizeof(FSessionServicePing) == 0x000010, "Wrong size on FSessionServicePing");
static_assert(offsetof(FSessionServicePing, UserName) == 0x000000, "Member 'FSessionServicePing::UserName' has a wrong offset!");

struct FSessionServicePong final
{
public:
	bool                                          AUTHORIZED;
	uint8                                         Pad_1[0x7];
	class FString                                 BuildDate;
	class FString                                 DeviceName;
	struct FGuid                                  InstanceID;
	class FString                                 InstanceName;
	class FString                                 PlatformName;
	struct FGuid                                  SessionId;
	class FString                                 SessionName;
	class FString                                 SessionOwner;
	bool                                          Standalone;
	uint8                                         Pad_89[0x7];
};
static_assert(alignof(FSessionServicePong) == 0x000008, "Wrong alignment on FSessionServicePong");
static_assert(sizeof(FSessionServicePong) == 0x000090, "Wrong size on FSessionServicePong");
static_assert(offsetof(FSessionServicePong, AUTHORIZED) == 0x000000, "Member 'FSessionServicePong::AUTHORIZED' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x000008, "Member 'FSessionServicePong::BuildDate' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x000018, "Member 'FSessionServicePong::DeviceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceID) == 0x000028, "Member 'FSessionServicePong::InstanceID' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x000038, "Member 'FSessionServicePong::InstanceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x000048, "Member 'FSessionServicePong::PlatformName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionId) == 0x000058, "Member 'FSessionServicePong::SessionId' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionName) == 0x000068, "Member 'FSessionServicePong::SessionName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x000078, "Member 'FSessionServicePong::SessionOwner' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, Standalone) == 0x000088, "Member 'FSessionServicePong::Standalone' has a wrong offset!");

struct FSessionServiceLog final
{
public:
	class FName                                   category;
	uint8                                         Pad_4[0x4];
	class FString                                 Data;
	struct FGuid                                  InstanceID;
	double                                        TimeSeconds;
	uint8                                         Verbosity;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FSessionServiceLog) == 0x000008, "Wrong alignment on FSessionServiceLog");
static_assert(sizeof(FSessionServiceLog) == 0x000038, "Wrong size on FSessionServiceLog");
static_assert(offsetof(FSessionServiceLog, category) == 0x000000, "Member 'FSessionServiceLog::category' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Data) == 0x000008, "Member 'FSessionServiceLog::Data' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, InstanceID) == 0x000018, "Member 'FSessionServiceLog::InstanceID' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, TimeSeconds) == 0x000028, "Member 'FSessionServiceLog::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Verbosity) == 0x000030, "Member 'FSessionServiceLog::Verbosity' has a wrong offset!");

struct FSessionServiceLogSubscribe final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FSessionServiceLogSubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogSubscribe");
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x000001, "Wrong size on FSessionServiceLogSubscribe");

struct FSessionServiceLogUnsubscribe final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogUnsubscribe");
static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong size on FSessionServiceLogUnsubscribe");

}
