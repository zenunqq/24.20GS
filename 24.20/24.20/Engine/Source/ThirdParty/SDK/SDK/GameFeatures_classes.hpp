#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameFeatures_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class IGameFeatureStateChangeObserver final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureStateChangeObserver">();
	}
	static class IGameFeatureStateChangeObserver* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameFeatureStateChangeObserver>();
	}
};
static_assert(alignof(IGameFeatureStateChangeObserver) == 0x000008, "Wrong alignment on IGameFeatureStateChangeObserver");
static_assert(sizeof(IGameFeatureStateChangeObserver) == 0x000028, "Wrong size on IGameFeatureStateChangeObserver");

class UGameFeatureAction : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction">();
	}
	static class UGameFeatureAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction>();
	}
};
static_assert(alignof(UGameFeatureAction) == 0x000008, "Wrong alignment on UGameFeatureAction");
static_assert(sizeof(UGameFeatureAction) == 0x000028, "Wrong size on UGameFeatureAction");

class UGameFeatureAction_AddCheats final : public UGameFeatureAction
{
public:
	TArray<TSoftClassPtr<class UClass>>           CheatManagers;
	bool                                          bLoadCheatManagersAsync;
	uint8                                         Pad_39[0xF];
	TArray<TWeakObjectPtr<class UCheatManagerExtension>> SpawnedCheatManagers;
	uint8                                         Pad_58[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddCheats">();
	}
	static class UGameFeatureAction_AddCheats* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddCheats>();
	}
};
static_assert(alignof(UGameFeatureAction_AddCheats) == 0x000008, "Wrong alignment on UGameFeatureAction_AddCheats");
static_assert(sizeof(UGameFeatureAction_AddCheats) == 0x000060, "Wrong size on UGameFeatureAction_AddCheats");
static_assert(offsetof(UGameFeatureAction_AddCheats, CheatManagers) == 0x000028, "Member 'UGameFeatureAction_AddCheats::CheatManagers' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddCheats, bLoadCheatManagersAsync) == 0x000038, "Member 'UGameFeatureAction_AddCheats::bLoadCheatManagersAsync' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddCheats, SpawnedCheatManagers) == 0x000048, "Member 'UGameFeatureAction_AddCheats::SpawnedCheatManagers' has a wrong offset!");

class UGameFeatureAction_AddComponents final : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>     ComponentList;
	uint8                                         Pad_38[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddComponents">();
	}
	static class UGameFeatureAction_AddComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddComponents>();
	}
};
static_assert(alignof(UGameFeatureAction_AddComponents) == 0x000008, "Wrong alignment on UGameFeatureAction_AddComponents");
static_assert(sizeof(UGameFeatureAction_AddComponents) == 0x000088, "Wrong size on UGameFeatureAction_AddComponents");
static_assert(offsetof(UGameFeatureAction_AddComponents, ComponentList) == 0x000028, "Member 'UGameFeatureAction_AddComponents::ComponentList' has a wrong offset!");

class UGameFeatureAction_AddWPContent final : public UGameFeatureAction
{
public:
	class UContentBundleDescriptor*               ContentBundleDescriptor;
	uint8                                         Pad_30[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddWPContent">();
	}
	static class UGameFeatureAction_AddWPContent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddWPContent>();
	}
};
static_assert(alignof(UGameFeatureAction_AddWPContent) == 0x000008, "Wrong alignment on UGameFeatureAction_AddWPContent");
static_assert(sizeof(UGameFeatureAction_AddWPContent) == 0x000040, "Wrong size on UGameFeatureAction_AddWPContent");
static_assert(offsetof(UGameFeatureAction_AddWPContent, ContentBundleDescriptor) == 0x000028, "Member 'UGameFeatureAction_AddWPContent::ContentBundleDescriptor' has a wrong offset!");

class UGameFeatureAction_DataRegistry final : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UDataRegistry>>   RegistriesToAdd;
	bool                                          bPreloadInEditor;
	uint8                                         Pad_39[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_DataRegistry">();
	}
	static class UGameFeatureAction_DataRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_DataRegistry>();
	}
};
static_assert(alignof(UGameFeatureAction_DataRegistry) == 0x000008, "Wrong alignment on UGameFeatureAction_DataRegistry");
static_assert(sizeof(UGameFeatureAction_DataRegistry) == 0x000040, "Wrong size on UGameFeatureAction_DataRegistry");
static_assert(offsetof(UGameFeatureAction_DataRegistry, RegistriesToAdd) == 0x000028, "Member 'UGameFeatureAction_DataRegistry::RegistriesToAdd' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_DataRegistry, bPreloadInEditor) == 0x000038, "Member 'UGameFeatureAction_DataRegistry::bPreloadInEditor' has a wrong offset!");

class UGameFeatureAction_DataRegistrySource final : public UGameFeatureAction
{
public:
	TArray<struct FDataRegistrySourceToAdd>       SourcesToAdd;
	bool                                          bPreloadInEditor;
	uint8                                         Pad_39[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_DataRegistrySource">();
	}
	static class UGameFeatureAction_DataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_DataRegistrySource>();
	}
};
static_assert(alignof(UGameFeatureAction_DataRegistrySource) == 0x000008, "Wrong alignment on UGameFeatureAction_DataRegistrySource");
static_assert(sizeof(UGameFeatureAction_DataRegistrySource) == 0x000040, "Wrong size on UGameFeatureAction_DataRegistrySource");
static_assert(offsetof(UGameFeatureAction_DataRegistrySource, SourcesToAdd) == 0x000028, "Member 'UGameFeatureAction_DataRegistrySource::SourcesToAdd' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_DataRegistrySource, bPreloadInEditor) == 0x000038, "Member 'UGameFeatureAction_DataRegistrySource::bPreloadInEditor' has a wrong offset!");

class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>             Actions;
	TArray<struct FPrimaryAssetTypeInfo>          PrimaryAssetTypesToScan;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureData">();
	}
	static class UGameFeatureData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureData>();
	}
};
static_assert(alignof(UGameFeatureData) == 0x000008, "Wrong alignment on UGameFeatureData");
static_assert(sizeof(UGameFeatureData) == 0x000050, "Wrong size on UGameFeatureData");
static_assert(offsetof(UGameFeatureData, Actions) == 0x000030, "Member 'UGameFeatureData::Actions' has a wrong offset!");
static_assert(offsetof(UGameFeatureData, PrimaryAssetTypesToScan) == 0x000040, "Member 'UGameFeatureData::PrimaryAssetTypesToScan' has a wrong offset!");

