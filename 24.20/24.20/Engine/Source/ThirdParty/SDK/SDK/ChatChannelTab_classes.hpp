#pragma once

#include "Basic.hpp"

#include "SocialUMG_classes.hpp"

namespace SDK
{

class UChatChannelTab_C final : public USocialChatChannelTab
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatChannelTab_C">();
	}
	static class UChatChannelTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatChannelTab_C>();
	}
};
static_assert(alignof(UChatChannelTab_C) == 0x000010, "Wrong alignment on UChatChannelTab_C");
static_assert(sizeof(UChatChannelTab_C) == 0x001440, "Wrong size on UChatChannelTab_C");

}
