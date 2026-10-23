#pragma once

#include "Basic.hpp"

#include "LoginCredentialSelect_classes.hpp"
#include "LoginCredentialSelect_parameters.hpp"

namespace SDK
{

void ULoginCredentialSelect_C::ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCredentialSelect_C", "ExecuteUbergraph_LoginCredentialSelect");

	Params::LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoginCredentialSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCredentialSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
