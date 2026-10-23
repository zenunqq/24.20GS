#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "McpProfileSys_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IMcpItemAware final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpItemAware">();
	}
	static class IMcpItemAware* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMcpItemAware>();
	}
};
static_assert(alignof(IMcpItemAware) == 0x000008, "Wrong alignment on IMcpItemAware");
static_assert(sizeof(IMcpItemAware) == 0x000028, "Wrong size on IMcpItemAware");

class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpItemDefinitionBase">();
	}
	static class UMcpItemDefinitionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpItemDefinitionBase>();
	}
};
static_assert(alignof(UMcpItemDefinitionBase) == 0x000008, "Wrong alignment on UMcpItemDefinitionBase");
static_assert(sizeof(UMcpItemDefinitionBase) == 0x000030, "Wrong size on UMcpItemDefinitionBase");

class alignas(0x10) UMcpProfile : public UObject
{
public:
	bool                                          AllowSubscriptionToNotificationsService;
	uint8                                         Pad_29[0x77];
	class FString                                 DebugName;
	bool                                          bProfileLockOperationPending;
	bool                                          bProfileUnlockOperationPending;
	bool                                          bEnableMocks;
	uint8                                         Pad_B3[0x15];
	class UMcpProfileGroup*                       ProfileGroup;
	class FString                                 ProfileId;
	int64                                         ProfileRevision;
	int32                                         FullProfileQueryQueued;
	bool                                          bProfileWriteLocked;
	uint8                                         Pad_ED[0x3];
	struct FDateTime                              ProfileWriteLockExpireTime;
	bool                                          QueuedProfileUpdatingEnabled;
	uint8                                         Pad_F9[0x47];

public:
	void DeleteAllProfiles(struct FClientUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfile">();
	}
	static class UMcpProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfile>();
	}
};
static_assert(alignof(UMcpProfile) == 0x000010, "Wrong alignment on UMcpProfile");
static_assert(sizeof(UMcpProfile) == 0x000140, "Wrong size on UMcpProfile");
static_assert(offsetof(UMcpProfile, AllowSubscriptionToNotificationsService) == 0x000028, "Member 'UMcpProfile::AllowSubscriptionToNotificationsService' has a wrong offset!");
static_assert(offsetof(UMcpProfile, DebugName) == 0x0000A0, "Member 'UMcpProfile::DebugName' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileLockOperationPending) == 0x0000B0, "Member 'UMcpProfile::bProfileLockOperationPending' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileUnlockOperationPending) == 0x0000B1, "Member 'UMcpProfile::bProfileUnlockOperationPending' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bEnableMocks) == 0x0000B2, "Member 'UMcpProfile::bEnableMocks' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileGroup) == 0x0000C8, "Member 'UMcpProfile::ProfileGroup' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileId) == 0x0000D0, "Member 'UMcpProfile::ProfileId' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileRevision) == 0x0000E0, "Member 'UMcpProfile::ProfileRevision' has a wrong offset!");
static_assert(offsetof(UMcpProfile, FullProfileQueryQueued) == 0x0000E8, "Member 'UMcpProfile::FullProfileQueryQueued' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileWriteLocked) == 0x0000EC, "Member 'UMcpProfile::bProfileWriteLocked' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileWriteLockExpireTime) == 0x0000F0, "Member 'UMcpProfile::ProfileWriteLockExpireTime' has a wrong offset!");
static_assert(offsetof(UMcpProfile, QueuedProfileUpdatingEnabled) == 0x0000F8, "Member 'UMcpProfile::QueuedProfileUpdatingEnabled' has a wrong offset!");

