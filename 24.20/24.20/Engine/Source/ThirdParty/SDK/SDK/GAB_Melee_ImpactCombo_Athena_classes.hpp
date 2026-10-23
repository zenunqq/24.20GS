#pragma once

#include "Basic.hpp"

#include "GAB_Melee_GenericCombo_classes.hpp"

namespace SDK
{

class UGAB_Melee_ImpactCombo_Athena_C final : public UGAB_Melee_GenericCombo_C
{
public:
	void K2_CommitExecute();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Melee_ImpactCombo_Athena_C">();
	}
	static class UGAB_Melee_ImpactCombo_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Melee_ImpactCombo_Athena_C>();
	}
};
static_assert(alignof(UGAB_Melee_ImpactCombo_Athena_C) == 0x000008, "Wrong alignment on UGAB_Melee_ImpactCombo_Athena_C");
static_assert(sizeof(UGAB_Melee_ImpactCombo_Athena_C) == 0x000B70, "Wrong size on UGAB_Melee_ImpactCombo_Athena_C");

}
