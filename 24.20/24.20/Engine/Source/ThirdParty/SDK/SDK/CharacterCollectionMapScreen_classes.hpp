#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "CharacterCollectionMapScreen_structs.hpp"
#include "CollectionMapShared_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{
public:
	struct FCollectionScreenServiceData           SharedServiceData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaCollectionScreenMapCharacter">();
	}
	static class UAthenaCollectionScreenMapCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCollectionScreenMapCharacter>();
	}
};
static_assert(alignof(UAthenaCollectionScreenMapCharacter) == 0x000008, "Wrong alignment on UAthenaCollectionScreenMapCharacter");
static_assert(sizeof(UAthenaCollectionScreenMapCharacter) == 0x000720, "Wrong size on UAthenaCollectionScreenMapCharacter");
static_assert(offsetof(UAthenaCollectionScreenMapCharacter, SharedServiceData) == 0x0006B0, "Member 'UAthenaCollectionScreenMapCharacter::SharedServiceData' has a wrong offset!");

class UCollectionNPCServiceContainer : public UUserWidget
{
public:
	class UDynamicEntryBox*                       EntryBox_ServiceGroups;
	int32                                         MaxGroupSize;
	uint8                                         Pad_274[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectionNPCServiceContainer">();
	}
	static class UCollectionNPCServiceContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceContainer>();
	}
};
static_assert(alignof(UCollectionNPCServiceContainer) == 0x000008, "Wrong alignment on UCollectionNPCServiceContainer");
static_assert(sizeof(UCollectionNPCServiceContainer) == 0x000278, "Wrong size on UCollectionNPCServiceContainer");
static_assert(offsetof(UCollectionNPCServiceContainer, EntryBox_ServiceGroups) == 0x000268, "Member 'UCollectionNPCServiceContainer::EntryBox_ServiceGroups' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceContainer, MaxGroupSize) == 0x000270, "Member 'UCollectionNPCServiceContainer::MaxGroupSize' has a wrong offset!");

class UCollectionNPCServiceGroup : public UUserWidget
{
public:
	class UDynamicEntryBox*                       EntryBox_Services;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectionNPCServiceGroup">();
	}
	static class UCollectionNPCServiceGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceGroup>();
	}
};
static_assert(alignof(UCollectionNPCServiceGroup) == 0x000008, "Wrong alignment on UCollectionNPCServiceGroup");
static_assert(sizeof(UCollectionNPCServiceGroup) == 0x000270, "Wrong size on UCollectionNPCServiceGroup");
static_assert(offsetof(UCollectionNPCServiceGroup, EntryBox_Services) == 0x000268, "Member 'UCollectionNPCServiceGroup::EntryBox_Services' has a wrong offset!");

class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{
public:
	class UCollectionNPCServiceContainer*         Services;
	class UImage*                                 Image_ServiceIcon;
	uint8                                         Pad_480[0x8];
	struct FCollectionScreenServiceData           SharedServiceData;
	TArray<class UDataTable*>                     GameFeatureLootTierData;
	TArray<class UDataTable*>                     GameFeatureLootPackageData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectionNPCServiceInfoOverlay">();
	}
	static class UCollectionNPCServiceInfoOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceInfoOverlay>();
	}
};
static_assert(alignof(UCollectionNPCServiceInfoOverlay) == 0x000008, "Wrong alignment on UCollectionNPCServiceInfoOverlay");
static_assert(sizeof(UCollectionNPCServiceInfoOverlay) == 0x000518, "Wrong size on UCollectionNPCServiceInfoOverlay");
static_assert(offsetof(UCollectionNPCServiceInfoOverlay, Services) == 0x000470, "Member 'UCollectionNPCServiceInfoOverlay::Services' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceInfoOverlay, Image_ServiceIcon) == 0x000478, "Member 'UCollectionNPCServiceInfoOverlay::Image_ServiceIcon' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceInfoOverlay, SharedServiceData) == 0x000488, "Member 'UCollectionNPCServiceInfoOverlay::SharedServiceData' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceInfoOverlay, GameFeatureLootTierData) == 0x0004F8, "Member 'UCollectionNPCServiceInfoOverlay::GameFeatureLootTierData' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceInfoOverlay, GameFeatureLootPackageData) == 0x000508, "Member 'UCollectionNPCServiceInfoOverlay::GameFeatureLootPackageData' has a wrong offset!");

class UCollectionNPCServiceWidget : public UUserWidget
{
public:
	void PopulateData(const struct FNPCServiceWidgetData& WidgetData);
	void PopulateEmpty();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectionNPCServiceWidget">();
	}
	static class UCollectionNPCServiceWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceWidget>();
	}
};
static_assert(alignof(UCollectionNPCServiceWidget) == 0x000008, "Wrong alignment on UCollectionNPCServiceWidget");
static_assert(sizeof(UCollectionNPCServiceWidget) == 0x000268, "Wrong size on UCollectionNPCServiceWidget");

}
