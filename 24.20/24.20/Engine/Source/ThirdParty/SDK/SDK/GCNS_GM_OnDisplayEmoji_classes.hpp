#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCNS_GM_OnDisplayEmoji_C final : public UGameplayCueNotify_OnDisplayEmoji
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_GM_OnDisplayEmoji_C">();
	}
	static class UGCNS_GM_OnDisplayEmoji_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_GM_OnDisplayEmoji_C>();
	}
};
static_assert(alignof(UGCNS_GM_OnDisplayEmoji_C) == 0x000008, "Wrong alignment on UGCNS_GM_OnDisplayEmoji_C");
static_assert(sizeof(UGCNS_GM_OnDisplayEmoji_C) == 0x000228, "Wrong size on UGCNS_GM_OnDisplayEmoji_C");

}
