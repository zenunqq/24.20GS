#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionMapPanel_classes.hpp"
#include "BP_AthenaCollectionMapPanel_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionMapPanel_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionMapPanel_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionMapPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionMapPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionMapPanel_C::ExecuteUbergraph_BP_AthenaCollectionMapPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionMapPanel_C", "ExecuteUbergraph_BP_AthenaCollectionMapPanel");

	Params::BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
