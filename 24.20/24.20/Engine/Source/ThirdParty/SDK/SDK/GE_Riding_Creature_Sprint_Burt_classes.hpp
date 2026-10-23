#pragma once

#include "Basic.hpp"

#include "GE_Riding_Creature_Sprint_classes.hpp"

namespace SDK
{

class UGE_Riding_Creature_Sprint_Burt_C final : public UGE_Riding_Creature_Sprint_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Riding_Creature_Sprint_Burt_C">();
	}
	static class UGE_Riding_Creature_Sprint_Burt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Riding_Creature_Sprint_Burt_C>();
	}
};
static_assert(alignof(UGE_Riding_Creature_Sprint_Burt_C) == 0x000008, "Wrong alignment on UGE_Riding_Creature_Sprint_Burt_C");
static_assert(sizeof(UGE_Riding_Creature_Sprint_Burt_C) == 0x000858, "Wrong size on UGE_Riding_Creature_Sprint_Burt_C");

}
