#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

class UNetAnalyticsAggregatorConfig final : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>        NetAnalyticsData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetAnalyticsAggregatorConfig">();
	}
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetAnalyticsAggregatorConfig>();
	}
};
static_assert(alignof(UNetAnalyticsAggregatorConfig) == 0x000008, "Wrong alignment on UNetAnalyticsAggregatorConfig");
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x000038, "Wrong size on UNetAnalyticsAggregatorConfig");
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x000028, "Member 'UNetAnalyticsAggregatorConfig::NetAnalyticsData' has a wrong offset!");

class UStatePerObjectConfig : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	class FString                                 PerObjectConfigSection;
	bool                                          bEnabled;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StatePerObjectConfig">();
	}
	static class UStatePerObjectConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatePerObjectConfig>();
	}
};
static_assert(alignof(UStatePerObjectConfig) == 0x000008, "Wrong alignment on UStatePerObjectConfig");
static_assert(sizeof(UStatePerObjectConfig) == 0x000068, "Wrong size on UStatePerObjectConfig");
static_assert(offsetof(UStatePerObjectConfig, PerObjectConfigSection) == 0x000050, "Member 'UStatePerObjectConfig::PerObjectConfigSection' has a wrong offset!");
static_assert(offsetof(UStatePerObjectConfig, bEnabled) == 0x000060, "Member 'UStatePerObjectConfig::bEnabled' has a wrong offset!");

class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<class FString>                         EscalationSeverity;
	uint8                                         Pad_78[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EscalationManagerConfig">();
	}
	static class UEscalationManagerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEscalationManagerConfig>();
	}
};
static_assert(alignof(UEscalationManagerConfig) == 0x000008, "Wrong alignment on UEscalationManagerConfig");
static_assert(sizeof(UEscalationManagerConfig) == 0x000088, "Wrong size on UEscalationManagerConfig");
static_assert(offsetof(UEscalationManagerConfig, EscalationSeverity) == 0x000068, "Member 'UEscalationManagerConfig::EscalationSeverity' has a wrong offset!");

}
