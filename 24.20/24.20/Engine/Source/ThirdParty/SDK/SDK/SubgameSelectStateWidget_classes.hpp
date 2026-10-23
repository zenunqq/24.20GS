#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USubgameSelectStateWidget_C final : public UStartUpUIStateWidget_SubgameSelect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubgameSelectStateWidget_C">();
	}
	static class USubgameSelectStateWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubgameSelectStateWidget_C>();
	}
};
static_assert(alignof(USubgameSelectStateWidget_C) == 0x000008, "Wrong alignment on USubgameSelectStateWidget_C");
static_assert(sizeof(USubgameSelectStateWidget_C) == 0x0003C8, "Wrong size on USubgameSelectStateWidget_C");

}
