#pragma once

#include "Basic.hpp"

#include "VariantFilterTab_Secondary_classes.hpp"
#include "VariantFilterTab_Secondary_parameters.hpp"

namespace SDK
{

void UVariantFilterTab_Secondary_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_Secondary_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UVariantFilterTab_Secondary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_Secondary_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UVariantFilterTab_Secondary_C::ExecuteUbergraph_VariantFilterTab_Secondary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantFilterTab_Secondary_C", "ExecuteUbergraph_VariantFilterTab_Secondary");

	Params::VariantFilterTab_Secondary_C_ExecuteUbergraph_VariantFilterTab_Secondary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
