#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Athena_Consumable_Throw_Generic_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Consumable_Throw_Generic_C">();
	}
	static class UGCN_Athena_Consumable_Throw_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_Consumable_Throw_Generic_C>();
	}
};
static_assert(alignof(UGCN_Athena_Consumable_Throw_Generic_C) == 0x000008, "Wrong alignment on UGCN_Athena_Consumable_Throw_Generic_C");
static_assert(sizeof(UGCN_Athena_Consumable_Throw_Generic_C) == 0x000210, "Wrong size on UGCN_Athena_Consumable_Throw_Generic_C");

}
