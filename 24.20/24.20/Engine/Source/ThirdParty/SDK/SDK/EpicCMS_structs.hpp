#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FDownloadCacheEntry final
{
public:
	class FString                                 FilePath;
	class FString                                 SourceUrl;
	struct FDateTime                              LastAccessTime;
};
static_assert(alignof(FDownloadCacheEntry) == 0x000008, "Wrong alignment on FDownloadCacheEntry");
static_assert(sizeof(FDownloadCacheEntry) == 0x000028, "Wrong size on FDownloadCacheEntry");
static_assert(offsetof(FDownloadCacheEntry, FilePath) == 0x000000, "Member 'FDownloadCacheEntry::FilePath' has a wrong offset!");
static_assert(offsetof(FDownloadCacheEntry, SourceUrl) == 0x000010, "Member 'FDownloadCacheEntry::SourceUrl' has a wrong offset!");
static_assert(offsetof(FDownloadCacheEntry, LastAccessTime) == 0x000020, "Member 'FDownloadCacheEntry::LastAccessTime' has a wrong offset!");

struct FDownloadCache final
{
public:
	uint8                                         Pad_0[0x4];
	int32                                         Version;
	TMap<class FString, struct FDownloadCacheEntry> Cache;
};
static_assert(alignof(FDownloadCache) == 0x000008, "Wrong alignment on FDownloadCache");
static_assert(sizeof(FDownloadCache) == 0x000058, "Wrong size on FDownloadCache");
static_assert(offsetof(FDownloadCache, Version) == 0x000004, "Member 'FDownloadCache::Version' has a wrong offset!");
static_assert(offsetof(FDownloadCache, Cache) == 0x000008, "Member 'FDownloadCache::Cache' has a wrong offset!");

}
