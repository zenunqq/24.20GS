#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ENeuralDataType : uint8
{
	Float                                    = 0,
	Int32                                    = 1,
	Int64                                    = 2,
	UInt32                                   = 3,
	UInt64                                   = 4,
	None                                     = 5,
	ENeuralDataType_MAX                      = 6,
};

enum class ENeuralDeviceType : uint8
{
	CPU                                      = 0,
	GPU                                      = 1,
	ENeuralDeviceType_MAX                    = 2,
};

enum class ENeuralSynchronousMode : uint8
{
	Synchronous                              = 0,
	Asynchronous                             = 1,
	ENeuralSynchronousMode_MAX               = 2,
};

enum class ENeuralTensorType : uint8
{
	Generic                                  = 0,
	Input                                    = 1,
	IntermediateNotInitialized               = 2,
	IntermediateInitialized                  = 3,
	Output                                   = 4,
	Weight                                   = 5,
	ENeuralTensorType_MAX                    = 6,
};

enum class ENeuralThreadMode : uint8
{
	GameThread                               = 0,
	AnyThread                                = 1,
	ENeuralThreadMode_MAX                    = 2,
};

struct FNeuralTensor final
{
public:
	ENeuralDataType                               DataType;
	uint8                                         Pad_1[0x7];
	TArray<int64>                                 Sizes;
	int64                                         Volume;
	class FString                                 Name;
	ENeuralTensorType                             TensorType;
	uint8                                         Pad_31[0x7];
	TArray<uint8>                                 UnderlyingUInt8ArrayData;
	bool                                          bEnableGPU;
	uint8                                         Pad_49[0x37];
};
static_assert(alignof(FNeuralTensor) == 0x000008, "Wrong alignment on FNeuralTensor");
static_assert(sizeof(FNeuralTensor) == 0x000080, "Wrong size on FNeuralTensor");
static_assert(offsetof(FNeuralTensor, DataType) == 0x000000, "Member 'FNeuralTensor::DataType' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, Sizes) == 0x000008, "Member 'FNeuralTensor::Sizes' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, Volume) == 0x000018, "Member 'FNeuralTensor::Volume' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, Name) == 0x000020, "Member 'FNeuralTensor::Name' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, TensorType) == 0x000030, "Member 'FNeuralTensor::TensorType' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, UnderlyingUInt8ArrayData) == 0x000038, "Member 'FNeuralTensor::UnderlyingUInt8ArrayData' has a wrong offset!");
static_assert(offsetof(FNeuralTensor, bEnableGPU) == 0x000048, "Member 'FNeuralTensor::bEnableGPU' has a wrong offset!");

}
