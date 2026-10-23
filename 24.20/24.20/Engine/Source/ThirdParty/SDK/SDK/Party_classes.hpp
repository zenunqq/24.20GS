#pragma once

#include "Basic.hpp"

#include "Party_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UChatroom : public UObject
{
public:
	class FString                                 CurrentChatRoomId;
	int32                                         MaxChatRoomRetries;
	int32                                         NumChatRoomRetries;
	uint8                                         Pad_40[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Chatroom">();
	}
	static class UChatroom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatroom>();
	}
};
static_assert(alignof(UChatroom) == 0x000008, "Wrong alignment on UChatroom");
static_assert(sizeof(UChatroom) == 0x000058, "Wrong size on UChatroom");
static_assert(offsetof(UChatroom, CurrentChatRoomId) == 0x000028, "Member 'UChatroom::CurrentChatRoomId' has a wrong offset!");
static_assert(offsetof(UChatroom, MaxChatRoomRetries) == 0x000038, "Member 'UChatroom::MaxChatRoomRetries' has a wrong offset!");
static_assert(offsetof(UChatroom, NumChatRoomRetries) == 0x00003C, "Member 'UChatroom::NumChatRoomRetries' has a wrong offset!");

class USocialManager : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	TArray<class USocialToolkit*>                 SocialToolkits;
	class USocialDebugTools*                      SocialDebugTools;
	uint8                                         Pad_68[0x140];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialManager">();
	}
	static class USocialManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialManager>();
	}
};
static_assert(alignof(USocialManager) == 0x000008, "Wrong alignment on USocialManager");
static_assert(sizeof(USocialManager) == 0x0001A8, "Wrong size on USocialManager");
static_assert(offsetof(USocialManager, SocialToolkits) == 0x000050, "Member 'USocialManager::SocialToolkits' has a wrong offset!");
static_assert(offsetof(USocialManager, SocialDebugTools) == 0x000060, "Member 'USocialManager::SocialDebugTools' has a wrong offset!");

class USocialToolkit : public UObject
{
public:
	uint8                                         Pad_28[0x40];
	class USocialUser*                            LocalUser;
	TArray<class USocialUser*>                    AllUsers;
	uint8                                         Pad_80[0x50];
	bool                                          bRemoveInvalidatedUserFromMaps;
	uint8                                         Pad_D1[0x3];
	TWeakObjectPtr<class ULocalPlayer>            LocalPlayerOwner;
	uint8                                         Pad_DC[0x4];
	class USocialChatManager*                     SocialChatManager;
	uint8                                         Pad_E8[0x1C8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialToolkit">();
	}
	static class USocialToolkit* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialToolkit>();
	}
};
static_assert(alignof(USocialToolkit) == 0x000008, "Wrong alignment on USocialToolkit");
static_assert(sizeof(USocialToolkit) == 0x0002B0, "Wrong size on USocialToolkit");
static_assert(offsetof(USocialToolkit, LocalUser) == 0x000068, "Member 'USocialToolkit::LocalUser' has a wrong offset!");
static_assert(offsetof(USocialToolkit, AllUsers) == 0x000070, "Member 'USocialToolkit::AllUsers' has a wrong offset!");
static_assert(offsetof(USocialToolkit, bRemoveInvalidatedUserFromMaps) == 0x0000D0, "Member 'USocialToolkit::bRemoveInvalidatedUserFromMaps' has a wrong offset!");
static_assert(offsetof(USocialToolkit, LocalPlayerOwner) == 0x0000D4, "Member 'USocialToolkit::LocalPlayerOwner' has a wrong offset!");
static_assert(offsetof(USocialToolkit, SocialChatManager) == 0x0000E0, "Member 'USocialToolkit::SocialChatManager' has a wrong offset!");

