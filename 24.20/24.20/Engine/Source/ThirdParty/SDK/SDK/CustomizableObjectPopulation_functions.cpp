#pragma once

#include "Basic.hpp"

#include "CustomizableObjectPopulation_classes.hpp"
#include "CustomizableObjectPopulation_parameters.hpp"

namespace SDK
{

int32 UCustomizableObjectPopulation::GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectPopulation", "GeneratePopulation");

	Params::CustomizableObjectPopulation_GeneratePopulation Parms{};

	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstances != nullptr)
		*OutInstances = std::move(Parms.OutInstances);

	return Parms.ReturnValue;
}

bool UCustomizableObjectPopulation::RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectPopulation", "RegeneratePopulation");

	Params::CustomizableObjectPopulation_RegeneratePopulation Parms{};

	Parms.Seed = Seed;
	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstances != nullptr)
		*OutInstances = std::move(Parms.OutInstances);

	return Parms.ReturnValue;
}

}
