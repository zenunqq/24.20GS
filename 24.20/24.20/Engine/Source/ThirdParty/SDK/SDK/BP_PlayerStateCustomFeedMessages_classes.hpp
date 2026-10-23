#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBP_PlayerStateCustomFeedMessages_C final : public UFortPlayerStateComponent_CustomFeedMessage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStateCustomFeedMessages_C">();
	}
	static class UBP_PlayerStateCustomFeedMessages_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerStateCustomFeedMessages_C>();
	}
};
static_assert(alignof(UBP_PlayerStateCustomFeedMessages_C) == 0x000008, "Wrong alignment on UBP_PlayerStateCustomFeedMessages_C");
static_assert(sizeof(UBP_PlayerStateCustomFeedMessages_C) == 0x000108, "Wrong size on UBP_PlayerStateCustomFeedMessages_C");

}
