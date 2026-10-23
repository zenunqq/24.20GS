#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UVKEditGameplayAssetsToCook final : public UPrimaryDataAsset
{
public:
	TArray<TSoftObjectPtr<class UObject>>         Assets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VKEditGameplayAssetsToCook">();
	}
	static class UVKEditGameplayAssetsToCook* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVKEditGameplayAssetsToCook>();
	}
};
static_assert(alignof(UVKEditGameplayAssetsToCook) == 0x000008, "Wrong alignment on UVKEditGameplayAssetsToCook");
static_assert(sizeof(UVKEditGameplayAssetsToCook) == 0x000040, "Wrong size on UVKEditGameplayAssetsToCook");
static_assert(offsetof(UVKEditGameplayAssetsToCook, Assets) == 0x000030, "Member 'UVKEditGameplayAssetsToCook::Assets' has a wrong offset!");

class UPlayspaceComponent_PlaysetRootSpawner final : public UFortPlayspaceComponent
{
public:
	uint8                                         Pad_F8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_PlaysetRootSpawner">();
	}
	static class UPlayspaceComponent_PlaysetRootSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_PlaysetRootSpawner>();
	}
};
static_assert(alignof(UPlayspaceComponent_PlaysetRootSpawner) == 0x000008, "Wrong alignment on UPlayspaceComponent_PlaysetRootSpawner");
static_assert(sizeof(UPlayspaceComponent_PlaysetRootSpawner) == 0x000110, "Wrong size on UPlayspaceComponent_PlaysetRootSpawner");

class UPlayspaceComponent_VKEditCreativeToolsPermission final : public UPlayspaceComponent_CreativeToolsPermission
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_VKEditCreativeToolsPermission">();
	}
	static class UPlayspaceComponent_VKEditCreativeToolsPermission* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_VKEditCreativeToolsPermission>();
	}
};
static_assert(alignof(UPlayspaceComponent_VKEditCreativeToolsPermission) == 0x000008, "Wrong alignment on UPlayspaceComponent_VKEditCreativeToolsPermission");
static_assert(sizeof(UPlayspaceComponent_VKEditCreativeToolsPermission) == 0x0001E0, "Wrong size on UPlayspaceComponent_VKEditCreativeToolsPermission");

