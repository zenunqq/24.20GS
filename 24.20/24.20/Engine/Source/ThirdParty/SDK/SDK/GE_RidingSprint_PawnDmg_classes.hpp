#pragma once

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"

namespace SDK
{

class UGE_RidingSprint_PawnDmg_C final : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_RidingSprint_PawnDmg_C">();
	}
	static class UGE_RidingSprint_PawnDmg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_RidingSprint_PawnDmg_C>();
	}
};
static_assert(alignof(UGE_RidingSprint_PawnDmg_C) == 0x000008, "Wrong alignment on UGE_RidingSprint_PawnDmg_C");
static_assert(sizeof(UGE_RidingSprint_PawnDmg_C) == 0x000858, "Wrong size on UGE_RidingSprint_PawnDmg_C");

}
