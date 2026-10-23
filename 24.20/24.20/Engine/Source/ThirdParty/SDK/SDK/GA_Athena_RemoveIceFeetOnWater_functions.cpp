#pragma once

#include "Basic.hpp"

#include "GA_Athena_RemoveIceFeetOnWater_classes.hpp"
#include "GA_Athena_RemoveIceFeetOnWater_parameters.hpp"

namespace SDK
{

void UGA_Athena_RemoveIceFeetOnWater_C::Added_ABAD1DEE46A337533ED461815C2B7BED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "Added_ABAD1DEE46A337533ED461815C2B7BED");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_RemoveIceFeetOnWater_C::ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater");

	Params::GA_Athena_RemoveIceFeetOnWater_C_ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_RemoveIceFeetOnWater_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
