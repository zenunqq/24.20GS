#pragma once

#include "Basic.hpp"

#include "OnlineSubsystemUtils_classes.hpp"
#include "Qos_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class AQosBeaconClient final : public AOnlineBeaconClient
{
public:
	uint8                                         Pad_318[0x38];

public:
	void ClientQosResponse(EQosResponseType Response);
	void ServerQosRequest(const class FString& InSessionId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosBeaconClient">();
	}
	static class AQosBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQosBeaconClient>();
	}
};
static_assert(alignof(AQosBeaconClient) == 0x000008, "Wrong alignment on AQosBeaconClient");
static_assert(sizeof(AQosBeaconClient) == 0x000350, "Wrong size on AQosBeaconClient");

class AQosBeaconHost final : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_2B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosBeaconHost">();
	}
	static class AQosBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQosBeaconHost>();
	}
};
static_assert(alignof(AQosBeaconHost) == 0x000008, "Wrong alignment on AQosBeaconHost");
static_assert(sizeof(AQosBeaconHost) == 0x0002B8, "Wrong size on AQosBeaconHost");

class UQosEvaluator final : public UObject
{
public:
	uint8                                         Pad_28[0x20];
	bool                                          bInProgress;
	bool                                          bCancelOperation;
	uint8                                         Pad_4A[0x6];
	TArray<struct FDatacenterQosInstance>         Datacenters;
	uint8                                         Pad_60[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosEvaluator">();
	}
	static class UQosEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQosEvaluator>();
	}
};
static_assert(alignof(UQosEvaluator) == 0x000008, "Wrong alignment on UQosEvaluator");
static_assert(sizeof(UQosEvaluator) == 0x000080, "Wrong size on UQosEvaluator");
static_assert(offsetof(UQosEvaluator, bInProgress) == 0x000048, "Member 'UQosEvaluator::bInProgress' has a wrong offset!");
static_assert(offsetof(UQosEvaluator, bCancelOperation) == 0x000049, "Member 'UQosEvaluator::bCancelOperation' has a wrong offset!");
static_assert(offsetof(UQosEvaluator, Datacenters) == 0x000050, "Member 'UQosEvaluator::Datacenters' has a wrong offset!");

class UQosRegionManager final : public UObject
{
public:
	int32                                         NumTestsPerRegion;
	float                                         PingTimeout;
	bool                                          bEnableSubspaceBiasOrder;
	uint8                                         Pad_31[0x7];
	class FString                                 SubspaceDelimiter;
	TArray<struct FQosRegionInfo>                 RegionDefinitions;
	TArray<struct FQosDatacenterInfo>             DatacenterDefinitions;
	struct FDateTime                              LastCheckTimestamp;
	class UQosEvaluator*                          Evaluator;
	EQosCompletionResult                          QosEvalResult;
	uint8                                         Pad_79[0x7];
	TArray<struct FRegionQosInstance>             RegionOptions;
	class FString                                 ForceRegionId;
	bool                                          bRegionForcedViaCommandline;
	uint8                                         Pad_A1[0x7];
	class FString                                 SelectedRegionId;
	uint8                                         Pad_B8[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosRegionManager">();
	}
	static class UQosRegionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQosRegionManager>();
	}
};
static_assert(alignof(UQosRegionManager) == 0x000008, "Wrong alignment on UQosRegionManager");
static_assert(sizeof(UQosRegionManager) == 0x0000F8, "Wrong size on UQosRegionManager");
static_assert(offsetof(UQosRegionManager, NumTestsPerRegion) == 0x000028, "Member 'UQosRegionManager::NumTestsPerRegion' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, PingTimeout) == 0x00002C, "Member 'UQosRegionManager::PingTimeout' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, bEnableSubspaceBiasOrder) == 0x000030, "Member 'UQosRegionManager::bEnableSubspaceBiasOrder' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, SubspaceDelimiter) == 0x000038, "Member 'UQosRegionManager::SubspaceDelimiter' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, RegionDefinitions) == 0x000048, "Member 'UQosRegionManager::RegionDefinitions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, DatacenterDefinitions) == 0x000058, "Member 'UQosRegionManager::DatacenterDefinitions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, LastCheckTimestamp) == 0x000068, "Member 'UQosRegionManager::LastCheckTimestamp' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, Evaluator) == 0x000070, "Member 'UQosRegionManager::Evaluator' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, QosEvalResult) == 0x000078, "Member 'UQosRegionManager::QosEvalResult' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, RegionOptions) == 0x000080, "Member 'UQosRegionManager::RegionOptions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, ForceRegionId) == 0x000090, "Member 'UQosRegionManager::ForceRegionId' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, bRegionForcedViaCommandline) == 0x0000A0, "Member 'UQosRegionManager::bRegionForcedViaCommandline' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, SelectedRegionId) == 0x0000A8, "Member 'UQosRegionManager::SelectedRegionId' has a wrong offset!");

}
