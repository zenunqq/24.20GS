#pragma once

#include "Basic.hpp"

#include "VerseDevices_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameFeatures_classes.hpp"

namespace SDK
{

class UPlaylistUserOptionScript final : public UPlaylistUserOptionBase
{
public:
	TArray<struct FPlaylistOptionScriptValue>     OptionValues;
	int32                                         DefaultValueIndex;
	uint8                                         Pad_1EC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlaylistUserOptionScript">();
	}
	static class UPlaylistUserOptionScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaylistUserOptionScript>();
	}
};
static_assert(alignof(UPlaylistUserOptionScript) == 0x000008, "Wrong alignment on UPlaylistUserOptionScript");
static_assert(sizeof(UPlaylistUserOptionScript) == 0x0001F0, "Wrong size on UPlaylistUserOptionScript");
static_assert(offsetof(UPlaylistUserOptionScript, OptionValues) == 0x0001D8, "Member 'UPlaylistUserOptionScript::OptionValues' has a wrong offset!");
static_assert(offsetof(UPlaylistUserOptionScript, DefaultValueIndex) == 0x0001E8, "Member 'UPlaylistUserOptionScript::DefaultValueIndex' has a wrong offset!");

class AScriptDevice final : public ABuildingProp
{
public:
	class UVerseCreativeDevice*                   Script;
	uint8                                         Pad_F00[0x8];
	class UVerseCreativeDevice*                   ScriptInstance;
	uint8                                         Pad_F10[0x38];

public:
	void HandleMinigameEndGame(class AFortPlayerController* PlayerController, EFortMinigameEnd EndMethod, EFortMinigameState NextState);
	void HandlePreMinigameStartedSetup();
	void SetEnabled(bool bInEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScriptDevice">();
	}
	static class AScriptDevice* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScriptDevice>();
	}
};
static_assert(alignof(AScriptDevice) == 0x000008, "Wrong alignment on AScriptDevice");
static_assert(sizeof(AScriptDevice) == 0x000F48, "Wrong size on AScriptDevice");
static_assert(offsetof(AScriptDevice, Script) == 0x000EF8, "Member 'AScriptDevice::Script' has a wrong offset!");
static_assert(offsetof(AScriptDevice, ScriptInstance) == 0x000F08, "Member 'AScriptDevice::ScriptInstance' has a wrong offset!");

class UVerseCreativeDevice : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseCreativeDevice">();
	}
	static class UVerseCreativeDevice* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseCreativeDevice>();
	}
};
static_assert(alignof(UVerseCreativeDevice) == 0x000008, "Wrong alignment on UVerseCreativeDevice");
static_assert(sizeof(UVerseCreativeDevice) == 0x000030, "Wrong size on UVerseCreativeDevice");

class UVerseCreativeObject : public UObject
{
public:
	class ABuildingActor*                         SavedActor;
	uint8                                         Pad_30[0x8];

public:
	void OnActorEndPlayDestroyActorAndReset(class AActor* Actor, EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseCreativeObject">();
	}
	static class UVerseCreativeObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseCreativeObject>();
	}
};
static_assert(alignof(UVerseCreativeObject) == 0x000008, "Wrong alignment on UVerseCreativeObject");
static_assert(sizeof(UVerseCreativeObject) == 0x000038, "Wrong size on UVerseCreativeObject");
static_assert(offsetof(UVerseCreativeObject, SavedActor) == 0x000028, "Member 'UVerseCreativeObject::SavedActor' has a wrong offset!");

class UVerseDevicesFeatureAction_RegisterWrapperClasses final : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UVerseDeviceWrapperClassMap> DeviceToWrapperClassMapAsset;
	uint8                                         Pad_50[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDevicesFeatureAction_RegisterWrapperClasses">();
	}
	static class UVerseDevicesFeatureAction_RegisterWrapperClasses* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDevicesFeatureAction_RegisterWrapperClasses>();
	}
};
static_assert(alignof(UVerseDevicesFeatureAction_RegisterWrapperClasses) == 0x000008, "Wrong alignment on UVerseDevicesFeatureAction_RegisterWrapperClasses");
static_assert(sizeof(UVerseDevicesFeatureAction_RegisterWrapperClasses) == 0x000058, "Wrong size on UVerseDevicesFeatureAction_RegisterWrapperClasses");
static_assert(offsetof(UVerseDevicesFeatureAction_RegisterWrapperClasses, DeviceToWrapperClassMapAsset) == 0x000028, "Member 'UVerseDevicesFeatureAction_RegisterWrapperClasses::DeviceToWrapperClassMapAsset' has a wrong offset!");

class UVerseDeviceWrapperClassMap final : public UDataAsset
{
public:
	TMap<TSoftClassPtr<class UClass>, TSubclassOf<class UVerseCreativeObject>> DeviceClassMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDeviceWrapperClassMap">();
	}
	static class UVerseDeviceWrapperClassMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDeviceWrapperClassMap>();
	}
};
static_assert(alignof(UVerseDeviceWrapperClassMap) == 0x000008, "Wrong alignment on UVerseDeviceWrapperClassMap");
static_assert(sizeof(UVerseDeviceWrapperClassMap) == 0x000080, "Wrong size on UVerseDeviceWrapperClassMap");
static_assert(offsetof(UVerseDeviceWrapperClassMap, DeviceClassMap) == 0x000030, "Member 'UVerseDeviceWrapperClassMap::DeviceClassMap' has a wrong offset!");

class UVerseDeviceWrapperClassMapSubsystem final : public UWorldSubsystem
{
public:
	TMap<TSoftClassPtr<class UClass>, TSubclassOf<class UObject>> DeviceClassToVerseClassMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDeviceWrapperClassMapSubsystem">();
	}
	static class UVerseDeviceWrapperClassMapSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDeviceWrapperClassMapSubsystem>();
	}
};
static_assert(alignof(UVerseDeviceWrapperClassMapSubsystem) == 0x000008, "Wrong alignment on UVerseDeviceWrapperClassMapSubsystem");
static_assert(sizeof(UVerseDeviceWrapperClassMapSubsystem) == 0x000080, "Wrong size on UVerseDeviceWrapperClassMapSubsystem");
static_assert(offsetof(UVerseDeviceWrapperClassMapSubsystem, DeviceClassToVerseClassMap) == 0x000030, "Member 'UVerseDeviceWrapperClassMapSubsystem::DeviceClassToVerseClassMap' has a wrong offset!");

}
