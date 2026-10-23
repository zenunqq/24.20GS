#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "LootController_structs.hpp"

namespace SDK::Params
{

struct FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed final
{
public:
	struct FGameplayTagContainer                  InItemGameplayTagsNotAllowed;
};
static_assert(alignof(FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed");
static_assert(sizeof(FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed) == 0x000020, "Wrong size on FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed");
static_assert(offsetof(FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed, InItemGameplayTagsNotAllowed) == 0x000000, "Member 'FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed::InItemGameplayTagsNotAllowed' has a wrong offset!");

struct FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd final
{
public:
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd");
static_assert(sizeof(FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd) == 0x000020, "Wrong size on FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd");
static_assert(offsetof(FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove final
{
public:
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove");
static_assert(sizeof(FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove) == 0x000020, "Wrong size on FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove");
static_assert(offsetof(FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_CR_LootChoice_GetLootPackageTable final
{
public:
	class UDataTable*                             ReturnValue;
};
static_assert(alignof(FortAthenaMutator_CR_LootChoice_GetLootPackageTable) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_LootChoice_GetLootPackageTable");
static_assert(sizeof(FortAthenaMutator_CR_LootChoice_GetLootPackageTable) == 0x000008, "Wrong size on FortAthenaMutator_CR_LootChoice_GetLootPackageTable");
static_assert(offsetof(FortAthenaMutator_CR_LootChoice_GetLootPackageTable, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_CR_LootChoice_GetLootPackageTable::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_CR_LootChoice_GetLootSelectionString final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(FortAthenaMutator_CR_LootChoice_GetLootSelectionString) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_LootChoice_GetLootSelectionString");
static_assert(sizeof(FortAthenaMutator_CR_LootChoice_GetLootSelectionString) == 0x000010, "Wrong size on FortAthenaMutator_CR_LootChoice_GetLootSelectionString");
static_assert(offsetof(FortAthenaMutator_CR_LootChoice_GetLootSelectionString, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_CR_LootChoice_GetLootSelectionString::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_CR_LootChoice_GetLootTierDataTable final
{
public:
	class UDataTable*                             ReturnValue;
};
static_assert(alignof(FortAthenaMutator_CR_LootChoice_GetLootTierDataTable) == 0x000008, "Wrong alignment on FortAthenaMutator_CR_LootChoice_GetLootTierDataTable");
static_assert(sizeof(FortAthenaMutator_CR_LootChoice_GetLootTierDataTable) == 0x000008, "Wrong size on FortAthenaMutator_CR_LootChoice_GetLootTierDataTable");
static_assert(offsetof(FortAthenaMutator_CR_LootChoice_GetLootTierDataTable, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_CR_LootChoice_GetLootTierDataTable::ReturnValue' has a wrong offset!");

struct LootControllerNativeComponent_AddToArray final
{
public:
	TArray<struct FBuildingContainersFoundEntry>  InOutBuildingContainersFoundArray;
	int32                                         InBuildingContainerFoundIndex;
	uint8                                         Pad_14[0xC];
	struct FBuildingContainersArrayEntry          InBuildingContainerToAdd;
};
static_assert(alignof(LootControllerNativeComponent_AddToArray) == 0x000010, "Wrong alignment on LootControllerNativeComponent_AddToArray");
static_assert(sizeof(LootControllerNativeComponent_AddToArray) == 0x0000C0, "Wrong size on LootControllerNativeComponent_AddToArray");
static_assert(offsetof(LootControllerNativeComponent_AddToArray, InOutBuildingContainersFoundArray) == 0x000000, "Member 'LootControllerNativeComponent_AddToArray::InOutBuildingContainersFoundArray' has a wrong offset!");
static_assert(offsetof(LootControllerNativeComponent_AddToArray, InBuildingContainerFoundIndex) == 0x000010, "Member 'LootControllerNativeComponent_AddToArray::InBuildingContainerFoundIndex' has a wrong offset!");
static_assert(offsetof(LootControllerNativeComponent_AddToArray, InBuildingContainerToAdd) == 0x000020, "Member 'LootControllerNativeComponent_AddToArray::InBuildingContainerToAdd' has a wrong offset!");

struct LootControllerNativeComponent_AsyncGetActorsOfClass final
{
public:
	const class UObject*                          WorldContextObject;
	TSubclassOf<class AActor>                     ActorClass;
};
static_assert(alignof(LootControllerNativeComponent_AsyncGetActorsOfClass) == 0x000008, "Wrong alignment on LootControllerNativeComponent_AsyncGetActorsOfClass");
static_assert(sizeof(LootControllerNativeComponent_AsyncGetActorsOfClass) == 0x000010, "Wrong size on LootControllerNativeComponent_AsyncGetActorsOfClass");
static_assert(offsetof(LootControllerNativeComponent_AsyncGetActorsOfClass, WorldContextObject) == 0x000000, "Member 'LootControllerNativeComponent_AsyncGetActorsOfClass::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LootControllerNativeComponent_AsyncGetActorsOfClass, ActorClass) == 0x000008, "Member 'LootControllerNativeComponent_AsyncGetActorsOfClass::ActorClass' has a wrong offset!");

struct LootControllerNativeComponent_PrintDebugString final
{
public:
	class FString                                 DebugString;
	bool                                          LogWarning;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(LootControllerNativeComponent_PrintDebugString) == 0x000008, "Wrong alignment on LootControllerNativeComponent_PrintDebugString");
static_assert(sizeof(LootControllerNativeComponent_PrintDebugString) == 0x000018, "Wrong size on LootControllerNativeComponent_PrintDebugString");
static_assert(offsetof(LootControllerNativeComponent_PrintDebugString, DebugString) == 0x000000, "Member 'LootControllerNativeComponent_PrintDebugString::DebugString' has a wrong offset!");
static_assert(offsetof(LootControllerNativeComponent_PrintDebugString, LogWarning) == 0x000010, "Member 'LootControllerNativeComponent_PrintDebugString::LogWarning' has a wrong offset!");

struct LootControllerNativeComponent_IsRemoveLootEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LootControllerNativeComponent_IsRemoveLootEnabled) == 0x000001, "Wrong alignment on LootControllerNativeComponent_IsRemoveLootEnabled");
static_assert(sizeof(LootControllerNativeComponent_IsRemoveLootEnabled) == 0x000001, "Wrong size on LootControllerNativeComponent_IsRemoveLootEnabled");
static_assert(offsetof(LootControllerNativeComponent_IsRemoveLootEnabled, ReturnValue) == 0x000000, "Member 'LootControllerNativeComponent_IsRemoveLootEnabled::ReturnValue' has a wrong offset!");

struct LootControllerNativeComponent_IsThrottleEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LootControllerNativeComponent_IsThrottleEnabled) == 0x000001, "Wrong alignment on LootControllerNativeComponent_IsThrottleEnabled");
static_assert(sizeof(LootControllerNativeComponent_IsThrottleEnabled) == 0x000001, "Wrong size on LootControllerNativeComponent_IsThrottleEnabled");
static_assert(offsetof(LootControllerNativeComponent_IsThrottleEnabled, ReturnValue) == 0x000000, "Member 'LootControllerNativeComponent_IsThrottleEnabled::ReturnValue' has a wrong offset!");

}
