#pragma once

#include "Basic.hpp"

#include "IrisCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UDataStream : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStream">();
	}
	static class UDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStream>();
	}
};
static_assert(alignof(UDataStream) == 0x000008, "Wrong alignment on UDataStream");
static_assert(sizeof(UDataStream) == 0x000028, "Wrong size on UDataStream");

class UDataStreamDefinitions final : public UObject
{
public:
	TArray<struct FDataStreamDefinition>          DataStreamDefinitions;
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStreamDefinitions">();
	}
	static class UDataStreamDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStreamDefinitions>();
	}
};
static_assert(alignof(UDataStreamDefinitions) == 0x000008, "Wrong alignment on UDataStreamDefinitions");
static_assert(sizeof(UDataStreamDefinitions) == 0x000040, "Wrong size on UDataStreamDefinitions");
static_assert(offsetof(UDataStreamDefinitions, DataStreamDefinitions) == 0x000028, "Member 'UDataStreamDefinitions::DataStreamDefinitions' has a wrong offset!");

class UDataStreamManager final : public UDataStream
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStreamManager">();
	}
	static class UDataStreamManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStreamManager>();
	}
};
static_assert(alignof(UDataStreamManager) == 0x000008, "Wrong alignment on UDataStreamManager");
static_assert(sizeof(UDataStreamManager) == 0x000030, "Wrong size on UDataStreamManager");

class UNetObjectFilterConfig : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilterConfig">();
	}
	static class UNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilterConfig>();
	}
};
static_assert(alignof(UNetObjectFilterConfig) == 0x000008, "Wrong alignment on UNetObjectFilterConfig");
static_assert(sizeof(UNetObjectFilterConfig) == 0x000028, "Wrong size on UNetObjectFilterConfig");

class UFilterOutNetObjectFilterConfig final : public UNetObjectFilterConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterOutNetObjectFilterConfig">();
	}
	static class UFilterOutNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterOutNetObjectFilterConfig>();
	}
};
static_assert(alignof(UFilterOutNetObjectFilterConfig) == 0x000008, "Wrong alignment on UFilterOutNetObjectFilterConfig");
static_assert(sizeof(UFilterOutNetObjectFilterConfig) == 0x000028, "Wrong size on UFilterOutNetObjectFilterConfig");

class UNetObjectFilter : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilter">();
	}
	static class UNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilter>();
	}
};
static_assert(alignof(UNetObjectFilter) == 0x000008, "Wrong alignment on UNetObjectFilter");
static_assert(sizeof(UNetObjectFilter) == 0x000028, "Wrong size on UNetObjectFilter");

class UFilterOutNetObjectFilter final : public UNetObjectFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterOutNetObjectFilter">();
	}
	static class UFilterOutNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterOutNetObjectFilter>();
	}
};
static_assert(alignof(UFilterOutNetObjectFilter) == 0x000008, "Wrong alignment on UFilterOutNetObjectFilter");
static_assert(sizeof(UFilterOutNetObjectFilter) == 0x000028, "Wrong size on UFilterOutNetObjectFilter");

class UIrisObjectReferencePackageMap final : public UPackageMap
{
public:
	uint8                                         Pad_E0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IrisObjectReferencePackageMap">();
	}
	static class UIrisObjectReferencePackageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIrisObjectReferencePackageMap>();
	}
};
static_assert(alignof(UIrisObjectReferencePackageMap) == 0x000008, "Wrong alignment on UIrisObjectReferencePackageMap");
static_assert(sizeof(UIrisObjectReferencePackageMap) == 0x0000E8, "Wrong size on UIrisObjectReferencePackageMap");

class UNetObjectPrioritizer : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizer">();
	}
	static class UNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizer>();
	}
};
static_assert(alignof(UNetObjectPrioritizer) == 0x000008, "Wrong alignment on UNetObjectPrioritizer");
static_assert(sizeof(UNetObjectPrioritizer) == 0x000028, "Wrong size on UNetObjectPrioritizer");

