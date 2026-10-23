#pragma once

#include "Basic.hpp"

#include "GAB_Melee_DualWield_ImpactCombo_Athena_classes.hpp"
#include "GAB_Melee_DualWield_ImpactCombo_Athena_parameters.hpp"

namespace SDK
{

void UGAB_Melee_DualWield_ImpactCombo_Athena_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_DualWield_ImpactCombo_Athena_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}

}
