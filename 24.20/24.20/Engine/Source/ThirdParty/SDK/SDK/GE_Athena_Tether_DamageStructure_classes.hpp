#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGE_Athena_Tether_DamageStructure_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_Tether_DamageStructure_C">();
	}
	static class UGE_Athena_Tether_DamageStructure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_Tether_DamageStructure_C>();
	}
};
static_assert(alignof(UGE_Athena_Tether_DamageStructure_C) == 0x000008, "Wrong alignment on UGE_Athena_Tether_DamageStructure_C");
static_assert(sizeof(UGE_Athena_Tether_DamageStructure_C) == 0x000858, "Wrong size on UGE_Athena_Tether_DamageStructure_C");

}