class AVKEditPlayspace final : public AFortPlayspace
{
public:
	uint8                                         Pad_670[0x20];
	TSoftClassPtr<class UClass>                   EditorOnlyMinigameSettingsMachineClassToSpawn;
	TSoftClassPtr<class UClass>                   EditorOnlyWorldManagerClassToSpawn;
	class UFortLevelStreamComponent*              LevelStreamComponent;
	class UFortProjectEditComponent*              ProjectEditComponent;
	class UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager;
	class UPlayspaceComponent_EditConnectionManager* EditConnectionManager;
	class UPlayspaceComponent_LiveEdit*           LiveEditComponent;
	class UPlayspaceComponent_VKEditCreativeToolsPermission* CreativeToolsPermission;
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;
	class UPlayspaceComponent_SpatialGameplay*    SpatialGameplayComponent;
	class UFortVolumeObjectTrackingComponent*     ObjectTrackingComponent;
	class UPlayspaceComponent_DeviceTracking*     DeviceTrackerComponent;
	class UPlayspaceComponent_CreativeInventory*  CreativeInventoryComponent;
	class UPlayspaceComponent_ActorMemoryTracker* ActorMemoryTrackerComponent;
	class UFortCreativeDynamicXpComponent*        FortCreativeDynamicXp;
	class UPlayspaceComponent_CreativeModifyEmotes* CreativeModifyEmotesComponent;
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;
	class UFortPlayspaceComponent_NaniteSettingsOverride* NaniteSettingsOverrideComponent;
	class UPlayspaceComponent_PlaysetRootSpawner* PlaysetRootSpawnerComponent;
	class UPlayspaceComponent_PlayerPawnOverrides* PlayerPawnOverridesComponent;

public:
	void OnClientActivatedContent(const struct FUniqueNetIdRepl& ClientNetId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VKEditPlayspace">();
	}
	static class AVKEditPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVKEditPlayspace>();
	}
};
static_assert(alignof(AVKEditPlayspace) == 0x000008, "Wrong alignment on AVKEditPlayspace");
static_assert(sizeof(AVKEditPlayspace) == 0x000770, "Wrong size on AVKEditPlayspace");
static_assert(offsetof(AVKEditPlayspace, EditorOnlyMinigameSettingsMachineClassToSpawn) == 0x000690, "Member 'AVKEditPlayspace::EditorOnlyMinigameSettingsMachineClassToSpawn' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, EditorOnlyWorldManagerClassToSpawn) == 0x0006B8, "Member 'AVKEditPlayspace::EditorOnlyWorldManagerClassToSpawn' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, LevelStreamComponent) == 0x0006E0, "Member 'AVKEditPlayspace::LevelStreamComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, ProjectEditComponent) == 0x0006E8, "Member 'AVKEditPlayspace::ProjectEditComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, PlayStopPauseManager) == 0x0006F0, "Member 'AVKEditPlayspace::PlayStopPauseManager' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, EditConnectionManager) == 0x0006F8, "Member 'AVKEditPlayspace::EditConnectionManager' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, LiveEditComponent) == 0x000700, "Member 'AVKEditPlayspace::LiveEditComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, CreativeToolsPermission) == 0x000708, "Member 'AVKEditPlayspace::CreativeToolsPermission' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, CreativeLoadingStateProxy) == 0x000710, "Member 'AVKEditPlayspace::CreativeLoadingStateProxy' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, SpatialGameplayComponent) == 0x000718, "Member 'AVKEditPlayspace::SpatialGameplayComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, ObjectTrackingComponent) == 0x000720, "Member 'AVKEditPlayspace::ObjectTrackingComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, DeviceTrackerComponent) == 0x000728, "Member 'AVKEditPlayspace::DeviceTrackerComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, CreativeInventoryComponent) == 0x000730, "Member 'AVKEditPlayspace::CreativeInventoryComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, ActorMemoryTrackerComponent) == 0x000738, "Member 'AVKEditPlayspace::ActorMemoryTrackerComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, FortCreativeDynamicXp) == 0x000740, "Member 'AVKEditPlayspace::FortCreativeDynamicXp' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, CreativeModifyEmotesComponent) == 0x000748, "Member 'AVKEditPlayspace::CreativeModifyEmotesComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, WorldTimeOfDayOverrideComponent) == 0x000750, "Member 'AVKEditPlayspace::WorldTimeOfDayOverrideComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, NaniteSettingsOverrideComponent) == 0x000758, "Member 'AVKEditPlayspace::NaniteSettingsOverrideComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, PlaysetRootSpawnerComponent) == 0x000760, "Member 'AVKEditPlayspace::PlaysetRootSpawnerComponent' has a wrong offset!");
static_assert(offsetof(AVKEditPlayspace, PlayerPawnOverridesComponent) == 0x000768, "Member 'AVKEditPlayspace::PlayerPawnOverridesComponent' has a wrong offset!");

class UPlayspaceComponent_EditConnectionManager final : public UFortPlayspaceComponent
{
public:
	uint8                                         Pad_F8[0x60];
	int32                                         EditConnections;
	EVkEditStatus                                 VkEditStatus;
	uint8                                         Pad_15D[0x3];
	struct FGameplayTagContainer                  UITagsToHide;

public:
	void OnRep_EditConnections() const;
	void OnRep_VkEditStatus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_EditConnectionManager">();
	}
	static class UPlayspaceComponent_EditConnectionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_EditConnectionManager>();
	}
};
static_assert(alignof(UPlayspaceComponent_EditConnectionManager) == 0x000008, "Wrong alignment on UPlayspaceComponent_EditConnectionManager");
static_assert(sizeof(UPlayspaceComponent_EditConnectionManager) == 0x000180, "Wrong size on UPlayspaceComponent_EditConnectionManager");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, EditConnections) == 0x000158, "Member 'UPlayspaceComponent_EditConnectionManager::EditConnections' has a wrong offset!");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, VkEditStatus) == 0x00015C, "Member 'UPlayspaceComponent_EditConnectionManager::VkEditStatus' has a wrong offset!");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, UITagsToHide) == 0x000160, "Member 'UPlayspaceComponent_EditConnectionManager::UITagsToHide' has a wrong offset!");

}