class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{
public:
	uint8                                         Pad_28[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocationBasedNetObjectPrioritizer">();
	}
	static class ULocationBasedNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocationBasedNetObjectPrioritizer>();
	}
};
static_assert(alignof(ULocationBasedNetObjectPrioritizer) == 0x000008, "Wrong alignment on ULocationBasedNetObjectPrioritizer");
static_assert(sizeof(ULocationBasedNetObjectPrioritizer) == 0x000060, "Wrong size on ULocationBasedNetObjectPrioritizer");

class UNetBlobHandler : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetBlobHandler">();
	}
	static class UNetBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetBlobHandler>();
	}
};
static_assert(alignof(UNetBlobHandler) == 0x000008, "Wrong alignment on UNetBlobHandler");
static_assert(sizeof(UNetBlobHandler) == 0x000038, "Wrong size on UNetBlobHandler");

class UNetBlobHandlerDefinitions final : public UObject
{
public:
	TArray<struct FNetBlobHandlerDefinition>      NetBlobHandlerDefinitions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetBlobHandlerDefinitions">();
	}
	static class UNetBlobHandlerDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetBlobHandlerDefinitions>();
	}
};
static_assert(alignof(UNetBlobHandlerDefinitions) == 0x000008, "Wrong alignment on UNetBlobHandlerDefinitions");
static_assert(sizeof(UNetBlobHandlerDefinitions) == 0x000038, "Wrong size on UNetBlobHandlerDefinitions");
static_assert(offsetof(UNetBlobHandlerDefinitions, NetBlobHandlerDefinitions) == 0x000028, "Member 'UNetBlobHandlerDefinitions::NetBlobHandlerDefinitions' has a wrong offset!");

class UNetObjectBlobHandler final : public UNetBlobHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectBlobHandler">();
	}
	static class UNetObjectBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectBlobHandler>();
	}
};
static_assert(alignof(UNetObjectBlobHandler) == 0x000008, "Wrong alignment on UNetObjectBlobHandler");
static_assert(sizeof(UNetObjectBlobHandler) == 0x000038, "Wrong size on UNetObjectBlobHandler");

class UNetObjectPrioritizerConfig : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizerConfig">();
	}
	static class UNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(UNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on UNetObjectPrioritizerConfig");
static_assert(sizeof(UNetObjectPrioritizerConfig) == 0x000028, "Wrong size on UNetObjectPrioritizerConfig");

class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
public:
	ENetObjectCountLimiterMode                    Mode;
	uint32                                        MaxObjectCount;
	float                                         Priority;
	float                                         OwningConnectionPriority;
	bool                                          bEnableOwnedObjectsFastLane;
	uint8                                         Pad_39[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectCountLimiterConfig">();
	}
	static class UNetObjectCountLimiterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectCountLimiterConfig>();
	}
};
static_assert(alignof(UNetObjectCountLimiterConfig) == 0x000008, "Wrong alignment on UNetObjectCountLimiterConfig");
static_assert(sizeof(UNetObjectCountLimiterConfig) == 0x000040, "Wrong size on UNetObjectCountLimiterConfig");
static_assert(offsetof(UNetObjectCountLimiterConfig, Mode) == 0x000028, "Member 'UNetObjectCountLimiterConfig::Mode' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, MaxObjectCount) == 0x00002C, "Member 'UNetObjectCountLimiterConfig::MaxObjectCount' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, Priority) == 0x000030, "Member 'UNetObjectCountLimiterConfig::Priority' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, OwningConnectionPriority) == 0x000034, "Member 'UNetObjectCountLimiterConfig::OwningConnectionPriority' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, bEnableOwnedObjectsFastLane) == 0x000038, "Member 'UNetObjectCountLimiterConfig::bEnableOwnedObjectsFastLane' has a wrong offset!");

