#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FVerseGameplayTag final
{
public:
	TSubclassOf<class UVerseGameplayTagBase>      InternalTag;
};
static_assert(alignof(FVerseGameplayTag) == 0x000008, "Wrong alignment on FVerseGameplayTag");
static_assert(sizeof(FVerseGameplayTag) == 0x000008, "Wrong size on FVerseGameplayTag");
static_assert(offsetof(FVerseGameplayTag, InternalTag) == 0x000000, "Member 'FVerseGameplayTag::InternalTag' has a wrong offset!");

struct FVerseGameplayTagContainer final
{
public:
	TArray<struct FVerseGameplayTag>              InternalTags;
};
static_assert(alignof(FVerseGameplayTagContainer) == 0x000008, "Wrong alignment on FVerseGameplayTagContainer");
static_assert(sizeof(FVerseGameplayTagContainer) == 0x000010, "Wrong size on FVerseGameplayTagContainer");
static_assert(offsetof(FVerseGameplayTagContainer, InternalTags) == 0x000000, "Member 'FVerseGameplayTagContainer::InternalTags' has a wrong offset!");

struct FTaggedObjectFinderEntry final
{
public:
	struct FVerseGameplayTagContainer             RequiredTags;
	struct FVerseGameplayTagContainer             PreferredTags;
	struct FVerseGameplayTagContainer             ExclusionTags;
};
static_assert(alignof(FTaggedObjectFinderEntry) == 0x000008, "Wrong alignment on FTaggedObjectFinderEntry");
static_assert(sizeof(FTaggedObjectFinderEntry) == 0x000030, "Wrong size on FTaggedObjectFinderEntry");
static_assert(offsetof(FTaggedObjectFinderEntry, RequiredTags) == 0x000000, "Member 'FTaggedObjectFinderEntry::RequiredTags' has a wrong offset!");
static_assert(offsetof(FTaggedObjectFinderEntry, PreferredTags) == 0x000010, "Member 'FTaggedObjectFinderEntry::PreferredTags' has a wrong offset!");
static_assert(offsetof(FTaggedObjectFinderEntry, ExclusionTags) == 0x000020, "Member 'FTaggedObjectFinderEntry::ExclusionTags' has a wrong offset!");

}