class alignas(0x10) UMcpProfileGroup final : public UObject
{
public:
	uint8                                         Pad_28[0xB4];
	int32                                         DelayMcpResults;
	int32                                         WeeklyIntervalStartDay;
	uint8                                         Pad_E4[0x4];
	TArray<struct FProfileEntry>                  ProfileList;
	uint8                                         Pad_F8[0x8];
	class FString                                 PlayerName;
	bool                                          bIsServer;
	uint8                                         Pad_111[0x7];
	class FString                                 ProfileNotificationsStompTopic;
	uint8                                         Pad_128[0x50];
	class FString                                 LastMcpVersion;
	class FString                                 LastContentVersion;
	class FString                                 LastMinBuild;
	struct FTimespan                              LocalTimeOffset;
	uint8                                         Pad_1B0[0x8];
	class FString                                 LockCode;
	TArray<class UMcpProfile*>                    LockedProfiles;
	class FString                                 LockedProfilesString;
	int32                                         ProfileWriteLockTimeoutSecs;
	bool                                          bSubscribedToNotifications;
	uint8                                         Pad_1ED[0x3];
	class FString                                 ApplyStashEndPoint;
	uint8                                         Pad_200[0x8];
	bool                                          bSendProfileCommandRevisions;
	bool                                          bAsyncParseProfileUpdates;
	uint8                                         Pad_20A[0x56];
	int32                                         MaxChangesToForwardInUpdate;
	int32                                         MaxChangeSizeInBytes;
	TArray<class FString>                         ForwardToClientExclusions;
	uint8                                         Pad_278[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileGroup">();
	}
	static class UMcpProfileGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileGroup>();
	}
};
static_assert(alignof(UMcpProfileGroup) == 0x000010, "Wrong alignment on UMcpProfileGroup");
static_assert(sizeof(UMcpProfileGroup) == 0x000280, "Wrong size on UMcpProfileGroup");
static_assert(offsetof(UMcpProfileGroup, DelayMcpResults) == 0x0000DC, "Member 'UMcpProfileGroup::DelayMcpResults' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, WeeklyIntervalStartDay) == 0x0000E0, "Member 'UMcpProfileGroup::WeeklyIntervalStartDay' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileList) == 0x0000E8, "Member 'UMcpProfileGroup::ProfileList' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, PlayerName) == 0x000100, "Member 'UMcpProfileGroup::PlayerName' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsServer) == 0x000110, "Member 'UMcpProfileGroup::bIsServer' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileNotificationsStompTopic) == 0x000118, "Member 'UMcpProfileGroup::ProfileNotificationsStompTopic' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastMcpVersion) == 0x000178, "Member 'UMcpProfileGroup::LastMcpVersion' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastContentVersion) == 0x000188, "Member 'UMcpProfileGroup::LastContentVersion' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastMinBuild) == 0x000198, "Member 'UMcpProfileGroup::LastMinBuild' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LocalTimeOffset) == 0x0001A8, "Member 'UMcpProfileGroup::LocalTimeOffset' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockCode) == 0x0001B8, "Member 'UMcpProfileGroup::LockCode' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockedProfiles) == 0x0001C8, "Member 'UMcpProfileGroup::LockedProfiles' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockedProfilesString) == 0x0001D8, "Member 'UMcpProfileGroup::LockedProfilesString' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileWriteLockTimeoutSecs) == 0x0001E8, "Member 'UMcpProfileGroup::ProfileWriteLockTimeoutSecs' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bSubscribedToNotifications) == 0x0001EC, "Member 'UMcpProfileGroup::bSubscribedToNotifications' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ApplyStashEndPoint) == 0x0001F0, "Member 'UMcpProfileGroup::ApplyStashEndPoint' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bSendProfileCommandRevisions) == 0x000208, "Member 'UMcpProfileGroup::bSendProfileCommandRevisions' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bAsyncParseProfileUpdates) == 0x000209, "Member 'UMcpProfileGroup::bAsyncParseProfileUpdates' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, MaxChangesToForwardInUpdate) == 0x000260, "Member 'UMcpProfileGroup::MaxChangesToForwardInUpdate' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, MaxChangeSizeInBytes) == 0x000264, "Member 'UMcpProfileGroup::MaxChangeSizeInBytes' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ForwardToClientExclusions) == 0x000268, "Member 'UMcpProfileGroup::ForwardToClientExclusions' has a wrong offset!");

class UMcpProfileManager final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	TArray<struct FProfileGroupEntry>             ServerProfileGroups;
	TArray<struct FProfileGroupEntry>             ClientProfileGroups;
	uint8                                         Pad_58[0x8];
	int32                                         MaxItemsProcessedInInitialUpdatesPerTick;
	uint8                                         Pad_64[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileManager">();
	}
	static class UMcpProfileManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileManager>();
	}
};
static_assert(alignof(UMcpProfileManager) == 0x000008, "Wrong alignment on UMcpProfileManager");
static_assert(sizeof(UMcpProfileManager) == 0x000068, "Wrong size on UMcpProfileManager");
static_assert(offsetof(UMcpProfileManager, ServerProfileGroups) == 0x000038, "Member 'UMcpProfileManager::ServerProfileGroups' has a wrong offset!");
static_assert(offsetof(UMcpProfileManager, ClientProfileGroups) == 0x000048, "Member 'UMcpProfileManager::ClientProfileGroups' has a wrong offset!");
static_assert(offsetof(UMcpProfileManager, MaxItemsProcessedInInitialUpdatesPerTick) == 0x000060, "Member 'UMcpProfileManager::MaxItemsProcessedInInitialUpdatesPerTick' has a wrong offset!");

}
