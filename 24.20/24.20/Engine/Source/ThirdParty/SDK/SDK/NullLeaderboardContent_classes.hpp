#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UNullLeaderboardContent_C final : public UCommonUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NullLeaderboardContent_C">();
	}
	static class UNullLeaderboardContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNullLeaderboardContent_C>();
	}
};
static_assert(alignof(UNullLeaderboardContent_C) == 0x000008, "Wrong alignment on UNullLeaderboardContent_C");
static_assert(sizeof(UNullLeaderboardContent_C) == 0x000290, "Wrong size on UNullLeaderboardContent_C");

}