class UNetObjectCountLimiter final : public UNetObjectPrioritizer
{
public:
	uint8                                         Pad_28[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectCountLimiter">();
	}
	static class UNetObjectCountLimiter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectCountLimiter>();
	}
};
static_assert(alignof(UNetObjectCountLimiter) == 0x000008, "Wrong alignment on UNetObjectCountLimiter");
static_assert(sizeof(UNetObjectCountLimiter) == 0x000090, "Wrong size on UNetObjectCountLimiter");

class UNetObjectFilterDefinitions final : public UObject
{
public:
	TArray<struct FNetObjectFilterDefinition>     NetObjectFilterDefinitions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilterDefinitions">();
	}
	static class UNetObjectFilterDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilterDefinitions>();
	}
};
static_assert(alignof(UNetObjectFilterDefinitions) == 0x000008, "Wrong alignment on UNetObjectFilterDefinitions");
static_assert(sizeof(UNetObjectFilterDefinitions) == 0x000038, "Wrong size on UNetObjectFilterDefinitions");
static_assert(offsetof(UNetObjectFilterDefinitions, NetObjectFilterDefinitions) == 0x000028, "Member 'UNetObjectFilterDefinitions::NetObjectFilterDefinitions' has a wrong offset!");

class UNetObjectGridFilterConfig final : public UNetObjectFilterConfig
{
public:
	uint32                                        ViewPosRelevancyFrameCount;
	float                                         CellSizeX;
	float                                         CellSizeY;
	float                                         MaxCullDistance;
	float                                         DefaultCullDistance;
	uint8                                         Pad_3C[0x4];
	struct FVector                                MinPos;
	struct FVector                                MaxPos;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectGridFilterConfig">();
	}
	static class UNetObjectGridFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectGridFilterConfig>();
	}
};
static_assert(alignof(UNetObjectGridFilterConfig) == 0x000008, "Wrong alignment on UNetObjectGridFilterConfig");
static_assert(sizeof(UNetObjectGridFilterConfig) == 0x000070, "Wrong size on UNetObjectGridFilterConfig");
static_assert(offsetof(UNetObjectGridFilterConfig, ViewPosRelevancyFrameCount) == 0x000028, "Member 'UNetObjectGridFilterConfig::ViewPosRelevancyFrameCount' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeX) == 0x00002C, "Member 'UNetObjectGridFilterConfig::CellSizeX' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeY) == 0x000030, "Member 'UNetObjectGridFilterConfig::CellSizeY' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MaxCullDistance) == 0x000034, "Member 'UNetObjectGridFilterConfig::MaxCullDistance' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, DefaultCullDistance) == 0x000038, "Member 'UNetObjectGridFilterConfig::DefaultCullDistance' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MinPos) == 0x000040, "Member 'UNetObjectGridFilterConfig::MinPos' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MaxPos) == 0x000058, "Member 'UNetObjectGridFilterConfig::MaxPos' has a wrong offset!");

class UNetObjectGridFilter final : public UNetObjectFilter
{
public:
	uint8                                         Pad_28[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectGridFilter">();
	}
	static class UNetObjectGridFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectGridFilter>();
	}
};
static_assert(alignof(UNetObjectGridFilter) == 0x000008, "Wrong alignment on UNetObjectGridFilter");
static_assert(sizeof(UNetObjectGridFilter) == 0x0000D8, "Wrong size on UNetObjectGridFilter");

class UNetObjectPrioritizerDefinitions final : public UObject
{
public:
	TArray<struct FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizerDefinitions">();
	}
	static class UNetObjectPrioritizerDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizerDefinitions>();
	}
};
static_assert(alignof(UNetObjectPrioritizerDefinitions) == 0x000008, "Wrong alignment on UNetObjectPrioritizerDefinitions");
static_assert(sizeof(UNetObjectPrioritizerDefinitions) == 0x000038, "Wrong size on UNetObjectPrioritizerDefinitions");
static_assert(offsetof(UNetObjectPrioritizerDefinitions, NetObjectPrioritizerDefinitions) == 0x000028, "Member 'UNetObjectPrioritizerDefinitions::NetObjectPrioritizerDefinitions' has a wrong offset!");

