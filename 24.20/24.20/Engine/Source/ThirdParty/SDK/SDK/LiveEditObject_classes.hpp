#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "LiveEditObject_structs.hpp"

namespace SDK
{

class ULiveEditNetworkStreamChannel : public UChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditNetworkStreamChannel">();
	}
	static class ULiveEditNetworkStreamChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditNetworkStreamChannel>();
	}
};
static_assert(alignof(ULiveEditNetworkStreamChannel) == 0x000008, "Wrong alignment on ULiveEditNetworkStreamChannel");
static_assert(sizeof(ULiveEditNetworkStreamChannel) == 0x000068, "Wrong size on ULiveEditNetworkStreamChannel");

class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{
public:
	uint8                                         Pad_68[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditLargeNetworkMessageChannel">();
	}
	static class ULiveEditLargeNetworkMessageChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditLargeNetworkMessageChannel>();
	}
};
static_assert(alignof(ULiveEditLargeNetworkMessageChannel) == 0x000008, "Wrong alignment on ULiveEditLargeNetworkMessageChannel");
static_assert(sizeof(ULiveEditLargeNetworkMessageChannel) == 0x0000B0, "Wrong size on ULiveEditLargeNetworkMessageChannel");

class ULiveEditObjectChannel final : public ULiveEditLargeNetworkMessageChannel
{
public:
	uint8                                         Pad_B0[0xF8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditObjectChannel">();
	}
	static class ULiveEditObjectChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditObjectChannel>();
	}
};
static_assert(alignof(ULiveEditObjectChannel) == 0x000008, "Wrong alignment on ULiveEditObjectChannel");
static_assert(sizeof(ULiveEditObjectChannel) == 0x0001A8, "Wrong size on ULiveEditObjectChannel");

class ULiveEditObjectConnection final : public UObject
{
public:
	uint8                                         Pad_28[0x378];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditObjectConnection">();
	}
	static class ULiveEditObjectConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditObjectConnection>();
	}
};
static_assert(alignof(ULiveEditObjectConnection) == 0x000008, "Wrong alignment on ULiveEditObjectConnection");
static_assert(sizeof(ULiveEditObjectConnection) == 0x0003A0, "Wrong size on ULiveEditObjectConnection");

class ULiveEditObjectSubsystemState final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	TArray<class ULiveEditObjectConnection*>      Connections;
	uint8                                         Pad_48[0x230];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditObjectSubsystemState">();
	}
	static class ULiveEditObjectSubsystemState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditObjectSubsystemState>();
	}
};
static_assert(alignof(ULiveEditObjectSubsystemState) == 0x000008, "Wrong alignment on ULiveEditObjectSubsystemState");
static_assert(sizeof(ULiveEditObjectSubsystemState) == 0x000278, "Wrong size on ULiveEditObjectSubsystemState");
static_assert(offsetof(ULiveEditObjectSubsystemState, Connections) == 0x000038, "Member 'ULiveEditObjectSubsystemState::Connections' has a wrong offset!");

class ULiveEditObjectSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	int32                                         MaxBytesQueuedForReplication;
	int32                                         NumPackageMapBunchesToDelayTickFor;
	TArray<class ULiveEditObjectSubsystemState*>  NetDriverStates;
	uint8                                         Pad_50[0x128];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditObjectSubsystem">();
	}
	static class ULiveEditObjectSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditObjectSubsystem>();
	}
};
static_assert(alignof(ULiveEditObjectSubsystem) == 0x000008, "Wrong alignment on ULiveEditObjectSubsystem");
static_assert(sizeof(ULiveEditObjectSubsystem) == 0x000178, "Wrong size on ULiveEditObjectSubsystem");
static_assert(offsetof(ULiveEditObjectSubsystem, MaxBytesQueuedForReplication) == 0x000038, "Member 'ULiveEditObjectSubsystem::MaxBytesQueuedForReplication' has a wrong offset!");
static_assert(offsetof(ULiveEditObjectSubsystem, NumPackageMapBunchesToDelayTickFor) == 0x00003C, "Member 'ULiveEditObjectSubsystem::NumPackageMapBunchesToDelayTickFor' has a wrong offset!");
static_assert(offsetof(ULiveEditObjectSubsystem, NetDriverStates) == 0x000040, "Member 'ULiveEditObjectSubsystem::NetDriverStates' has a wrong offset!");

class ULiveEditObjectTestObject final : public UObject
{
public:
	int32                                         int32_0[0x3];
	uint8                                         Pad_34[0x4];
	struct FLiveEditObjectTestStruct              StructProperty;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveEditObjectTestObject">();
	}
	static class ULiveEditObjectTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveEditObjectTestObject>();
	}
};
static_assert(alignof(ULiveEditObjectTestObject) == 0x000008, "Wrong alignment on ULiveEditObjectTestObject");
static_assert(sizeof(ULiveEditObjectTestObject) == 0x000180, "Wrong size on ULiveEditObjectTestObject");
static_assert(offsetof(ULiveEditObjectTestObject, int32_0) == 0x000028, "Member 'ULiveEditObjectTestObject::int32_0' has a wrong offset!");
static_assert(offsetof(ULiveEditObjectTestObject, StructProperty) == 0x000038, "Member 'ULiveEditObjectTestObject::StructProperty' has a wrong offset!");

}
