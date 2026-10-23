#pragma once

#include "Basic.hpp"

#include "AthenaGlobalCash_classes.hpp"
#include "AthenaGlobalCash_parameters.hpp"

namespace SDK
{

void UAthenaGlobalCash_C::ExecuteUbergraph_AthenaGlobalCash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCash_C", "ExecuteUbergraph_AthenaGlobalCash");

	Params::AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGlobalCash_C::OnQueryCompletedSuccessfully(int32 GlobalCashBalance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCash_C", "OnQueryCompletedSuccessfully");

	Params::AthenaGlobalCash_C_OnQueryCompletedSuccessfully Parms{};

	Parms.GlobalCashBalance = GlobalCashBalance;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGlobalCash_C::OnQueryStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCash_C", "OnQueryStarted");

	UObject::ProcessEvent(Func, nullptr);
}

}