class USocialChatManager : public UObject
{
public:
	uint8                                         Pad_28[0x50];
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
	TMap<class FString, class USocialChatRoom*>   ChatRoomsById;
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
	bool                                          bEnableChatSlashCommands;
	uint8                                         Pad_169[0x7];
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;
	uint8                                         Pad_1C0[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatManager">();
	}
	static class USocialChatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatManager>();
	}
};
static_assert(alignof(USocialChatManager) == 0x000008, "Wrong alignment on USocialChatManager");
static_assert(sizeof(USocialChatManager) == 0x000220, "Wrong size on USocialChatManager");
static_assert(offsetof(USocialChatManager, DirectChannelsByTargetUser) == 0x000078, "Member 'USocialChatManager::DirectChannelsByTargetUser' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ChatRoomsById) == 0x0000C8, "Member 'USocialChatManager::ChatRoomsById' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ReadOnlyChannelsByDisplayName) == 0x000118, "Member 'USocialChatManager::ReadOnlyChannelsByDisplayName' has a wrong offset!");
static_assert(offsetof(USocialChatManager, bEnableChatSlashCommands) == 0x000168, "Member 'USocialChatManager::bEnableChatSlashCommands' has a wrong offset!");
static_assert(offsetof(USocialChatManager, GroupChannels) == 0x000170, "Member 'USocialChatManager::GroupChannels' has a wrong offset!");

class USocialChatChannel : public UObject
{
public:
	uint8                                         Pad_28[0xC0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannel">();
	}
	static class USocialChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannel>();
	}
};
static_assert(alignof(USocialChatChannel) == 0x000008, "Wrong alignment on USocialChatChannel");
static_assert(sizeof(USocialChatChannel) == 0x0000E8, "Wrong size on USocialChatChannel");

class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                         Pad_E8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatRoom">();
	}
	static class USocialChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatRoom>();
	}
};
static_assert(alignof(USocialChatRoom) == 0x000008, "Wrong alignment on USocialChatRoom");
static_assert(sizeof(USocialChatRoom) == 0x0000F8, "Wrong size on USocialChatRoom");

class USocialGroupChannel final : public UObject
{
public:
	class USocialUser*                            SocialUser;
	struct FUniqueNetIdRepl                       GroupId;
	class FText                                   DisplayName;
	TArray<class USocialUser*>                    Members;
	uint8                                         Pad_88[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupChannel">();
	}
	static class USocialGroupChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupChannel>();
	}
};
static_assert(alignof(USocialGroupChannel) == 0x000008, "Wrong alignment on USocialGroupChannel");
static_assert(sizeof(USocialGroupChannel) == 0x000098, "Wrong size on USocialGroupChannel");
static_assert(offsetof(USocialGroupChannel, SocialUser) == 0x000028, "Member 'USocialGroupChannel::SocialUser' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, GroupId) == 0x000030, "Member 'USocialGroupChannel::GroupId' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, DisplayName) == 0x000060, "Member 'USocialGroupChannel::DisplayName' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, Members) == 0x000078, "Member 'USocialGroupChannel::Members' has a wrong offset!");

class USocialPartyChatRoom final : public USocialChatRoom
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPartyChatRoom">();
	}
	static class USocialPartyChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPartyChatRoom>();
	}
};
static_assert(alignof(USocialPartyChatRoom) == 0x000008, "Wrong alignment on USocialPartyChatRoom");
static_assert(sizeof(USocialPartyChatRoom) == 0x0000F8, "Wrong size on USocialPartyChatRoom");

class USocialPrivateMessageChannel final : public USocialChatChannel
{
public:
	class USocialUser*                            TargetUser;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPrivateMessageChannel">();
	}
	static class USocialPrivateMessageChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPrivateMessageChannel>();
	}
};
static_assert(alignof(USocialPrivateMessageChannel) == 0x000008, "Wrong alignment on USocialPrivateMessageChannel");
static_assert(sizeof(USocialPrivateMessageChannel) == 0x0000F0, "Wrong size on USocialPrivateMessageChannel");
static_assert(offsetof(USocialPrivateMessageChannel, TargetUser) == 0x0000E8, "Member 'USocialPrivateMessageChannel::TargetUser' has a wrong offset!");

