#pragma once

#include "Basic.hpp"

#include "CosmeticLoadoutSelector_classes.hpp"
#include "CosmeticLoadoutSelector_parameters.hpp"

namespace SDK
{

void UCosmeticLoadoutSelector_C::ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "ExecuteUbergraph_CosmeticLoadoutSelector");

	Params::CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutSelector_C::OnLoadoutSet(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnLoadoutSet");

	Params::CosmeticLoadoutSelector_C_OnLoadoutSet Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutSelector_C::OnNumLoadoutsFound(int32 NumLoadouts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnNumLoadoutsFound");

	Params::CosmeticLoadoutSelector_C_OnNumLoadoutsFound Parms{};

	Parms.NumLoadouts = NumLoadouts;

	UObject::ProcessEvent(Func, &Parms);
}

}
