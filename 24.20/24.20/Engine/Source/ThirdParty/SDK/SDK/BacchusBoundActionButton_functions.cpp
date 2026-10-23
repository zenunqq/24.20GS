#pragma once

#include "Basic.hpp"

#include "BacchusBoundActionButton_classes.hpp"
#include "BacchusBoundActionButton_parameters.hpp"

namespace SDK
{

void UBacchusBoundActionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusBoundActionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusBoundActionButton_C::ExecuteUbergraph_BacchusBoundActionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusBoundActionButton_C", "ExecuteUbergraph_BacchusBoundActionButton");

	Params::BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusBoundActionButton_C::OnUpdateInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusBoundActionButton_C", "OnUpdateInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusBoundActionButton_C::UpdateInputActionIconSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusBoundActionButton_C", "UpdateInputActionIconSize");

	UObject::ProcessEvent(Func, nullptr);
}

}
