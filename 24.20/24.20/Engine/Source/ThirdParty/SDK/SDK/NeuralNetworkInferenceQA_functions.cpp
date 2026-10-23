#pragma once

#include "Basic.hpp"

#include "NeuralNetworkInferenceQA_classes.hpp"
#include "NeuralNetworkInferenceQA_parameters.hpp"

namespace SDK
{

bool UNeuralNetworkInferenceQA::UnitTesting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeuralNetworkInferenceQA", "UnitTesting");

	Params::NeuralNetworkInferenceQA_UnitTesting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
