#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct NeuralNetworkInferenceQA_UnitTesting final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NeuralNetworkInferenceQA_UnitTesting) == 0x000001, "Wrong alignment on NeuralNetworkInferenceQA_UnitTesting");
static_assert(sizeof(NeuralNetworkInferenceQA_UnitTesting) == 0x000001, "Wrong size on NeuralNetworkInferenceQA_UnitTesting");
static_assert(offsetof(NeuralNetworkInferenceQA_UnitTesting, ReturnValue) == 0x000000, "Member 'NeuralNetworkInferenceQA_UnitTesting::ReturnValue' has a wrong offset!");

}
