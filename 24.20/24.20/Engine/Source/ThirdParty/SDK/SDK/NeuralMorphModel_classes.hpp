#pragma once

#include "Basic.hpp"

#include "MLDeformerFramework_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "NeuralMorphModel_structs.hpp"

namespace SDK
{

class UNeuralMorphModelInstance final : public UMLDeformerMorphModelInstance
{
public:
	class UNeuralMorphNetworkInstance*            NetworkInstance;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModelInstance">();
	}
	static class UNeuralMorphModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModelInstance>();
	}
};
static_assert(alignof(UNeuralMorphModelInstance) == 0x000008, "Wrong alignment on UNeuralMorphModelInstance");
static_assert(sizeof(UNeuralMorphModelInstance) == 0x0000A0, "Wrong size on UNeuralMorphModelInstance");
static_assert(offsetof(UNeuralMorphModelInstance, NetworkInstance) == 0x000098, "Member 'UNeuralMorphModelInstance::NetworkInstance' has a wrong offset!");

class UNeuralMorphModelVizSettings final : public UMLDeformerMorphModelVizSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModelVizSettings">();
	}
	static class UNeuralMorphModelVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModelVizSettings>();
	}
};
static_assert(alignof(UNeuralMorphModelVizSettings) == 0x000008, "Wrong alignment on UNeuralMorphModelVizSettings");
static_assert(sizeof(UNeuralMorphModelVizSettings) == 0x000028, "Wrong size on UNeuralMorphModelVizSettings");

class UNeuralMorphNetworkLayer final : public UObject
{
public:
	int32                                         NumInputs;
	int32                                         NumOutputs;
	int32                                         Depth;
	uint8                                         Pad_34[0x4];
	TArray<float>                                 Weights;
	TArray<float>                                 Biases;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetworkLayer">();
	}
	static class UNeuralMorphNetworkLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetworkLayer>();
	}
};
static_assert(alignof(UNeuralMorphNetworkLayer) == 0x000008, "Wrong alignment on UNeuralMorphNetworkLayer");
static_assert(sizeof(UNeuralMorphNetworkLayer) == 0x000058, "Wrong size on UNeuralMorphNetworkLayer");
static_assert(offsetof(UNeuralMorphNetworkLayer, NumInputs) == 0x000028, "Member 'UNeuralMorphNetworkLayer::NumInputs' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetworkLayer, NumOutputs) == 0x00002C, "Member 'UNeuralMorphNetworkLayer::NumOutputs' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetworkLayer, Depth) == 0x000030, "Member 'UNeuralMorphNetworkLayer::Depth' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetworkLayer, Weights) == 0x000038, "Member 'UNeuralMorphNetworkLayer::Weights' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetworkLayer, Biases) == 0x000048, "Member 'UNeuralMorphNetworkLayer::Biases' has a wrong offset!");

class UNeuralMorphNetwork final : public UObject
{
public:
	TArray<class UNeuralMorphNetworkLayer*>       Layers;
	TArray<float>                                 InputMeans;
	TArray<float>                                 InputStd;
	ENeuralMorphMode                              Mode;
	uint8                                         Pad_59[0x3];
	int32                                         NumMorphsPerBone;
	int32                                         NumBones;
	int32                                         NumCurves;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetwork">();
	}
	static class UNeuralMorphNetwork* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetwork>();
	}
};
static_assert(alignof(UNeuralMorphNetwork) == 0x000008, "Wrong alignment on UNeuralMorphNetwork");
static_assert(sizeof(UNeuralMorphNetwork) == 0x000068, "Wrong size on UNeuralMorphNetwork");
static_assert(offsetof(UNeuralMorphNetwork, Layers) == 0x000028, "Member 'UNeuralMorphNetwork::Layers' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, InputMeans) == 0x000038, "Member 'UNeuralMorphNetwork::InputMeans' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, InputStd) == 0x000048, "Member 'UNeuralMorphNetwork::InputStd' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, Mode) == 0x000058, "Member 'UNeuralMorphNetwork::Mode' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, NumMorphsPerBone) == 0x00005C, "Member 'UNeuralMorphNetwork::NumMorphsPerBone' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, NumBones) == 0x000060, "Member 'UNeuralMorphNetwork::NumBones' has a wrong offset!");
static_assert(offsetof(UNeuralMorphNetwork, NumCurves) == 0x000064, "Member 'UNeuralMorphNetwork::NumCurves' has a wrong offset!");