class UNetRPCHandler final : public UNetBlobHandler
{
public:
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetRPCHandler">();
	}
	static class UNetRPCHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetRPCHandler>();
	}
};
static_assert(alignof(UNetRPCHandler) == 0x000008, "Wrong alignment on UNetRPCHandler");
static_assert(sizeof(UNetRPCHandler) == 0x000040, "Wrong size on UNetRPCHandler");

class UNetTokenDataStream final : public UDataStream
{
public:
	uint8                                         Pad_28[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetTokenDataStream">();
	}
	static class UNetTokenDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetTokenDataStream>();
	}
};
static_assert(alignof(UNetTokenDataStream) == 0x000008, "Wrong alignment on UNetTokenDataStream");
static_assert(sizeof(UNetTokenDataStream) == 0x000078, "Wrong size on UNetTokenDataStream");

class UNopNetObjectFilterConfig final : public UNetObjectFilterConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NopNetObjectFilterConfig">();
	}
	static class UNopNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNopNetObjectFilterConfig>();
	}
};
static_assert(alignof(UNopNetObjectFilterConfig) == 0x000008, "Wrong alignment on UNopNetObjectFilterConfig");
static_assert(sizeof(UNopNetObjectFilterConfig) == 0x000028, "Wrong size on UNopNetObjectFilterConfig");

class UNopNetObjectFilter final : public UNetObjectFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NopNetObjectFilter">();
	}
	static class UNopNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNopNetObjectFilter>();
	}
};
static_assert(alignof(UNopNetObjectFilter) == 0x000008, "Wrong alignment on UNopNetObjectFilter");
static_assert(sizeof(UNopNetObjectFilter) == 0x000028, "Wrong size on UNopNetObjectFilter");

class UReplicationBridge : public UObject
{
public:
	uint8                                         Pad_28[0xE8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationBridge">();
	}
	static class UReplicationBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationBridge>();
	}
};
static_assert(alignof(UReplicationBridge) == 0x000008, "Wrong alignment on UReplicationBridge");
static_assert(sizeof(UReplicationBridge) == 0x000110, "Wrong size on UReplicationBridge");

class UObjectReplicationBridge : public UReplicationBridge
{
public:
	uint8                                         Pad_110[0x330];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectReplicationBridge">();
	}
	static class UObjectReplicationBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectReplicationBridge>();
	}
};
static_assert(alignof(UObjectReplicationBridge) == 0x000008, "Wrong alignment on UObjectReplicationBridge");
static_assert(sizeof(UObjectReplicationBridge) == 0x000440, "Wrong size on UObjectReplicationBridge");

class UObjectReplicationBridgeConfig final : public UObject
{
public:
	TArray<struct FObjectReplicationBridgePollConfig> PollConfigs;
	TArray<struct FObjectReplicationBridgeFilterConfig> FilterConfigs;
	TArray<struct FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;
	TArray<struct FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;
	class FName                                   DefaultSpatialFilterName;
	class FName                                   RequiredNetDriverChannelClassName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectReplicationBridgeConfig">();
	}
	static class UObjectReplicationBridgeConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectReplicationBridgeConfig>();
	}
};
static_assert(alignof(UObjectReplicationBridgeConfig) == 0x000008, "Wrong alignment on UObjectReplicationBridgeConfig");
static_assert(sizeof(UObjectReplicationBridgeConfig) == 0x000070, "Wrong size on UObjectReplicationBridgeConfig");
static_assert(offsetof(UObjectReplicationBridgeConfig, PollConfigs) == 0x000028, "Member 'UObjectReplicationBridgeConfig::PollConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, FilterConfigs) == 0x000038, "Member 'UObjectReplicationBridgeConfig::FilterConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, PrioritizerConfigs) == 0x000048, "Member 'UObjectReplicationBridgeConfig::PrioritizerConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, DeltaCompressionConfigs) == 0x000058, "Member 'UObjectReplicationBridgeConfig::DeltaCompressionConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, DefaultSpatialFilterName) == 0x000068, "Member 'UObjectReplicationBridgeConfig::DefaultSpatialFilterName' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, RequiredNetDriverChannelClassName) == 0x00006C, "Member 'UObjectReplicationBridgeConfig::RequiredNetDriverChannelClassName' has a wrong offset!");

