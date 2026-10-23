#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDisabledQuestsEntryHeader_C final : public UAthenaChallengeListEntry_Header
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisabledQuestsEntryHeader_C">();
	}
	static class UDisabledQuestsEntryHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisabledQuestsEntryHeader_C>();
	}
};
static_assert(alignof(UDisabledQuestsEntryHeader_C) == 0x000008, "Wrong alignment on UDisabledQuestsEntryHeader_C");
static_assert(sizeof(UDisabledQuestsEntryHeader_C) == 0x0002B0, "Wrong size on UDisabledQuestsEntryHeader_C");

}
