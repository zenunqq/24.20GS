#pragma once

#include "Basic.hpp"

#include "EpicGameplayStatsRuntime_structs.hpp"

namespace SDK::Params
{

struct BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag final
{
public:
	struct FGameplayStatTag                       A;
	struct FGameplayStatTag                       B;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag) == 0x000004, "Wrong alignment on BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag");
static_assert(sizeof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag) == 0x000014, "Wrong size on BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, A) == 0x000000, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, B) == 0x000008, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, ReturnValue) == 0x000010, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::ReturnValue' has a wrong offset!");

struct BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag final
{
public:
	struct FGameplayStatTag                       A;
	struct FGameplayStatTag                       B;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag) == 0x000004, "Wrong alignment on BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag");
static_assert(sizeof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag) == 0x000014, "Wrong size on BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, A) == 0x000000, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, B) == 0x000008, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, ReturnValue) == 0x000010, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::ReturnValue' has a wrong offset!");

}