class USequentialPartialNetBlobHandlerConfig : public UObject
{
public:
	uint32                                        MaxPartBitCount;
	uint32                                        MaxPartCount;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequentialPartialNetBlobHandlerConfig">();
	}
	static class USequentialPartialNetBlobHandlerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequentialPartialNetBlobHandlerConfig>();
	}
};
static_assert(alignof(USequentialPartialNetBlobHandlerConfig) == 0x000008, "Wrong alignment on USequentialPartialNetBlobHandlerConfig");
static_assert(sizeof(USequentialPartialNetBlobHandlerConfig) == 0x000030, "Wrong size on USequentialPartialNetBlobHandlerConfig");
static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartBitCount) == 0x000028, "Member 'USequentialPartialNetBlobHandlerConfig::MaxPartBitCount' has a wrong offset!");
static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartCount) == 0x00002C, "Member 'USequentialPartialNetBlobHandlerConfig::MaxPartCount' has a wrong offset!");

class UPartialNetObjectAttachmentHandlerConfig final : public USequentialPartialNetBlobHandlerConfig
{
public:
	uint32                                        BitCountSplitThreshold;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartialNetObjectAttachmentHandlerConfig">();
	}
	static class UPartialNetObjectAttachmentHandlerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartialNetObjectAttachmentHandlerConfig>();
	}
};
static_assert(alignof(UPartialNetObjectAttachmentHandlerConfig) == 0x000008, "Wrong alignment on UPartialNetObjectAttachmentHandlerConfig");
static_assert(sizeof(UPartialNetObjectAttachmentHandlerConfig) == 0x000038, "Wrong size on UPartialNetObjectAttachmentHandlerConfig");
static_assert(offsetof(UPartialNetObjectAttachmentHandlerConfig, BitCountSplitThreshold) == 0x000030, "Member 'UPartialNetObjectAttachmentHandlerConfig::BitCountSplitThreshold' has a wrong offset!");

class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
public:
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequentialPartialNetBlobHandler">();
	}
	static class USequentialPartialNetBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequentialPartialNetBlobHandler>();
	}
};
static_assert(alignof(USequentialPartialNetBlobHandler) == 0x000008, "Wrong alignment on USequentialPartialNetBlobHandler");
static_assert(sizeof(USequentialPartialNetBlobHandler) == 0x000048, "Wrong size on USequentialPartialNetBlobHandler");

class UPartialNetObjectAttachmentHandler final : public USequentialPartialNetBlobHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartialNetObjectAttachmentHandler">();
	}
	static class UPartialNetObjectAttachmentHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartialNetObjectAttachmentHandler>();
	}
};
static_assert(alignof(UPartialNetObjectAttachmentHandler) == 0x000008, "Wrong alignment on UPartialNetObjectAttachmentHandler");
static_assert(sizeof(UPartialNetObjectAttachmentHandler) == 0x000048, "Wrong size on UPartialNetObjectAttachmentHandler");

class UReplicationDataStream final : public UDataStream
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationDataStream">();
	}
	static class UReplicationDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationDataStream>();
	}
};
static_assert(alignof(UReplicationDataStream) == 0x000008, "Wrong alignment on UReplicationDataStream");
static_assert(sizeof(UReplicationDataStream) == 0x000038, "Wrong size on UReplicationDataStream");

class UReplicationSystem final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UReplicationBridge*                     ReplicationBridge;
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationSystem">();
	}
	static class UReplicationSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationSystem>();
	}
};
static_assert(alignof(UReplicationSystem) == 0x000008, "Wrong alignment on UReplicationSystem");
static_assert(sizeof(UReplicationSystem) == 0x000050, "Wrong size on UReplicationSystem");
static_assert(offsetof(UReplicationSystem, ReplicationBridge) == 0x000038, "Member 'UReplicationSystem::ReplicationBridge' has a wrong offset!");

