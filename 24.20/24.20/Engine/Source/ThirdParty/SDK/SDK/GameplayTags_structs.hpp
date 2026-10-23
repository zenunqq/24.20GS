#pragma once

#include "Basic.hpp"

#include "IrisCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EGameplayContainerMatchType : uint8
{
	Any                                      = 0,
	All                                      = 1,
	EGameplayContainerMatchType_MAX          = 2,
};

enum class EGameplayTagQueryExprType : uint8
{
	Undefined                                = 0,
	AnyTagsMatch                             = 1,
	AllTagsMatch                             = 2,
	NoTagsMatch                              = 3,
	AnyExprMatch                             = 4,
	AllExprMatch                             = 5,
	NoExprMatch                              = 6,
	EGameplayTagQueryExprType_MAX            = 7,
};

enum class EGameplayTagSourceType : uint8
{
	Native                                   = 0,
	DefaultTagList                           = 1,
	TagList                                  = 2,
	RestrictedTagList                        = 3,
	DataTable                                = 4,
	Invalid                                  = 5,
	EGameplayTagSourceType_MAX               = 6,
};

enum class EGameplayTagSelectionType : uint8
{
	None                                     = 0,
	NonRestrictedOnly                        = 1,
	RestrictedOnly                           = 2,
	All                                      = 3,
	EGameplayTagSelectionType_MAX            = 4,
};

struct FGameplayTag
{
public:
	class FName                                   TagName;
};
static_assert(alignof(FGameplayTag) == 0x000004, "Wrong alignment on FGameplayTag");
static_assert(sizeof(FGameplayTag) == 0x000004, "Wrong size on FGameplayTag");
static_assert(offsetof(FGameplayTag, TagName) == 0x000000, "Member 'FGameplayTag::TagName' has a wrong offset!");

struct FGameplayTagContainerNetSerializerSerializationHelper final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;
};
static_assert(alignof(FGameplayTagContainerNetSerializerSerializationHelper) == 0x000008, "Wrong alignment on FGameplayTagContainerNetSerializerSerializationHelper");
static_assert(sizeof(FGameplayTagContainerNetSerializerSerializationHelper) == 0x000010, "Wrong size on FGameplayTagContainerNetSerializerSerializationHelper");
static_assert(offsetof(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags) == 0x000000, "Member 'FGameplayTagContainerNetSerializerSerializationHelper::GameplayTags' has a wrong offset!");

struct FGameplayTagSource final
{
public:
	class FName                                   SourceName;
	EGameplayTagSourceType                        SourceType;
	uint8                                         Pad_5[0x3];
	class UGameplayTagsList*                      SourceTagList;
	class URestrictedGameplayTagsList*            SourceRestrictedTagList;
};
static_assert(alignof(FGameplayTagSource) == 0x000008, "Wrong alignment on FGameplayTagSource");
static_assert(sizeof(FGameplayTagSource) == 0x000018, "Wrong size on FGameplayTagSource");
static_assert(offsetof(FGameplayTagSource, SourceName) == 0x000000, "Member 'FGameplayTagSource::SourceName' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceType) == 0x000004, "Member 'FGameplayTagSource::SourceType' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 0x000008, "Member 'FGameplayTagSource::SourceTagList' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 0x000010, "Member 'FGameplayTagSource::SourceRestrictedTagList' has a wrong offset!");

struct FGameplayTagContainer final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;
	TArray<struct FGameplayTag>                   ParentTags;

public:

	bool HasTag(const FGameplayTag& TagToCheck) const
	{
		for (auto& Tag : GameplayTags) {
			if (Tag.TagName == TagToCheck.TagName) {
				return true;
			}
		}
		for (auto& Tag : ParentTags) {
			if (Tag.TagName == TagToCheck.TagName) {
				return true;
			}
		}
		return false;
	}

	bool HasAll(const FGameplayTagContainer& ContainerToCheck) const
	{
		for (auto& Tag : ContainerToCheck.GameplayTags) {
			bool Found2 = false;
			for (auto& Tag2 : GameplayTags) {
				if (Tag2.TagName == Tag.TagName) {
					Found2 = true;
					break;
				}
			}
			if (!Found2) for (auto& Tag2 : ParentTags) {
				if (Tag2.TagName == Tag.TagName) {
					Found2 = true;
					break;
				}
			}
			if (!Found2) return false;
		}
		return true;
	}

	void AppendTags(const FGameplayTagContainer& Other)
	{
		for (const auto& GameplayTag : Other.GameplayTags)
		{
			if (!HasTag(GameplayTag))
				GameplayTags.Add(GameplayTag);
		}
		for (const auto& ParentTag : Other.ParentTags)
		{
			if (!HasTag(ParentTag))
				ParentTags.Add(ParentTag);
		}
	}
};
static_assert(alignof(FGameplayTagContainer) == 0x000008, "Wrong alignment on FGameplayTagContainer");
static_assert(sizeof(FGameplayTagContainer) == 0x000020, "Wrong size on FGameplayTagContainer");
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x000000, "Member 'FGameplayTagContainer::GameplayTags' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 0x000010, "Member 'FGameplayTagContainer::ParentTags' has a wrong offset!");

struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                   tag;
	uint8                                         Pad_C[0x4];
	class FString                                 DevComment;
};
static_assert(alignof(FGameplayTagTableRow) == 0x000008, "Wrong alignment on FGameplayTagTableRow");
static_assert(sizeof(FGameplayTagTableRow) == 0x000020, "Wrong size on FGameplayTagTableRow");
static_assert(offsetof(FGameplayTagTableRow, tag) == 0x000008, "Member 'FGameplayTagTableRow::tag' has a wrong offset!");
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x000010, "Member 'FGameplayTagTableRow::DevComment' has a wrong offset!");

struct FRestrictedGameplayTagTableRow final : public FGameplayTagTableRow
{
public:
	bool                                          bAllowNonRestrictedChildren;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FRestrictedGameplayTagTableRow) == 0x000008, "Wrong alignment on FRestrictedGameplayTagTableRow");
static_assert(sizeof(FRestrictedGameplayTagTableRow) == 0x000028, "Wrong size on FRestrictedGameplayTagTableRow");
static_assert(offsetof(FRestrictedGameplayTagTableRow, bAllowNonRestrictedChildren) == 0x000020, "Member 'FRestrictedGameplayTagTableRow::bAllowNonRestrictedChildren' has a wrong offset!");

struct alignas(0x08) FGameplayTagReferenceHelper final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FGameplayTagReferenceHelper) == 0x000008, "Wrong alignment on FGameplayTagReferenceHelper");
static_assert(sizeof(FGameplayTagReferenceHelper) == 0x000010, "Wrong size on FGameplayTagReferenceHelper");

struct FGameplayTagQuery final
{
public:
	int32                                         TokenStreamVersion;
	uint8                                         Pad_4[0x4];
	TArray<struct FGameplayTag>                   TagDictionary;
	TArray<uint8>                                 QueryTokenStream;
	class FString                                 UserDescription;
	class FString                                 AutoDescription;
};
static_assert(alignof(FGameplayTagQuery) == 0x000008, "Wrong alignment on FGameplayTagQuery");
static_assert(sizeof(FGameplayTagQuery) == 0x000048, "Wrong size on FGameplayTagQuery");
static_assert(offsetof(FGameplayTagQuery, TokenStreamVersion) == 0x000000, "Member 'FGameplayTagQuery::TokenStreamVersion' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x000008, "Member 'FGameplayTagQuery::TagDictionary' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x000018, "Member 'FGameplayTagQuery::QueryTokenStream' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x000028, "Member 'FGameplayTagQuery::UserDescription' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x000038, "Member 'FGameplayTagQuery::AutoDescription' has a wrong offset!");

struct FGameplayTagCreationWidgetHelper final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FGameplayTagCreationWidgetHelper) == 0x000001, "Wrong alignment on FGameplayTagCreationWidgetHelper");
static_assert(sizeof(FGameplayTagCreationWidgetHelper) == 0x000001, "Wrong size on FGameplayTagCreationWidgetHelper");

struct FGameplayTagContainerNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGameplayTagContainerNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayTagContainerNetSerializerConfig");
static_assert(sizeof(FGameplayTagContainerNetSerializerConfig) == 0x000010, "Wrong size on FGameplayTagContainerNetSerializerConfig");

struct FGameplayTagNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGameplayTagNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayTagNetSerializerConfig");
static_assert(sizeof(FGameplayTagNetSerializerConfig) == 0x000010, "Wrong size on FGameplayTagNetSerializerConfig");

struct FGameplayTagRedirect final
{
public:
	class FName                                   OldTagName;
	class FName                                   NewTagName;
};
static_assert(alignof(FGameplayTagRedirect) == 0x000004, "Wrong alignment on FGameplayTagRedirect");
static_assert(sizeof(FGameplayTagRedirect) == 0x000008, "Wrong size on FGameplayTagRedirect");
static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0x000000, "Member 'FGameplayTagRedirect::OldTagName' has a wrong offset!");
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 0x000004, "Member 'FGameplayTagRedirect::NewTagName' has a wrong offset!");

struct alignas(0x08) FGameplayTagNode final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FGameplayTagNode) == 0x000008, "Wrong alignment on FGameplayTagNode");
static_assert(sizeof(FGameplayTagNode) == 0x000050, "Wrong size on FGameplayTagNode");

struct FGameplayTagCategoryRemap final
{
public:
	class FString                                 BaseCategory;
	TArray<class FString>                         RemapCategories;
};
static_assert(alignof(FGameplayTagCategoryRemap) == 0x000008, "Wrong alignment on FGameplayTagCategoryRemap");
static_assert(sizeof(FGameplayTagCategoryRemap) == 0x000020, "Wrong size on FGameplayTagCategoryRemap");
static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0x000000, "Member 'FGameplayTagCategoryRemap::BaseCategory' has a wrong offset!");
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 0x000010, "Member 'FGameplayTagCategoryRemap::RemapCategories' has a wrong offset!");

struct FRestrictedConfigInfo final
{
public:
	class FString                                 RestrictedConfigName;
	TArray<class FString>                         Owners;
};
static_assert(alignof(FRestrictedConfigInfo) == 0x000008, "Wrong alignment on FRestrictedConfigInfo");
static_assert(sizeof(FRestrictedConfigInfo) == 0x000020, "Wrong size on FRestrictedConfigInfo");
static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0x000000, "Member 'FRestrictedConfigInfo::RestrictedConfigName' has a wrong offset!");
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 0x000010, "Member 'FRestrictedConfigInfo::Owners' has a wrong offset!");

}
