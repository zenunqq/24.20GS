#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaMapChallengeListEntry_Icon_C final : public UAthenaMapChallengeListEntry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMapChallengeListEntry_Icon_C">();
	}
	static class UAthenaMapChallengeListEntry_Icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapChallengeListEntry_Icon_C>();
	}
};
static_assert(alignof(UAthenaMapChallengeListEntry_Icon_C) == 0x000008, "Wrong alignment on UAthenaMapChallengeListEntry_Icon_C");
static_assert(sizeof(UAthenaMapChallengeListEntry_Icon_C) == 0x0002B8, "Wrong size on UAthenaMapChallengeListEntry_Icon_C");

}
