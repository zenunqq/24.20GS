#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ENetworkPredictionTickingPolicy : uint8
{
	Independent                              = 1,
	Fixed                                    = 2,
	All                                      = 3,
	ENetworkPredictionTickingPolicy_MAX      = 4,
};

enum class ENetworkLOD : uint8
{
	Interpolated                             = 1,
	SimExtrapolate                           = 2,
	ForwardPredict                           = 4,
	All                                      = 7,
	ENetworkLOD_MAX                          = 8,
};

enum class ENetworkPredictionStateRead : uint8
{
	Simulation                               = 0,
	Presentation                             = 1,
	ENetworkPredictionStateRead_MAX          = 2,
};

struct alignas(0x10) FNetworkPredictionProxy final
{
public:
	uint8                                         Pad_0[0xA0];
	class UNetworkPredictionWorldManager*         WorldManager;
	uint8                                         Pad_A8[0x8];
};
static_assert(alignof(FNetworkPredictionProxy) == 0x000010, "Wrong alignment on FNetworkPredictionProxy");
static_assert(sizeof(FNetworkPredictionProxy) == 0x0000B0, "Wrong size on FNetworkPredictionProxy");
static_assert(offsetof(FNetworkPredictionProxy, WorldManager) == 0x0000A0, "Member 'FNetworkPredictionProxy::WorldManager' has a wrong offset!");

struct FSharedPackageMapItem final
{
public:
	TSoftObjectPtr<class UObject>                 SoftPtr;
};
static_assert(alignof(FSharedPackageMapItem) == 0x000008, "Wrong alignment on FSharedPackageMapItem");
static_assert(sizeof(FSharedPackageMapItem) == 0x000028, "Wrong size on FSharedPackageMapItem");
static_assert(offsetof(FSharedPackageMapItem, SoftPtr) == 0x000000, "Member 'FSharedPackageMapItem::SoftPtr' has a wrong offset!");

struct FSharedPackageMap final
{
public:
	TArray<struct FSharedPackageMapItem>          Items;
};
static_assert(alignof(FSharedPackageMap) == 0x000008, "Wrong alignment on FSharedPackageMap");
static_assert(sizeof(FSharedPackageMap) == 0x000010, "Wrong size on FSharedPackageMap");
static_assert(offsetof(FSharedPackageMap, Items) == 0x000000, "Member 'FSharedPackageMap::Items' has a wrong offset!");

struct alignas(0x10) FReplicationProxy final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FReplicationProxy) == 0x000010, "Wrong alignment on FReplicationProxy");
static_assert(sizeof(FReplicationProxy) == 0x000050, "Wrong size on FReplicationProxy");

struct alignas(0x08) FServerReplicationRPCParameter final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FServerReplicationRPCParameter) == 0x000008, "Wrong alignment on FServerReplicationRPCParameter");
static_assert(sizeof(FServerReplicationRPCParameter) == 0x000018, "Wrong size on FServerReplicationRPCParameter");

struct FNetworkPredictionSettings final
{
public:
	ENetworkPredictionTickingPolicy               PreferredTickingPolicy;
	uint8                                         Pad_1[0x7];
	TSubclassOf<class ANetworkPredictionReplicatedManager> ReplicatedManagerClassOverride;
	int32                                         FixedTickFrameRate;
	bool                                          bForceEngineFixTickForcePhysics;
	ENetworkLOD                                   SimulatedProxyNetworkLOD;
	uint8                                         Pad_16[0x2];
	int32                                         FixedTickInterpolationBufferedMS;
	int32                                         IndependentTickInterpolationBufferedMS;
	int32                                         IndependentTickInterpolationMaxBufferedMS;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FNetworkPredictionSettings) == 0x000008, "Wrong alignment on FNetworkPredictionSettings");
static_assert(sizeof(FNetworkPredictionSettings) == 0x000028, "Wrong size on FNetworkPredictionSettings");
static_assert(offsetof(FNetworkPredictionSettings, PreferredTickingPolicy) == 0x000000, "Member 'FNetworkPredictionSettings::PreferredTickingPolicy' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, ReplicatedManagerClassOverride) == 0x000008, "Member 'FNetworkPredictionSettings::ReplicatedManagerClassOverride' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, FixedTickFrameRate) == 0x000010, "Member 'FNetworkPredictionSettings::FixedTickFrameRate' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, bForceEngineFixTickForcePhysics) == 0x000014, "Member 'FNetworkPredictionSettings::bForceEngineFixTickForcePhysics' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, SimulatedProxyNetworkLOD) == 0x000015, "Member 'FNetworkPredictionSettings::SimulatedProxyNetworkLOD' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, FixedTickInterpolationBufferedMS) == 0x000018, "Member 'FNetworkPredictionSettings::FixedTickInterpolationBufferedMS' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, IndependentTickInterpolationBufferedMS) == 0x00001C, "Member 'FNetworkPredictionSettings::IndependentTickInterpolationBufferedMS' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionSettings, IndependentTickInterpolationMaxBufferedMS) == 0x000020, "Member 'FNetworkPredictionSettings::IndependentTickInterpolationMaxBufferedMS' has a wrong offset!");

struct FNetworkPredictionDevHUDItem final
{
public:
	class FString                                 DisplayName;
	class FString                                 ExecCommand;
	bool                                          bAutoBack;
	bool                                          bRequirePIE;
	bool                                          bRequireNotPIE;
	uint8                                         Pad_23[0x5];
};
static_assert(alignof(FNetworkPredictionDevHUDItem) == 0x000008, "Wrong alignment on FNetworkPredictionDevHUDItem");
static_assert(sizeof(FNetworkPredictionDevHUDItem) == 0x000028, "Wrong size on FNetworkPredictionDevHUDItem");
static_assert(offsetof(FNetworkPredictionDevHUDItem, DisplayName) == 0x000000, "Member 'FNetworkPredictionDevHUDItem::DisplayName' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUDItem, ExecCommand) == 0x000010, "Member 'FNetworkPredictionDevHUDItem::ExecCommand' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bAutoBack) == 0x000020, "Member 'FNetworkPredictionDevHUDItem::bAutoBack' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bRequirePIE) == 0x000021, "Member 'FNetworkPredictionDevHUDItem::bRequirePIE' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bRequireNotPIE) == 0x000022, "Member 'FNetworkPredictionDevHUDItem::bRequireNotPIE' has a wrong offset!");

struct FNetworkPredictionDevHUD final
{
public:
	class FString                                 HUDName;
	TArray<struct FNetworkPredictionDevHUDItem>   Items;
	bool                                          bRequirePIE;
	bool                                          bRequireNotPIE;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FNetworkPredictionDevHUD) == 0x000008, "Wrong alignment on FNetworkPredictionDevHUD");
static_assert(sizeof(FNetworkPredictionDevHUD) == 0x000028, "Wrong size on FNetworkPredictionDevHUD");
static_assert(offsetof(FNetworkPredictionDevHUD, HUDName) == 0x000000, "Member 'FNetworkPredictionDevHUD::HUDName' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUD, Items) == 0x000010, "Member 'FNetworkPredictionDevHUD::Items' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUD, bRequirePIE) == 0x000020, "Member 'FNetworkPredictionDevHUD::bRequirePIE' has a wrong offset!");
static_assert(offsetof(FNetworkPredictionDevHUD, bRequireNotPIE) == 0x000021, "Member 'FNetworkPredictionDevHUD::bRequireNotPIE' has a wrong offset!");

}
