#pragma once

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"

namespace SDK
{

class UGE_ZipLine_Damage_Structure_C final : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ZipLine_Damage_Structure_C">();
	}
	static class UGE_ZipLine_Damage_Structure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ZipLine_Damage_Structure_C>();
	}
};
static_assert(alignof(UGE_ZipLine_Damage_Structure_C) == 0x000008, "Wrong alignment on UGE_ZipLine_Damage_Structure_C");
static_assert(sizeof(UGE_ZipLine_Damage_Structure_C) == 0x000858, "Wrong size on UGE_ZipLine_Damage_Structure_C");

}
