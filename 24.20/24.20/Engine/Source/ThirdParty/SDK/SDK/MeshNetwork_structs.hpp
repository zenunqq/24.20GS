#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMeshNetworkNodeType : uint8
{
	Root                                     = 0,
	Inner                                    = 1,
	Edge                                     = 2,
	Client                                   = 3,
	Unknown                                  = 4,
	EMeshNetworkNodeType_MAX                 = 5,
};

enum class EMeshNetworkRelevancy : uint8
{
	NotRelevant                              = 0,
	RelevantToEdgeNodes                      = 1,
	RelevantToClients                        = 2,
	EMeshNetworkRelevancy_MAX                = 3,
};

struct FAggregatedFunction final
{
public:
	class UFunction*                              Function;
	uint8                                         Pad_8[0x20];
};
static_assert(alignof(FAggregatedFunction) == 0x000008, "Wrong alignment on FAggregatedFunction");
static_assert(sizeof(FAggregatedFunction) == 0x000028, "Wrong size on FAggregatedFunction");
static_assert(offsetof(FAggregatedFunction, Function) == 0x000000, "Member 'FAggregatedFunction::Function' has a wrong offset!");

struct FAggregatedFunctionConfig final
{
public:
	double                                        AggregationTimeout;
	bool                                          bAggregationEnabled;
	uint8                                         Pad_9[0x7];
	TSet<class FName>                             NoAggregationParameters;
};
static_assert(alignof(FAggregatedFunctionConfig) == 0x000008, "Wrong alignment on FAggregatedFunctionConfig");
static_assert(sizeof(FAggregatedFunctionConfig) == 0x000060, "Wrong size on FAggregatedFunctionConfig");
static_assert(offsetof(FAggregatedFunctionConfig, AggregationTimeout) == 0x000000, "Member 'FAggregatedFunctionConfig::AggregationTimeout' has a wrong offset!");
static_assert(offsetof(FAggregatedFunctionConfig, bAggregationEnabled) == 0x000008, "Member 'FAggregatedFunctionConfig::bAggregationEnabled' has a wrong offset!");
static_assert(offsetof(FAggregatedFunctionConfig, NoAggregationParameters) == 0x000010, "Member 'FAggregatedFunctionConfig::NoAggregationParameters' has a wrong offset!");

#pragma pack(push, 0x1)
struct alignas(0x01) FMeshMetaDataStruct
{
};
#pragma pack(pop)
static_assert(alignof(FMeshMetaDataStruct) == 0x000001, "Wrong alignment on FMeshMetaDataStruct");
static_assert(sizeof(FMeshMetaDataStruct) == 0x000001, "Wrong size on FMeshMetaDataStruct");

}
