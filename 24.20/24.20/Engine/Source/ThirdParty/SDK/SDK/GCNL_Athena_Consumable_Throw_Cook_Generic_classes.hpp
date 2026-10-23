#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Consumable_Throw_Cook_Generic_C final : public AFortGameplayCueNotify_Loop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Consumable_Throw_Cook_Generic_C">();
	}
	static class AGCNL_Athena_Consumable_Throw_Cook_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Consumable_Throw_Cook_Generic_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Consumable_Throw_Cook_Generic_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Consumable_Throw_Cook_Generic_C");
static_assert(sizeof(AGCNL_Athena_Consumable_Throw_Cook_Generic_C) == 0x000960, "Wrong size on AGCNL_Athena_Consumable_Throw_Cook_Generic_C");

}
