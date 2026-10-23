#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBattlePassPageUnlockNotification_C final : public UFortUIBattlePassPageUnlockNotification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassPageUnlockNotification_C">();
	}
	static class UBattlePassPageUnlockNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPageUnlockNotification_C>();
	}
};
static_assert(alignof(UBattlePassPageUnlockNotification_C) == 0x000008, "Wrong alignment on UBattlePassPageUnlockNotification_C");
static_assert(sizeof(UBattlePassPageUnlockNotification_C) == 0x000138, "Wrong size on UBattlePassPageUnlockNotification_C");

}
