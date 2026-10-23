#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UQuestListEntryHeader_C final : public UAthenaChallengeListEntry_Header
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestListEntryHeader_C">();
	}
	static class UQuestListEntryHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestListEntryHeader_C>();
	}
};
static_assert(alignof(UQuestListEntryHeader_C) == 0x000008, "Wrong alignment on UQuestListEntryHeader_C");
static_assert(sizeof(UQuestListEntryHeader_C) == 0x0002B0, "Wrong size on UQuestListEntryHeader_C");

}
