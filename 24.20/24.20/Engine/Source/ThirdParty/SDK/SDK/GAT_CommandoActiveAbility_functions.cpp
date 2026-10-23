#pragma once

#include "Basic.hpp"

#include "GAT_CommandoActiveAbility_classes.hpp"
#include "GAT_CommandoActiveAbility_parameters.hpp"

namespace SDK
{

void UGAT_CommandoActiveAbility_C::ExecuteUbergraph_GAT_CommandoActiveAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_CommandoActiveAbility_C", "ExecuteUbergraph_GAT_CommandoActiveAbility");

	Params::GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_CommandoActiveAbility_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_CommandoActiveAbility_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
