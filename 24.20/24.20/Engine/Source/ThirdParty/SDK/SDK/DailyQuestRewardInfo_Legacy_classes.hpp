#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDailyQuestRewardInfo_Legacy_C final : public UFortRewardInfoWidget_Legacy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestRewardInfo_Legacy_C">();
	}
	static class UDailyQuestRewardInfo_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestRewardInfo_Legacy_C>();
	}
};
static_assert(alignof(UDailyQuestRewardInfo_Legacy_C) == 0x000008, "Wrong alignment on UDailyQuestRewardInfo_Legacy_C");
static_assert(sizeof(UDailyQuestRewardInfo_Legacy_C) == 0x000318, "Wrong size on UDailyQuestRewardInfo_Legacy_C");

}
