#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTwitchNotification_C final : public UFortUIFriendNotification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TwitchNotification_C">();
	}
	static class UTwitchNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTwitchNotification_C>();
	}
};
static_assert(alignof(UTwitchNotification_C) == 0x000008, "Wrong alignment on UTwitchNotification_C");
static_assert(sizeof(UTwitchNotification_C) == 0x000150, "Wrong size on UTwitchNotification_C");

}
