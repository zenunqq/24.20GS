#pragma once

#include "Basic.hpp"

#include "BP_VendAISpawner_Base_classes.hpp"
#include "BP_VendAISpawner_Base_parameters.hpp"

namespace SDK
{

void ABP_VendAISpawner_Base_C::ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ExecuteUbergraph_BP_VendAISpawner_Base");

	Params::BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_VendAISpawner_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
