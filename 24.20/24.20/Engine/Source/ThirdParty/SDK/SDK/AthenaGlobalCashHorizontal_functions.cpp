#pragma once

#include "Basic.hpp"

#include "AthenaGlobalCashHorizontal_classes.hpp"
#include "AthenaGlobalCashHorizontal_parameters.hpp"

namespace SDK
{

void UAthenaGlobalCashHorizontal_C::ExecuteUbergraph_AthenaGlobalCashHorizontal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCashHorizontal_C", "ExecuteUbergraph_AthenaGlobalCashHorizontal");

	Params::AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGlobalCashHorizontal_C::OnQueryCompletedSuccessfully(int32 GlobalCashBalance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCashHorizontal_C", "OnQueryCompletedSuccessfully");

	Params::AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully Parms{};

	Parms.GlobalCashBalance = GlobalCashBalance;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGlobalCashHorizontal_C::OnQueryStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGlobalCashHorizontal_C", "OnQueryStarted");

	UObject::ProcessEvent(Func, nullptr);
}

}