class UGameFeaturePluginStateMachine final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FGameFeaturePluginStateMachineProperties StateProperties;
	uint8                                         Pad_F8[0xE8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturePluginStateMachine">();
	}
	static class UGameFeaturePluginStateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturePluginStateMachine>();
	}
};
static_assert(alignof(UGameFeaturePluginStateMachine) == 0x000008, "Wrong alignment on UGameFeaturePluginStateMachine");
static_assert(sizeof(UGameFeaturePluginStateMachine) == 0x0001E0, "Wrong size on UGameFeaturePluginStateMachine");
static_assert(offsetof(UGameFeaturePluginStateMachine, StateProperties) == 0x000030, "Member 'UGameFeaturePluginStateMachine::StateProperties' has a wrong offset!");

class UGameFeaturesProjectPolicies : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesProjectPolicies">();
	}
	static class UGameFeaturesProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesProjectPolicies>();
	}
};
static_assert(alignof(UGameFeaturesProjectPolicies) == 0x000008, "Wrong alignment on UGameFeaturesProjectPolicies");
static_assert(sizeof(UGameFeaturesProjectPolicies) == 0x000028, "Wrong size on UGameFeaturesProjectPolicies");

class UDefaultGameFeaturesProjectPolicies final : public UGameFeaturesProjectPolicies
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultGameFeaturesProjectPolicies">();
	}
	static class UDefaultGameFeaturesProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultGameFeaturesProjectPolicies>();
	}
};
static_assert(alignof(UDefaultGameFeaturesProjectPolicies) == 0x000008, "Wrong alignment on UDefaultGameFeaturesProjectPolicies");
static_assert(sizeof(UDefaultGameFeaturesProjectPolicies) == 0x000028, "Wrong size on UDefaultGameFeaturesProjectPolicies");

class UGameFeaturesSubsystem final : public UEngineSubsystem
{
public:
	TMap<class FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;
	TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;
	uint8                                         Pad_90[0xA0];
	TArray<class UObject*>                        Observers;
	class UGameFeaturesProjectPolicies*           GameSpecificPolicies;
	uint8                                         Pad_148[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesSubsystem">();
	}
	static class UGameFeaturesSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesSubsystem>();
	}
};
static_assert(alignof(UGameFeaturesSubsystem) == 0x000008, "Wrong alignment on UGameFeaturesSubsystem");
static_assert(sizeof(UGameFeaturesSubsystem) == 0x000150, "Wrong size on UGameFeaturesSubsystem");
static_assert(offsetof(UGameFeaturesSubsystem, GameFeaturePluginStateMachines) == 0x000030, "Member 'UGameFeaturesSubsystem::GameFeaturePluginStateMachines' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, TerminalGameFeaturePluginStateMachines) == 0x000080, "Member 'UGameFeaturesSubsystem::TerminalGameFeaturePluginStateMachines' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, Observers) == 0x000130, "Member 'UGameFeaturesSubsystem::Observers' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, GameSpecificPolicies) == 0x000140, "Member 'UGameFeaturesSubsystem::GameSpecificPolicies' has a wrong offset!");

class UGameFeaturesSubsystemSettings final : public UDeveloperSettings
{
public:
	struct FSoftClassPath                         GameFeaturesManagerClassName;
	TArray<class FString>                         DisabledPlugins;
	TArray<class FString>                         AdditionalPluginMetadataKeys;
	uint8                                         Pad_68[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesSubsystemSettings">();
	}
	static class UGameFeaturesSubsystemSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesSubsystemSettings>();
	}
};
static_assert(alignof(UGameFeaturesSubsystemSettings) == 0x000008, "Wrong alignment on UGameFeaturesSubsystemSettings");
static_assert(sizeof(UGameFeaturesSubsystemSettings) == 0x000088, "Wrong size on UGameFeaturesSubsystemSettings");
static_assert(offsetof(UGameFeaturesSubsystemSettings, GameFeaturesManagerClassName) == 0x000030, "Member 'UGameFeaturesSubsystemSettings::GameFeaturesManagerClassName' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystemSettings, DisabledPlugins) == 0x000048, "Member 'UGameFeaturesSubsystemSettings::DisabledPlugins' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystemSettings, AdditionalPluginMetadataKeys) == 0x000058, "Member 'UGameFeaturesSubsystemSettings::AdditionalPluginMetadataKeys' has a wrong offset!");

}