class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
public:
	float                                         InnerRadius;
	float                                         OuterRadius;
	float                                         InnerPriority;
	float                                         OuterPriority;
	float                                         OutsidePriority;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereNetObjectPrioritizerConfig">();
	}
	static class USphereNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(USphereNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on USphereNetObjectPrioritizerConfig");
static_assert(sizeof(USphereNetObjectPrioritizerConfig) == 0x000040, "Wrong size on USphereNetObjectPrioritizerConfig");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerRadius) == 0x000028, "Member 'USphereNetObjectPrioritizerConfig::InnerRadius' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterRadius) == 0x00002C, "Member 'USphereNetObjectPrioritizerConfig::OuterRadius' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerPriority) == 0x000030, "Member 'USphereNetObjectPrioritizerConfig::InnerPriority' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterPriority) == 0x000034, "Member 'USphereNetObjectPrioritizerConfig::OuterPriority' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OutsidePriority) == 0x000038, "Member 'USphereNetObjectPrioritizerConfig::OutsidePriority' has a wrong offset!");

class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{
public:
	uint8                                         Pad_60[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereNetObjectPrioritizer">();
	}
	static class USphereNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereNetObjectPrioritizer>();
	}
};
static_assert(alignof(USphereNetObjectPrioritizer) == 0x000008, "Wrong alignment on USphereNetObjectPrioritizer");
static_assert(sizeof(USphereNetObjectPrioritizer) == 0x000068, "Wrong size on USphereNetObjectPrioritizer");

class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{
public:
	float                                         OwnerPriorityBoost;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereWithOwnerBoostNetObjectPrioritizerConfig">();
	}
	static class USphereWithOwnerBoostNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereWithOwnerBoostNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(USphereWithOwnerBoostNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on USphereWithOwnerBoostNetObjectPrioritizerConfig");
static_assert(sizeof(USphereWithOwnerBoostNetObjectPrioritizerConfig) == 0x000048, "Wrong size on USphereWithOwnerBoostNetObjectPrioritizerConfig");
static_assert(offsetof(USphereWithOwnerBoostNetObjectPrioritizerConfig, OwnerPriorityBoost) == 0x000040, "Member 'USphereWithOwnerBoostNetObjectPrioritizerConfig::OwnerPriorityBoost' has a wrong offset!");

class USphereWithOwnerBoostNetObjectPrioritizer final : public USphereNetObjectPrioritizer
{
public:
	uint8                                         Pad_68[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereWithOwnerBoostNetObjectPrioritizer">();
	}
	static class USphereWithOwnerBoostNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereWithOwnerBoostNetObjectPrioritizer>();
	}
};
static_assert(alignof(USphereWithOwnerBoostNetObjectPrioritizer) == 0x000008, "Wrong alignment on USphereWithOwnerBoostNetObjectPrioritizer");
static_assert(sizeof(USphereWithOwnerBoostNetObjectPrioritizer) == 0x0000A0, "Wrong size on USphereWithOwnerBoostNetObjectPrioritizer");

class UReplicationStateDescriptorConfig final : public UObject
{
public:
	TArray<struct FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationStateDescriptorConfig">();
	}
	static class UReplicationStateDescriptorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationStateDescriptorConfig>();
	}
};
static_assert(alignof(UReplicationStateDescriptorConfig) == 0x000008, "Wrong alignment on UReplicationStateDescriptorConfig");
static_assert(sizeof(UReplicationStateDescriptorConfig) == 0x000038, "Wrong size on UReplicationStateDescriptorConfig");
static_assert(offsetof(UReplicationStateDescriptorConfig, SupportsStructNetSerializerList) == 0x000028, "Member 'UReplicationStateDescriptorConfig::SupportsStructNetSerializerList' has a wrong offset!");

}
