#pragma once

#include "Basic.hpp"

#include "NeuralNetworkInferenceQA_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UNeuralNetworkInferenceQA final : public UObject
{
public:
	static bool UnitTesting();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralNetworkInferenceQA">();
	}
	static class UNeuralNetworkInferenceQA* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralNetworkInferenceQA>();
	}
};
static_assert(alignof(UNeuralNetworkInferenceQA) == 0x000008, "Wrong alignment on UNeuralNetworkInferenceQA");
static_assert(sizeof(UNeuralNetworkInferenceQA) == 0x000028, "Wrong size on UNeuralNetworkInferenceQA");

class UNeuralNetworkInferenceQAAsset final : public UObject
{
public:
	TMap<class FString, struct FNeuralNetworkInferenceQAOperatorAsset> Operators;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralNetworkInferenceQAAsset">();
	}
	static class UNeuralNetworkInferenceQAAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralNetworkInferenceQAAsset>();
	}
};
static_assert(alignof(UNeuralNetworkInferenceQAAsset) == 0x000008, "Wrong alignment on UNeuralNetworkInferenceQAAsset");
static_assert(sizeof(UNeuralNetworkInferenceQAAsset) == 0x000078, "Wrong size on UNeuralNetworkInferenceQAAsset");
static_assert(offsetof(UNeuralNetworkInferenceQAAsset, Operators) == 0x000028, "Member 'UNeuralNetworkInferenceQAAsset::Operators' has a wrong offset!");

}