class UNeuralMorphNetworkInstance final : public UObject
{
public:
	uint8                                         Pad_28[0x40];
	class UNeuralMorphNetwork*                    Network;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetworkInstance">();
	}
	static class UNeuralMorphNetworkInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetworkInstance>();
	}
};
static_assert(alignof(UNeuralMorphNetworkInstance) == 0x000008, "Wrong alignment on UNeuralMorphNetworkInstance");
static_assert(sizeof(UNeuralMorphNetworkInstance) == 0x000070, "Wrong size on UNeuralMorphNetworkInstance");
static_assert(offsetof(UNeuralMorphNetworkInstance, Network) == 0x000068, "Member 'UNeuralMorphNetworkInstance::Network' has a wrong offset!");

class UNeuralMorphModel final : public UMLDeformerMorphModel
{
public:
	ENeuralMorphMode                              Mode;
	uint8                                         Pad_111[0x3];
	int32                                         LocalNumMorphTargetsPerBone;
	int32                                         GlobalNumMorphTargets;
	int32                                         NumIterations;
	int32                                         LocalNumHiddenLayers;
	int32                                         LocalNumNeuronsPerLayer;
	int32                                         GlobalNumHiddenLayers;
	int32                                         GlobalNumNeuronsPerLayer;
	int32                                         BatchSize;
	float                                         LearningRate;
	float                                         LearningRateDecay;
	float                                         RegularizationFactor;
	class UNeuralMorphNetwork*                    NeuralMorphNetwork;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModel">();
	}
	static class UNeuralMorphModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModel>();
	}
};
static_assert(alignof(UNeuralMorphModel) == 0x000008, "Wrong alignment on UNeuralMorphModel");
static_assert(sizeof(UNeuralMorphModel) == 0x000148, "Wrong size on UNeuralMorphModel");
static_assert(offsetof(UNeuralMorphModel, Mode) == 0x000110, "Member 'UNeuralMorphModel::Mode' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, LocalNumMorphTargetsPerBone) == 0x000114, "Member 'UNeuralMorphModel::LocalNumMorphTargetsPerBone' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, GlobalNumMorphTargets) == 0x000118, "Member 'UNeuralMorphModel::GlobalNumMorphTargets' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, NumIterations) == 0x00011C, "Member 'UNeuralMorphModel::NumIterations' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, LocalNumHiddenLayers) == 0x000120, "Member 'UNeuralMorphModel::LocalNumHiddenLayers' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, LocalNumNeuronsPerLayer) == 0x000124, "Member 'UNeuralMorphModel::LocalNumNeuronsPerLayer' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, GlobalNumHiddenLayers) == 0x000128, "Member 'UNeuralMorphModel::GlobalNumHiddenLayers' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, GlobalNumNeuronsPerLayer) == 0x00012C, "Member 'UNeuralMorphModel::GlobalNumNeuronsPerLayer' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, BatchSize) == 0x000130, "Member 'UNeuralMorphModel::BatchSize' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, LearningRate) == 0x000134, "Member 'UNeuralMorphModel::LearningRate' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, LearningRateDecay) == 0x000138, "Member 'UNeuralMorphModel::LearningRateDecay' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, RegularizationFactor) == 0x00013C, "Member 'UNeuralMorphModel::RegularizationFactor' has a wrong offset!");
static_assert(offsetof(UNeuralMorphModel, NeuralMorphNetwork) == 0x000140, "Member 'UNeuralMorphModel::NeuralMorphNetwork' has a wrong offset!");

}
