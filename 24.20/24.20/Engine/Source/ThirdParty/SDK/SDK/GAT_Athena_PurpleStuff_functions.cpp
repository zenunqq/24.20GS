#pragma once

#include "Basic.hpp"

#include "GAT_Athena_PurpleStuff_classes.hpp"
#include "GAT_Athena_PurpleStuff_parameters.hpp"

namespace SDK
{

void UGAT_Athena_PurpleStuff_C::ExecuteUbergraph_GAT_Athena_PurpleStuff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_PurpleStuff_C", "ExecuteUbergraph_GAT_Athena_PurpleStuff");

	Params::GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_PurpleStuff_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
