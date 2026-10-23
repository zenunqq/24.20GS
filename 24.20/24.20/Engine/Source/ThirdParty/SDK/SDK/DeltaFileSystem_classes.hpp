#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "DeltaFileSystem_structs.hpp"

namespace SDK
{

class UDeltaFileSaveHandlerTestContext final : public UObject
{
public:
	class UDeltaFileSaveHandler*                  SaveHandler;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaFileSaveHandlerTestContext">();
	}
	static class UDeltaFileSaveHandlerTestContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeltaFileSaveHandlerTestContext>();
	}
};
static_assert(alignof(UDeltaFileSaveHandlerTestContext) == 0x000008, "Wrong alignment on UDeltaFileSaveHandlerTestContext");
static_assert(sizeof(UDeltaFileSaveHandlerTestContext) == 0x000030, "Wrong size on UDeltaFileSaveHandlerTestContext");
static_assert(offsetof(UDeltaFileSaveHandlerTestContext, SaveHandler) == 0x000028, "Member 'UDeltaFileSaveHandlerTestContext::SaveHandler' has a wrong offset!");

class IDeltaFile final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaFile">();
	}
	static class IDeltaFile* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDeltaFile>();
	}
};
static_assert(alignof(IDeltaFile) == 0x000008, "Wrong alignment on IDeltaFile");
static_assert(sizeof(IDeltaFile) == 0x000028, "Wrong size on IDeltaFile");

class IDeltaFileApplier final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaFileApplier">();
	}
	static class IDeltaFileApplier* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDeltaFileApplier>();
	}
};
static_assert(alignof(IDeltaFileApplier) == 0x000008, "Wrong alignment on IDeltaFileApplier");
static_assert(sizeof(IDeltaFileApplier) == 0x000028, "Wrong size on IDeltaFileApplier");

class UDeltaComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaComponent">();
	}
	static class UDeltaComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeltaComponent>();
	}
};
static_assert(alignof(UDeltaComponent) == 0x000008, "Wrong alignment on UDeltaComponent");
static_assert(sizeof(UDeltaComponent) == 0x0000B0, "Wrong size on UDeltaComponent");

class UDeltaFileSaveHandler final : public UObject
{
public:
	uint8                                         Pad_28[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaFileSaveHandler">();
	}
	static class UDeltaFileSaveHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeltaFileSaveHandler>();
	}
};
static_assert(alignof(UDeltaFileSaveHandler) == 0x000008, "Wrong alignment on UDeltaFileSaveHandler");
static_assert(sizeof(UDeltaFileSaveHandler) == 0x0000D8, "Wrong size on UDeltaFileSaveHandler");

class UDeltaFileSubsystem final : public UEngineSubsystem
{
public:
	TMap<class UWorld*, struct FDeltaTrackingHandles> WorldToTrackingHandles;
	TMap<class FName, class UObject*>             DeltaFiles;
	struct FSoftClassPath                         DefaultDeltaFileClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeltaFileSubsystem">();
	}
	static class UDeltaFileSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeltaFileSubsystem>();
	}
};
static_assert(alignof(UDeltaFileSubsystem) == 0x000008, "Wrong alignment on UDeltaFileSubsystem");
static_assert(sizeof(UDeltaFileSubsystem) == 0x0000E8, "Wrong size on UDeltaFileSubsystem");
static_assert(offsetof(UDeltaFileSubsystem, WorldToTrackingHandles) == 0x000030, "Member 'UDeltaFileSubsystem::WorldToTrackingHandles' has a wrong offset!");
static_assert(offsetof(UDeltaFileSubsystem, DeltaFiles) == 0x000080, "Member 'UDeltaFileSubsystem::DeltaFiles' has a wrong offset!");
static_assert(offsetof(UDeltaFileSubsystem, DefaultDeltaFileClass) == 0x0000D0, "Member 'UDeltaFileSubsystem::DefaultDeltaFileClass' has a wrong offset!");

class UMapDelta final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class FString                                 PackageToApplyTo;
	TMap<struct FGuid, struct FAddAction>         AddActions;
	TArray<struct FUpdateAction>                  UpdateActions;
	TMap<struct FGuid, struct FDeleteAction>      DeleteActions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MapDelta">();
	}
	static class UMapDelta* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapDelta>();
	}
};
static_assert(alignof(UMapDelta) == 0x000008, "Wrong alignment on UMapDelta");
static_assert(sizeof(UMapDelta) == 0x0000F0, "Wrong size on UMapDelta");
static_assert(offsetof(UMapDelta, PackageToApplyTo) == 0x000030, "Member 'UMapDelta::PackageToApplyTo' has a wrong offset!");
static_assert(offsetof(UMapDelta, AddActions) == 0x000040, "Member 'UMapDelta::AddActions' has a wrong offset!");
static_assert(offsetof(UMapDelta, UpdateActions) == 0x000090, "Member 'UMapDelta::UpdateActions' has a wrong offset!");
static_assert(offsetof(UMapDelta, DeleteActions) == 0x0000A0, "Member 'UMapDelta::DeleteActions' has a wrong offset!");

class UMapDeltaApplier final : public UObject
{
public:
	uint8                                         Pad_28[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MapDeltaApplier">();
	}
	static class UMapDeltaApplier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapDeltaApplier>();
	}
};
static_assert(alignof(UMapDeltaApplier) == 0x000008, "Wrong alignment on UMapDeltaApplier");
static_assert(sizeof(UMapDeltaApplier) == 0x0000F0, "Wrong size on UMapDeltaApplier");

}