class USocialReadOnlyChatChannel final : public USocialChatChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialReadOnlyChatChannel">();
	}
	static class USocialReadOnlyChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialReadOnlyChatChannel>();
	}
};
static_assert(alignof(USocialReadOnlyChatChannel) == 0x000008, "Wrong alignment on USocialReadOnlyChatChannel");
static_assert(sizeof(USocialReadOnlyChatChannel) == 0x0000E8, "Wrong size on USocialReadOnlyChatChannel");

class alignas(0x10) USocialParty : public UObject
{
public:
	uint8                                         Pad_28[0x38];
	TSubclassOf<class APartyBeaconClient>         ReservationBeaconClientClass;
	TSubclassOf<class ASpectatorBeaconClient>     SpectatorBeaconClientClass;
	uint8                                         Pad_70[0x10];
	struct FUniqueNetIdRepl                       OwningLocalUserId;
	struct FUniqueNetIdRepl                       CurrentLeaderId;
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;
	bool                                          bEnableAutomaticPartyRejoin;
	uint8                                         Pad_131[0x57];
	double                                        PlatformUserInviteCooldown;
	double                                        PrimaryUserInviteCooldown;
	uint8                                         Pad_198[0x70];
	TWeakObjectPtr<class APartyBeaconClient>      ReservationBeaconClient;
	uint8                                         Pad_210[0x4];
	TWeakObjectPtr<class ASpectatorBeaconClient>  SpectatorBeaconClient;
	uint8                                         Pad_21C[0x2C];
	float                                         JoinInProgressTimerRate;
	int32                                         JoinInProgressRequestTimeout;
	int32                                         JoinInProgressResponseTimeout;
	uint8                                         Pad_254[0x12C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialParty">();
	}
	static class USocialParty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialParty>();
	}
};
static_assert(alignof(USocialParty) == 0x000010, "Wrong alignment on USocialParty");
static_assert(sizeof(USocialParty) == 0x000380, "Wrong size on USocialParty");
static_assert(offsetof(USocialParty, ReservationBeaconClientClass) == 0x000060, "Member 'USocialParty::ReservationBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClientClass) == 0x000068, "Member 'USocialParty::SpectatorBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, OwningLocalUserId) == 0x000080, "Member 'USocialParty::OwningLocalUserId' has a wrong offset!");
static_assert(offsetof(USocialParty, CurrentLeaderId) == 0x0000B0, "Member 'USocialParty::CurrentLeaderId' has a wrong offset!");
static_assert(offsetof(USocialParty, PartyMembersById) == 0x0000E0, "Member 'USocialParty::PartyMembersById' has a wrong offset!");
static_assert(offsetof(USocialParty, bEnableAutomaticPartyRejoin) == 0x000130, "Member 'USocialParty::bEnableAutomaticPartyRejoin' has a wrong offset!");
static_assert(offsetof(USocialParty, PlatformUserInviteCooldown) == 0x000188, "Member 'USocialParty::PlatformUserInviteCooldown' has a wrong offset!");
static_assert(offsetof(USocialParty, PrimaryUserInviteCooldown) == 0x000190, "Member 'USocialParty::PrimaryUserInviteCooldown' has a wrong offset!");
static_assert(offsetof(USocialParty, ReservationBeaconClient) == 0x000208, "Member 'USocialParty::ReservationBeaconClient' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClient) == 0x000214, "Member 'USocialParty::SpectatorBeaconClient' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressTimerRate) == 0x000248, "Member 'USocialParty::JoinInProgressTimerRate' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressRequestTimeout) == 0x00024C, "Member 'USocialParty::JoinInProgressRequestTimeout' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressResponseTimeout) == 0x000250, "Member 'USocialParty::JoinInProgressResponseTimeout' has a wrong offset!");

