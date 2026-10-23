#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"

namespace SDK
{

enum class EGameplayDebuggerOverrideMode : uint8
{
	Enable                                   = 0,
	Disable                                  = 1,
	UseDefault                               = 2,
	EGameplayDebuggerOverrideMode_MAX        = 3,
};

enum class EGameplayDebuggerShape : uint8
{
	Invalid                                  = 0,
	Point                                    = 1,
	Segment                                  = 2,
	Box                                      = 3,
	Cone                                     = 4,
	Cylinder                                 = 5,
	Circle                                   = 6,
	Rectangle                                = 7,
	Capsule                                  = 8,
	Polygon                                  = 9,
	Polyline                                 = 10,
	Arrow                                    = 11,
	EGameplayDebuggerShape_MAX               = 12,
};

struct FGameplayDebuggerDataPackHeader final
{
public:
	int16                                         DataVersion;
	int16                                         SyncCounter;
	int32                                         DataSize;
	int32                                         DataOffset;
	uint8                                         bIsCompressed : 1;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FGameplayDebuggerDataPackHeader) == 0x000004, "Wrong alignment on FGameplayDebuggerDataPackHeader");
static_assert(sizeof(FGameplayDebuggerDataPackHeader) == 0x000010, "Wrong size on FGameplayDebuggerDataPackHeader");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataVersion) == 0x000000, "Member 'FGameplayDebuggerDataPackHeader::DataVersion' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, SyncCounter) == 0x000002, "Member 'FGameplayDebuggerDataPackHeader::SyncCounter' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataSize) == 0x000004, "Member 'FGameplayDebuggerDataPackHeader::DataSize' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataOffset) == 0x000008, "Member 'FGameplayDebuggerDataPackHeader::DataOffset' has a wrong offset!");

struct FGameplayDebuggerDataPackRPCParams final
{
public:
	class FName                                   CategoryName;
	int32                                         DataPackIdx;
	struct FGameplayDebuggerDataPackHeader        Header;
	TArray<uint8>                                 Data;
};
static_assert(alignof(FGameplayDebuggerDataPackRPCParams) == 0x000008, "Wrong alignment on FGameplayDebuggerDataPackRPCParams");
static_assert(sizeof(FGameplayDebuggerDataPackRPCParams) == 0x000028, "Wrong size on FGameplayDebuggerDataPackRPCParams");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, CategoryName) == 0x000000, "Member 'FGameplayDebuggerDataPackRPCParams::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, DataPackIdx) == 0x000004, "Member 'FGameplayDebuggerDataPackRPCParams::DataPackIdx' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Header) == 0x000008, "Member 'FGameplayDebuggerDataPackRPCParams::Header' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Data) == 0x000018, "Member 'FGameplayDebuggerDataPackRPCParams::Data' has a wrong offset!");

struct FGameplayDebuggerShape final
{
public:
	TArray<struct FVector>                        ShapeData;
	class FString                                 Description;
	struct FColor                                 Color;
	EGameplayDebuggerShape                        Type;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(FGameplayDebuggerShape) == 0x000008, "Wrong alignment on FGameplayDebuggerShape");
static_assert(sizeof(FGameplayDebuggerShape) == 0x000028, "Wrong size on FGameplayDebuggerShape");
static_assert(offsetof(FGameplayDebuggerShape, ShapeData) == 0x000000, "Member 'FGameplayDebuggerShape::ShapeData' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Description) == 0x000010, "Member 'FGameplayDebuggerShape::Description' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Color) == 0x000020, "Member 'FGameplayDebuggerShape::Color' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Type) == 0x000024, "Member 'FGameplayDebuggerShape::Type' has a wrong offset!");

struct FGameplayDebuggerCategoryData final
{
public:
	class FName                                   CategoryName;
	uint8                                         Pad_4[0x4];
	TArray<class FString>                         TextLines;
	TArray<struct FGameplayDebuggerShape>         Shapes;
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;
	bool                                          bIsEnabled;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FGameplayDebuggerCategoryData) == 0x000008, "Wrong alignment on FGameplayDebuggerCategoryData");
static_assert(sizeof(FGameplayDebuggerCategoryData) == 0x000040, "Wrong size on FGameplayDebuggerCategoryData");
static_assert(offsetof(FGameplayDebuggerCategoryData, CategoryName) == 0x000000, "Member 'FGameplayDebuggerCategoryData::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, TextLines) == 0x000008, "Member 'FGameplayDebuggerCategoryData::TextLines' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, Shapes) == 0x000018, "Member 'FGameplayDebuggerCategoryData::Shapes' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, DataPacks) == 0x000028, "Member 'FGameplayDebuggerCategoryData::DataPacks' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, bIsEnabled) == 0x000038, "Member 'FGameplayDebuggerCategoryData::bIsEnabled' has a wrong offset!");

struct FGameplayDebuggerNetPack final
{
public:
	class AGameplayDebuggerCategoryReplicator*    Owner;
	TArray<struct FGameplayDebuggerCategoryData>  SavedData;
};
static_assert(alignof(FGameplayDebuggerNetPack) == 0x000008, "Wrong alignment on FGameplayDebuggerNetPack");
static_assert(sizeof(FGameplayDebuggerNetPack) == 0x000018, "Wrong size on FGameplayDebuggerNetPack");
static_assert(offsetof(FGameplayDebuggerNetPack, Owner) == 0x000000, "Member 'FGameplayDebuggerNetPack::Owner' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerNetPack, SavedData) == 0x000008, "Member 'FGameplayDebuggerNetPack::SavedData' has a wrong offset!");

struct FGameplayDebuggerDebugActor final
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	class FName                                   ActorName;
	int16                                         SyncCounter;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FGameplayDebuggerDebugActor) == 0x000004, "Wrong alignment on FGameplayDebuggerDebugActor");
