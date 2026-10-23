#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "NeuralNetworkInference_structs.hpp"

namespace SDK
{

class UNeuralNetwork final : public UObject
{
public:
	ENeuralDeviceType                             DeviceType;
	ENeuralDeviceType                             InputDeviceType;
	ENeuralDeviceType                             OutputDeviceType;
	ENeuralSynchronousMode                        SynchronousMode;
	ENeuralThreadMode                             ThreadModeDelegateForAsyncRunCompleted;
	uint8                                         Pad_2D[0x3];
	class FString                                 ModelFullFilePath;
	bool                                          bIsLoaded;
	uint8                                         Pad_41[0x7];
	TArray<uint8>                                 ModelReadFromFileInBytes;
	TArray<bool>                                  AreInputTensorSizesVariable;
	uint8                                         Pad_68[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralNetwork">();
	}
	static class UNeuralNetwork* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralNetwork>();
	}
};
static_assert(alignof(UNeuralNetwork) == 0x000008, "Wrong alignment on UNeuralNetwork");
static_assert(sizeof(UNeuralNetwork) == 0x000118, "Wrong size on UNeuralNetwork");
static_assert(offsetof(UNeuralNetwork, DeviceType) == 0x000028, "Member 'UNeuralNetwork::DeviceType' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, InputDeviceType) == 0x000029, "Member 'UNeuralNetwork::InputDeviceType' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, OutputDeviceType) == 0x00002A, "Member 'UNeuralNetwork::OutputDeviceType' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, SynchronousMode) == 0x00002B, "Member 'UNeuralNetwork::SynchronousMode' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, ThreadModeDelegateForAsyncRunCompleted) == 0x00002C, "Member 'UNeuralNetwork::ThreadModeDelegateForAsyncRunCompleted' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, ModelFullFilePath) == 0x000030, "Member 'UNeuralNetwork::ModelFullFilePath' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, bIsLoaded) == 0x000040, "Member 'UNeuralNetwork::bIsLoaded' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, ModelReadFromFileInBytes) == 0x000048, "Member 'UNeuralNetwork::ModelReadFromFileInBytes' has a wrong offset!");
static_assert(offsetof(UNeuralNetwork, AreInputTensorSizesVariable) == 0x000058, "Member 'UNeuralNetwork::AreInputTensorSizesVariable' has a wrong offset!");

}
