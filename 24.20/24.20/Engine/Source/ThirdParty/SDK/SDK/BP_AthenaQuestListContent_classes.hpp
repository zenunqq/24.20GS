#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaQuestListContent_C final : public UAthenaQuestListContent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaQuestListContent_C">();
	}
	static class UBP_AthenaQuestListContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaQuestListContent_C>();
	}
};
static_assert(alignof(UBP_AthenaQuestListContent_C) == 0x000008, "Wrong alignment on UBP_AthenaQuestListContent_C");
static_assert(sizeof(UBP_AthenaQuestListContent_C) == 0x000528, "Wrong size on UBP_AthenaQuestListContent_C");

}
