#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EpicGameplayStatsRuntime_structs.hpp"

namespace SDK
{

class UBlueprintGameplayStatsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
	static bool NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintGameplayStatsLibrary">();
	}
	static class UBlueprintGameplayStatsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintGameplayStatsLibrary>();
	}
};
static_assert(alignof(UBlueprintGameplayStatsLibrary) == 0x000008, "Wrong alignment on UBlueprintGameplayStatsLibrary");
static_assert(sizeof(UBlueprintGameplayStatsLibrary) == 0x000028, "Wrong size on UBlueprintGameplayStatsLibrary");

class UGameplayTagTableManager final : public UDataAsset
{
public:
	TArray<struct FManagedGameplayTagDataTableItem> Tables;
	uint8                                         Pad_40[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagTableManager">();
	}
	static class UGameplayTagTableManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagTableManager>();
	}
};
static_assert(alignof(UGameplayTagTableManager) == 0x000008, "Wrong alignment on UGameplayTagTableManager");
static_assert(sizeof(UGameplayTagTableManager) == 0x000098, "Wrong size on UGameplayTagTableManager");
static_assert(offsetof(UGameplayTagTableManager, Tables) == 0x000030, "Member 'UGameplayTagTableManager::Tables' has a wrong offset!");

}
