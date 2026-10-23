#pragma once

#include "Basic.hpp"

#include "StoreCardReveal_Parent_classes.hpp"
#include "StoreCardReveal_Parent_parameters.hpp"

namespace SDK
{

void AStoreCardReveal_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::StoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
