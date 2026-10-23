#pragma once

#include "Basic.hpp"

#include "VerseGameplayTags_structs.hpp"

namespace SDK::Params
{

struct VerseGameplayTagAssetInterface_GetOwnedGameplayTags final
{
public:
	struct FVerseGameplayTagContainer             TagContainer;
};
static_assert(alignof(VerseGameplayTagAssetInterface_GetOwnedGameplayTags) == 0x000008, "Wrong alignment on VerseGameplayTagAssetInterface_GetOwnedGameplayTags");
static_assert(sizeof(VerseGameplayTagAssetInterface_GetOwnedGameplayTags) == 0x000010, "Wrong size on VerseGameplayTagAssetInterface_GetOwnedGameplayTags");
static_assert(offsetof(VerseGameplayTagAssetInterface_GetOwnedGameplayTags, TagContainer) == 0x000000, "Member 'VerseGameplayTagAssetInterface_GetOwnedGameplayTags::TagContainer' has a wrong offset!");

struct VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags final
{
public:
	struct FVerseGameplayTagContainer             TagContainer;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags) == 0x000008, "Wrong alignment on VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags");
static_assert(sizeof(VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags) == 0x000018, "Wrong size on VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags, TagContainer) == 0x000000, "Member 'VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags::TagContainer' has a wrong offset!");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags, ReturnValue) == 0x000010, "Member 'VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags::ReturnValue' has a wrong offset!");

struct VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags final
{
public:
	struct FVerseGameplayTagContainer             TagContainer;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags) == 0x000008, "Wrong alignment on VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags");
static_assert(sizeof(VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags) == 0x000018, "Wrong size on VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags, TagContainer) == 0x000000, "Member 'VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags::TagContainer' has a wrong offset!");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags, ReturnValue) == 0x000010, "Member 'VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags::ReturnValue' has a wrong offset!");

struct VerseGameplayTagAssetInterface_HasMatchingGameplayTag final
{
public:
	struct FVerseGameplayTag                      TagToCheck;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(VerseGameplayTagAssetInterface_HasMatchingGameplayTag) == 0x000008, "Wrong alignment on VerseGameplayTagAssetInterface_HasMatchingGameplayTag");
static_assert(sizeof(VerseGameplayTagAssetInterface_HasMatchingGameplayTag) == 0x000010, "Wrong size on VerseGameplayTagAssetInterface_HasMatchingGameplayTag");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasMatchingGameplayTag, TagToCheck) == 0x000000, "Member 'VerseGameplayTagAssetInterface_HasMatchingGameplayTag::TagToCheck' has a wrong offset!");
static_assert(offsetof(VerseGameplayTagAssetInterface_HasMatchingGameplayTag, ReturnValue) == 0x000008, "Member 'VerseGameplayTagAssetInterface_HasMatchingGameplayTag::ReturnValue' has a wrong offset!");

}
