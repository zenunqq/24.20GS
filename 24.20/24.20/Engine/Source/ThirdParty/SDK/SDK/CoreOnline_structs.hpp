#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ECoreOnlineDummy : uint8
{
	Dummy                                    = 0,
	ECoreOnlineDummy_MAX                     = 1,
};

struct FJoinabilitySettings final
{
public:
	class FName                                   SessionName;
	bool                                          bPublicSearchable;
	bool                                          bAllowInvites;
	bool                                          bJoinViaPresence;
	bool                                          bJoinViaPresenceFriendsOnly;
	int32                                         MaxPlayers;
	int32                                         MaxPartySize;
};
static_assert(alignof(FJoinabilitySettings) == 0x000004, "Wrong alignment on FJoinabilitySettings");
static_assert(sizeof(FJoinabilitySettings) == 0x000010, "Wrong size on FJoinabilitySettings");
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x000000, "Member 'FJoinabilitySettings::SessionName' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bPublicSearchable) == 0x000004, "Member 'FJoinabilitySettings::bPublicSearchable' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bAllowInvites) == 0x000005, "Member 'FJoinabilitySettings::bAllowInvites' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresence) == 0x000006, "Member 'FJoinabilitySettings::bJoinViaPresence' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresenceFriendsOnly) == 0x000007, "Member 'FJoinabilitySettings::bJoinViaPresenceFriendsOnly' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, MaxPlayers) == 0x000008, "Member 'FJoinabilitySettings::MaxPlayers' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, MaxPartySize) == 0x00000C, "Member 'FJoinabilitySettings::MaxPartySize' has a wrong offset!");

struct FUniqueNetIdWrapper
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FUniqueNetIdWrapper) == 0x000001, "Wrong alignment on FUniqueNetIdWrapper");
static_assert(sizeof(FUniqueNetIdWrapper) == 0x000001, "Wrong size on FUniqueNetIdWrapper");

}
