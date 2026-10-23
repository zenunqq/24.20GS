#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EGameFeatureTargetState : uint8
{
	Installed                                = 0,
	Registered                               = 1,
	Loaded                                   = 2,
	Active                                   = 3,
	Count                                    = 4,
	EGameFeatureTargetState_MAX              = 5,
};

struct FGameFeatureComponentEntry final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;
	TSoftClassPtr<class UClass>                   ComponentClass;
	uint8                                         bClientComponent : 1;
	uint8                                         bServerComponent : 1;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FGameFeatureComponentEntry) == 0x000008, "Wrong alignment on FGameFeatureComponentEntry");
static_assert(sizeof(FGameFeatureComponentEntry) == 0x000058, "Wrong size on FGameFeatureComponentEntry");
static_assert(offsetof(FGameFeatureComponentEntry, ActorClass) == 0x000000, "Member 'FGameFeatureComponentEntry::ActorClass' has a wrong offset!");
static_assert(offsetof(FGameFeatureComponentEntry, ComponentClass) == 0x000028, "Member 'FGameFeatureComponentEntry::ComponentClass' has a wrong offset!");

struct FDataRegistrySourceToAdd final
{
public:
	class FName                                   RegistryToAddTo;
	int32                                         AssetPriority;
	uint8                                         bClientSource : 1;
	uint8                                         bServerSource : 1;
	uint8                                         Pad_9[0x7];
	TSoftObjectPtr<class UDataTable>              DataTableToAdd;
	TSoftObjectPtr<class UCurveTable>             CurveTableToAdd;
};
static_assert(alignof(FDataRegistrySourceToAdd) == 0x000008, "Wrong alignment on FDataRegistrySourceToAdd");
static_assert(sizeof(FDataRegistrySourceToAdd) == 0x000060, "Wrong size on FDataRegistrySourceToAdd");
static_assert(offsetof(FDataRegistrySourceToAdd, RegistryToAddTo) == 0x000000, "Member 'FDataRegistrySourceToAdd::RegistryToAddTo' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, AssetPriority) == 0x000004, "Member 'FDataRegistrySourceToAdd::AssetPriority' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, DataTableToAdd) == 0x000010, "Member 'FDataRegistrySourceToAdd::DataTableToAdd' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, CurveTableToAdd) == 0x000038, "Member 'FDataRegistrySourceToAdd::CurveTableToAdd' has a wrong offset!");

struct FGameFeaturePluginStateMachineProperties final
{
public:
	uint8                                         Pad_0[0x88];
	class UGameFeatureData*                       GameFeatureData;
	uint8                                         Pad_90[0x38];
};
static_assert(alignof(FGameFeaturePluginStateMachineProperties) == 0x000008, "Wrong alignment on FGameFeaturePluginStateMachineProperties");
static_assert(sizeof(FGameFeaturePluginStateMachineProperties) == 0x0000C8, "Wrong size on FGameFeaturePluginStateMachineProperties");
static_assert(offsetof(FGameFeaturePluginStateMachineProperties, GameFeatureData) == 0x000088, "Member 'FGameFeaturePluginStateMachineProperties::GameFeatureData' has a wrong offset!");

struct alignas(0x08) FGameFeaturePluginIdentifier final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FGameFeaturePluginIdentifier) == 0x000008, "Wrong alignment on FGameFeaturePluginIdentifier");
static_assert(sizeof(FGameFeaturePluginIdentifier) == 0x000028, "Wrong size on FGameFeaturePluginIdentifier");

struct alignas(0x08) FInstallBundlePluginProtocolMetaData final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FInstallBundlePluginProtocolMetaData) == 0x000008, "Wrong alignment on FInstallBundlePluginProtocolMetaData");
static_assert(sizeof(FInstallBundlePluginProtocolMetaData) == 0x000020, "Wrong size on FInstallBundlePluginProtocolMetaData");

}
