#pragma once

#include "Basic.hpp"

#include "NeuralNetworkInference_structs.hpp"

namespace SDK
{

struct FNeuralNetworkInferenceQAOperatorTestAsset final
{
public:
	TArray<struct FNeuralTensor>                  InputTensors;
	TArray<struct FNeuralTensor>                  OutputTensors;
};
static_assert(alignof(FNeuralNetworkInferenceQAOperatorTestAsset) == 0x000008, "Wrong alignment on FNeuralNetworkInferenceQAOperatorTestAsset");
static_assert(sizeof(FNeuralNetworkInferenceQAOperatorTestAsset) == 0x000020, "Wrong size on FNeuralNetworkInferenceQAOperatorTestAsset");
static_assert(offsetof(FNeuralNetworkInferenceQAOperatorTestAsset, InputTensors) == 0x000000, "Member 'FNeuralNetworkInferenceQAOperatorTestAsset::InputTensors' has a wrong offset!");
static_assert(offsetof(FNeuralNetworkInferenceQAOperatorTestAsset, OutputTensors) == 0x000010, "Member 'FNeuralNetworkInferenceQAOperatorTestAsset::OutputTensors' has a wrong offset!");

struct FNeuralNetworkInferenceQAOperatorAsset final
{
public:
	uint8                                         Pad_0[0x20];
	TArray<struct FNeuralNetworkInferenceQAOperatorTestAsset> PreviousTests;
	class FString                                 PreviousTestsString;
};
static_assert(alignof(FNeuralNetworkInferenceQAOperatorAsset) == 0x000008, "Wrong alignment on FNeuralNetworkInferenceQAOperatorAsset");
static_assert(sizeof(FNeuralNetworkInferenceQAOperatorAsset) == 0x000040, "Wrong size on FNeuralNetworkInferenceQAOperatorAsset");
static_assert(offsetof(FNeuralNetworkInferenceQAOperatorAsset, PreviousTests) == 0x000020, "Member 'FNeuralNetworkInferenceQAOperatorAsset::PreviousTests' has a wrong offset!");
static_assert(offsetof(FNeuralNetworkInferenceQAOperatorAsset, PreviousTestsString) == 0x000030, "Member 'FNeuralNetworkInferenceQAOperatorAsset::PreviousTestsString' has a wrong offset!");

}