static_assert(sizeof(FGameplayDebuggerDebugActor) == 0x000010, "Wrong size on FGameplayDebuggerDebugActor");
static_assert(offsetof(FGameplayDebuggerDebugActor, Actor) == 0x000000, "Member 'FGameplayDebuggerDebugActor::Actor' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDebugActor, ActorName) == 0x000008, "Member 'FGameplayDebuggerDebugActor::ActorName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDebugActor, SyncCounter) == 0x00000C, "Member 'FGameplayDebuggerDebugActor::SyncCounter' has a wrong offset!");

struct FGameplayDebuggerVisLogSync final
{
public:
	class FString                                 DeviceIDs;
};
static_assert(alignof(FGameplayDebuggerVisLogSync) == 0x000008, "Wrong alignment on FGameplayDebuggerVisLogSync");
static_assert(sizeof(FGameplayDebuggerVisLogSync) == 0x000010, "Wrong size on FGameplayDebuggerVisLogSync");
static_assert(offsetof(FGameplayDebuggerVisLogSync, DeviceIDs) == 0x000000, "Member 'FGameplayDebuggerVisLogSync::DeviceIDs' has a wrong offset!");

struct FGameplayDebuggerInputConfig final
{
public:
	class FString                                 ConfigName;
	struct FKey                                   Key;
	uint8                                         bModShift : 1;
	uint8                                         bModCtrl : 1;
	uint8                                         bModAlt : 1;
	uint8                                         bModCmd : 1;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FGameplayDebuggerInputConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerInputConfig");
static_assert(sizeof(FGameplayDebuggerInputConfig) == 0x000030, "Wrong size on FGameplayDebuggerInputConfig");
static_assert(offsetof(FGameplayDebuggerInputConfig, ConfigName) == 0x000000, "Member 'FGameplayDebuggerInputConfig::ConfigName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerInputConfig, Key) == 0x000010, "Member 'FGameplayDebuggerInputConfig::Key' has a wrong offset!");

struct FGameplayDebuggerCategoryConfig final
{
public:
	class FString                                 CategoryName;
	int32                                         SlotIdx;
	EGameplayDebuggerOverrideMode                 ActiveInGame;
	EGameplayDebuggerOverrideMode                 ActiveInSimulate;
	EGameplayDebuggerOverrideMode                 Hidden;
	uint8                                         Pad_17[0x1];
	uint8                                         bOverrideSlotIdx : 1;
	uint8                                         Pad_19[0x7];
	TArray<struct FGameplayDebuggerInputConfig>   InputHandlers;
};
static_assert(alignof(FGameplayDebuggerCategoryConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerCategoryConfig");
static_assert(sizeof(FGameplayDebuggerCategoryConfig) == 0x000030, "Wrong size on FGameplayDebuggerCategoryConfig");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, CategoryName) == 0x000000, "Member 'FGameplayDebuggerCategoryConfig::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, SlotIdx) == 0x000010, "Member 'FGameplayDebuggerCategoryConfig::SlotIdx' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInGame) == 0x000014, "Member 'FGameplayDebuggerCategoryConfig::ActiveInGame' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInSimulate) == 0x000015, "Member 'FGameplayDebuggerCategoryConfig::ActiveInSimulate' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, Hidden) == 0x000016, "Member 'FGameplayDebuggerCategoryConfig::Hidden' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, InputHandlers) == 0x000020, "Member 'FGameplayDebuggerCategoryConfig::InputHandlers' has a wrong offset!");

struct FGameplayDebuggerExtensionConfig final
{
public:
	class FString                                 ExtensionName;
	EGameplayDebuggerOverrideMode                 UseExtension;
	uint8                                         Pad_11[0x7];
	TArray<struct FGameplayDebuggerInputConfig>   InputHandlers;
};
static_assert(alignof(FGameplayDebuggerExtensionConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerExtensionConfig");
static_assert(sizeof(FGameplayDebuggerExtensionConfig) == 0x000028, "Wrong size on FGameplayDebuggerExtensionConfig");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, ExtensionName) == 0x000000, "Member 'FGameplayDebuggerExtensionConfig::ExtensionName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, UseExtension) == 0x000010, "Member 'FGameplayDebuggerExtensionConfig::UseExtension' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, InputHandlers) == 0x000018, "Member 'FGameplayDebuggerExtensionConfig::InputHandlers' has a wrong offset!");

struct FGameplayDebuggerPlayerData final
{
public:
	class UGameplayDebuggerLocalController*       Controller;
	class UInputComponent*                        InputComponent;
	class AGameplayDebuggerCategoryReplicator*    Replicator;
};
static_assert(alignof(FGameplayDebuggerPlayerData) == 0x000008, "Wrong alignment on FGameplayDebuggerPlayerData");
static_assert(sizeof(FGameplayDebuggerPlayerData) == 0x000018, "Wrong size on FGameplayDebuggerPlayerData");
static_assert(offsetof(FGameplayDebuggerPlayerData, Controller) == 0x000000, "Member 'FGameplayDebuggerPlayerData::Controller' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerPlayerData, InputComponent) == 0x000008, "Member 'FGameplayDebuggerPlayerData::InputComponent' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerPlayerData, Replicator) == 0x000010, "Member 'FGameplayDebuggerPlayerData::Replicator' has a wrong offset!");

}
