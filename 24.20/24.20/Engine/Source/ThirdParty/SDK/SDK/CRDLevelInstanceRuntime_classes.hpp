#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PlayspaceSystem_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AFortAthenaMutator_LevelInstanceDevice final : public AFortAthenaMutator
{
public:
	TWeakObjectPtr<class ALevelInstanceGameplayVolume> CachedGameplayVolume;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_LevelInstanceDevice">();
	}
	static class AFortAthenaMutator_LevelInstanceDevice* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_LevelInstanceDevice>();
	}
};
static_assert(alignof(AFortAthenaMutator_LevelInstanceDevice) == 0x000008, "Wrong alignment on AFortAthenaMutator_LevelInstanceDevice");
static_assert(sizeof(AFortAthenaMutator_LevelInstanceDevice) == 0x000338, "Wrong size on AFortAthenaMutator_LevelInstanceDevice");
static_assert(offsetof(AFortAthenaMutator_LevelInstanceDevice, CachedGameplayVolume) == 0x000330, "Member 'AFortAthenaMutator_LevelInstanceDevice::CachedGameplayVolume' has a wrong offset!");

class ALevelInstanceGameplayVolume final : public AGameplayVolume
{
public:
	uint8                                         Pad_318[0x8];
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, bool bSucceeded)> OnLevelInstanceResolved;
	uint8                                         Pad_330[0x30];
	TMulticastInlineDelegate<void(bool bNewDisabled)> OnDisabledStateChanged;
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, const struct FGuid& LevelInstanceGuid)> OnLevelInstanceGuidChanged;
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, const class FString& LevelInstanceName)> OnLevelInstanceNameChanged;
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, int32 SizeX, int32 SizeY, int32 Height)> OnLevelInstanceSizeChanged;
	TMulticastInlineDelegate<void(class ALevelInstanceGameplayVolume* LevelInstanceGameplayVolume, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)> OnLevelInstanceContentCollectionChanged;
	uint8                                         Pad_3B0[0x1];
	bool                                          bEditMode;
	bool                                          bDisabled;
	ESpatialLoadingState                          LoadingState;
	uint8                                         Pad_3B4[0x4];
	class FString                                 LevelInstanceName;
	bool                                          bInstanceLoaded;
	bool                                          bWantsLevelLoaded;
	uint8                                         Pad_3CA[0x1];
	bool                                          bConvertStructuresToProps;
	uint8                                         Pad_3CC[0x4];
	class AFortMinigame*                          CachedMinigame;
	class UFortMutatorListComponent*              MutatorListComponent;
	class UFortClassTrackerComponent*             ClassFilterComponent;
	TArray<TSubclassOf<class UObject>>            BlacklistedClasses;
	uint8                                         Pad_3F8[0x50];
	struct FGuid                                  LevelInstanceSaveActorGuid;
	class AFortLevelInstanceSaveActor*            LevelInstanceSaveActor;
	uint8                                         Pad_460[0x40];

public:
	void CheckForOverlappingVolumes();
	class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();
	void HandleActorHealthChanged(class AActor* Actor, float NewHealth);
	void InstantiateFromLevelInstanceSaveActor();
	void LevelInstanceBeingDestroyed();
	void LevelInstanceContentChanged(const class AActor* InstigatorActor);
	void LevelInstanceContentCollectionChanged(const class AActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void LevelInstanceNameChanged(const class FString& Name_0);
	void LevelInstanceSizeChanged(const class AActor* InstigatorActor);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void OnRep_EditMode();
	void OnRep_InstanceLoaded();
	void OnRep_IsDisabled();
	void OnVolumeChanged();
	void RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void RemoveActorWhenEndPlay(class AActor* Actor, const EEndPlayReason EndPlayReason);
	void SetEditMode(bool bInEditMode);
	void SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid);
	void SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void SetLevelInstanceName(const class FString& InName);
	void SetReadyForInstantiation(bool bReady);
	void SetWantsLevelLoaded(bool bInWantsLevelLoaded);

	class FString GetLevelInstanceName() const;
	bool IsDisabled() const;
	bool IsInEditMode() const;
	bool IsPreviewActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelInstanceGameplayVolume">();
	}
	static class ALevelInstanceGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelInstanceGameplayVolume>();
	}
};
static_assert(alignof(ALevelInstanceGameplayVolume) == 0x000008, "Wrong alignment on ALevelInstanceGameplayVolume");
static_assert(sizeof(ALevelInstanceGameplayVolume) == 0x0004A0, "Wrong size on ALevelInstanceGameplayVolume");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceResolved) == 0x000320, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceResolved' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnDisabledStateChanged) == 0x000360, "Member 'ALevelInstanceGameplayVolume::OnDisabledStateChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceGuidChanged) == 0x000370, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceGuidChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceNameChanged) == 0x000380, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceNameChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceSizeChanged) == 0x000390, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceSizeChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, OnLevelInstanceContentCollectionChanged) == 0x0003A0, "Member 'ALevelInstanceGameplayVolume::OnLevelInstanceContentCollectionChanged' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bEditMode) == 0x0003B1, "Member 'ALevelInstanceGameplayVolume::bEditMode' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bDisabled) == 0x0003B2, "Member 'ALevelInstanceGameplayVolume::bDisabled' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LoadingState) == 0x0003B3, "Member 'ALevelInstanceGameplayVolume::LoadingState' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceName) == 0x0003B8, "Member 'ALevelInstanceGameplayVolume::LevelInstanceName' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bInstanceLoaded) == 0x0003C8, "Member 'ALevelInstanceGameplayVolume::bInstanceLoaded' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bWantsLevelLoaded) == 0x0003C9, "Member 'ALevelInstanceGameplayVolume::bWantsLevelLoaded' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, bConvertStructuresToProps) == 0x0003CB, "Member 'ALevelInstanceGameplayVolume::bConvertStructuresToProps' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, CachedMinigame) == 0x0003D0, "Member 'ALevelInstanceGameplayVolume::CachedMinigame' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, MutatorListComponent) == 0x0003D8, "Member 'ALevelInstanceGameplayVolume::MutatorListComponent' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, ClassFilterComponent) == 0x0003E0, "Member 'ALevelInstanceGameplayVolume::ClassFilterComponent' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, BlacklistedClasses) == 0x0003E8, "Member 'ALevelInstanceGameplayVolume::BlacklistedClasses' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceSaveActorGuid) == 0x000448, "Member 'ALevelInstanceGameplayVolume::LevelInstanceSaveActorGuid' has a wrong offset!");
static_assert(offsetof(ALevelInstanceGameplayVolume, LevelInstanceSaveActor) == 0x000458, "Member 'ALevelInstanceGameplayVolume::LevelInstanceSaveActor' has a wrong offset!");

class ULevelInstanceItemListComponent final : public UFortMinigameItemContainerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelInstanceItemListComponent">();
	}
	static class ULevelInstanceItemListComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelInstanceItemListComponent>();
	}
};
static_assert(alignof(ULevelInstanceItemListComponent) == 0x000008, "Wrong alignment on ULevelInstanceItemListComponent");
static_assert(sizeof(ULevelInstanceItemListComponent) == 0x000128, "Wrong size on ULevelInstanceItemListComponent");

}
