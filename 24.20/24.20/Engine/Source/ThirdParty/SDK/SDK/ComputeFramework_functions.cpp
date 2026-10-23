#pragma once

#include "Basic.hpp"

#include "ComputeFramework_classes.hpp"
#include "ComputeFramework_parameters.hpp"

namespace SDK
{

void UComputeGraphComponent::CreateDataProviders(int32 InBindingIndex, class UObject* InBindingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComputeGraphComponent", "CreateDataProviders");

	Params::ComputeGraphComponent_CreateDataProviders Parms{};

	Parms.InBindingIndex = InBindingIndex;
	Parms.InBindingObject = InBindingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UComputeGraphComponent::DestroyDataProviders()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComputeGraphComponent", "DestroyDataProviders");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UComputeGraphComponent::QueueExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComputeGraphComponent", "QueueExecute");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
