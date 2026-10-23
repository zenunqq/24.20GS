#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortAthenaMutator_CR_CreativeAllowLootItem final : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer                  ItemGameplayTagsNotAllowed;

public:
	void SetItemGameplayTagsNotAllowed(const struct FGameplayTagContainer& InItemGameplayTagsNotAllowed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CR_CreativeAllowLootItem">();
	}
	static class AFortAthenaMutator_CR_CreativeAllowLootItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CR_CreativeAllowLootItem>();
	}
};
static_assert(alignof(AFortAthenaMutator_CR_CreativeAllowLootItem) == 0x000008, "Wrong alignment on AFortAthenaMutator_CR_CreativeAllowLootItem");
static_assert(sizeof(AFortAthenaMutator_CR_CreativeAllowLootItem) == 0x000350, "Wrong size on AFortAthenaMutator_CR_CreativeAllowLootItem");
static_assert(offsetof(AFortAthenaMutator_CR_CreativeAllowLootItem, ItemGameplayTagsNotAllowed) == 0x000330, "Member 'AFortAthenaMutator_CR_CreativeAllowLootItem::ItemGameplayTagsNotAllowed' has a wrong offset!");

class AFortAthenaMutator_CR_LootChoice final : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer GetContextTagsToAdd() const;
	struct FGameplayTagContainer GetContextTagsToRemove() const;
	class UDataTable* GetLootPackageTable() const;
	class FString GetLootSelectionString() const;
	class UDataTable* GetLootTierDataTable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CR_LootChoice">();
	}
	static class AFortAthenaMutator_CR_LootChoice* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CR_LootChoice>();
	}
};
static_assert(alignof(AFortAthenaMutator_CR_LootChoice) == 0x000008, "Wrong alignment on AFortAthenaMutator_CR_LootChoice");
static_assert(sizeof(AFortAthenaMutator_CR_LootChoice) == 0x000330, "Wrong size on AFortAthenaMutator_CR_LootChoice");

class ULootControllerNativeComponent final : public UActorComponent
{
public:
	TArray<class AActor*>                         OutActors;
	TMulticastInlineDelegate<void(bool bSuccess)> OnAsyncGetActorsOfClassCompleted;

public:
	void AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, const int32 InBuildingContainerFoundIndex, const struct FBuildingContainersArrayEntry& InBuildingContainerToAdd);
	void AsyncGetActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
	void PrintDebugString(const class FString& DebugString, const bool LogWarning);

	bool IsRemoveLootEnabled() const;
	bool IsThrottleEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LootControllerNativeComponent">();
	}
	static class ULootControllerNativeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULootControllerNativeComponent>();
	}
};
static_assert(alignof(ULootControllerNativeComponent) == 0x000008, "Wrong alignment on ULootControllerNativeComponent");
static_assert(sizeof(ULootControllerNativeComponent) == 0x0000C0, "Wrong size on ULootControllerNativeComponent");
static_assert(offsetof(ULootControllerNativeComponent, OutActors) == 0x0000A0, "Member 'ULootControllerNativeComponent::OutActors' has a wrong offset!");
static_assert(offsetof(ULootControllerNativeComponent, OnAsyncGetActorsOfClassCompleted) == 0x0000B0, "Member 'ULootControllerNativeComponent::OnAsyncGetActorsOfClassCompleted' has a wrong offset!");

}