class UPartyMember : public UObject
{
public:
	uint8                                         Pad_28[0x48];
	class USocialUser*                            SocialUser;
	uint8                                         Pad_78[0x98];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartyMember">();
	}
	static class UPartyMember* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMember>();
	}
};
static_assert(alignof(UPartyMember) == 0x000008, "Wrong alignment on UPartyMember");
static_assert(sizeof(UPartyMember) == 0x000110, "Wrong size on UPartyMember");
static_assert(offsetof(UPartyMember, SocialUser) == 0x000070, "Member 'UPartyMember::SocialUser' has a wrong offset!");

class USocialDebugTools : public UObject
{
public:
	uint8                                         Pad_28[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialDebugTools">();
	}
	static class USocialDebugTools* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialDebugTools>();
	}
};
static_assert(alignof(USocialDebugTools) == 0x000008, "Wrong alignment on USocialDebugTools");
static_assert(sizeof(USocialDebugTools) == 0x000088, "Wrong size on USocialDebugTools");

class USocialSettings final : public UObject
{
public:
	TArray<class FName>                           OssNamesWithEnvironmentIdPrefix;
	int32                                         DefaultMaxPartySize;
	bool                                          bPreferPlatformInvites;
	bool                                          bMustSendPrimaryInvites;
	bool                                          bLeavePartyOnDisconnect;
	bool                                          bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
	float                                         UserListAutoUpdateRate;
	int32                                         MinNicknameLength;
	int32                                         MaxNicknameLength;
	uint8                                         Pad_4C[0x4];
	TArray<struct FSocialPlatformDescription>     SocialPlatformDescriptions;
	TArray<class FName>                           SonyOSSNames;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSettings">();
	}
	static class USocialSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSettings>();
	}
};
static_assert(alignof(USocialSettings) == 0x000008, "Wrong alignment on USocialSettings");
static_assert(sizeof(USocialSettings) == 0x000070, "Wrong size on USocialSettings");
static_assert(offsetof(USocialSettings, OssNamesWithEnvironmentIdPrefix) == 0x000028, "Member 'USocialSettings::OssNamesWithEnvironmentIdPrefix' has a wrong offset!");
static_assert(offsetof(USocialSettings, DefaultMaxPartySize) == 0x000038, "Member 'USocialSettings::DefaultMaxPartySize' has a wrong offset!");
static_assert(offsetof(USocialSettings, bPreferPlatformInvites) == 0x00003C, "Member 'USocialSettings::bPreferPlatformInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, bMustSendPrimaryInvites) == 0x00003D, "Member 'USocialSettings::bMustSendPrimaryInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, bLeavePartyOnDisconnect) == 0x00003E, "Member 'USocialSettings::bLeavePartyOnDisconnect' has a wrong offset!");
static_assert(offsetof(USocialSettings, bSetDesiredPrivacyOnLocalPlayerBecomesLeader) == 0x00003F, "Member 'USocialSettings::bSetDesiredPrivacyOnLocalPlayerBecomesLeader' has a wrong offset!");
static_assert(offsetof(USocialSettings, UserListAutoUpdateRate) == 0x000040, "Member 'USocialSettings::UserListAutoUpdateRate' has a wrong offset!");
static_assert(offsetof(USocialSettings, MinNicknameLength) == 0x000044, "Member 'USocialSettings::MinNicknameLength' has a wrong offset!");
static_assert(offsetof(USocialSettings, MaxNicknameLength) == 0x000048, "Member 'USocialSettings::MaxNicknameLength' has a wrong offset!");
static_assert(offsetof(USocialSettings, SocialPlatformDescriptions) == 0x000050, "Member 'USocialSettings::SocialPlatformDescriptions' has a wrong offset!");
static_assert(offsetof(USocialSettings, SonyOSSNames) == 0x000060, "Member 'USocialSettings::SonyOSSNames' has a wrong offset!");

class USocialUser : public UObject
{
public:
	uint8                                         Pad_28[0x1A8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUser">();
	}
	static class USocialUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUser>();
	}
};
static_assert(alignof(USocialUser) == 0x000008, "Wrong alignment on USocialUser");
static_assert(sizeof(USocialUser) == 0x0001D0, "Wrong size on USocialUser");

}
