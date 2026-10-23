#pragma once

#include "Basic.hpp"

#include "VariantFilterTab_classes.hpp"
#include "VariantFilterTab_parameters.hpp"

namespace SDK
{

void UVariantFilterTab_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UVariantFilterTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UVariantFilterTab_C::ExecuteUbergraph_VariantFilterTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_C", "ExecuteUbergraph_VariantFilterTab");

	Params::VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
