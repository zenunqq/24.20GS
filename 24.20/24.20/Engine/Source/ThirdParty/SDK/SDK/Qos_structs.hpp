#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EQosResponseType : uint8
{
	NoResponse                               = 0,
	Success                                  = 1,
	Failure                                  = 2,
	EQosResponseType_MAX                     = 3,
};

enum class EQosDatacenterResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Incomplete                               = 2,
	EQosDatacenterResult_MAX                 = 3,
};

enum class EQosCompletionResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Failure                                  = 2,
	Canceled                                 = 3,
	EQosCompletionResult_MAX                 = 4,
};

struct FQosSubspaceComparisonParams final
{
public:
	int32                                         MaxNonSubspacePingMs;
	int32                                         MinSubspacePingMs;
	int32                                         ConstantMaxToleranceMs;
	float                                         ScaledMaxTolerancePct;
};
static_assert(alignof(FQosSubspaceComparisonParams) == 0x000004, "Wrong alignment on FQosSubspaceComparisonParams");
static_assert(sizeof(FQosSubspaceComparisonParams) == 0x000010, "Wrong size on FQosSubspaceComparisonParams");
static_assert(offsetof(FQosSubspaceComparisonParams, MaxNonSubspacePingMs) == 0x000000, "Member 'FQosSubspaceComparisonParams::MaxNonSubspacePingMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, MinSubspacePingMs) == 0x000004, "Member 'FQosSubspaceComparisonParams::MinSubspacePingMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, ConstantMaxToleranceMs) == 0x000008, "Member 'FQosSubspaceComparisonParams::ConstantMaxToleranceMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, ScaledMaxTolerancePct) == 0x00000C, "Member 'FQosSubspaceComparisonParams::ScaledMaxTolerancePct' has a wrong offset!");

struct FQosPingServerInfo final
{
public:
	class FString                                 Address;
	int32                                         Port;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FQosPingServerInfo) == 0x000008, "Wrong alignment on FQosPingServerInfo");
static_assert(sizeof(FQosPingServerInfo) == 0x000018, "Wrong size on FQosPingServerInfo");
static_assert(offsetof(FQosPingServerInfo, Address) == 0x000000, "Member 'FQosPingServerInfo::Address' has a wrong offset!");
static_assert(offsetof(FQosPingServerInfo, Port) == 0x000010, "Member 'FQosPingServerInfo::Port' has a wrong offset!");

struct FQosDatacenterInfo final
{
public:
	class FString                                 ID;
	class FString                                 RegionId;
	bool                                          bEnabled;
	uint8                                         Pad_21[0x7];
	TArray<struct FQosPingServerInfo>             Servers;
};
static_assert(alignof(FQosDatacenterInfo) == 0x000008, "Wrong alignment on FQosDatacenterInfo");
static_assert(sizeof(FQosDatacenterInfo) == 0x000038, "Wrong size on FQosDatacenterInfo");
static_assert(offsetof(FQosDatacenterInfo, ID) == 0x000000, "Member 'FQosDatacenterInfo::ID' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, RegionId) == 0x000010, "Member 'FQosDatacenterInfo::RegionId' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, bEnabled) == 0x000020, "Member 'FQosDatacenterInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, Servers) == 0x000028, "Member 'FQosDatacenterInfo::Servers' has a wrong offset!");

struct FQosRegionInfo final
{
public:
	class FText                                   DisplayName;
	class FString                                 RegionId;
	bool                                          bEnabled;
	bool                                          bVisible;
	bool                                          bAutoAssignable;
	bool                                          bAllowSubspaceBias;
	struct FQosSubspaceComparisonParams           SubspaceBiasParams;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FQosRegionInfo) == 0x000008, "Wrong alignment on FQosRegionInfo");
static_assert(sizeof(FQosRegionInfo) == 0x000040, "Wrong size on FQosRegionInfo");
static_assert(offsetof(FQosRegionInfo, DisplayName) == 0x000000, "Member 'FQosRegionInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, RegionId) == 0x000018, "Member 'FQosRegionInfo::RegionId' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bEnabled) == 0x000028, "Member 'FQosRegionInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bVisible) == 0x000029, "Member 'FQosRegionInfo::bVisible' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bAutoAssignable) == 0x00002A, "Member 'FQosRegionInfo::bAutoAssignable' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bAllowSubspaceBias) == 0x00002B, "Member 'FQosRegionInfo::bAllowSubspaceBias' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, SubspaceBiasParams) == 0x00002C, "Member 'FQosRegionInfo::SubspaceBiasParams' has a wrong offset!");

struct FDatacenterQosInstance final
{
public:
	struct FQosDatacenterInfo                     Definition;
	EQosDatacenterResult                          Result;
	uint8                                         Pad_39[0x3];
	int32                                         AvgPingMs;
	TArray<int32>                                 PingResults;
	uint8                                         Pad_50[0x8];
	struct FDateTime                              LastCheckTimestamp;
	bool                                          bUsable;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FDatacenterQosInstance) == 0x000008, "Wrong alignment on FDatacenterQosInstance");
static_assert(sizeof(FDatacenterQosInstance) == 0x000068, "Wrong size on FDatacenterQosInstance");
static_assert(offsetof(FDatacenterQosInstance, Definition) == 0x000000, "Member 'FDatacenterQosInstance::Definition' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, Result) == 0x000038, "Member 'FDatacenterQosInstance::Result' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, AvgPingMs) == 0x00003C, "Member 'FDatacenterQosInstance::AvgPingMs' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, PingResults) == 0x000040, "Member 'FDatacenterQosInstance::PingResults' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, LastCheckTimestamp) == 0x000058, "Member 'FDatacenterQosInstance::LastCheckTimestamp' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, bUsable) == 0x000060, "Member 'FDatacenterQosInstance::bUsable' has a wrong offset!");

struct FRegionQosInstance final
{
public:
	struct FQosRegionInfo                         Definition;
	TArray<struct FDatacenterQosInstance>         DatacenterOptions;
};
static_assert(alignof(FRegionQosInstance) == 0x000008, "Wrong alignment on FRegionQosInstance");
static_assert(sizeof(FRegionQosInstance) == 0x000050, "Wrong size on FRegionQosInstance");
static_assert(offsetof(FRegionQosInstance, Definition) == 0x000000, "Member 'FRegionQosInstance::Definition' has a wrong offset!");
static_assert(offsetof(FRegionQosInstance, DatacenterOptions) == 0x000040, "Member 'FRegionQosInstance::DatacenterOptions' has a wrong offset!");

}
